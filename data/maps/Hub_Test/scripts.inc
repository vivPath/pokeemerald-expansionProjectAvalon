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
	return


HUB_TEST_KNIGHT_INTRO::
# 17 "data/maps/Hub_Test/scripts.pory"
	lock
# 18 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 19 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_HUB_STATE, 1
# 20 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_KNIGHT_TEXT_STATE, 0
# 21 "data/maps/Hub_Test/scripts.pory"
	msgbox knightText
# 22 "data/maps/Hub_Test/scripts.pory"
	applymovement LOCALID_PLAYER, testMove
# 23 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 24 "data/maps/Hub_Test/scripts.pory"
	msgbox knightText1
# 25 "data/maps/Hub_Test/scripts.pory"
	release
	end


HUB_TEST_KNIGHT_EXPOSITION::
# 30 "data/maps/Hub_Test/scripts.pory"
	lock
# 31 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 32 "data/maps/Hub_Test/scripts.pory"
	compare VAR_KNIGHT_TEXT_STATE, 0
	goto_if_eq HUB_TEST_KNIGHT_EXPOSITION_2
# 36 "data/maps/Hub_Test/scripts.pory"
	compare VAR_KNIGHT_TEXT_STATE, 1
	goto_if_eq HUB_TEST_KNIGHT_EXPOSITION_3
HUB_TEST_KNIGHT_EXPOSITION_1:
# 39 "data/maps/Hub_Test/scripts.pory"
	release
	end

HUB_TEST_KNIGHT_EXPOSITION_2:
# 33 "data/maps/Hub_Test/scripts.pory"
	msgbox expositionText
# 34 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_KNIGHT_TEXT_STATE, 1
	goto HUB_TEST_KNIGHT_EXPOSITION_1

HUB_TEST_KNIGHT_EXPOSITION_3:
# 37 "data/maps/Hub_Test/scripts.pory"
	msgbox expositionText2
	goto HUB_TEST_KNIGHT_EXPOSITION_1


# 43 "data/maps/Hub_Test/scripts.pory"
testMove:
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 44 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 45 "data/maps/Hub_Test/scripts.pory"
	face_up
	step_end

# 73 "data/maps/Hub_Test/scripts.pory"

# 74 "data/maps/Hub_Test/scripts.pory"
Hub_Test_EventScript_TESTBirchsBag::
# 75 "data/maps/Hub_Test/scripts.pory"
	lock
# 76 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 77 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 78 "data/maps/Hub_Test/scripts.pory"
	// setflag FLAG_RESCUED_BIRCH
# 79 "data/maps/Hub_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/Hub_Test/scripts.pory"
	// removeobject LOCALID_ROUTE101_ZIGZAGOON
# 81 "data/maps/Hub_Test/scripts.pory"
	// setobjectxy LOCALID_PLAYER, 6, 13
# 82 "data/maps/Hub_Test/scripts.pory"
	// applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 83 "data/maps/Hub_Test/scripts.pory"
	// waitmovement 0
# 84 "data/maps/Hub_Test/scripts.pory"
	special ChooseStarter
# 85 "data/maps/Hub_Test/scripts.pory"
	waitstate
# 86 "data/maps/Hub_Test/scripts.pory"
	// applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 87 "data/maps/Hub_Test/scripts.pory"
	// waitmovement 0
# 88 "data/maps/Hub_Test/scripts.pory"
	// msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 89 "data/maps/Hub_Test/scripts.pory"
	// special HealPlayerParty
# 90 "data/maps/Hub_Test/scripts.pory"
	// setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 91 "data/maps/Hub_Test/scripts.pory"
	// clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 92 "data/maps/Hub_Test/scripts.pory"
	// setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 93 "data/maps/Hub_Test/scripts.pory"
	// setvar VAR_BIRCH_LAB_STATE, 2
# 94 "data/maps/Hub_Test/scripts.pory"
	// setvar VAR_ROUTE101_STATE, 3
# 95 "data/maps/Hub_Test/scripts.pory"
	// clearflag FLAG_HIDE_MAP_NAME_POPUP
# 96 "data/maps/Hub_Test/scripts.pory"
	// checkplayergender
# 97 "data/maps/Hub_Test/scripts.pory"
	// call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 98 "data/maps/Hub_Test/scripts.pory"
	// call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 99 "data/maps/Hub_Test/scripts.pory"
	// warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 100 "data/maps/Hub_Test/scripts.pory"
	// waitstate
# 101 "data/maps/Hub_Test/scripts.pory"
	release
# 102 "data/maps/Hub_Test/scripts.pory"
	end

knightText::
# 48 "data/maps/Hub_Test/scripts.pory"
	.string "Oh! Another one joins the fray.\n"
	.string "Well, don't be shy now, come on over.$"

knightText1::
# 52 "data/maps/Hub_Test/scripts.pory"
	.string "Thats good.\n"
	.string "Its been awhile since an Interloper\l"
	.string "appeared here, you know. Used to be this \l"
	.string "place was a gathering for out kind, a jolly\l"
	.string "festival of expedition for all.\l"
	.string "Now... well, its as you see.$"

expositionText::
# 60 "data/maps/Hub_Test/scripts.pory"
	.string "Melancholy Knight: You must be quite\n"
	.string "confused.\l"
	.string "See, you and I are of a kind,\l"
	.string "Interlopers in this world.\l"
	.string "Something has called us and others \l"
	.string "like us to this place.\l"
	.string "Avalon.$"

expositionText2::
# 69 "data/maps/Hub_Test/scripts.pory"
	.string "Testing for more text\n"
	.string "after VAR changes.$"
