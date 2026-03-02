Hub_Test_MapScripts::
# 3 "data/maps/Hub_Test/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hub_Test_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Hub_Test_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Hub_Test/scripts.pory"
	map_script_2 VAR_HUB_STATE, 0, HUB_TEST_KNIGHT_INTRO
# 5 "data/maps/Hub_Test/scripts.pory"
	map_script_2 VAR_HUB_STATE, 1, Hub_Test_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

Hub_Test_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 6 "data/maps/Hub_Test/scripts.pory"
	lock
# 7 "data/maps/Hub_Test/scripts.pory"
	msgbox Hub_Test_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
# 8 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_HUB_STATE, 2
# 9 "data/maps/Hub_Test/scripts.pory"
	release
	return


HUB_TEST_KNIGHT_INTRO::
# 17 "data/maps/Hub_Test/scripts.pory"
	lock
# 18 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 19 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_HUB_STATE, 1
# 20 "data/maps/Hub_Test/scripts.pory"
	msgbox knightText
# 21 "data/maps/Hub_Test/scripts.pory"
	applymovement LOCALID_PLAYER, testMove
# 22 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 23 "data/maps/Hub_Test/scripts.pory"
	msgbox knightText1
# 24 "data/maps/Hub_Test/scripts.pory"
	release
	end


# 28 "data/maps/Hub_Test/scripts.pory"
testMove:
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 29 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 30 "data/maps/Hub_Test/scripts.pory"
	face_up
	step_end

# 46 "data/maps/Hub_Test/scripts.pory"

# 47 "data/maps/Hub_Test/scripts.pory"
Hub_Test_EventScript_TESTBirchsBag::
# 48 "data/maps/Hub_Test/scripts.pory"
	lock
# 49 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 50 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 51 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 52 "data/maps/Hub_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/Hub_Test/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 54 "data/maps/Hub_Test/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 55 "data/maps/Hub_Test/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 56 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 57 "data/maps/Hub_Test/scripts.pory"
	special ChooseStarter
# 58 "data/maps/Hub_Test/scripts.pory"
	waitstate
# 59 "data/maps/Hub_Test/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 60 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 61 "data/maps/Hub_Test/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 62 "data/maps/Hub_Test/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 64 "data/maps/Hub_Test/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 65 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 66 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 67 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 68 "data/maps/Hub_Test/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 69 "data/maps/Hub_Test/scripts.pory"
	checkplayergender
# 70 "data/maps/Hub_Test/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 71 "data/maps/Hub_Test/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 72 "data/maps/Hub_Test/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 73 "data/maps/Hub_Test/scripts.pory"
	waitstate
# 74 "data/maps/Hub_Test/scripts.pory"
	release
# 75 "data/maps/Hub_Test/scripts.pory"
	end

Hub_Test_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
# 7 "data/maps/Hub_Test/scripts.pory"
	.string "The var has changed.$"

knightText::
# 33 "data/maps/Hub_Test/scripts.pory"
	.string "Oh! Another one joins the fray.\n"
	.string "Well, don't be shy now, come on over.$"

knightText1::
# 37 "data/maps/Hub_Test/scripts.pory"
	.string "Thats good.\n"
	.string "Its been awhile since an Interloper\l"
	.string "appeared here, you know. Used to be this \l"
	.string "place was a gathering for out kind, a jolly\l"
	.string "festival of expedition for all.\l"
	.string "Now... well, its as you see.$"
