#pragma once

namespace Settings
{
	namespace General
	{
		static REX::INI::Bool bInstantlySkipDialogue{ "General"sv, "bInstantlySkipDialogue"sv, true };
	}

	static void Load()
	{
		const auto ini = REX::INI::SettingStore::GetSingleton();
		ini->Init(
			"Data/SKSE/Plugins/InstantlySkipDialogueSKSE.ini",
			"Data/SKSE/Plugins/InstantlySkipDialogueSKSECustom.ini");
		ini->Load();
	}
}