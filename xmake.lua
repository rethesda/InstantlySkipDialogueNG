-- include subprojects
includes("lib/commonlibsse")

-- set project constants
set_project("Instantly Skip Dialogue SKSE")
set_version("2.0.0")
set_license("GPL-3.0-or-later WITH Modding Exception AND GPL-3.0 Linking Exception (with Corresponding Source)")
set_languages("c++23")
set_warnings("allextra")

-- add common rules
add_rules("mode.debug", "mode.releasedbg")
add_rules("plugin.vsxmake.autoupdate")

-- set configs
set_config("commonlib_ini", true)

-- define targets
target("InstantlySkipDialogueSKSE")
    add_rules("commonlibsse.plugin", {
        name = "InstantlySkipDialogueSKSE",
        author = "Jonathan Feenstra",
        description = "SKSE plugin for Skyrim Special Edition that allows most of the dialogue directed to the player character to be skipped instantly"
    })

    -- add src files
    add_files("src/**.cpp")
    add_headerfiles("src/**.h")
    add_includedirs("src")
    set_pcxxheader("src/pch.h")
	
	-- add extra files
	add_extrafiles(".clang-format")
