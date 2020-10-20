//MIDs.h
//Generated by DRODUTIL at 10/18/20 4:18PM.

#ifndef _MIDS_H_
#define _MIDS_H_

enum MID_CONSTANT {
  //Range of MIDs between 0 and 99 are reserved for IDs that do not correspond to
  //messages stored in the database.
  MID_Success = 0,
  MID_DatMissing = 1,
  MID_DatNoAccess = 2,
  MID_DatCorrupted_NoBackup = 3,
  MID_DatCorrupted_Restored = 4,
  MID_CouldNotOpenDB = 5,
  MID_MemPerformanceWarning = 6,
  MID_MemLowWarning = 7,
  MID_MemLowExitNeeded = 8,
  MID_AppConfigError = 9,
  MID_DRODIsAlreadyRunning = 10,
  MID_DataPathDotTextFileIsInvalid = 11,
  MID_LastUnstored = 99,

  //Messages from Buttons.uni:
  MID_NoText = 100,
  MID_Yes = 101,
  MID_No = 102,
  MID_Okay = 103,
  MID_OkayNoHotkey = 104,
  MID_Cancel = 105,
  MID_CancelNoHotkey = 106,
  MID_Help = 107,
  MID_PressAnyKeyToContinue = 108,
  MID_ConquerDemoDescription = 109,
  MID_DieDemoDescription = 110,
  MID_Copy = 111,
  MID_DeleteNoHotkey = 112,
  MID_Back = 113,
  MID_Forward = 114,
  MID_Index = 115,
  MID_Return = 116,
  MID_ExportNoHotkey = 117,
  MID_BuyNow = 118,
  MID_Exit = 119,
  MID_ImportData = 1165,
  MID_Desktop = 1204,
  MID_Laptop = 1205,
  MID_Default = 1227,
  MID_Done = 1280,
  MID_Upload = 1312,
  MID_Save = 1366,
  MID_Load = 1367,
  MID_CCW = 1368,
  MID_CW = 1369,
  MID_ApplyToRoom = 1389,
  MID_ApplyToLevel = 1390,
  MID_GoToForum = 1722,

  //Messages from ChatScreen.uni:
  MID_ChatTitle = 1450,
  MID_ChatSend = 1451,
  MID_ChatDelete = 1452,
  MID_ChatIgnoreUser = 1453,
  MID_ChatExit = 1454,
  MID_ChatConnecting = 1455,
  MID_ChatConnected = 1456,
  MID_ChatReceiveError = 1457,
  MID_ChatEmptyUserList = 1458,
  MID_ChatEnableOnGameScreen = 1459,
  MID_WhisperedTo = 1460,
  MID_ReceiveWhispersOnly = 1461,
  MID_PlayersChatting = 1462,
  MID_CNetNotConnected = 1463,
  MID_ChatHistory = 1464,

  //Messages from Credits.uni:
  MID_Cr_Producer_C = 1692,
  MID_Cr_Producer = 1693,
  MID_Cr_LeadProgrammer_C = 1694,
  MID_Cr_LeadProgrammer = 1695,
  MID_Cr_Linux_C = 1696,
  MID_Cr_Linux = 1697,
  MID_Cr_Mac_C = 1698,
  MID_Cr_Mac = 1699,
  MID_Cr_Music_C = 1700,
  MID_Cr_Music = 1701,
  MID_Cr_Artwork_C = 1702,
  MID_Cr_Artwork = 1703,
  MID_Cr_Levels_C = 1704,
  MID_Cr_Levels = 1705,
  MID_Cr_Story_C = 1706,
  MID_Cr_Story = 1707,
  MID_Cr_CaravelNet_C = 1708,
  MID_Cr_CaravelNet = 1709,
  MID_Cr_Web_C = 1710,
  MID_Cr_Web = 1711,
  MID_Cr_Voice_C = 1712,
  MID_Cr_Voice = 1713,
  MID_Cr_SoundEffects_C = 1714,
  MID_Cr_SoundEffects = 1715,
  MID_Cr_VoiceCoord_C = 1716,
  MID_Cr_VoiceCoord = 1717,
  MID_Cr_TestCoord_C = 1718,
  MID_Cr_TestCoord = 1719,
  MID_Cr_Testers_C = 1720,
  MID_Cr_Testers = 1721,
  MID_CreditsLastWords = 175,
  MID_CreditsTheEnd = 176,

  //Messages from DemosMessages.uni:
  MID_DemoSaved = 177,
  MID_DemoNotSaved = 178,
  MID_DemoFileSaved = 179,
  MID_DemoFileNotSaved = 180,
  MID_RecordingStatus = 181,
  MID_NoDemosForRoom = 182,
  MID_LevelBy = 183,
  MID_LevelCreated = 184,
  MID_DescribeDemo = 185,
  MID_SaveDemoPath = 186,
  MID_DemoBroken = 187,
  MID_DemoDescKilled1 = 188,
  MID_DemoDescKilled2 = 189,
  MID_DemoDescKilled3 = 190,
  MID_DemoDescKilled4 = 191,
  MID_DemoDescHalphKilled = 192,
  MID_DemoDescConquers1 = 193,
  MID_DemoDescConquers2 = 194,
  MID_DemoDescConquers3 = 195,
  MID_DemoDescConquers4 = 196,
  MID_DemoDescConquers5 = 197,
  MID_DemoDescConquers6 = 198,
  MID_DemoDescLeaves1 = 199,
  MID_DemoDescLeaves2 = 200,
  MID_DemoDescLeaves3 = 201,
  MID_DemoDescLoiters1 = 202,
  MID_DemoDescLoiters2 = 203,
  MID_DemoDescExits1 = 204,
  MID_DemoDescExits2 = 205,
  MID_DemoDescExits3 = 206,

  //Messages from DemosScreen.uni:
  MID_Demos = 207,
  MID_Watch = 208,
  MID_Delete = 209,
  MID_Export = 210,
  MID_ReturnToGame = 211,
  MID_Author = 212,
  MID_Created = 213,
  MID_Duration = 214,
  MID_Description = 215,
  MID_ReallyDeleteDemo = 216,
  MID_DemosFor = 217,
  MID_NoDemoSpecified = 218,
  MID_Details = 219,
  MID_DisplayDemo = 220,
  MID_Move = 221,
  MID_Moves = 222,
  MID_DisplayLevelDemos = 223,
  MID_ExportAll = 224,
  MID_DeleteAll = 225,
  MID_ReallyDeleteAllDemos = 226,
  MID_ForumDemos = 227,
  MID_DownloadingData = 228,
  MID_RoomNotConquered = 229,
  MID_NoScoresForRoom = 230,
  MID_MustRegisterToViewScores = 231,
  MID_HoldNotPublished = 232,
  MID_DeleteChildDemosPrompt = 233,
  MID_NoDemosToExport = 1270,
  MID_DeleteAllHoldDemosPrompt = 1271,

