# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	end
# 17 "data/maps/MtChimney/scripts.pory"

# 18 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 19 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/MtChimney/scripts.pory"
	end
# 21 "data/maps/MtChimney/scripts.pory"

# 22 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 23 "data/maps/MtChimney/scripts.pory"
	lock
# 24 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 25 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 27 "data/maps/MtChimney/scripts.pory"
	closemessage
# 28 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 29 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	return
# 41 "data/maps/MtChimney/scripts.pory"

# 42 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 43 "data/maps/MtChimney/scripts.pory"
	lockall
# 44 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 45 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 46 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 47 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 49 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 50 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 54 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 55 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 56 "data/maps/MtChimney/scripts.pory"
	closemessage
# 57 "data/maps/MtChimney/scripts.pory"
	delay 30
# 58 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 63 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 64 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LEVEL_CAP, 44
# 65 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 67 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 69 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 70 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 73 "data/maps/MtChimney/scripts.pory"
	closemessage
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 75 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 76 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 79 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 81 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 82 "data/maps/MtChimney/scripts.pory"
	releaseall
# 83 "data/maps/MtChimney/scripts.pory"
	end
# 84 "data/maps/MtChimney/scripts.pory"

# 85 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 86 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 87 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtChimney/scripts.pory"
	return
# 89 "data/maps/MtChimney/scripts.pory"

# 90 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 91 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 92 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtChimney/scripts.pory"
	return
# 94 "data/maps/MtChimney/scripts.pory"

# 95 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 96 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 97 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtChimney/scripts.pory"
	return
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtChimney/scripts.pory"
	return
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 106 "data/maps/MtChimney/scripts.pory"
	lock
# 107 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 108 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 111 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 112 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 113 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 114 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 115 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 116 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 117 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 118 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 119 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 120 "data/maps/MtChimney/scripts.pory"
	release
# 121 "data/maps/MtChimney/scripts.pory"
	end
# 122 "data/maps/MtChimney/scripts.pory"

# 123 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 124 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 125 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 126 "data/maps/MtChimney/scripts.pory"
	release
# 127 "data/maps/MtChimney/scripts.pory"
	end
# 128 "data/maps/MtChimney/scripts.pory"
.else
# 129 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 130 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 131 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 132 "data/maps/MtChimney/scripts.pory"
	release
# 133 "data/maps/MtChimney/scripts.pory"
	end
# 134 "data/maps/MtChimney/scripts.pory"

# 135 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 136 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 137 "data/maps/MtChimney/scripts.pory"
	release
# 138 "data/maps/MtChimney/scripts.pory"
	end
# 139 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 140 "data/maps/MtChimney/scripts.pory"

# 141 "data/maps/MtChimney/scripts.pory"

# 142 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 143 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 144 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 145 "data/maps/MtChimney/scripts.pory"
	return
# 146 "data/maps/MtChimney/scripts.pory"

# 147 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 148 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 149 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 150 "data/maps/MtChimney/scripts.pory"
	release
# 151 "data/maps/MtChimney/scripts.pory"
	end
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 154 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 155 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 156 "data/maps/MtChimney/scripts.pory"
	release
# 157 "data/maps/MtChimney/scripts.pory"
	end
# 158 "data/maps/MtChimney/scripts.pory"

# 159 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 160 "data/maps/MtChimney/scripts.pory"
	walk_up
# 161 "data/maps/MtChimney/scripts.pory"
	walk_up
# 162 "data/maps/MtChimney/scripts.pory"
	walk_up
# 163 "data/maps/MtChimney/scripts.pory"
	walk_up
# 164 "data/maps/MtChimney/scripts.pory"
	walk_up
# 165 "data/maps/MtChimney/scripts.pory"
	walk_up
# 166 "data/maps/MtChimney/scripts.pory"
	walk_right
# 167 "data/maps/MtChimney/scripts.pory"
	step_end
# 168 "data/maps/MtChimney/scripts.pory"

# 169 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 170 "data/maps/MtChimney/scripts.pory"
	walk_left
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	walk_down
# 173 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 175 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 177 "data/maps/MtChimney/scripts.pory"
	walk_down
# 178 "data/maps/MtChimney/scripts.pory"
	step_end
# 179 "data/maps/MtChimney/scripts.pory"

# 180 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 181 "data/maps/MtChimney/scripts.pory"
	walk_up
# 182 "data/maps/MtChimney/scripts.pory"
	walk_up
# 183 "data/maps/MtChimney/scripts.pory"
	walk_up
# 184 "data/maps/MtChimney/scripts.pory"
	walk_up
# 185 "data/maps/MtChimney/scripts.pory"
	walk_up
