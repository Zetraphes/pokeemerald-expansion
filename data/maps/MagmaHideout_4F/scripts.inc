# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_3, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"

# 10 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"

# 13 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LEVEL_CAP, 63
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 85 "data/maps/MagmaHideout_4F/scripts.pory"

# 86 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 98 "data/maps/MagmaHideout_4F/scripts.pory"

# 99 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 103 "data/maps/MagmaHideout_4F/scripts.pory"

# 104 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 117 "data/maps/MagmaHideout_4F/scripts.pory"

# 118 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 122 "data/maps/MagmaHideout_4F/scripts.pory"

# 123 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 127 "data/maps/MagmaHideout_4F/scripts.pory"

# 128 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 132 "data/maps/MagmaHideout_4F/scripts.pory"

# 133 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 137 "data/maps/MagmaHideout_4F/scripts.pory"

# 138 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about GROUDON!$"
# 144 "data/maps/MagmaHideout_4F/scripts.pory"

# 145 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 148 "data/maps/MagmaHideout_4F/scripts.pory"

# 149 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"
# 151 "data/maps/MagmaHideout_4F/scripts.pory"

# 152 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 156 "data/maps/MagmaHideout_4F/scripts.pory"

# 157 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 160 "data/maps/MagmaHideout_4F/scripts.pory"

# 161 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 164 "data/maps/MagmaHideout_4F/scripts.pory"

# 165 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 168 "data/maps/MagmaHideout_4F/scripts.pory"

# 169 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"

# 172 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"
# 174 "data/maps/MagmaHideout_4F/scripts.pory"

# 175 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You made it this far, so I'll tell you!\p"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's right!\n"
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Up ahead, GROUDON is sleeping!\p"
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE went to GROUDON just seconds\n"
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "ago!\p"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's going to awaken real soon!\n"
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehe!$"
# 184 "data/maps/MagmaHideout_4F/scripts.pory"

# 185 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 188 "data/maps/MagmaHideout_4F/scripts.pory"

# 189 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE should have awakened GROUDON…$"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"

# 193 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON…\p"
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nothing could awaken you from your\n"
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sleep bathed in magma…\p"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "This BLUE ORB is what you sought.\n"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't it?\p"
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I have brought you the BLUE ORB.\n"
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Let its shine awaken you!\p"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And show me…\n"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Show me the full extent of your power!$"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"

# 204 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: GROUDON!\n"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What's wrong?\p"
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wasn't the BLUE ORB the key?\p"
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "GROUDON!\n"
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Where have you gone…$"
# 210 "data/maps/MagmaHideout_4F/scripts.pory"

# 211 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: Oh, so it was you?\p"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've seen you poking around uninvited\n"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "here and there…\p"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I get it now!\n"
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You must have pulled a cheap stunt!$"
# 217 "data/maps/MagmaHideout_4F/scripts.pory"

# 218 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "POKéMON?$"
# 221 "data/maps/MagmaHideout_4F/scripts.pory"

# 222 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE: There has to be some reason\n"
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "why GROUDON fled…\p"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "That's what you're trying to say,\n"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "aren't you?\p"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\n"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … … …\p"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Humph…\n"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You think I didn't know that?\p"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "With GROUDON gone, there is no longer\n"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "any need for this blasted volcano.\p"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after GROUDON, so this\n"
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "is where we part!$"