  //Messages from EditScreens.uni:
  MID_Editor = 234,
  MID_ChooseHold = 235,
  MID_NewHold = 236,
  MID_NewLevel = 237,
  MID_AddRoomPrompt = 238,
  MID_RoomStyle = 239,
  MID_EditRoom = 240,
  MID_DeleteHoldPrompt = 241,
  MID_DeleteHoldsPrompt = 1176,
  MID_DeleteLevelPrompt = 242,
  MID_DeleteRoomPrompt = 243,
  MID_SaveRoomPrompt = 244,
  MID_Rename = 245,
  MID_Describe = 246,
  MID_HoldSettings = 247,
  MID_LevelSettings = 248,
  MID_DefiningDoorStatus = 249,
  MID_ShowErrors = 250,
  MID_EnterScrollText = 251,
  MID_EnteringScrollStatus = 252,
  MID_PlacingLongMonsterStatus = 253,
  MID_DefiningOrbStatus = 254,
  MID_TestRoomLocation = 255,
  MID_HoldNotSaved = 256,
  MID_LevelNotSaved = 257,
  MID_RoomNotSaved = 258,
  MID_NameHold = 259,
  MID_DescribeHold = 260,
  MID_NameLevel = 261,
  MID_DescribeLevel = 262,
  MID_ExitLevelPrompt = 263,
  MID_CantDeleteEntranceRoom = 264,
  MID_MoveLevelEntrance = 265,
  MID_DefaultExit = 266,
  MID_ShowAllLevels = 267,
  MID_DestLevelPrompt = 268,
  MID_OrbAgentTip = 269,
  MID_DoorAgentTip = 270,
  MID_LongMonsterTip = 271,
  MID_TestRoomTip = 272,
  MID_PastingTip = 273,
  MID_OrbAgentToggle = 274,
  MID_OrbAgentOpen = 275,
  MID_OrbAgentClose = 276,
  MID_RoomIsRequired = 277,
  MID_RoomIsSecret = 278,
  MID_CreateHoldPrompt = 279,
  MID_Undo = 280,
  MID_Redo = 281,
  MID_WhoCanEdit = 282,
  MID_OnlyYou = 283,
  MID_YouAndMasters = 284,
  MID_YouAndConquerors = 285,
  MID_Anyone = 286,
  MID_MakeModifiedHoldCopy = 287,
  MID_CopyHoldPrompt = 288,
  MID_EndHoldMessage = 289,
  MID_EndHoldPrompt = 290,
  MID_CantDeleteMainEntrance = 291,
  MID_DeleteEntrancePrompt = 292,
  MID_MakeEntranceMain = 293,
  MID_EscBack = 294,
  MID_GetRoomSquare = 295,
  MID_GetRoomSquareTip = 296,
  MID_GetRoomRect = 297,
  MID_GetMapRoom = 1430,
  MID_GetRoomRectTip = 298,
  MID_Entrance = 299,
  MID_ShowEntranceDesc = 1292,
  MID_ShowEntranceDescOnce = 1733,
  MID_LevelMultiplier = 1393,
  MID_ImageSelectPrompt = 300,
  MID_ImportImage = 301,
  MID_RotateToChangeType = 302,
  MID_RotateToOpenAndCloseDoor = 303,
  MID_RotateToChangeColor = 1159,
  MID_RotateToChangeTypeAndDoubleClick = 1193,
  MID_Floor = 304,
  MID_Pit = 305,
  MID_Stairs = 306,
  MID_Wall = 307,
  MID_Wall2 = 308,
  MID_BrokenWall = 309,
  MID_BlueDoor = 310,
  MID_GreenDoor = 311,
  MID_RedDoor = 312,
  MID_YellowDoor = 313,
  MID_OpenYellowDoor = 314,
  MID_Trapdoor = 315,
  MID_Obstacle = 316,
  MID_ForceArrow = 317,
  MID_ForceArrow_NW = 1584,
  MID_ForceArrow_N = 1585,
  MID_ForceArrow_NE = 1586,
  MID_ForceArrow_W = 1587,
  MID_ForceArrow_E = 1588,
  MID_ForceArrow_SW = 1589,
  MID_ForceArrow_S = 1590,
  MID_ForceArrow_SE = 1591,
  MID_SmallHealth = 1424,
  MID_MediumHealth = 1425,
  MID_LargeHealth = 1426,
  MID_Scroll = 320,
  MID_Orb = 321,
  MID_OrbCracked = 322,
  MID_OrbBroken = 323,
  MID_Tar = 324,
  MID_Checkpoint = 325,
  MID_BlackDoor = 326,
  MID_Bomb = 327,
  MID_Fuse = 328,
  MID_Ortho = 329,
  MID_Tunnel = 330,
  MID_Tunnel_N = 1481,
  MID_Tunnel_E = 1482,
  MID_Tunnel_S = 1483,
  MID_Tunnel_W = 1484,
  MID_DefenseUp = 1427,
  MID_FloorMosaic = 332,
  MID_FloorRoad = 333,
  MID_FloorGrass = 334,
  MID_FloorDirt = 335,
  MID_FloorAlt = 1152,
  MID_MoneyDoor = 1346,
  MID_OpenMoneyDoor = 1739,
  MID_Mud = 338,
  MID_StairsUp = 339,
  MID_SecretWall = 340,
  MID_FloorImage = 341,
  MID_Serpent = 342,
  MID_TarMother = 343,
  MID_BlueSerpent = 344,
  MID_Character = 345,
  MID_MudMother = 346,
  MID_Swordsman = 347,
  MID_SpeedPotion = 348,
  MID_FlowSource = 349,
  MID_FlowInner = 350,
  MID_BriarWithered = 1752, //New.
  MID_Water = 351,
  MID_Token = 352,
  MID_TokenRotateCCW = 353,
  MID_TokenTarMud = 354,
  MID_TokenTarGel = 355,
  MID_TokenGelMud = 356,
  MID_TokenTranslucentTar = 357,
  MID_TokenPowerTarget = 358,
  MID_TokenSwordDisarm = 359,
  MID_TokenCitizen = 1277,
  MID_Mirror = 360,
  MID_AttackUp = 1428,
  MID_PlatformWater = 362,
  MID_PlatformPit = 363,
  MID_GreenSerpent = 364,
  MID_Ant = 365,
  MID_AntHill = 366,
  MID_Zombie = 367,
  MID_Stalwart = 1245,
  MID_Pirate = 1724,
  MID_Phoenix = 369,
  MID_OpenGreenDoor = 370,
  MID_OpenBlueDoor = 371,
  MID_OpenRedDoor = 372,
  MID_OpenBlackDoor = 373,
  MID_Goo = 374,
  MID_Roach = 375,
  MID_RoachQueen = 376,
  MID_Goblin = 377,
  MID_Wraithwing = 378,
  MID_EvilEye = 379,
  MID_TarBaby = 380,
  MID_Brain = 381,
  MID_Clone = 1153,
  MID_Decoy = 1154,
  MID_Mimic = 382,
  MID_Spider = 383,
  MID_StoneGolem = 384,
  MID_Wubba = 385,
  MID_Ghost = 386,
  MID_Halph = 387,
  MID_NeatherNoApostrophe = 1391,
  MID_Slayer = 388,
  MID_Guard = 389,
  MID_Negotiator = 390,
  MID_MudBaby = 391,
  MID_Light = 392,
  MID_LightCeiling = 393,
  MID_DarkCeiling = 1279,
  MID_WallLight = 1282,
  MID_Hot = 394,
  MID_Gel = 395,
  MID_GelMother = 396,
  MID_GelBaby = 397,
  MID_Citizen = 398,
  MID_Station = 399,
  MID_PressurePlate = 400,
  MID_PressurePlateToggle = 401,
  MID_PressurePlateOneUse = 402,
  MID_PressurePlateBroken = 1306,
  MID_PastingRegionStatus = 403,
  MID_Splitter = 404,
  MID_Trapdoor2 = 405,
  MID_Bridge = 1155,
  MID_Bridge_H = 1156,
  MID_Bridge_V = 1157,
  MID_PitImage = 1179,
  MID_BuildMarker = 1191,
  MID_WallImage = 1247,
  MID_RoachEgg = 1267,
  MID_PhoenixAshes = 1268,
  MID_MadEye = 1318,
  MID_YellowKey = 1315,
  MID_GreenKey = 1316,
  MID_BlueKey = 1317,
  MID_SkeletonKey = 1472,
  MID_Sword1 = 1324,
  MID_Sword2 = 1325,
  MID_Sword3 = 1326,
  MID_Sword4 = 1327,
  MID_Sword5 = 1328,
  MID_Sword6 = 1347,
  MID_Sword7 = 1348,
  MID_Sword8 = 1349,
  MID_Sword9 = 1406,
  MID_Sword10 = 1634,
  MID_Shield1 = 1329,
  MID_Shield2 = 1330,
  MID_Shield3 = 1331,
  MID_Shield4 = 1332,
  MID_Shield5 = 1333,
  MID_Shield6 = 1635,
  MID_Accessory1 = 1486,
  MID_Accessory2 = 1487,
  MID_Accessory3 = 1489,
  MID_Accessory4 = 1490,
  MID_Accessory5 = 1491,
  MID_Accessory6 = 1492,
  MID_Accessory7 = 1493,
  MID_Accessory8 = 1494,
  MID_Accessory9 = 1495,
  MID_Accessory10 = 1496,
  MID_Accessory11 = 1499,
  MID_Accessory12 = 1636,
  MID_Explosion = 1582,