# 186 "data/maps/MtChimney/scripts.pory"
	walk_right
# 187 "data/maps/MtChimney/scripts.pory"
	walk_right
# 188 "data/maps/MtChimney/scripts.pory"
	step_end
# 189 "data/maps/MtChimney/scripts.pory"

# 190 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 191 "data/maps/MtChimney/scripts.pory"
	walk_left
# 192 "data/maps/MtChimney/scripts.pory"
	walk_left
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	step_end
# 201 "data/maps/MtChimney/scripts.pory"

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 203 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_left
# 216 "data/maps/MtChimney/scripts.pory"
	walk_left
# 217 "data/maps/MtChimney/scripts.pory"
	walk_left
# 218 "data/maps/MtChimney/scripts.pory"
	walk_left
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	step_end
# 221 "data/maps/MtChimney/scripts.pory"

# 222 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_down
# 226 "data/maps/MtChimney/scripts.pory"
	walk_down
# 227 "data/maps/MtChimney/scripts.pory"
	walk_left
# 228 "data/maps/MtChimney/scripts.pory"
	walk_left
# 229 "data/maps/MtChimney/scripts.pory"
	walk_left
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	step_end
# 232 "data/maps/MtChimney/scripts.pory"

# 233 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 234 "data/maps/MtChimney/scripts.pory"
	walk_right
# 235 "data/maps/MtChimney/scripts.pory"
	walk_down
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_left
# 240 "data/maps/MtChimney/scripts.pory"
	walk_left
# 241 "data/maps/MtChimney/scripts.pory"
	walk_left
# 242 "data/maps/MtChimney/scripts.pory"
	walk_left
# 243 "data/maps/MtChimney/scripts.pory"
	walk_left
# 244 "data/maps/MtChimney/scripts.pory"
	walk_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_down
# 248 "data/maps/MtChimney/scripts.pory"
	step_end
# 249 "data/maps/MtChimney/scripts.pory"

# 250 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_down
# 264 "data/maps/MtChimney/scripts.pory"
	walk_down
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_left
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_left
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_left
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	step_end
# 276 "data/maps/MtChimney/scripts.pory"

# 277 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 278 "data/maps/MtChimney/scripts.pory"
	delay_16
# 279 "data/maps/MtChimney/scripts.pory"
	delay_16
# 280 "data/maps/MtChimney/scripts.pory"
	delay_16
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_down
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	step_end
# 289 "data/maps/MtChimney/scripts.pory"

# 290 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 291 "data/maps/MtChimney/scripts.pory"
	delay_16
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_left
# 299 "data/maps/MtChimney/scripts.pory"
	walk_left
# 300 "data/maps/MtChimney/scripts.pory"
	walk_left
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	step_end
# 307 "data/maps/MtChimney/scripts.pory"

# 308 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 309 "data/maps/MtChimney/scripts.pory"
	delay_16
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_left
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_down
# 314 "data/maps/MtChimney/scripts.pory"
	walk_down
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	step_end
# 326 "data/maps/MtChimney/scripts.pory"

# 327 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 328 "data/maps/MtChimney/scripts.pory"
	delay_16
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_left
# 332 "data/maps/MtChimney/scripts.pory"
	walk_left
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 335 "data/maps/MtChimney/scripts.pory"
	step_end
# 336 "data/maps/MtChimney/scripts.pory"

# 337 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 338 "data/maps/MtChimney/scripts.pory"
	walk_down
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_left
# 343 "data/maps/MtChimney/scripts.pory"
	walk_left
# 344 "data/maps/MtChimney/scripts.pory"
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	step_end
# 352 "data/maps/MtChimney/scripts.pory"

# 353 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	step_end
# 356 "data/maps/MtChimney/scripts.pory"

# 357 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_down
# 360 "data/maps/MtChimney/scripts.pory"
	walk_down
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	step_end
# 366 "data/maps/MtChimney/scripts.pory"

# 367 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 368 "data/maps/MtChimney/scripts.pory"
	delay_16
# 369 "data/maps/MtChimney/scripts.pory"
	delay_16
# 370 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 371 "data/maps/MtChimney/scripts.pory"
	delay_16
# 372 "data/maps/MtChimney/scripts.pory"
	walk_down
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	step_end
# 378 "data/maps/MtChimney/scripts.pory"

# 379 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 380 "data/maps/MtChimney/scripts.pory"
	delay_16
# 381 "data/maps/MtChimney/scripts.pory"
	delay_16
# 382 "data/maps/MtChimney/scripts.pory"
	delay_16
# 383 "data/maps/MtChimney/scripts.pory"
	delay_16
