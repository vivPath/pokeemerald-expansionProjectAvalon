Hub_Test_MapScripts::
	.byte 0


testScript::
# 8 "data/maps/Hub_Test/scripts.pory"
	lock
# 9 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 10 "data/maps/Hub_Test/scripts.pory"
	msgbox knightText
# 11 "data/maps/Hub_Test/scripts.pory"
	applymovement 0, testMove
# 12 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 13 "data/maps/Hub_Test/scripts.pory"
	msgbox knightText1
# 14 "data/maps/Hub_Test/scripts.pory"
	release
	end


# 18 "data/maps/Hub_Test/scripts.pory"
testMove:
# 19 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 19 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 19 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 19 "data/maps/Hub_Test/scripts.pory"
	walk_left
# 19 "data/maps/Hub_Test/scripts.pory"
	walk_left
	step_end

# 30 "data/maps/Hub_Test/scripts.pory"

# 31 "data/maps/Hub_Test/scripts.pory"
Hub_Test_EventScript_TESTBirchsBag::
# 32 "data/maps/Hub_Test/scripts.pory"
	lock
# 33 "data/maps/Hub_Test/scripts.pory"
	faceplayer
# 34 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 36 "data/maps/Hub_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/Hub_Test/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 38 "data/maps/Hub_Test/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 39 "data/maps/Hub_Test/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 40 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 41 "data/maps/Hub_Test/scripts.pory"
	special ChooseStarter
# 42 "data/maps/Hub_Test/scripts.pory"
	waitstate
# 43 "data/maps/Hub_Test/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchApproachPlayer
# 44 "data/maps/Hub_Test/scripts.pory"
	waitmovement 0
# 45 "data/maps/Hub_Test/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 46 "data/maps/Hub_Test/scripts.pory"
	special HealPlayerParty
# 47 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 48 "data/maps/Hub_Test/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 49 "data/maps/Hub_Test/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 50 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 51 "data/maps/Hub_Test/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 52 "data/maps/Hub_Test/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 53 "data/maps/Hub_Test/scripts.pory"
	checkplayergender
# 54 "data/maps/Hub_Test/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 55 "data/maps/Hub_Test/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 56 "data/maps/Hub_Test/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 57 "data/maps/Hub_Test/scripts.pory"
	waitstate
# 58 "data/maps/Hub_Test/scripts.pory"
	release
# 59 "data/maps/Hub_Test/scripts.pory"
	end

knightText::
# 22 "data/maps/Hub_Test/scripts.pory"
	.string "Oh! Another one joins the fray.\n"
	.string "Well, don't be shy now, come on over.$"

knightText1::
# 26 "data/maps/Hub_Test/scripts.pory"
	.string "Thats good.$"