  //Messages from EndOfGame.uni:
  MID_YouConquered = 406,
  MID_WinHomemadeDungeon1 = 408,
  MID_WinHomemadeDungeonCanEdit1 = 409,
  MID_WinHomemadeDungeonCanEdit2 = 410,

  //Messages from Export.uni:
  MID_SavePlayerPath = 411,
  MID_PlayerFileSaved = 412,
  MID_PlayerFileNotSaved = 413,
  MID_SaveHoldPath = 414,
  MID_HoldFileSaved = 415,
  MID_HoldFileNotSaved = 416,
  MID_Exporting = 417,
  MID_HoldOriginallyAuthoredBy = 418,
  MID_ExportHoldScriptsPrompt = 419,
  MID_HoldScriptsSaved = 420,
  MID_ExportSavedProgress = 421,
  MID_Saves = 422,
  MID_SavedGamesSaved = 423,
  MID_Manage = 424,
  MID_SaveStylePath = 1160,
  MID_DataFileSaved = 1163,
  MID_DataFileNotSaved = 1164,
  MID_IncludeSkyImagesInStylePrompt = 1166,
  MID_ExportAllHoldDemosPrompt = 1272,
  MID_ExportPlayerQuickPrompt = 1273,
  MID_ExportHoldTextPrompt = 1356,
  MID_HoldTextSaved = 1363,
  MID_ScoresUploaded = 1364,
  MID_ScoresNotUploaded = 1365,

  //Messages from FileAccess.uni:
  MID_CurrentDirectory = 425,
  MID_FileName = 426,
  MID_FileType = 427,
  MID_OverwriteFilePrompt = 428,
  MID_FileDemoExt = 429,
  MID_FileHoldExt = 430,
  MID_FilePlayerExt = 431,
  MID_FileDemoExtDesc = 432,
  MID_FileHoldExtDesc = 433,
  MID_FilePlayerExtDesc = 434,
  MID_Ogg = 435,
  MID_OggDesc = 436,
  MID_HTML = 437,
  MID_HTMLDesc = 438,
  MID_Jpeg = 439,
  MID_JpegDesc = 440,
  MID_ShowHiddenFiles = 441,
  MID_PNG = 442,
  MID_PNGDesc = 443,
  MID_Wav = 444,
  MID_WavDesc = 445,
  MID_Data = 1161,
  MID_DataDesc = 1162,
  MID_XML = 1198,
  MID_XMLDesc = 1199,
  MID_TheoraDesc = 1256,
  MID_SaveExt = 1344,
  MID_SaveExtDesc = 1345,

  //Messages from GameScreen.uni:
  MID_LevelComplete = 446,
  MID_CurrentGameStats = 449,
  MID_MovesMade = 450,
  MID_MonstersKilled = 451,
  MID_EscMenu = 452,
  MID_F1Help = 453,
  MID_SecretRoomFound = 454,
  MID_Levels = 1485,
  MID_Rooms = 455,
  MID_HoldTotals = 456,
  MID_LevelTotals = 457,
  MID_Kills = 458,
  MID_Deaths = 459,
  MID_Secrets = 460,
  MID_Time = 461,
  MID_TieScore = 1158,
  MID_SpeechLogTitle = 1275,
  MID_DisplayingOtherRoom = 1352,
  MID_UploadingRoomConquerDemos = 1362,
  MID_MonsterHP = 1370,
  MID_MonsterAttack = 1371,
  MID_MonsterDefense = 1372,
  MID_ATKStat = 1373,
  MID_XPStat = 1498,
  MID_DEFStat = 1374,
  MID_GRStat = 1375,
  MID_Keys = 1410,
  MID_YKEYStat = 1418,
  MID_GKEYStat = 1419,
  MID_BKEYStat = 1420,
  MID_SKEYStat = 1474,
  MID_Score = 1411,
  MID_CantHarmDangerousEnemy = 1376,
  MID_CantHarmEnemy = 1377,
  MID_MonsterDefenseTooHigh = 1378,
  MID_ExpectedDamage = 1379,
  MID_QuickSaveCompleted = 1380,
  MID_QuickLoadQuestion = 1381,
  MID_QuickSave_NoneAvailable = 1392,
  MID_BrainAbility = 1394,
  MID_EyeAbility = 1395,
  MID_RoachQueenAbility = 1396,
  MID_GoblinAbility = 1397,
  MID_MimicAbility = 1398,
  MID_AumtlichAbility = 1399,
  MID_SlayerAbility = 1400,
  MID_WaterSkipperAbility = 1401,
  MID_SeepAbility = 1402,
  MID_AttacksWhenAdjacent = 1600,
  MID_TarMotherAbility = 1403,
  MID_QuickPathNotAvailable = 1407,
  MID_BumpedLockedDoorMessage = 1412,
  MID_CantLockHereMessage = 1638,
  MID_PlayingCutScene = 1431,
  MID_Autosaving = 1437,
  MID_DescribeSave = 1438,
  MID_NoMonstersToDisplay = 1508,
  MID_Death = 1605,
  MID_UseCommandButton = 1633,
  MID_HPTooltip = 1640,
  MID_ATKTooltip = 1641,
  MID_DEFTooltip = 1642,
  MID_GRTooltip = 1643,
  MID_REPTooltip = 1644,
  MID_KeysTooltip = 1645,
  MID_MonHPTooltip = 1646,
  MID_MonATKTooltip = 1647,
  MID_MonDEFTooltip = 1648,
  MID_ExitBlockedOnOtherSide = 1725,
  MID_NoAdjoiningRoom = 1734,
  MID_RoomHasTreasure = 1729,
  MID_RoomHasEnemies = 1730,
  MID_RoomHasClosedDoors = 1731,
  MID_ATKForFasterCombatWin = 1745,

  //Messages from General.uni:
  MID_SDLInitFailed = 464,
  MID_OutOfMemory = 465,
  MID_CouldNotLoadResources = 466,
  MID_LoadGameFailed = 467,
  MID_TTFInitFailed = 468,
  MID_ReallyQuit = 469,
  MID_UnconqueredRooms = 470,
  MID_MessageLoadError = 471,
  MID_InternetTimeoutPrompt = 472,
  MID_NoBrowserToBuy = 473,
  MID_HaltOperationPrompt = 1178,
  MID_TryingToConnectWithDisconnectPrompt = 1225,
  MID_LowResWarning = 1246,
  MID_BrowserName = 1269,
  MID_ConsoleHelp = 1465,
  MID_UnrecognizedConsoleCommand = 1466,

  //Messages from Import.uni:
  MID_Import = 474,
  MID_ImportPath = 475,
  MID_Importing = 476,
  MID_ImportingData = 477,
  MID_VerifyingDemos = 478,
  MID_VerifyingSavedGames = 479,
  MID_ImportSuccessful = 480,
  MID_FileNotFound = 481,
  MID_FileCorrupted = 482,
  MID_HoldNotFound = 483,
  MID_LevelNotFound = 484,
  MID_HoldIgnored = 485,
  MID_HoldIdenticalIgnored = 1200,
  MID_HoldNotIdenticalIgnored = 1201,
  MID_PlayerIgnored = 486,
  MID_DemoIgnored = 487,
  MID_SavesIgnored = 488,
  MID_OverwriteHoldPrompt = 489,
  MID_OverwritePlayerPrompt = 490,
  MID_PlayerSavesIgnored = 491,
  MID_CantImportLaterVersion = 492,
  MID_NotConnected = 493,
  MID_DowngradeHoldPrompt = 494,
  MID_SavedGamesOnlyImported = 495,
  MID_OldDemoBroken = 496,
  MID_OldSavedGameBroken = 497,
  MID_OrderHoldAtCaravelGames = 498,
  MID_Deleting = 1177,
  MID_CaravelNet = 1206,
  MID_FileNotValid = 1244,
  MID_DownloadingMedia = 1249,
  MID_VerifyingMedia = 1250,
  MID_OrderAtCaravelGames = 1264,
  MID_MediaNotPublished = 1265,
  MID_DownloadFailed = 1290,
  MID_ImportTallying = 1313,
  MID_ImportWrongRootTag = 1473,