# 384 "data/maps/MtChimney/scripts.pory"
	delay_16
# 385 "data/maps/MtChimney/scripts.pory"
	delay_16
# 386 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 387 "data/maps/MtChimney/scripts.pory"
	delay_16
# 388 "data/maps/MtChimney/scripts.pory"
	walk_down
# 389 "data/maps/MtChimney/scripts.pory"
	walk_down
# 390 "data/maps/MtChimney/scripts.pory"
	step_end
# 391 "data/maps/MtChimney/scripts.pory"

# 392 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 393 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 394 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 395 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 396 "data/maps/MtChimney/scripts.pory"
	face_right
# 397 "data/maps/MtChimney/scripts.pory"
	step_end
# 398 "data/maps/MtChimney/scripts.pory"

# 399 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 400 "data/maps/MtChimney/scripts.pory"
	walk_left
# 401 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 402 "data/maps/MtChimney/scripts.pory"
	delay_16
# 403 "data/maps/MtChimney/scripts.pory"
	step_end
# 404 "data/maps/MtChimney/scripts.pory"

# 405 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 406 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 407 "data/maps/MtChimney/scripts.pory"
	end
# 408 "data/maps/MtChimney/scripts.pory"

# 409 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 410 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 411 "data/maps/MtChimney/scripts.pory"
	end
# 412 "data/maps/MtChimney/scripts.pory"

# 413 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 414 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 415 "data/maps/MtChimney/scripts.pory"
	end
# 416 "data/maps/MtChimney/scripts.pory"

# 417 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 418 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 419 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/MtChimney/scripts.pory"
	end
# 421 "data/maps/MtChimney/scripts.pory"

# 422 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 423 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 424 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/MtChimney/scripts.pory"
	end
# 426 "data/maps/MtChimney/scripts.pory"

# 427 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 428 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 429 "data/maps/MtChimney/scripts.pory"
	end
# 430 "data/maps/MtChimney/scripts.pory"

# 431 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 432 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 433 "data/maps/MtChimney/scripts.pory"
	end
# 434 "data/maps/MtChimney/scripts.pory"

# 435 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 436 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 437 "data/maps/MtChimney/scripts.pory"
	end
# 438 "data/maps/MtChimney/scripts.pory"

# 439 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 440 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 441 "data/maps/MtChimney/scripts.pory"
	end
# 442 "data/maps/MtChimney/scripts.pory"

# 443 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 444 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 445 "data/maps/MtChimney/scripts.pory"
	end
# 446 "data/maps/MtChimney/scripts.pory"

# 447 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 448 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 449 "data/maps/MtChimney/scripts.pory"
	end
# 450 "data/maps/MtChimney/scripts.pory"

# 451 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 452 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 453 "data/maps/MtChimney/scripts.pory"
	end
# 454 "data/maps/MtChimney/scripts.pory"

# 455 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 456 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 457 "data/maps/MtChimney/scripts.pory"
	end
# 458 "data/maps/MtChimney/scripts.pory"

# 459 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 460 "data/maps/MtChimney/scripts.pory"
	lockall
# 461 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 462 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 463 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 464 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 465 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 466 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 467 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 468 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 469 "data/maps/MtChimney/scripts.pory"
	releaseall
# 470 "data/maps/MtChimney/scripts.pory"
	end
# 471 "data/maps/MtChimney/scripts.pory"

# 472 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 473 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 474 "data/maps/MtChimney/scripts.pory"
	releaseall
# 475 "data/maps/MtChimney/scripts.pory"
	end
# 476 "data/maps/MtChimney/scripts.pory"

# 477 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 478 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 479 "data/maps/MtChimney/scripts.pory"
	releaseall
# 480 "data/maps/MtChimney/scripts.pory"
	end
# 481 "data/maps/MtChimney/scripts.pory"

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 483 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 484 "data/maps/MtChimney/scripts.pory"
	releaseall
# 485 "data/maps/MtChimney/scripts.pory"
	end
# 486 "data/maps/MtChimney/scripts.pory"

# 487 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 488 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 489 "data/maps/MtChimney/scripts.pory"
	end
# 490 "data/maps/MtChimney/scripts.pory"

# 491 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 492 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 493 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 494 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 496 "data/maps/MtChimney/scripts.pory"
	release
# 497 "data/maps/MtChimney/scripts.pory"
	end
# 498 "data/maps/MtChimney/scripts.pory"

# 499 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 500 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 501 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 502 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 503 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 504 "data/maps/MtChimney/scripts.pory"
	release
# 505 "data/maps/MtChimney/scripts.pory"
	end
