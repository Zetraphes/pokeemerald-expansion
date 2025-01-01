# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts::
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
# 4 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
# 5 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 6 "data/maps/InsideOfTruck/scripts.pory"

# 7 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnLoad:
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 10 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
# 11 "data/maps/InsideOfTruck/scripts.pory"
	end
# 12 "data/maps/InsideOfTruck/scripts.pory"

# 13 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_OnResume:
# 14 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
# 15 "data/maps/InsideOfTruck/scripts.pory"
	end
# 16 "data/maps/InsideOfTruck/scripts.pory"

# 17 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlags::
# 18 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 19 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 21 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
# 22 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
# 23 "data/maps/InsideOfTruck/scripts.pory"
	end
# 24 "data/maps/InsideOfTruck/scripts.pory"

# 25 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsMale::
# 26 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 27 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 28 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LEVEL_CAP, 15 
# 29 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 30 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
# 36 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 37 "data/maps/InsideOfTruck/scripts.pory"
	end
# 38 "data/maps/InsideOfTruck/scripts.pory"

# 39 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_SetIntroFlagsFemale::
# 40 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 41 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 42 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
# 49 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
# 50 "data/maps/InsideOfTruck/scripts.pory"
	end
# 51 "data/maps/InsideOfTruck/scripts.pory"

# 52 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_EventScript_MovingBox::
# 53 "data/maps/InsideOfTruck/scripts.pory"
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
# 54 "data/maps/InsideOfTruck/scripts.pory"
	end
# 55 "data/maps/InsideOfTruck/scripts.pory"

# 56 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_Text_BoxPrintedWithMonLogo:
# 57 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a POKéMON logo.\p"
# 58 "data/maps/InsideOfTruck/scripts.pory"
	.string "It's a POKéMON brand moving and\n"
# 59 "data/maps/InsideOfTruck/scripts.pory"
	.string "delivery service.$"

Options_Menu::
# 64 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 66 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_FOLLOWER
Options_Menu_2:
# 68 "data/maps/InsideOfTruck/scripts.pory"
	message Options_Menu_Text_0
# 69 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_PLAYTHROUGH_SETTINGS, 1
# 70 "data/maps/InsideOfTruck/scripts.pory"
	closemessage
# 71 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Options_Menu_4
# 74 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Options_Menu_5
# 80 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Options_Menu_6
Options_Menu_1:
# 83 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt Options_Menu_2
	return

Options_Menu_4:
# 72 "data/maps/InsideOfTruck/scripts.pory"
	call Randomizer_Options
	goto Options_Menu_1

Options_Menu_5:
# 75 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Options_Menu_Text_1, MSGBOX_DEFAULT
# 76 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_INSIDEOFTRUCK_STATE, 1
# 77 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	end

Options_Menu_6:
	goto Options_Menu_1


Randomizer_Options::
# 88 "data/maps/InsideOfTruck/scripts.pory"
	lockall
Randomizer_Options_3:
# 90 "data/maps/InsideOfTruck/scripts.pory"
	message Randomizer_Options_Text_0
# 91 "data/maps/InsideOfTruck/scripts.pory"
	multichoicegrid 0, 0, MULTI_RANDOMIZER_SETTINGS, 2, 1
# 92 "data/maps/InsideOfTruck/scripts.pory"
	closemessage
# 93 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Randomizer_Options_5
# 102 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Randomizer_Options_6
# 111 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Randomizer_Options_7
# 120 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Randomizer_Options_8
# 129 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Randomizer_Options_9
# 138 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq Randomizer_Options_10
# 147 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Randomizer_Options_11
# 166 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Randomizer_Options_12
Randomizer_Options_2:
# 169 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Randomizer_Options_3
# 170 "data/maps/InsideOfTruck/scripts.pory"
	call Options_Menu
	return

Randomizer_Options_5:
# 94 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_1, MSGBOX_YESNO
# 95 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_21
# 99 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x024
	goto Randomizer_Options_2

Randomizer_Options_6:
# 103 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_3, MSGBOX_YESNO
# 104 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_24
# 108 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x020
	goto Randomizer_Options_2

Randomizer_Options_7:
# 112 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_4, MSGBOX_YESNO
# 113 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_27
# 117 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x023
	goto Randomizer_Options_2

Randomizer_Options_8:
# 121 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_5, MSGBOX_YESNO
# 122 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_30
# 126 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x025
	goto Randomizer_Options_2

Randomizer_Options_9:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_6, MSGBOX_YESNO
# 131 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_33
# 135 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x022
	goto Randomizer_Options_2

Randomizer_Options_10:
# 139 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_7, MSGBOX_YESNO
# 140 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_36
# 144 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x021
	goto Randomizer_Options_2

Randomizer_Options_11:
# 148 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_8, MSGBOX_YESNO
# 149 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Randomizer_Options_39
# 158 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x020
# 159 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x021
# 160 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x022
# 161 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x023
# 162 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x024
# 163 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_UNUSED_0x025
	goto Randomizer_Options_2

Randomizer_Options_12:
# 167 "data/maps/InsideOfTruck/scripts.pory"
	call Options_Menu
	goto Randomizer_Options_2

Randomizer_Options_21:
# 96 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 97 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2, MSGBOX_DEFAULT
	goto Randomizer_Options_2

Randomizer_Options_24:
# 105 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 106 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2, MSGBOX_DEFAULT
	goto Randomizer_Options_2

Randomizer_Options_27:
# 114 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 115 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2, MSGBOX_DEFAULT
	goto Randomizer_Options_2

Randomizer_Options_30:
# 123 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 124 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2, MSGBOX_DEFAULT
	goto Randomizer_Options_2

Randomizer_Options_33:
# 132 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 133 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2, MSGBOX_DEFAULT
	goto Randomizer_Options_2

Randomizer_Options_36:
# 141 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 142 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2, MSGBOX_DEFAULT
	goto Randomizer_Options_2

Randomizer_Options_39:
# 150 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 151 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 152 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 153 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 154 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x024
# 155 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 156 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Randomizer_Options_Text_2
	goto Randomizer_Options_2


Options_Menu_Text_0:
# 68 "data/maps/InsideOfTruck/scripts.pory"
	.string "Welcome to PLACEHOLDER!\nPlease choose a setting to change.$"

Options_Menu_Text_1:
# 75 "data/maps/InsideOfTruck/scripts.pory"
	.string "Good luck and have fun!$"

Randomizer_Options_Text_0:
# 90 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please choose a setting.$"

Randomizer_Options_Text_1:
# 94 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize Starter Pokémon?$"

Randomizer_Options_Text_2:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	.string "Successfully randomized.$"

Randomizer_Options_Text_3:
# 103 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize Wild Encounters?$"

Randomizer_Options_Text_4:
# 112 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize static Pokémon?$"

Randomizer_Options_Text_5:
# 121 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize abilities?$"

Randomizer_Options_Text_6:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize Trainer Pokémon?$"

Randomizer_Options_Text_7:
# 139 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize field items?$"

Randomizer_Options_Text_8:
# 148 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomize everything?$"