  //Messages from KeyDescriptions.uni:
  MID_UNKNOWN = 499,
  MID_KEY_Pad1 = 500,
  MID_KEY_Pad2 = 501,
  MID_KEY_Pad3 = 502,
  MID_KEY_Pad4 = 503,
  MID_KEY_Pad5 = 504,
  MID_KEY_Pad6 = 505,
  MID_KEY_Pad7 = 506,
  MID_KEY_BACKSPACE = 507,
  MID_KEY_TAB = 508,
  MID_KEY_Pad10 = 509,
  MID_KEY_Pad11 = 510,
  MID_KEY_Pad12 = 511,
  MID_KEY_RETURN = 512,
  MID_KEY_Pad14 = 513,
  MID_KEY_Pad15 = 514,
  MID_KEY_Pad16 = 515,
  MID_KEY_Pad17 = 516,
  MID_KEY_Pad18 = 517,
  MID_KEY_Pad19 = 518,
  MID_KEY_Pad20 = 519,
  MID_KEY_Pad21 = 520,
  MID_KEY_Pad22 = 521,
  MID_KEY_Pad23 = 522,
  MID_KEY_Pad24 = 523,
  MID_KEY_Pad25 = 524,
  MID_KEY_Pad26 = 525,
  MID_KEY_Pad27 = 526,
  MID_KEY_Pad28 = 527,
  MID_KEY_Pad29 = 528,
  MID_KEY_Pad30 = 529,
  MID_KEY_Pad31 = 530,
  MID_KEY_SPACE = 531,
  MID_KEY_EXCLAIM = 532,
  MID_KEY_Pad34 = 533,
  MID_KEY_HASH = 534,
  MID_KEY_DOLLAR = 535,
  MID_KEY_Pad37 = 536,
  MID_KEY_AMPERSAND = 537,
  MID_KEY_QUOTE = 538,
  MID_KEY_LEFTPAREN = 539,
  MID_KEY_RIGHTPAREN = 540,
  MID_KEY_ASTERISK = 541,
  MID_KEY_PLUS = 542,
  MID_KEY_COMMA = 543,
  MID_KEY_MINUS = 544,
  MID_KEY_PERIOD = 545,
  MID_KEY_SLASH = 546,
  MID_KEY_0 = 547,
  MID_KEY_1 = 548,
  MID_KEY_2 = 549,
  MID_KEY_3 = 550,
  MID_KEY_4 = 551,
  MID_KEY_5 = 552,
  MID_KEY_6 = 553,
  MID_KEY_7 = 554,
  MID_KEY_8 = 555,
  MID_KEY_9 = 556,
  MID_KEY_COLON = 557,
  MID_KEY_SEMICOLON = 558,
  MID_KEY_LESS = 559,
  MID_KEY_EQUALS = 560,
  MID_KEY_GREATER = 561,
  MID_KEY_QUESTION = 562,
  MID_KEY_AT = 563,
  MID_KEY_Pad65 = 564,
  MID_KEY_Pad66 = 565,
  MID_KEY_Pad67 = 566,
  MID_KEY_Pad68 = 567,
  MID_KEY_Pad69 = 568,
  MID_KEY_Pad70 = 569,
  MID_KEY_Pad71 = 570,
  MID_KEY_Pad72 = 571,
  MID_KEY_Pad73 = 572,
  MID_KEY_Pad74 = 573,
  MID_KEY_Pad75 = 574,
  MID_KEY_Pad76 = 575,
  MID_KEY_Pad77 = 576,
  MID_KEY_Pad78 = 577,
  MID_KEY_Pad79 = 578,
  MID_KEY_Pad80 = 579,
  MID_KEY_Pad81 = 580,
  MID_KEY_Pad82 = 581,
  MID_KEY_Pad83 = 582,
  MID_KEY_Pad84 = 583,
  MID_KEY_Pad85 = 584,
  MID_KEY_Pad86 = 585,
  MID_KEY_Pad87 = 586,
  MID_KEY_Pad88 = 587,
  MID_KEY_Pad89 = 588,
  MID_KEY_Pad90 = 589,
  MID_KEY_LEFTBRACKET = 590,
  MID_KEY_BACKSLASH = 591,
  MID_KEY_RIGHTBRACKET = 592,
  MID_KEY_CARET = 593,
  MID_KEY_UNDERSCORE = 594,
  MID_KEY_BACKQUOTE = 595,
  MID_KEY_a = 596,
  MID_KEY_b = 597,
  MID_KEY_c = 598,
  MID_KEY_d = 599,
  MID_KEY_e = 600,
  MID_KEY_f = 601,
  MID_KEY_g = 602,
  MID_KEY_h = 603,
  MID_KEY_i = 604,
  MID_KEY_j = 605,
  MID_KEY_k = 606,
  MID_KEY_l = 607,
  MID_KEY_m = 608,
  MID_KEY_n = 609,
  MID_KEY_o = 610,
  MID_KEY_p = 611,
  MID_KEY_q = 612,
  MID_KEY_r = 613,
  MID_KEY_s = 614,
  MID_KEY_t = 615,
  MID_KEY_u = 616,
  MID_KEY_v = 617,
  MID_KEY_w = 618,
  MID_KEY_x = 619,
  MID_KEY_y = 620,
  MID_KEY_z = 621,
  MID_KEY_Pad123 = 622,
  MID_KEY_Pad124 = 623,
  MID_KEY_Pad125 = 624,
  MID_KEY_Pad126 = 625,
  MID_KEY_DELETE = 626,
  MID_KEY_Pad128 = 627,
  MID_KEY_Pad129 = 628,
  MID_KEY_Pad130 = 629,
  MID_KEY_Pad131 = 630,
  MID_KEY_Pad132 = 631,
  MID_KEY_Pad133 = 632,
  MID_KEY_Pad134 = 633,
  MID_KEY_Pad135 = 634,
  MID_KEY_Pad136 = 635,
  MID_KEY_Pad137 = 636,
  MID_KEY_Pad138 = 637,
  MID_KEY_Pad139 = 638,
  MID_KEY_Pad140 = 639,
  MID_KEY_Pad141 = 640,
  MID_KEY_Pad142 = 641,
  MID_KEY_Pad143 = 642,
  MID_KEY_Pad144 = 643,
  MID_KEY_Pad145 = 644,
  MID_KEY_Pad146 = 645,
  MID_KEY_Pad147 = 646,
  MID_KEY_Pad148 = 647,
  MID_KEY_Pad149 = 648,
  MID_KEY_Pad150 = 649,
  MID_KEY_Pad151 = 650,
  MID_KEY_Pad152 = 651,
  MID_KEY_Pad153 = 652,
  MID_KEY_Pad154 = 653,
  MID_KEY_Pad155 = 654,
  MID_KEY_Pad156 = 655,
  MID_KEY_Pad157 = 656,
  MID_KEY_Pad158 = 657,
  MID_KEY_Pad159 = 658,
  MID_KEY_Pad160 = 659,
  MID_KEY_Pad161 = 660,
  MID_KEY_Pad162 = 661,
  MID_KEY_Pad163 = 662,
  MID_KEY_Pad164 = 663,
  MID_KEY_Pad165 = 664,
  MID_KEY_Pad166 = 665,
  MID_KEY_Pad167 = 666,
  MID_KEY_Pad168 = 667,
  MID_KEY_Pad169 = 668,
  MID_KEY_Pad170 = 669,
  MID_KEY_Pad171 = 670,
  MID_KEY_Pad172 = 671,
  MID_KEY_Pad173 = 672,
  MID_KEY_Pad174 = 673,
  MID_KEY_Pad175 = 674,
  MID_KEY_Pad176 = 675,
  MID_KEY_Pad177 = 676,
  MID_KEY_Pad178 = 677,
  MID_KEY_Pad179 = 678,
  MID_KEY_Pad180 = 679,
  MID_KEY_Pad181 = 680,
  MID_KEY_Pad182 = 681,
  MID_KEY_Pad183 = 682,
  MID_KEY_Pad184 = 683,
  MID_KEY_Pad185 = 684,
  MID_KEY_Pad186 = 685,
  MID_KEY_Pad187 = 686,
  MID_KEY_Pad188 = 687,
  MID_KEY_Pad189 = 688,
  MID_KEY_Pad190 = 689,
  MID_KEY_Pad191 = 690,
  MID_KEY_Pad192 = 691,
  MID_KEY_Pad193 = 692,
  MID_KEY_Pad194 = 693,
  MID_KEY_Pad195 = 694,
  MID_KEY_Pad196 = 695,
  MID_KEY_Pad197 = 696,
  MID_KEY_Pad198 = 697,
  MID_KEY_Pad199 = 698,
  MID_KEY_Pad200 = 699,
  MID_KEY_Pad201 = 700,
  MID_KEY_Pad202 = 701,
  MID_KEY_Pad203 = 702,
  MID_KEY_Pad204 = 703,
  MID_KEY_Pad205 = 704,
  MID_KEY_Pad206 = 705,
  MID_KEY_Pad207 = 706,
  MID_KEY_Pad208 = 707,
  MID_KEY_Pad209 = 708,
  MID_KEY_Pad210 = 709,
  MID_KEY_Pad211 = 710,
  MID_KEY_Pad212 = 711,
  MID_KEY_Pad213 = 712,
  MID_KEY_Pad214 = 713,
  MID_KEY_Pad215 = 714,
  MID_KEY_Pad216 = 715,
  MID_KEY_Pad217 = 716,
  MID_KEY_Pad218 = 717,
  MID_KEY_Pad219 = 718,
  MID_KEY_Pad220 = 719,
  MID_KEY_Pad221 = 720,
  MID_KEY_Pad222 = 721,
  MID_KEY_Pad223 = 722,
  MID_KEY_Pad224 = 723,
  MID_KEY_Pad225 = 724,
  MID_KEY_Pad226 = 725,
  MID_KEY_Pad227 = 726,
  MID_KEY_Pad228 = 727,
  MID_KEY_Pad229 = 728,
  MID_KEY_Pad230 = 729,
  MID_KEY_Pad231 = 730,
  MID_KEY_Pad232 = 731,
  MID_KEY_Pad233 = 732,
  MID_KEY_Pad234 = 733,
  MID_KEY_Pad235 = 734,
  MID_KEY_Pad236 = 735,
  MID_KEY_Pad237 = 736,
  MID_KEY_Pad238 = 737,
  MID_KEY_Pad239 = 738,
  MID_KEY_Pad240 = 739,
  MID_KEY_Pad241 = 740,
  MID_KEY_Pad242 = 741,
  MID_KEY_Pad243 = 742,
  MID_KEY_Pad244 = 743,
  MID_KEY_Pad245 = 744,
  MID_KEY_Pad246 = 745,
  MID_KEY_Pad247 = 746,
  MID_KEY_Pad248 = 747,
  MID_KEY_Pad249 = 748,
  MID_KEY_Pad250 = 749,
  MID_KEY_Pad251 = 750,
  MID_KEY_Pad252 = 751,
  MID_KEY_Pad253 = 752,
  MID_KEY_Pad254 = 753,
  MID_KEY_Pad255 = 754,
  MID_KEY_KP0 = 755,
  MID_KEY_KP1 = 756,
  MID_KEY_KP2 = 757,
  MID_KEY_KP3 = 758,
  MID_KEY_KP4 = 759,
  MID_KEY_KP5 = 760,
  MID_KEY_KP6 = 761,
  MID_KEY_KP7 = 762,
  MID_KEY_KP8 = 763,
  MID_KEY_KP9 = 764,
  MID_KEY_KP_PERIOD = 765,
  MID_KEY_KP_DIVIDE = 766,
  MID_KEY_KP_MULTIPLY = 767,
  MID_KEY_KP_MINUS = 768,
  MID_KEY_KP_PLUS = 769,
  MID_KEY_KP_ENTER = 770,
  MID_KEY_KP_EQUALS = 771,
  MID_KEY_UP = 772,
  MID_KEY_DOWN = 773,
  MID_KEY_RIGHT = 774,
  MID_KEY_LEFT = 775,
  MID_KEY_INSERT = 776,
  MID_KEY_HOME = 777,
  MID_KEY_END = 778,
  MID_KEY_PAGEUP = 779,
  MID_KEY_PAGEDOWN = 780,
  MID_KEY_F1 = 781,
  MID_KEY_F2 = 782,
  MID_KEY_F3 = 783,
  MID_KEY_F4 = 784,
  MID_KEY_F5 = 785,
  MID_KEY_F6 = 786,
  MID_KEY_F7 = 787,
  MID_KEY_F8 = 788,
  MID_KEY_F9 = 789,
  MID_KEY_F10 = 790,
  MID_KEY_F11 = 791,
  MID_KEY_F12 = 792,
  MID_KEY_F13 = 793,
  MID_KEY_F14 = 794,
  MID_KEY_F15 = 795,
  MID_KEY_Pad297 = 796,
  MID_KEY_Pad298 = 797,
  MID_KEY_Pad299 = 798,
  MID_KEY_NUMLOCK = 799,
  MID_KEY_CAPSLOCK = 800,
  MID_KEY_SCROLLOCK = 801,
  MID_KEY_RSHIFT = 802,
  MID_KEY_LSHIFT = 803,
  MID_KEY_RCTRL = 804,
  MID_KEY_LCTRL = 805,
  MID_KEY_RALT = 806,
  MID_KEY_LALT = 807,
  MID_KEY_RMETA = 808,
  MID_KEY_LMETA = 809,
  MID_KEY_LSUPER = 810,
  MID_KEY_RSUPER = 811,
  MID_KEY_MODE = 812,
  MID_KEY_COMPOSE = 813,
  MID_KEY_HELP = 814,
  MID_KEY_PRINT = 815,
  MID_KEY_SYSREQ = 816,
  MID_KEY_BREAK = 817,
  MID_KEY_MENU = 818,
  MID_KEY_POWER = 819,
  MID_KEY_EURO = 820,
  MID_KEY_UNDO = 821,

