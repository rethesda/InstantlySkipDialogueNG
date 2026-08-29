#include "settings.h"

class DialogueMenuEx final : public RE::DialogueMenu
{
public:
	static void Install()
	{
		REL::Relocation<uintptr_t> vtbl(RE::VTABLE_DialogueMenu[0]);
		_ProcessMessageFn = vtbl.write_vfunc(0x4, &ProcessMessageEx);
	}

	RE::UI_MESSAGE_RESULTS ProcessMessageEx(RE::UIMessage& a_message)
	{
		if (Settings::General::bInstantlySkipDialogue) {
			if (a_message.type == RE::UI_MESSAGE_TYPE::kUpdate) {
				doAllowProgressFix();
			}
		} else if (a_message.type == RE::UI_MESSAGE_TYPE::kShow) {
			doAllowProgressFix();
		}

		return _ProcessMessageFn(this, a_message);
	}

private:
	using ProcessMessageFn = decltype(&RE::DialogueMenu::ProcessMessage);

	inline static REL::Relocation<ProcessMessageFn> _ProcessMessageFn;

	static void doAllowProgressFix()
	{
		if (const auto ui = RE::UI::GetSingleton()) {
			if (const auto menu = ui->GetMenu(RE::DialogueMenu::MENU_NAME)) {
				menu->uiMovie->SetVariable("_root.DialogueMenu_mc.bAllowProgress", true);
			}
		}
	}
};

SKSE_PLUGIN_LOAD(const SKSE::LoadInterface* a_skse)
{
	SKSE::Init(a_skse);
	Settings::Load();
	DialogueMenuEx::Install();
	return true;
}
