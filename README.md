# Instantly Skip Dialogue SKSE

This SKSE plugin for Skyrim Special Edition allows most of the dialogue directed to the player to be skipped instantly, bypassing the [750 millisecond delay](https://github.com/Mardoxx/skyrimui/blob/master/src/dialoguemenu/DialogueMenu.as#L10). This includes most dialogue from [Talking Activators](https://www.creationkit.com/index.php?title=TalkingActivator) which is normally unskippable. In addition, it includes a [fix for a bug that prevents the player from skipping dialogue when an NPC is already talking](https://www.nexusmods.com/skyrimspecialedition/mods/67433). If instantly skipping dialogue is disabled in the configuration file, only this bugfix will be applied.

This is a [CommonLibSSE](https://github.com/libxse/commonlibsse) port of the `instantSkipAllDialogue` and `allowDialogueProgressionBugfix` options of [Osmosis-Wrench's Allow Dialogue Progress Fix SKSE](https://github.com/Osmosis-Wrench/AllowDialogueProgressFixSKSE) to support Skyrim SE v1.7.104. It is based on the [CommonLibSSE Plugin Template](https://github.com/libxse/commonlibsse-template) from [libxse](https://github.com/libxse/).

## User requirements

* Skyrim Special Edition version 1.7.104
* [SKSE64](https://skse.silverlock.org/)
* [Address Library for SKSE plugins](https://www.nexusmods.com/skyrimspecialedition/mods/32444)
* Enable dialogue subtitles (System > Settings > Display > Dialogue Subtitles or set `bDialogueSubtitles=1` under `[Interface]` in SkyrimPrefs.ini)

## License

Since version 2.0.0, this plugin is licensed under the [GNU General Public License version 3](LICENSE) with the [Modding Exception and the GPL-3.0 Linking Exception (with Corresponding Source)](EXCEPTIONS). Older versions are licensed under the [MIT License](MIT-LICENSE).