  //Messages from Months.uni:
  MID_January = 822,
  MID_February = 823,
  MID_March = 824,
  MID_April = 825,
  MID_May = 826,
  MID_June = 827,
  MID_July = 828,
  MID_August = 829,
  MID_September = 830,
  MID_October = 831,
  MID_November = 832,
  MID_December = 833,

  //Messages from Numbers.uni:
  MID_Zero = 834,
  MID_One = 835,
  MID_Two = 836,
  MID_Three = 837,
  MID_Four = 838,
  MID_Five = 839,
  MID_Six = 840,
  MID_Seven = 841,
  MID_Eight = 842,
  MID_Nine = 843,
  MID_Once = 844,
  MID_Twice = 845,
  MID_Thrice = 846,
  MID_Quarce = 847,
  MID_Quince = 848,
  MID_Sence = 849,
  MID_Septence = 850,
  MID_Octence = 851,
  MID_Novence = 852,
  MID_Tonce = 853,
  MID_Elevonce = 854,
  MID_Twolce = 855,
  MID_Thorce = 856,
  MID_Quartonce = 857,
  MID_Quintonce = 858,
  MID_Sextonce = 859,
  MID_Septonce = 860,
  MID_Octonce = 861,
  MID_Noventonce = 862,
  MID_Times = 863,
  MID_TheEntrance = 864,
  MID_North = 865,
  MID_South = 866,
  MID_East = 867,
  MID_West = 868,
  MID_NorthWest = 869,
  MID_NorthEast = 870,
  MID_SouthWest = 871,
  MID_SouthEast = 872,
  MID_Clockwise = 873,
  MID_CounterClockwise = 874,
  MID_Rank = 875,
  MID_st = 876,
  MID_nd = 877,
  MID_rd = 878,
  MID_th = 879,