# 506 "data/maps/MtChimney/scripts.pory"

# 507 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 508 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 510 "data/maps/MtChimney/scripts.pory"
	end
# 511 "data/maps/MtChimney/scripts.pory"

# 512 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 513 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 514 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 515 "data/maps/MtChimney/scripts.pory"
	end
# 516 "data/maps/MtChimney/scripts.pory"

# 517 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 518 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 519 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 520 "data/maps/MtChimney/scripts.pory"
	end
# 521 "data/maps/MtChimney/scripts.pory"

# 522 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 523 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 524 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 525 "data/maps/MtChimney/scripts.pory"
	end
# 526 "data/maps/MtChimney/scripts.pory"

# 527 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 528 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 529 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/MtChimney/scripts.pory"
	end
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 533 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 534 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 535 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 536 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 537 "data/maps/MtChimney/scripts.pory"
	release
# 538 "data/maps/MtChimney/scripts.pory"
	end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 541 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 542 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 543 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 544 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 545 "data/maps/MtChimney/scripts.pory"
	release
# 546 "data/maps/MtChimney/scripts.pory"
	end
# 547 "data/maps/MtChimney/scripts.pory"

# 548 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 549 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 550 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 551 "data/maps/MtChimney/scripts.pory"
	end
# 552 "data/maps/MtChimney/scripts.pory"

# 553 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 554 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 561 "data/maps/MtChimney/scripts.pory"

# 562 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 563 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 589 "data/maps/MtChimney/scripts.pory"

# 590 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 591 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 593 "data/maps/MtChimney/scripts.pory"

# 594 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 595 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 604 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 609 "data/maps/MtChimney/scripts.pory"

# 610 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 614 "data/maps/MtChimney/scripts.pory"

# 615 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 616 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 617 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 621 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 626 "data/maps/MtChimney/scripts.pory"

# 627 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 628 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 629 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 632 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 635 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 638 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 639 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 640 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 641 "data/maps/MtChimney/scripts.pory"

# 642 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 643 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 648 "data/maps/MtChimney/scripts.pory"

# 649 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 650 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 651 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 652 "data/maps/MtChimney/scripts.pory"

# 653 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 654 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 655 "data/maps/MtChimney/scripts.pory"

# 656 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 657 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 659 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 660 "data/maps/MtChimney/scripts.pory"

# 661 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 662 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 670 "data/maps/MtChimney/scripts.pory"

# 671 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 672 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 673 "data/maps/MtChimney/scripts.pory"

# 674 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 675 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 678 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 686 "data/maps/MtChimney/scripts.pory"

# 687 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 688 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 693 "data/maps/MtChimney/scripts.pory"

# 694 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 695 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 707 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 709 "data/maps/MtChimney/scripts.pory"

# 710 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 711 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 713 "data/maps/MtChimney/scripts.pory"

# 714 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 715 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 716 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 721 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 722 "data/maps/MtChimney/scripts.pory"

# 723 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 724 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 726 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 727 "data/maps/MtChimney/scripts.pory"

# 728 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 729 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 730 "data/maps/MtChimney/scripts.pory"

# 731 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 732 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 734 "data/maps/MtChimney/scripts.pory"

# 735 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 736 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 739 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 743 "data/maps/MtChimney/scripts.pory"

# 744 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 745 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 746 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 748 "data/maps/MtChimney/scripts.pory"

# 749 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 750 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 752 "data/maps/MtChimney/scripts.pory"

# 753 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 754 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 760 "data/maps/MtChimney/scripts.pory"

# 761 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 762 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 766 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 769 "data/maps/MtChimney/scripts.pory"

# 770 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 771 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 773 "data/maps/MtChimney/scripts.pory"

# 774 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 775 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 776 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 777 "data/maps/MtChimney/scripts.pory"

# 778 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 792 "data/maps/MtChimney/scripts.pory"

# 793 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 794 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 796 "data/maps/MtChimney/scripts.pory"

# 797 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 798 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 802 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 803 "data/maps/MtChimney/scripts.pory"

# 804 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 805 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 807 "data/maps/MtChimney/scripts.pory"

# 808 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 811 "data/maps/MtChimney/scripts.pory"

# 812 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 813 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 815 "data/maps/MtChimney/scripts.pory"

# 816 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 817 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 822 "data/maps/MtChimney/scripts.pory"

# 823 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 824 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 833 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 834 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 836 "data/maps/MtChimney/scripts.pory"

# 837 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 838 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 842 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 855 "data/maps/MtChimney/scripts.pory"

# 856 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 857 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 859 "data/maps/MtChimney/scripts.pory"

# 860 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 861 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 862 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
