#include "../../../catch.hpp"
#include "../../../CTestDb.h"
#include "../../../Runner.h"
#include "../../../CAssert.h"
#include "../../../RoomBuilder.h"
#include "../../../../../DRODLib/CurrentGame.h"

TEST_CASE("Waterskipper interaction with weapons on targets", "[game][player][waterskipper]") {
	RoomBuilder::ClearRoom();

	SECTION("Staff should block Waterskipper attack") {
		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_MIMIC, WT_Staff, 8, 10, E);

		CCueEvents CueEvents;
		Runner::StartGame(9, 10, N);
		Runner::ExecuteCommand(CMD_WAIT, CueEvents);

		AssertPlayerIsAlive();
	}

	SECTION("Spear should block Waterskipper attack") {
		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_MIMIC, WT_Spear, 8, 10, E);

		CCueEvents CueEvents;
		Runner::StartGame(9, 10, N);
		Runner::ExecuteCommand(CMD_WAIT, CueEvents);

		AssertPlayerIsAlive();
	}

	SECTION("Pickaxe should block Waterskipper attack") {
		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_MIMIC, WT_Pickaxe, 8, 10, E);

		CCueEvents CueEvents;
		Runner::StartGame(9, 10, N);
		Runner::ExecuteCommand(CMD_WAIT, CueEvents);

		AssertPlayerIsAlive();
	}

	SECTION("Dagger should not block Waterskipper attack") {
		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_MIMIC, WT_Dagger, 8, 10, E);

		CCueEvents CueEvents;
		Runner::StartGame(9, 10, N);
		Runner::ExecuteCommand(CMD_WAIT, CueEvents);
		REQUIRE(CueEvents.HasOccurred(CID_MonsterKilledPlayer));

		AssertPlayerIsDead();
	}

	SECTION("Player staff should protect stalwart") {
		CCharacter* character = RoomBuilder::AddCharacter(1, 1);
		RoomBuilder::AddCommand(character, CCharacterCommand::CC_SetPlayerWeapon, WT_Staff);

		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);
		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_STALWART, WT_Sword, 9, 10, SW);

		CCueEvents CueEvents;
		CCurrentGame* game = Runner::StartGame(8, 10, E);
		Runner::ExecuteCommand(CMD_WAIT);

		AssertMonsterType(9, 10, M_STALWART);
	}

	SECTION("Player spear should protect stalwart") {
		CCharacter* character = RoomBuilder::AddCharacter(1, 1);
		RoomBuilder::AddCommand(character, CCharacterCommand::CC_SetPlayerWeapon, WT_Spear);

		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);

		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_STALWART, WT_Sword, 9, 10, SW);

		CCueEvents CueEvents;
		CCurrentGame* game = Runner::StartGame(8, 10, E);
		Runner::ExecuteCommand(CMD_WAIT);

		AssertMonsterType(9, 10, M_STALWART);
	}

	SECTION("Player pickaxe should protect stalwart") {
		CCharacter* character = RoomBuilder::AddCharacter(1, 1);
		RoomBuilder::AddCommand(character, CCharacterCommand::CC_SetPlayerWeapon, WT_Pickaxe);

		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);

		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_STALWART, WT_Sword, 9, 10, SW);

		CCueEvents CueEvents;
		CCurrentGame* game = Runner::StartGame(8, 10, E);
		Runner::ExecuteCommand(CMD_WAIT);

		AssertMonsterType(9, 10, M_STALWART);
	}

	SECTION("Player dagger should not protect stalwart") {
		CCharacter* character = RoomBuilder::AddCharacter(1, 1);
		RoomBuilder::AddCommand(character, CCharacterCommand::CC_SetPlayerWeapon, WT_Dagger);

		RoomBuilder::AddMonster(M_WATERSKIPPER, 10, 10);
		RoomBuilder::Plot(T_WATER, 10, 10);
		RoomBuilder::AddMonsterWithWeapon(M_STALWART, WT_Sword, 9, 10, SW);

		CCueEvents CueEvents;
		CCurrentGame* game = Runner::StartGame(8, 10, E);
		Runner::ExecuteCommand(CMD_WAIT);

		AssertMonsterType(9, 10, M_WATERSKIPPER);
	}
}