  //Messages from RestoreScreen.uni:
  MID_Restore = 880,
  MID_RestoreGame = 881,
  MID_RoomStart = 882,
  MID_LevelStart = 883,
  MID_HoldStart = 884,
  MID_ChooseLevel = 885,
  MID_ChooseRoom = 886,
  MID_ChoosePosition = 887,
  MID_Complete = 888,
  MID_SecretsFound = 889,
  MID_ChooseSavedGame = 1439,
  MID_ContinueSave = 1442,
  MID_Quicksave = 1443,
  MID_DeleteSavedGamesPrompt = 1444,

  //Messages from SelectScreens.uni:
  MID_HoldManagementTitle = 1207,
  MID_SelectPlayerPrompt = 892,
  MID_NewPlayerDialogPrompt = 893,
  MID_DeletePlayerPrompt = 894,
  MID_NewPlayerPrompt = 895,
  MID_NewPlayer = 896,
  MID_DeletePlayer = 897,
  MID_DeleteHold = 898,
  MID_Download = 899,
  MID_UpdatedHoldExists = 900,
  MID_DownloadingHold = 901,
  MID_Difficulty = 902,
  MID_Rating = 903,
  MID_Votes = 904,
  MID_FileSize = 905,
  MID_Version = 906,
  MID_DROD_RPG1 = 1414,
  MID_DROD_UnsupportedVersion = 1415,
  MID_UploadVerifiedVictoryDemosPrompt = 910,
  MID_BetaHold = 911,
  MID_RateHold = 1184,
  MID_HoldDifficulty = 1185,
  MID_HoldOverall = 1186,
  MID_RatingHold = 1187,
  MID_HoldRatingSent = 1188,
  MID_HoldNotFoundOnCaravelNet = 1189,
  MID_RateHoldPrompt = 1190,
  MID_KeyboardConfigurationPrompt = 1203,
  MID_HoldFilter = 1221,
  MID_HoldFilterAll = 1208,
  MID_HoldFilterMine = 1416,
  MID_HoldFilterNew = 1214,
  MID_HoldFilterInProgress = 1215,
  MID_HoldFilterConquered = 1211,
  MID_HoldFilterMastered = 1212,
  MID_HoldFilterUnconquered = 1213,
  MID_HoldFilterUnmastered = 1217,
  MID_HoldFilterCaravelNet = 1210,
  MID_HoldFilterNonCaravelNet = 1218,
  MID_HoldFilterBeta = 1219,
  MID_HoldFilterUpdated = 1220,
  MID_InstalledHolds = 1216,
  MID_HoldNotRated = 1222,
  MID_CaravelNetNotLoggedIn = 1223,
  MID_HoldInBeta = 1224,
  MID_ModManagementTitle = 1257,
  MID_InstalledMods = 1258,
  MID_RateMod = 1259,
  MID_ModRating = 1260,
  MID_RatingMod = 1261,
  MID_RatingReceived = 1262,
  MID_ModNotFoundOnCaravelNet = 1263,
  MID_ModNotRated = 1266,
  MID_HoldIsYours = 1294,
  MID_HoldFilterOfficial = 1295,
  MID_CaravelNetSortHoldsBy = 1296,
  MID_HoldOrderAlpha = 1297,
  MID_HoldOrderRating = 1298,
  MID_HoldOrderDifficulty = 1299,
  MID_HoldOrderVotes = 1300,
  MID_HoldOrderVersion = 1355,
  MID_UploadHoldScores = 1417,
  MID_ChangeHoldRating = 1358,
  MID_GameVarsTitle = 1446,
  MID_ChangeVarValuePrompt = 1447,
  MID_ReturnToPriorLocation = 1610,

  //Messages from SettingsScreen.uni:
  MID_Settings = 912,
  MID_Commands = 913,
  MID_MoveNorthwest = 914,
  MID_MoveNorth = 915,
  MID_MoveNortheast = 916,
  MID_MoveWest = 917,
  MID_Wait = 918,
  MID_MoveEast = 919,
  MID_MoveSouthwest = 920,
  MID_MoveSouth = 921,
  MID_MoveSoutheast = 922,
  MID_SwingClockwise = 923,
  MID_SwingCounterclockwise = 924,
  MID_RestartRoom = 925,
  MID_UndoMove = 926,
  MID_BattleKey = 1291,
  MID_UseAccessoryKey = 1599,
  MID_LockCommand = 1637,
  MID_UseCommandKey = 1632,
  MID_RepeatRate = 927,
  MID_Slow = 928,
  MID_Fast = 929,
  MID_GraphicsAndSound = 930,
  MID_Graphics = 1626,
  MID_Sound = 1627,
  MID_UseFullScreen = 931,
  MID_PlaySoundEffects = 932,
  MID_PlayMusic = 933,
  MID_PlayVoices = 934,
  MID_Quiet = 935,
  MID_Loud = 936,
  MID_ShowSubtitlesWithVoices = 937,
  MID_AlphaBlending = 938,
  MID_EnvironmentalEffects = 939,
  MID_GameSpeed = 1598,
  MID_ShowCheckpoints = 941,
  MID_AutoSaveDemoOnConquer = 942,
  MID_AutoSaveDemoOnDie = 943,
  MID_AutoSaveEditedRoom = 1441,
  MID_ItemTips = 945,
  MID_Personal = 946,
  MID_Name = 947,
  MID_Email = 948,
  MID_CaravelNetName = 949,
  MID_CaravelNetKey = 950,
  MID_RequestingKey = 951,
  MID_KeySent = 952,
  MID_NotRegistered = 953,
  MID_RegistrationExpired = 954,
  MID_CaravelNetUnreachable = 955,
  MID_GetKeyCommand = 956,
  MID_DefineAllKeys = 957,
  MID_InvalidCommandKey = 958,
  MID_EmptyNameError = 959,
  MID_RequestNewKey = 960,
  MID_UploadScores = 961,
  MID_ConnectToInternet = 962,
  MID_HaltDemoUploadPrompt = 963,
  MID_Gamma = 1226,
  MID_QuickCombat = 1382,
  MID_DefaultDesktop = 1628,
  MID_DefaultLaptop = 1629,
  MID_DefaultKeyCommandsPrompt = 1631,
  MID_DisableMouseMovement = 1735,
  MID_NoFocusPlaysMusic = 1746,

  //Messages from Speech.uni:
  MID_CustomizeCharacter = 964,
  MID_Graphic = 965,
  MID_IsVisible = 966,
  MID_AddCommand = 967,
  MID_DeleteCommand = 968,
  MID_DeleteCommandPrompt = 969,
  MID_AddScriptCommand = 970,
  MID_AddSound = 971,
  MID_RemoveSound = 972,
  MID_Action = 973,
  MID_Appear = 974,
  MID_AppearAt = 975,
  MID_MoveTo = 976,
  MID_FaceDirection = 977,
  MID_StrikeOrbAt = 978,
  MID_WaitTurns = 1388,
  MID_WaitForItem = 1583,
  MID_WaitForEvent = 979,
  MID_WaitForEntity = 980,
  MID_WaitWhileEntity = 981,
  MID_WaitForDoorTo = 982,
  MID_WaitForTurn = 983,
  MID_WaitForPlayerToFace = 985,
  MID_WaitForPlayerToMove = 1284,
  MID_WaitForPlayerToTouchMe = 1334,
  MID_WaitForOpenMove = 1521,
  MID_Speech = 986,
  MID_FlushSpeech = 987,
  MID_Question = 988,
  MID_SetMusic = 989,
  MID_Imperative = 990,
  MID_Equipment = 1574,
  MID_Label = 991,
  MID_GoTo = 992,
  MID_EachAttack = 1534,
  MID_EachDefend = 1535,
  MID_EachUse = 1581,
  MID_Disappear = 993,
  MID_TurnIntoMonster = 994,
  MID_EndScript = 995,
  MID_EndScriptOnExit = 996,
  MID_GenerateEntity = 1609,
  MID_On = 997,
  MID_Off = 998,
  MID_Open = 999,
  MID_Close = 1000,
  MID_NoTurning = 1001,
  MID_SingleStep = 1002,
  MID_Player = 1003,
  MID_Monster = 1004,
  MID_NPC = 1005,
  MID_PlayerDouble = 1006,
  MID_Self = 1007,
  MID_Event = 1008,
  MID_AccessoryUsed = 1509,
  MID_AllBrainsRemoved = 1510,
  MID_AllMonstersKilled = 1009,
  MID_AllTarRemoved = 1010,
  MID_AllTrapdoorsRemoved = 1026,
  MID_BombExploded = 1011,
  MID_BumpedLockedDoor = 1413,
  MID_CrumblyWallDestroyed = 1012,
  MID_CutBriar = 1511,
  MID_NoEnemyDefense = 1601,
  MID_AttackFirst = 1604,
  MID_AttackLast = 1723,
  MID_DropTrapdoors = 1686,
  MID_MoveIntoSwords = 1687,
  MID_PushObjects = 1688,
  MID_EvilEyeWoke = 1015,
  MID_FuseBurning = 1016,
  MID_GoblinAttacks = 1353,
  MID_HitObstacle = 1018,
  MID_ItemUsed = 1512,
  MID_MirrorShattered = 1168,
  MID_MoneyDoorOperated = 1513,
  MID_MoneyDoorLocked = 1747,
  MID_MonsterBurned = 1169,
  MID_MonsterEngaged = 1518,
  MID_MonsterStabbed = 1019,
  MID_MonsterPieceStabbed = 1020,
  MID_MudBabyFormed = 1021,
  MID_MudGrew = 1022,
  MID_ObjectBuilt = 1192,
  MID_ObjectFell = 1170,
  MID_PlayerBurned = 1691,
  MID_PlayerFrozen = 1171,
  MID_PlayerHitsOrb = 1023,
  MID_ItemHitsOrb = 1024,
  MID_LightToggled = 1172,
  MID_MonsterHitsOrb = 1025,
  MID_PlayerJumped = 1514,
  MID_ReceivedEquipment = 1515,
  MID_ReceivedKey = 1516,
  MID_Scared = 1027,
  MID_StepOnScroll = 1517,
  MID_SnakeDiedFromTruncation = 1029,
  MID_Splash = 1174,
  MID_PlayerSwingsSword = 1202,
  MID_TarBabyFormed = 1030,
  MID_TarDestroyed = 1031,
  MID_TarGrew = 1032,
  MID_TrapDoorRemoved = 1033,
  MID_PressurePlateActivated = 1036,
  MID_PressurePlateReleased = 1037,
  MID_TokenToggled = 1175,
  MID_BriarExpanded = 1404,
  MID_OrbDamaged = 1311,
  MID_KnockOpenedDoor = 1741,
  MID_DoorLocked = 1742,
  MID_TurnsToWait = 1038,
  MID_WaitUntilTurn = 1301,
  MID_SpeechDelay = 1039,
  MID_Speaker = 1040,
  MID_None = 1041,
  MID_Custom = 1042,
  MID_Mood = 1043,
  MID_Normal = 1044,
  MID_Happy = 1045,
  MID_Aggressive = 1046,
  MID_Nervous = 1047,
  MID_Striking = 1048,
  MID_DialogText = 1049,
  MID_At = 1050,
  MID_Turns = 1051,
  MID_Beethro = 1052,
  MID_BeethroInDisguise = 1308,
  MID_Citizen1 = 1053,
  MID_Citizen2 = 1054,
  MID_Citizen3 = 1304,
  MID_Citizen4 = 1305,
  MID_GoblinKing = 1055,
  MID_Instructor = 1056,
  MID_MudCoordinator = 1057,
  MID_TarTechnician = 1058,
  MID_ImportSound = 1059,
  MID_ChooseDirection = 1060,
  MID_DisplaySpeech = 1061,
  MID_MusicType = 1062,
  MID_MusicDefault = 1639,
  MID_MusicCustom = 1283,
  MID_MusicQuiet = 1063,
  MID_MusicTitle = 1064,
  MID_MusicWinGame = 1065,
  MID_MusicExitGame = 1676,
  MID_MusicArchitects = 1677,
  MID_MusicBattle = 1678,
  MID_MusicBeneath = 1679,
  MID_MusicDreamer = 1680,
  MID_MusicGoblins = 1681,
  MID_MusicRedGuard = 1682,
  MID_MusicSeaside = 1683,
  MID_MusicSerpents = 1684,
  MID_MusicSlayer = 1685,
  MID_GelBabyFormed = 1359,
  MID_GelGrew = 1080,
  MID_If = 1081,
  MID_IfElse = 1082,
  MID_IfEnd = 1083,
  MID_GotoLevelEntrance = 1084,
  MID_VarSet = 1085,
  MID_WaitForVar = 1086,
  MID_VarNameText = 1087,
  MID_VarOperand = 1088,
  MID_VarAdd = 1089,
  MID_VarRemove = 1090,
  MID_VarAssign = 1091,
  MID_VarAssignText = 1092,
  MID_VarInc = 1093,
  MID_VarDec = 1094,
  MID_VarMultiplyBy = 1095,
  MID_VarDivideBy = 1096,
  MID_VarMod = 1360,
  MID_VarEquals = 1097,
  MID_VarEqualsText = 1098,
  MID_VarGreater = 1099,
  MID_VarLess = 1100,
  MID_VarLessThanOrEqual = 1749,
  MID_VarGreaterThanOrEqual = 1750,
  MID_VarInequal = 1751,
  MID_VarNameEmptyError = 1101,
  MID_VarNameDuplicationError = 1102,
  MID_VarNameSyntaxError = 1361,
  MID_DeleteVarPrompt = 1103,
  MID_CutScene = 1104,
  MID_SetPlayerAppearance = 1105,
  MID_SetNPCAppearance = 1520,
  MID_VarAppendText = 1106,
  MID_CutSceneIncrement = 1107,
  MID_MoveRel = 1108,
  MID_MoveRelX = 1109,
  MID_MoveRelY = 1110,
  MID_Vulnerable = 1111,
  MID_Invulnerable = 1112,
  MID_MissionCritical = 1113,
  MID_Safe = 1302,
  MID_Deadly = 1303,
  MID_SwordSafeToPlayer = 1307,
  MID_Die = 1182,
  MID_WaitForDefeat = 1421,
  MID_HideStatChanges = 1422,
  MID_ShowStatChanges = 1423,
  MID_NPCNoGhostDisplay = 1448,
  MID_NPCGhostDisplay = 1449,
  MID_NoRestartScriptOnRoomEntrance = 1469,
  MID_RestartScriptOnRoomEntrance = 1470,
  MID_MakeGlobal = 1573,
  MID_SetPlayerSword = 1115,
  MID_AnswerOption = 1181,
  MID_NPCKilled = 1183,
  MID_RemoveItem = 1194,
  MID_RemoveFLayerItem = 1592,
  MID_CharacterManagement = 1228,
  MID_Characters = 1229,
  MID_NewCharacterName = 1230,
  MID_AddCharacter = 1231,
  MID_Avatar = 1232,
  MID_CustomAvatar = 1235,
  MID_CharNameDuplicationError = 1236,
  MID_NameCharacterPrompt = 1237,
  MID_DeleteCharacterPrompt = 1238,
  MID_LoopSound = 1239,
  MID_AmbientSound = 1240,
  MID_AmbientSoundAt = 1241,
  MID_SoundEffect = 1670,
  MID_SoundSelectPrompt = 1242,
  MID_ImportSoundOption = 1243,
  MID_PlayVideo = 1251,
  MID_Autosave = 1440,
  MID_VideoSelectPrompt = 1252,
  MID_ImportVideo = 1255,
  MID_ImportVideoOption = 1253,
  MID_Tiles = 1285,
  MID_CustomTiles = 1286,
  MID_AnimationSpeed = 1503,
  MID_EditDefaultScript = 1507,
  MID_RenameVariablePrompt = 1309,
  MID_RenameCharacterPrompt = 1310,
  MID_VarRenameNotAllowed = 1408,
  MID_NPCIsUsingDefaultScript = 1519,
  MID_SkipEntranceDisplay = 1354,
  MID_TestSound = 1357,
  MID_ScoreCheckpoint = 1409,
  MID_AddRoomToMap = 1429,
  MID_VisualEffect = 1653,
  MID_Center = 1654,
  MID_Weapon = 1578,
  MID_Armor = 1579,
  MID_Accessory = 1580,
  MID_CommandScript = 1611,
  MID_EquipSwap = 1606,
  MID_EquipDestroy = 1607,
  MID_EquipSell = 1608,
  MID_EquipDisable = 1727,
  MID_EquipEnable = 1728,
  MID_Behavior = 1522,
  MID_BehaviorStandard = 1523,
  MID_BehaviorFaceTarget = 1524,
  MID_BehaviorFaceAwayFromTarget = 1530,
  MID_BehaviorAttackInFrontWithBackTurned = 1525,
  MID_BehaviorAttackInFront = 1526,
  MID_BehaviorAttackAdjacent = 1527,
  MID_BehaviorBeamAttack = 1528,
  MID_BehaviorBeamBlock = 1748,
  MID_BehaviorSurprisedBehind = 1529,
  MID_BehaviorGoblinWeakness = 1532,
  MID_BehaviorSerpentWeakness = 1533,
  MID_BehaviorMetal = 1575,
  MID_BehaviorLuckyGR = 1576,
  MID_DoubleXP = 1690,
  MID_BehaviorBriarCut = 1577,
  MID_DirectMovement = 1649,
  MID_NormalMovement = 1650,
  MID_SmarterMovement = 1651,
  MID_OmniMovement = 1652,
  MID_BloodSplatterEffect = 1655,
  MID_MudSplatterEffect = 1656,
  MID_TarSplatterEffect = 1657,
  MID_GelSplatterEffect = 1658,
  MID_SeepSplatterEffect = 1659,
  MID_GolemSplatterEffect = 1660,
  MID_SlayerSplatterEffect = 1661,
  MID_DebrisEffect = 1662,
  MID_SparkEffect = 1663,
  MID_ExplosionEffect = 1664,
  MID_SplashEffect = 1665,
  MID_SteamEffect = 1666,
  MID_SwirlEffect = 1667,
  MID_VerminEffect = 1668,
  MID_BoltEffect = 1673,
  MID_MonsterBiteEffect = 1671,
  MID_ParryEffect = 1672,
  MID_JitterEffect = 1674,
  MID_StrongHitEffect = 1675,
  MID_EquipEffect = 1689,
  MID_FullRoomReveal = 1726,
  MID_CustomNPCID = 1732,
  MID_EquipQueryStatus = 1736,
  MID_RunOnCombat = 1737,
  MID_PauseOnCombat = 1738,
  MID_NPCCustomTileSizeWarning = 1740,

  //Messages from Stats.uni:
  MID_VarHP = 1536,
  MID_VarAtk = 1537,
  MID_VarDef = 1538,
  MID_VarGold = 1539,
  MID_VarXP = 1540,
  MID_VarYKey = 1541,
  MID_VarGKey = 1542,
  MID_VarBKey = 1543,
  MID_VarSKey = 1544,
  MID_VarSword = 1545,
  MID_VarShield = 1546,
  MID_VarAccessory = 1547,
  MID_VarX = 1548,
  MID_VarY = 1549,
  MID_VarO = 1550,
  MID_VarMonsterHP = 1551,
  MID_VarMonsterAtk = 1552,
  MID_VarMonsterDef = 1553,
  MID_VarMonsterGold = 1554,
  MID_VarMonsterXP = 1555,
  MID_VarMonsterColor = 1556,
  MID_VarMonsterSword = 1557,
  MID_VarMonsterX = 1558,
  MID_VarMonsterY = 1559,
  MID_VarMonsterO = 1560,
  MID_VarMonsterParamX = 1593,
  MID_VarMonsterParamY = 1594,
  MID_VarMonsterParamW = 1595,
  MID_VarMonsterParamH = 1596,
  MID_VarMonsterParamF = 1597,
  MID_VarMonsterHPMult = 1561,
  MID_VarMonsterATKMult = 1562,
  MID_VarMonsterDEFMult = 1563,
  MID_VarMonsterGRMult = 1564,
  MID_VarMonsterXPMult = 1565,
  MID_VarItemMult = 1566,
  MID_VarItemHPMult = 1567,
  MID_VarItemATKMult = 1568,
  MID_VarItemDEFMult = 1569,
  MID_VarItemGRMult = 1570,
  MID_VarMyMonsterHPMult = 1753,
  MID_VarMyMonsterATKMult = 1754,
  MID_VarMyMonsterDEFMult = 1755,
  MID_VarMyMonsterGRMult = 1756,
  MID_VarMyMonsterXPMult = 1757,
  MID_VarMyItemMult = 1758,
  MID_VarMyItemHPMult = 1759,
  MID_VarMyItemATKMult = 1760,
  MID_VarMyItemDEFMult = 1761,
  MID_VarMyItemGRMult = 1762,
  MID_VarHotTile = 1602,
  MID_VarExplosion = 1603,
  MID_TotalMoves = 1571,
  MID_TotalTime = 1572,
  MID_VarEnemyHP = 1612,
  MID_VarEnemyAtk = 1613,
  MID_VarEnemyDef = 1614,
  MID_VarEnemyGold = 1615,
  MID_VarEnemyXP = 1616,
  MID_VarWeaponATK = 1617,
  MID_VarWeaponDEF = 1618,
  MID_VarWeaponGR = 1619,
  MID_VarArmorATK = 1620,
  MID_VarArmorDEF = 1621,
  MID_VarArmorGR = 1622,
  MID_VarAccessoryATK = 1623,
  MID_VarAccessoryDEF = 1624,
  MID_VarAccessoryGR = 1625,

  //Messages from Steam.uni:
  MID_SteamAPIInitError = 1743,
  MID_SteamErrorAttemptingToImportOfficialHold = 1744,

  //Messages from TitleScreen.uni:
  MID_TitleNewGame = 1116,
  MID_TitleContinue = 1117,
  MID_TitleRestore = 1118,
  MID_TitleSettings = 1119,
  MID_TitleDemo = 1120,
  MID_TitleHelp = 1121,
  MID_TitleBuild = 1122,
  MID_TitlePlayer = 1123,
  MID_TitleTutorial = 1124,
  MID_TitleWhere = 1125,
  MID_TitleQuit = 1126,
  MID_TitleMainMenu = 1127,
  MID_TitlePlayMenu = 1128,
  MID_TitleChat = 1467,
  MID_NewGameTip = 1129,
  MID_ContinueTip = 1130,
  MID_RestoreTip = 1131,
  MID_SettingsTip = 1132,
  MID_HelpTip = 1133,
  MID_DemoTip = 1134,
  MID_QuitTip = 1135,
  MID_BuildTip = 1136,
  MID_TutorialTip = 1137,
  MID_WhoTip = 1138,
  MID_WhereTip = 1139,
  MID_MainMenuTip = 1140,
  MID_PlayMenuTip = 1141,
  MID_BuyNowTip = 1142,
  MID_ChatTip = 1468,
  MID_InvalidCaravelNetKey = 1195,
  MID_UnsentCaravelNetProgress = 1196,

  //Messages from Weather.uni:
  MID_WeatherTitle = 1143,
  MID_WeatherButton = 1144,
  MID_Outside = 1145,
  MID_Lightning = 1146,
  MID_Clouds = 1147,
  MID_Sunshine = 1148,
  MID_AmbientLight = 1149,
  MID_Fog = 1150,
  MID_Snow = 1151,
  MID_LightCrossfade = 1278,

  MID_END_UNUSED
};

#endif //...#ifndef _MIDS_H_
