#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	eCharacter echLocal_57 = CHAR_MICHAEL;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	eCharacter echLocal_61 = CHAR_MICHAEL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	BOOL bLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	BOOL bLocal_79 = 0;
	BOOL bLocal_80 = 0;
	BOOL bLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_52 = 2;
	unk_0x51CC1333A10C4E09();

	if (unk_0x96CFB880BAC634CE(32))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		func_107();
	
		switch (iLocal_53)
		{
			case 0:
				func_102();
				break;
		
			case 1:
				func_93();
				func_2();
				Global_98947 = false;
				break;
		
			case 2:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0xCC
{
	iLocal_53 = 0;
	return;
}

void func_2() // Position - 0xD7
{
	eCharacter character;
	BOOL flag;
	int i;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	int num5;
	var unk2;
	var unk3;
	int num6;
	int j;
	BOOL flag2;
	int num7;
	int num8;
	BOOL flag3;

	if (bLocal_59)
		bLocal_59 = false;
	else
		iLocal_54 = iLocal_54 + 1;

	bLocal_58 = false;

	if (unk_0x76CD105BCAC6EB9F())
		character = CHAR_MULTIPLAYER;
	else
		character = _GET_CURRENT_PLAYER_CHARACTER();

	if (character != echLocal_57)
	{
		echLocal_57 = character;
		bLocal_58 = true;
		bLocal_65 = false;
		bLocal_66 = false;
		bLocal_73 = false;
		bLocal_79 = false;
	}

	if (echLocal_57 == _CHAR_NULL)
		return;

	flag = false;

	if (iLocal_54 == 6 && func_87(64) || iLocal_54 == 5 && unk_0x486FF5D06E9659F1(joaat("pilot_school")) > 0)
	{
		flag = true;
		bLocal_59 = true;
	}

	func_81();

	if (Global_98945 || Global_98946 && !func_78(0))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				func_77(echLocal_57, i);
			}
		
			Global_98945 = false;
		}
	}

	if (!flag)
	{
		if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || !unk_0x76CD105BCAC6EB9F() && !func_76(echLocal_57) || unk_0x3555462DB47B7AB1() || func_75() || unk_0xFD216000DC314A92() || unk_0x15CCE8886267624F() || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || Global_79537 || Global_98947 || bLocal_60)
		{
			bLocal_81 = true;
			iLocal_82 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_83 = unk_0x7E3F74F641EE6B27();
		
			return;
		}
	
		if (bLocal_81)
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_82 > 3000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_83, 3000)))
				bLocal_81 = false;
			else
				return;
	}

	if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - iLocal_55 > 2000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_56, 2000)) || bLocal_58)
	{
		if (iLocal_54 >= 8)
		{
			iLocal_54 = 0;
			iLocal_55 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_56 = unk_0x7E3F74F641EE6B27();
		}
	
		num6 = 1;
	
		if (bLocal_58)
			num6 = 8;
	
		for (j = 0; j < num6; j = j + 1)
		{
			flag2 = true;
		
			if (bLocal_58)
				num5 = j;
			else
				num5 = iLocal_54;
		
			func_74(echLocal_57, num5, &unk, &num4);
		
			if (unk_0x76CD105BCAC6EB9F())
				num = func_73(num4, -1);
			else if (num5 == 0)
				num = Global_114135.f_2367.f_539.f_2387[echLocal_57];
			else
				unk_0xDF7F16323520B858(unk, &num, -1);
		
			num3 = num;
			num = func_72(num, 0, 100);
		
			if (func_59(echLocal_57, num5, num, &num2))
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_57(num4, num2, -1, 1);
				}
				else if (num5 == 0)
				{
					if (Global_114135.f_2367.f_539.f_2387[echLocal_57] == 0)
						flag2 = false;
				
					Global_114135.f_2367.f_539.f_2387[echLocal_57] = num2;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, num2, 1);
				}
			
				if (num2 > func_55(echLocal_57, num5, -1))
				{
					if (unk_0x76CD105BCAC6EB9F())
						if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19))
							flag2 = false;
					else if (!Global_114135.f_9089 && !_IS_MISSION_REPEAT_ACTIVE(false) || !IS_BIT_SET(Global_114135.f_9089.f_2[27 /*3*/], 2))
						flag2 = false;
				
					num7 = num2;
					num8 = num7 - (num7 % func_53(echLocal_57, num5));
				
					if (num7 % func_53(echLocal_57, num5) >= 0)
						num8 = num8 + func_53(echLocal_57, num5);
				
					if (num7 >= num8)
						num7 = num8;
					else
						num7 = num8 - func_53(echLocal_57, num5);
				
					if (num2 > num7)
						flag2 = false;
				
					if (func_47())
						flag2 = false;
				
					if (flag2)
					{
						if (!bLocal_58)
						{
							if (unk_0x76CD105BCAC6EB9F())
							{
								if (func_46(117, -1) == 0)
								{
									if (!unk_0x4C705AAF75363287() && func_9())
									{
										_DISPLAY_HELP_TEXT("STAT_HELP2" /*~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game.*/, -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
						
							bLocal_60 = true;
							iLocal_63 = num2 - num;
							iLocal_63 = iLocal_63 + (num % func_53(echLocal_57, num5));
							iLocal_64 = num2;
							echLocal_61 = echLocal_57;
							iLocal_62 = num5;
						}
					}
				
					if (num2 >= 100)
					{
						if (func_3(echLocal_57, num5, &unk2))
						{
							if (echLocal_57 == CHAR_MICHAEL)
							{
								unk_0xDF7F16323520B858(joaat("SP0_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (echLocal_57 == CHAR_FRANKLIN)
							{
								unk_0xDF7F16323520B858(joaat("SP1_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else if (echLocal_57 == CHAR_TREVOR)
							{
								unk_0xDF7F16323520B858(joaat("SP2_TOTAL_PLAYING_TIME"), &unk3, -1);
								unk_0x1164A75E490C27B6(unk2, unk3, 1);
							}
							else
							{
								echLocal_57 == CHAR_MULTIPLAYER;
							}
						}
					}
				}
			
				func_77(echLocal_57, num5);
			}
			else if (num2 < num3)
			{
				flag3 = true;
			
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_57(num4, num2, -1, 1);
				}
				else if (num5 == 0)
				{
					Global_114135.f_2367.f_539.f_2387[echLocal_57] = num2;
					flag3 = false;
				}
				else
				{
					unk_0x1164A75E490C27B6(unk, num2, 1);
				}
			
				if (flag3)
					func_77(echLocal_57, num5);
			}
		}
	}
	else
	{
		bLocal_59 = true;
	}

	return;
}

BOOL func_3(eCharacter echParam0, int iParam1, var uParam2) // Position - 0x5CA
{
	*uParam2 = joaat("LAST_PLAYING_TIME");

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}

	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7B2
{
	int num;

	num = func_5(iParam0, iParam2);

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, iParam3);

	return;
}

int func_5(int iParam0, int iParam1) // Position - 0x7D5
{
	return unk_0xD69CE161FE614531(2, iParam0, func_6(iParam1));
}

int func_6(int iParam0) // Position - 0x7EA
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
		if (num2 > -1)
		{
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
		}
	}

	return num;
}

int func_7() // Position - 0x81E
{
	return Global_1574926;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x82A
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_9() // Position - 0x841
{
	var unk;

	unk = unk_0x8034325BF6D6E41F();

	if (Global_1928988 == unk)
	{
		return Global_1928989;
	}
	else
	{
		Global_1928988 = unk;
		Global_1928989 = false;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (unk_0x834C960822A4683F() && IS_BIT_SET(Global_4718592.f_39, 19) || func_45(*Global_4718592.f_187633, true))
			return false;

	if (unk_0xC5D15A335232A15D() && unk_0xBE259DBA45F2996E() && !func_44(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_1928990 == 1)
		return false;

	if (Global_1928799 == 1)
		return false;

	if (func_43())
		return false;

	if (unk_0xB2E86D4871B30979())
		return false;

	if (Global_1836677 == 1)
		return false;

	if (unk_0xF6D8C7059C3C2495())
		return false;

	if (Global_1057441)
		return false;

	if (IS_BIT_SET(Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_885, 16))
		return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (func_41())
		return false;

	if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2699084, 300000, false) == 1)
				{
					_STOPWATCH_DESTROY(&Global_2699082);
					func_34(3, -1);
				}
				else if (func_37(&Global_2699082, 7000, false) == 0)
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (func_33())
		return false;

	if (func_32())
		return false;

	if (func_30())
		return false;

	if (func_29())
		return false;

	if (func_28())
		return false;

	if (func_27())
		return false;

	if (unk_0x0721B5D4CF3ACD02())
		return false;

	if (unk_0x4D9174D8796EA622())
		return false;

	if (unk_0x5EA7A06A1491D450())
		if (func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_SNIPERRIFLE") || func_26(unk_0x4A8C381C258A124D()) == joaat("WEAPON_HEAVYSNIPER"))
			return false;

	if (unk_0x15CCE8886267624F())
		return false;

	if (func_25(8, -1))
		return false;

	if (func_24(12, -1))
		return false;

	if (unk_0x7B035E8A1D320F1B(19))
		return false;

	if (func_23())
		return false;

	if (func_22())
		return false;

	if (IS_BIT_SET(Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_885, 2))
		return false;

	if (Global_1836461)
		return false;

	if (Global_1836465)
		return false;

	if (Global_1836467)
		return false;

	if (Global_2672939.f_3770.f_39)
		return false;

	if (func_21(0))
		return false;

	if (func_20())
		return false;

	if (Global_2739811.f_4100)
		return false;

	if (Global_2672939.f_3636)
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), true, false))
		return false;

	if (func_18(unk_0x259BE71D8A81D4FA()))
		return false;

	if (Global_2672939.f_3770.f_39 == true)
		return false;

	if (Global_2685658.f_2847.f_26 == 1)
		return false;

	if (func_17(true))
		return false;

	if (func_15())
		return false;

	if (unk_0x7B035E8A1D320F1B(16))
		return false;

	if (func_14())
		return false;

	if (func_13())
		return false;

	if (unk_0x3273F980CC5E02CD())
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("FHU_HELP3" /*Shout through your headset to make the store clerk fill the bag with cash faster.*/))
			return false;

	if (IS_BIT_SET(Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_885, 6))
		return false;

	if (func_10(unk_0x259BE71D8A81D4FA()))
		return false;

	Global_1928989 = true;
	return true;
}

BOOL func_10(Player plParam0) // Position - 0xBA6
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_372, 26);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xBCD
{
	return -1;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xBD6
{
	unk_0x39DCBE5519BD783A(message);
	return unk_0x7EBCD400E7DE179C(0);
}

BOOL func_13() // Position - 0xBE9
{
	return Global_2672939.f_1761.f_701 != 0;
}

BOOL func_14() // Position - 0xBFD
{
	return Global_2672939.f_2914.f_582;
}

BOOL func_15() // Position - 0xC0F
{
	return func_16();
}

BOOL func_16() // Position - 0xC1B
{
	return Global_1668409.f_40 == 3;
}

BOOL func_17(BOOL bParam0) // Position - 0xC2B
{
	if (bParam0)
		return Global_23831.f_4 && Global_23831.f_104 == 4;

	return Global_23831.f_4;
}

BOOL func_18(int iParam0) // Position - 0xC54
{
	return IS_BIT_SET(Global_1882780[iParam0 /*149*/].f_17, 0);
}

BOOL _NETWORK_IS_PLAYER_VALID(int player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xC68
{
	int num;

	num = player;

	if (num != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (num == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[num /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_20() // Position - 0xCC8
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0xCE5
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_22() // Position - 0xD3C
{
	return Global_1673654.f_112;
}

BOOL func_23() // Position - 0xD4A
{
	return Global_2672939.f_2590[0 /*80*/].f_1 != 0;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0xD60
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1673654.f_137[iParam1])
					return true;
			
				if (Global_1673654.f_170[iParam1])
					return true;
			}
			break;
	
		default:
			if (IS_BIT_SET(Global_1673654.f_1046, iParam0))
				return true;
		
			if (IS_BIT_SET(Global_1673654.f_1047, iParam0))
				return true;
			break;
	}

	return false;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xDC6
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673654.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673654.f_1048, iParam0);
}

int func_26(var uParam0) // Position - 0xDFE
{
	int unk;

	unk_0x23B29877D0BE9547(uParam0, &unk, 1);
	return unk;
}

BOOL func_27() // Position - 0xE12
{
	return Global_2684718.f_694;
}

BOOL func_28() // Position - 0xE21
{
	return IS_BIT_SET(Global_1048576.f_10, 13);
}

BOOL func_29() // Position - 0xE32
{
	return Global_2684718.f_693;
}

BOOL func_30() // Position - 0xE41
{
	if (func_31() == 1 || func_31() == 4)
		return true;

	return false;
}

int func_31() // Position - 0xE63
{
	return Global_1574633.f_18;
}

BOOL func_32() // Position - 0xE71
{
	if (func_31() == 3 || func_31() == 2)
		return true;

	return false;
}

BOOL func_33() // Position - 0xE93
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
		return true;

	return false;
}

void func_34(int iParam0, int iParam1) // Position - 0xEAD
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_7();

	if (unk_0x76CA59C648318506() == 0)
		return;

	switch (iParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, iParam1);
			num2 = func_35(iParam1);
			num = unk_0x38640D2193CB547F(num2);
			break;
	
		default:
			num2 = func_35(iParam1);
			num = unk_0x38640D2193CB547F(num2);
		
			if (!IS_BIT_SET(num, iParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&num, iParam0);
				unk_0x1A169A00A9C3A74E(num, iParam1);
			}
			break;
	}

	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_57(1304, 0, iParam1, 1);
			func_57(7236, 0, iParam1, 1);
			break;
	}

	return;
}

int func_35(int iParam0) // Position - 0xF8E
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_7();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xFF1
{
	uParam0->f_1 = 0;
	return;
}

int func_37(var uParam0, int iParam1, BOOL bParam2) // Position - 0xFFE
{
	if (iParam1 == -1)
		return 1;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return 1;
	}

	return 0;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1068
{
	if (pStopwatch->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = unk_0x7E3F74F641EE6B27();
			else
				*pStopwatch = unk_0x0728E77B2BF91D54();
		else
			*pStopwatch = unk_0x1DD05E817C89C737();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x10AD
{
	int num;
	int num2;

	if (iParam1 == -1)
		iParam1 = func_7();

	num = func_35(iParam1);
	num2 = unk_0x38640D2193CB547F(num);
	return IS_BIT_SET(num2, iParam0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x10D6
{
	var unk;

	if (Global_153015 == 2)
		return true;
	else if (Global_153015 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_28, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_28, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_28, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_41() // Position - 0x118E
{
	return Global_1575084;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x119A
{
	return Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_193 != 0;
}

BOOL func_43() // Position - 0x11B1
{
	return Global_2708409;
}

BOOL func_44(int iParam0) // Position - 0x11BD
{
	return IS_BIT_SET(Global_2657991[iParam0 /*467*/].f_324.f_3, 13);
}

BOOL func_45(int iParam0, BOOL bParam1) // Position - 0x11D6
{
	if (iParam0 == 93)
		if (bParam1)
			if (unk_0x1864096A95E36EBA(unk_0xB6B621402486C3E4()) == 2)
				return true;
		else
			return true;

	return false;
}

int func_46(int iParam0, int iParam1) // Position - 0x1202
{
	int num;
	int num2;

	num = func_5(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(num, &num2, -1))
		return num2;

	return 0;
}

BOOL func_47() // Position - 0x1226
{
	if (!func_51(true))
		return false;

	if (func_48())
		return false;

	return Global_1941489;
}

BOOL func_48() // Position - 0x124A
{
	return func_49(unk_0x259BE71D8A81D4FA());
}

BOOL func_49(int iParam0) // Position - 0x125A
{
	if (func_50(iParam0))
		if (func_50(Global_1887549[iParam0 /*611*/].f_10))
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;

	return false;
}

BOOL func_50(int iParam0) // Position - 0x128F
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_51(BOOL bParam0) // Position - 0x12B1
{
	return func_52(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_52(int iParam0, BOOL bParam1) // Position - 0x12C3
{
	if (!func_50(iParam0))
		return false;

	if (!bParam1)
		if (func_49(iParam0))
			return false;

	return func_50(Global_1887549[iParam0 /*611*/].f_10);
}

int func_53(eCharacter echParam0, int iParam1) // Position - 0x12FB
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					return 20;
			
				case 1:
					return 20;
			
				case 3:
					return 20;
			
				case 2:
					return 20;
			
				case 4:
					return 20;
			
				case 5:
					return 20;
			
				case 6:
					return 20;
			
				case 7:
					return 20;
			}
			break;
	}

	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x150B
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

int func_55(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x1533
{
	if (!unk_0x76CD105BCAC6EB9F())
		if (func_56(14))
			return 100;

	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 47;
			
				case 3:
					return 22;
			
				case 2:
					return 21;
			
				case 4:
					return 54;
			
				case 5:
					return 31;
			
				case 6:
					return 79;
			
				case 7:
					return 81;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 51;
			
				case 3:
					return 46;
			
				case 2:
					return 49;
			
				case 4:
					return 71;
			
				case 5:
					return 19;
			
				case 6:
					return 24;
			
				case 7:
					return 21;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 23;
			
				case 3:
					return 28;
			
				case 2:
					return 79;
			
				case 4:
					return 31;
			
				case 5:
					return 82;
			
				case 6:
					return 69;
			
				case 7:
					return 49;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_73(1225, iParam2);
			
				case 3:
					return func_73(1231, iParam2);
			
				case 2:
					return func_73(1227, iParam2);
			
				case 4:
					return func_73(1230, iParam2);
			
				case 5:
					return func_73(1229, iParam2);
			
				case 6:
					return func_73(1226, iParam2);
			
				case 7:
					return func_73(1228, iParam2);
			}
			break;
	}

	return 0;
}

BOOL func_56(int iParam0) // Position - 0x1779
{
	return Global_44181 == iParam0;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1787
{
	int num;

	if (iParam0 != 15468)
	{
		num = func_58(iParam0, iParam2);
	
		if (num != 0)
			unk_0x1164A75E490C27B6(num, iParam1, iParam3);
	}

	return;
}

int func_58(int iParam0, int iParam1) // Position - 0x17B5
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(iParam1));
}

BOOL func_59(eCharacter echParam0, int iParam1, int iParam2, var uParam3) // Position - 0x17CA
{
	*uParam3 = func_60(echParam0, iParam1, false, -1);

	if (*uParam3 > iParam2)
		return true;

	return false;
}

int func_60(eCharacter echParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x17EC
{
	float value;
	float num;
	int num2;
	int value2;
	int num3;
	int num4;
	int value3;
	int i;
	int num5;
	int num6;
	int num7;
	int num8;
	float num9;

	num2 = 0;

	switch (iParam1)
	{
		case 0:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_73(64, iParam3));
			}
			break;
	
		case 1:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_RUNNING"), &num, -1);
				value = (num - Global_114135.f_2367.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_RUNNING"), &num, -1);
				value = (num - Global_114135.f_2367.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_RUNNING"), &num, -1);
				value = (num - Global_114135.f_2367.f_539.f_2355[echParam0]) / 175f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_70(20, iParam3) / 175f;
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_SWIMMING")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(func_58(50, iParam3)));
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_BICYCLE")));
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + SYSTEM::TO_FLOAT(func_66(func_58(47, iParam3)));
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (4f * Global_262145.f_23918 * (float)func_73(7237, -1));
		
			if (echParam0 == CHAR_MULTIPLAYER)
				value = value * 0.25f;
			break;
	
		case 3:
			if (echParam0 == CHAR_MICHAEL)
			{
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				value = SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_UNDERWATER"))) / 30f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_65(func_58(52, iParam3))) / 30f;
				func_67(&value);
			}
			break;
	
		case 2:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_UNARMED_HITS"), &value2, -1);
				value = SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2359[echParam0]) / 20f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = SYSTEM::TO_FLOAT(func_73(1500, iParam3)) / 20f;
				func_67(&value);
			}
			break;
	
		case 4:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_NUMBER_NEAR_MISS"), &value2, -1);
				value = value + (SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2363[echParam0]) / 50f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_73(113, iParam3) / 50;
				func_67(&value);
			}
			break;
	
		case 5:
			if (echParam0 == CHAR_MICHAEL)
				value = SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_FRANKLIN)
				value = SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_TREVOR)
				value = SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f;
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = SYSTEM::TO_FLOAT(func_66(func_58(43, iParam3))) / 10f;
		
			if (echParam0 == CHAR_MICHAEL)
				value = value + (SYSTEM::TO_FLOAT(func_66(joaat("SP0_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_FRANKLIN)
				value = value + (SYSTEM::TO_FLOAT(func_66(joaat("SP1_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_TREVOR)
				value = value + (SYSTEM::TO_FLOAT(func_66(joaat("SP2_TIME_DRIVING_HELI"))) / 10f);
			else if (echParam0 == CHAR_MULTIPLAYER)
				value = value + (SYSTEM::TO_FLOAT(func_66(func_58(45, iParam3))) / 10f);
		
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_PLANE_LANDINGS"), &value2, -1);
				value = value + SYSTEM::TO_FLOAT(value2);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_73(61, iParam3);
				func_67(&value);
			}
		
			if (echParam0 == CHAR_MULTIPLAYER)
				if (IS_BIT_SET(Global_1575009, 15))
					value = 100f;
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				num3 = func_64(echParam0, 0);
			
				if (echParam0 == CHAR_TREVOR)
					if (num3 == 3)
						value = value + 10f;
					else if (num3 == 2)
						value = value + 7f;
					else if (num3 == 1)
						value = value + 5f;
				else if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 1);
			
				if (echParam0 == CHAR_TREVOR)
					if (num3 == 3)
						value = value + 10f;
					else if (num3 == 2)
						value = value + 7f;
					else if (num3 == 1)
						value = value + 5f;
				else if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 2);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 3);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 6);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 4);
			
				if (num3 == 3)
					value = value + 5f;
				else if (num3 == 2)
					value = value + 3f;
				else if (num3 == 1)
					value = value + 2f;
			
				num3 = func_64(echParam0, 5);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 7);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 8);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			
				num3 = func_64(echParam0, 11);
			
				if (num3 == 3)
					value = value + 12f;
				else if (num3 == 2)
					value = value + 9f;
				else if (num3 == 1)
					value = value + 7f;
			}
			break;
	
		case 7:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP0_DIST_WALK_ST"), &num, -1);
				value = (num - Global_114135.f_2367.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP1_DIST_WALK_ST"), &num, -1);
				value = (num - Global_114135.f_2367.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0x2F0966A034F5ADC6(joaat("SP2_DIST_WALK_ST"), &num, -1);
				value = (num - Global_114135.f_2367.f_539.f_2367[echParam0]) / 45f;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = func_70(19, iParam3) / 45f;
			}
		
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_KILLS_STEALTH"), &value2, -1);
				value = value + ((SYSTEM::TO_FLOAT(value2 - Global_114135.f_2367.f_539.f_2371[echParam0]) / 2f) * 1.5f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value2 = func_73(34, iParam3);
				value = value + ((SYSTEM::TO_FLOAT(value2) / 2f) * 1.5f);
				func_67(&value);
			}
			break;
	
		case 6:
			if (echParam0 == CHAR_MICHAEL)
			{
				unk_0xDF7F16323520B858(joaat("SP0_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP0_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_114135.f_2367.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_114135.f_2367.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_FRANKLIN)
			{
				unk_0xDF7F16323520B858(joaat("SP1_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP1_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_114135.f_2367.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_114135.f_2367.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_TREVOR)
			{
				unk_0xDF7F16323520B858(joaat("SP2_HITS_MISSION"), &num4, -1);
				unk_0xDF7F16323520B858(joaat("SP2_HITS_PEDS_VEHICLES"), &value3, -1);
				value3 = value3 - num4;
				value = SYSTEM::TO_FLOAT(num4 - Global_114135.f_2367.f_539.f_2375[echParam0]) / 40f;
				value = value + (SYSTEM::TO_FLOAT(value3 - Global_114135.f_2367.f_539.f_2379[echParam0]) / 80f);
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value3 = func_73(172, iParam3);
				value = value + (SYSTEM::TO_FLOAT(value3) / 80f);
			}
		
			if (echParam0 == CHAR_MICHAEL || echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_TREVOR)
			{
				for (i = 0; i < 22; i = i + 1)
				{
					switch (func_63(i, echParam0))
					{
						case 3:
							num5 = num5 + 1;
							break;
					
						case 2:
							num6 = num6 + 1;
							break;
					
						case 1:
							num7 = num7 + 1;
							break;
					}
				}
			
				value = value + (float)num5 * 3;
				value = value + (float)num6 * 2;
				value = value + (float)num7 * 1;
			}
			else if (echParam0 == CHAR_MULTIPLAYER)
			{
				value = value + (float)func_62(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1;
				func_67(&value);
			}
			break;
	}

	if (iParam1 != 0)
	{
		num8 = func_55(echParam0, iParam1, iParam3);
		value = value + (float)num8;
		value = value + (float)func_61(echParam0, iParam1, iParam3);
	}

	if (bParam2)
	{
		num9 = value - (value % (float)func_53(echParam0, iParam1));
	
		if (value % (float)func_53(echParam0, iParam1) >= 0f)
			num9 = num9 + (float)func_53(echParam0, iParam1);
	
		if (value >= num9)
			value = num9;
		else
			value = num9 - (float)func_53(echParam0, iParam1);
	}

	num2 = SYSTEM::FLOOR(value);
	num2 = func_72(num2, 0, 100);
	return num2;
}

int func_61(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x250F
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0];
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 1:
					return func_73(72, iParam2);
			
				case 3:
					return func_73(74, iParam2);
			
				case 2:
					return func_73(73, iParam2);
			
				case 4:
					return func_73(75, iParam2);
			
				case 5:
					return func_73(76, iParam2);
			
				case 6:
					return func_73(77, iParam2);
			
				case 7:
					return func_73(78, iParam2);
			}
			break;
	}

	return 0;
}

int func_62(int iParam0) // Position - 0x261C
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDF7F16323520B858(num, &num2, -1))
		return num2;

	return 0;
}

int func_63(int iParam0, eCharacter echParam1) // Position - 0x263A
{
	return Global_114135.f_19151[echParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_64(eCharacter echParam0, int iParam1) // Position - 0x2656
{
	if (echParam0 < CHAR_MICHAEL || echParam0 > CHAR_TREVOR)
		return 0;

	return Global_114135.f_1992[echParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_65(int iParam0) // Position - 0x2684
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 86400);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 3600);
	num = num + (unk_0xE44C8536D6F264FC(iParam0) * 60);
	num = num + unk_0x77A7B5685F038D01(iParam0);
	return num;
}

int func_66(int iParam0) // Position - 0x26C7
{
	int num;

	num = 0;
	num = num + (unk_0x4F256B9F00ACB695(iParam0) * 1440);
	num = num + (unk_0xDF21396D0886D8F7(iParam0) * 60);
	num = num + unk_0xE44C8536D6F264FC(iParam0);
	return num;
}

var func_67(var uParam0) // Position - 0x26FA
{
	if (func_47())
	{
		if (func_68() < Global_262145.f_13138)
			if (*uParam0 + ((float)func_68() * Global_262145.f_13137) <= (float)Global_262145.f_13147)
				*uParam0 = *uParam0 + ((float)func_68() * Global_262145.f_13137);
	
		return *uParam0;
	}

	return *uParam0;
}

int func_68() // Position - 0x2754
{
	if (func_51(true))
		return Global_1845221[func_69() /*889*/].f_206.f_6;

	return 0;
}

int func_69() // Position - 0x277A
{
	return Global_1887549[unk_0x259BE71D8A81D4FA() /*611*/].f_10;
}

float func_70(int iParam0, int iParam1) // Position - 0x278F
{
	var unk;
	float num;

	unk = func_71(iParam0, iParam1);

	if (unk_0x2F0966A034F5ADC6(unk, &num, -1))
		return num;

	return 0f;
}

var func_71(int iParam0, int iParam1) // Position - 0x27B3
{
	return unk_0xD69CE161FE614531(1, iParam0, func_6(iParam1));
}

int func_72(int iParam0, int iParam1, int iParam2) // Position - 0x27C8
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_73(int iParam0, int iParam1) // Position - 0x27ED
{
	var unk;
	int num;

	if (iParam0 != 15468)
	{
		unk = func_58(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

void func_74(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x281C
{
	switch (echParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

BOOL func_75() // Position - 0x2A73
{
	if (!unk_0x76CD105BCAC6EB9F())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_76(eCharacter echParam0) // Position - 0x2A8F
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_77(eCharacter echParam0, int iParam1) // Position - 0x2A9B
{
	int value;
	float num;
	var unk;
	int num2;

	if (echParam0 != CHAR_MICHAEL || echParam0 != CHAR_FRANKLIN || echParam0 != CHAR_TREVOR || echParam0 != CHAR_MULTIPLAYER)
		return;

	func_74(echParam0, iParam1, &unk, &num2);

	if (unk_0x76CD105BCAC6EB9F())
		value = func_73(num2, -1);
	else
		unk_0xDF7F16323520B858(unk, &value, -1);

	switch (iParam1)
	{
		case 2:
			num = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(value) / 100f));
			unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), num, 1);
			break;
	
		case 7:
			if (unk_0x486FF5D06E9659F1(joaat("armenian3")) != 0 || unk_0x486FF5D06E9659F1(joaat("trevor3")) != 0)
			{
				Global_98946 = true;
			}
			else
			{
				num = 1f - (SYSTEM::TO_FLOAT(value) / 100f);
				unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), num);
				unk_0x92F9E3A242F41E98(unk_0x259BE71D8A81D4FA(), num);
				unk_0x048D90B19F701DC3(unk_0x259BE71D8A81D4FA(), num);
			}
			break;
	}

	return;
}

BOOL func_78(int iParam0) // Position - 0x2B87
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2BA9
{
	return func_80(iParam0, Global_44181);
}

BOOL func_80(int iParam0, int iParam1) // Position - 0x2BBA
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_81() // Position - 0x2D9B
{
	var unk;
	int num;

	num = 0;

	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	
		if (unk_0xFC8BFE4B41177C22(unk) && unk_0xD9F5E1FEFD1329E4(unk, 0) && unk_0xFD5C5BBD1FE92BB7(unk, -1, 0) == unk_0x4A8C381C258A124D() && unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(unk)) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(unk)))
			num = 1;
	}

	func_86(&unk, &num);
	func_85(&unk, &num);
	func_82();
	return;
}

void func_82() // Position - 0x2E3A
{
	int num;
	int value;
	int num2;

	if (!bLocal_79)
	{
		if (echLocal_57 == CHAR_MULTIPLAYER)
		{
			if (Global_2359296[func_84() /*5571*/].f_681.f_7)
			{
				iLocal_76 = func_65(func_58(148, -1));
				Global_2359296[func_84() /*5571*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_76 = Global_2359296[func_84() /*5571*/].f_681.f_6;
			}
		
			if (Global_2359296[func_84() /*5571*/].f_681.f_4 == 0)
				Global_2359296[func_84() /*5571*/].f_681.f_4 = unk_0x39D1D336459711BE();
		
			iLocal_78 = Global_2359296[func_84() /*5571*/].f_681.f_4;
			iLocal_77 = Global_2359296[func_84() /*5571*/].f_681.f_5;
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_2292[echLocal_57])
			{
				switch (echLocal_57)
				{
					case CHAR_MICHAEL:
						iLocal_76 = func_65(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_FRANKLIN:
						iLocal_76 = func_65(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
				
					case CHAR_TREVOR:
						iLocal_76 = func_65(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
			
				Global_114135.f_2367.f_539.f_2292[echLocal_57] = false;
			}
			else
			{
				iLocal_76 = Global_114135.f_2367.f_539.f_2288[echLocal_57];
			}
		
			if (Global_114135.f_2367.f_539.f_2280[echLocal_57] == 0)
				Global_114135.f_2367.f_539.f_2280[echLocal_57] = unk_0x39D1D336459711BE();
		
			iLocal_78 = Global_114135.f_2367.f_539.f_2280[echLocal_57];
			iLocal_77 = Global_114135.f_2367.f_539.f_2284[echLocal_57];
		}
	
		bLocal_79 = true;
		bLocal_80 = true;
	}
	else if (unk_0x39D1D336459711BE() - iLocal_78 > 86400)
	{
		bLocal_79 = false;
		bLocal_80 = false;
		iLocal_78 = unk_0x39D1D336459711BE();
		iLocal_77 = 0;
	
		if (echLocal_57 == CHAR_MULTIPLAYER)
			Global_2359296[func_84() /*5571*/].f_681.f_7 = 1;
		else
			Global_114135.f_2367.f_539.f_2292[echLocal_57] = true;
	}

	if (bLocal_80)
	{
		switch (echLocal_57)
		{
			case CHAR_MICHAEL:
				num = func_65(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_FRANKLIN:
				num = func_65(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_TREVOR:
				num = func_65(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_65(func_58(148, -1));
				break;
		}
	
		value = num - iLocal_76;
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 15f) - iLocal_77;
	
		if (num2 > 0)
		{
			func_83(echLocal_57, 4, num2);
			iLocal_77 = iLocal_77 + num2;
		}
	
		if (num > iLocal_76 + ((unk_0x91C8345B22D52DEC() / 1000) * 60))
			bLocal_80 = false;
	}

	if (echLocal_57 == CHAR_MULTIPLAYER)
	{
		Global_2359296[func_84() /*5571*/].f_681.f_4 = iLocal_78;
		Global_2359296[func_84() /*5571*/].f_681.f_5 = iLocal_77;
	}
	else
	{
		Global_114135.f_2367.f_539.f_2280[echLocal_57] = iLocal_78;
		Global_114135.f_2367.f_539.f_2284[echLocal_57] = iLocal_77;
	}

	return;
}

void func_83(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x30FC
{
	int num;
	int num2;

	switch (echParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case 3:
			num2 = 15468;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 15468)
			{
				num = func_73(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_57(num2, num, -1, 1);
			}
			break;
	}

	return;
}

int func_84() // Position - 0x31EA
{
	int num;

	num = 0;
	return num;
}

void func_85(var uParam0, var uParam1) // Position - 0x31F7
{
	BOOL flag;

	if (bLocal_73)
	{
		flag = true;
	
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && !unk_0x3F18810075C77D41(*uParam0))
		{
			flag = false;
		
			if (unk_0xDF93B3CFAC96698F(*uParam0) >= 53f)
			{
				func_83(echLocal_57, 4, 2);
				flag = true;
			}
		}
	
		if (flag)
		{
			bLocal_73 = false;
			uLocal_74 = unk_0x1DD05E817C89C737();
		
			if (unk_0x76CD105BCAC6EB9F())
				uLocal_75 = unk_0x7E3F74F641EE6B27();
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *uParam1 && unk_0xDF93B3CFAC96698F(*uParam0) < 20f && !unk_0x3F18810075C77D41(*uParam0))
	{
		if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_74 > 10000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_75, 10000)))
			bLocal_73 = true;
	}

	return;
}

void func_86(var uParam0, var uParam1) // Position - 0x32D2
{
	BOOL flag;
	var unk;

	flag = false;

	if (*uParam1)
	{
		if (bLocal_65)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_67 > 1500 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_68, 1500)))
				{
					uLocal_69 = unk_0x1DD05E817C89C737();
				
					if (unk_0x76CD105BCAC6EB9F())
						uLocal_70 = unk_0x7E3F74F641EE6B27();
				
					bLocal_66 = true;
				}
			
				bLocal_65 = false;
			}
		}
	
		if (bLocal_66)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (unk_0xD2A0543EC400E1A5(*uParam0))
				{
					if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_69 > 20 || !unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_69 == 0 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_70, 20)) || unk_0x76CD105BCAC6EB9F() && unk_0xCFF17EF1F3F6FF43(unk_0x7E3F74F641EE6B27(), uLocal_70))
					{
					}
					else
					{
						func_83(echLocal_57, 4, 1);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&unk, "Player landed on all wheels in ", 64);
					TEXT_LABEL_APPEND_INT(&unk, unk_0x1DD05E817C89C737() - uLocal_69, 64);
					TEXT_LABEL_APPEND_STRING(&unk, "ms", 64);
					flag = true;
				}
			}
			else
			{
				flag = true;
			}
		}
	
		if (!bLocal_65 && !bLocal_66)
		{
			if (!unk_0x76CD105BCAC6EB9F() && unk_0x1DD05E817C89C737() - uLocal_71 > 1000 || unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_72, 1000)))
			{
				if (unk_0x3F18810075C77D41(*uParam0))
				{
					if (!bLocal_65)
					{
						uLocal_67 = unk_0x1DD05E817C89C737();
					
						if (unk_0x76CD105BCAC6EB9F())
							uLocal_68 = unk_0x7E3F74F641EE6B27();
					
						bLocal_65 = true;
					}
				}
			}
		}
	}
	else if (bLocal_65 || bLocal_66)
	{
		flag = true;
	}

	if (flag)
	{
		uLocal_71 = unk_0x1DD05E817C89C737();
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_72 = unk_0x7E3F74F641EE6B27();
	
		bLocal_65 = false;
		bLocal_66 = false;
	}

	return;
}

BOOL func_87(int iParam0) // Position - 0x3490
{
	return Global_113220 && iParam0 != false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x34A1
{
	func_89();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_89() // Position - 0x34BA
{
	eCharacter character;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(unk_0x4A8C381C258A124D());
		
			if (func_76(character) && !func_56(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_76(Global_114135.f_2367.f_539.f_4321))
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
			
				Global_114135.f_2367.f_539.f_4323 = character;
				Global_114135.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114135.f_2367.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(var uParam0) // Position - 0x35B7
{
	eCharacter i;
	int num;

	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		num = unk_0x4B423FAA24E8ABF0(uParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == num)
				return i;
		}
	}

	return _CHAR_NULL;
}

int _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x35F4
{
	if (func_76(character))
		return func_92(character);
	else
		character != _CHAR_NULL;

	return 0;
}

int func_92(eCharacter echParam0) // Position - 0x3619
{
	return Global_2201[echParam0 /*29*/];
}

void func_93() // Position - 0x3628
{
	char* str;
	int num;

	if (bLocal_60)
	{
		if (echLocal_61 != echLocal_57)
		{
			bLocal_60 = false;
			return;
		}
	
		str = "CHAR_DEFAULT";
	
		switch (echLocal_61)
		{
			case 0:
				str = "CHAR_MICHAEL";
				break;
		
			case 1:
				str = "CHAR_FRANKLIN";
				break;
		
			case 2:
				str = "CHAR_TREVOR";
				break;
		
			case CHAR_MULTIPLAYER:
				num = func_96(unk_0x259BE71D8A81D4FA());
			
				if (num == 0)
					return;
				else
					str = unk_0x008C0EB38E4459EE(num);
				break;
		}
	
		unk_0xCCDB0041859B85A6("PS_UPDATE" /*~1~/100*/);
		unk_0x511D14ED2DA887E1(iLocal_64);
		unk_0x0AAAE599E05E67D2(func_95(iLocal_62), func_94(iLocal_62), iLocal_63, iLocal_64 - iLocal_63, 0, str, str);
		bLocal_81 = true;
		iLocal_82 = unk_0x1DD05E817C89C737() + 5000;
	
		if (unk_0x76CD105BCAC6EB9F())
			uLocal_83 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 5000);
	
		bLocal_60 = false;
	}

	return;
}

int func_94(int iParam0) // Position - 0x36EC
{
	switch (iParam0)
	{
		case 0:
			return 23;
	
		case 1:
			return 2;
	
		case 3:
			return 24;
	
		case 2:
			return 25;
	
		case 4:
			return 14;
	
		case 5:
			return 27;
	
		case 6:
			return 17;
	
		case 7:
			return 28;
	}

	return -1;
}

char* func_95(int iParam0) // Position - 0x376B
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /*Special capacity +*/;
	
		case 1:
			return "PSF_STAMINA" /*Stamina +*/;
	
		case 3:
			return "PSF_LUNG" /*Lung Capacity +*/;
	
		case 2:
			return "PSF_STRENGTH" /*Strength +*/;
	
		case 4:
			return "PSF_DRIVING" /*Driving +*/;
	
		case 5:
			return "PSF_FLYING" /*Flying +*/;
	
		case 6:
			return "PSF_SHOOTING" /*Shooting +*/;
	
		case 7:
			return "PSF_STEALTH" /*Stealth +*/;
	}

	return "ERROR";
}

int func_96(int iParam0) // Position - 0x37F5
{
	int num;

	num = func_99(iParam0);

	if (num == -1)
	{
		func_97(iParam0, true);
		return 0;
	}

	Global_1686278[num /*5*/].f_4 = 1;
	return Global_1686278[num /*5*/].f_2;
}

void func_97(int iParam0, BOOL bParam1) // Position - 0x382B
{
	if (!_NETWORK_IS_PLAYER_VALID(iParam0, false, true))
		return;

	if (func_99(iParam0) != -1)
		return;

	if (Global_1686441)
		if (iParam0 == Global_1686441.f_1)
			return;

	if (func_98(iParam0))
		return;

	if (Global_1686479 >= 32)
		return;

	Global_1686446[Global_1686479] = iParam0;
	Global_1686479 = Global_1686479 + 1;
	bParam1;
	return;
}

BOOL func_98(int iParam0) // Position - 0x3897
{
	int i;

	i = 0;

	for (i = 0; i < Global_1686479; i = i + 1)
	{
		if (Global_1686446[i] == iParam0)
			return true;
	}

	return false;
}

int func_99(int iParam0) // Position - 0x38C9
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(iParam0, false, true))
		return -1;

	if (Global_1686439 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1686439; i = i + 1)
	{
		if (Global_1686278[i /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1686278[i /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1686278[i /*5*/].f_2))
				return i;
		
			func_100(i);
			return -1;
		}
	}

	return -1;
}

void func_100(int iParam0) // Position - 0x3948
{
	var unk;
	var unk17;
	int num;
	int i;

	if (iParam0 >= Global_1686439)
		return;

	if (unk_0xCF3FA9D6B87D2277(Global_1686278[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CHAR_DEFAULT", 64);
	
		if (Global_1686278[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk17, unk_0x008C0EB38E4459EE(Global_1686278[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&unk17, &unk17, &unk, &unk);
		}
	
		unk_0x697995B2B26B6CD4(Global_1686278[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1686439; i = i + 1)
	{
		Global_1686278[num /*5*/] = { Global_1686278[i /*5*/] };
		num = num + 1;
	}

	func_101(&Global_1686278[num /*5*/]);
	Global_1686439 = Global_1686439 - 1;
	return;
}

void func_101(var uParam0) // Position - 0x39FD
{
	*uParam0 = 0;
	uParam0->f_1 = _INVALID_PLAYER_INDEX();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

void func_102() // Position - 0x3A2A
{
	float value;
	int num;

	if (unk_0xC5C8FC4D42BFD749() != 1)
		return;

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_106(unk_0x259BE71D8A81D4FA()))
			return;
	
		if (func_105() != 0)
			return;
	}

	if (unk_0x76CD105BCAC6EB9F())
		if (func_105() == 0)
			iLocal_52 = 1;
	else
		iLocal_52 = 0;

	if (!func_104())
		func_103();

	iLocal_54 = 0;
	iLocal_55 = 0;

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_56 = unk_0x7E3F74F641EE6B27();

	uLocal_71 = unk_0x1DD05E817C89C737();

	if (unk_0x76CD105BCAC6EB9F())
		uLocal_72 = unk_0x7E3F74F641EE6B27();

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!IS_BIT_SET(Global_2359296[func_84() /*5571*/].f_681.f_1274, 2))
		{
			value = SYSTEM::TO_FLOAT(func_73(193, -1)) / 20f;
			num = SYSTEM::FLOOR(value);
			num = func_72(num, 0, 100);
			func_83(3, 2, num);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2359296[func_84() /*5571*/].f_681.f_1274), 2);
		}
	}

	bLocal_58 = true;
	iLocal_53 = 1;
	return;
}

void func_103() // Position - 0x3B10
{
	int i;
	var unk;
	int num;
	int j;
	int k;
	var unk2;
	var unk3;

	if (unk_0x76CD105BCAC6EB9F())
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != 0)
			{
				func_74(3, i, &unk, &num);
				func_57(num, func_55(3, i, -1), -1, 1);
			}
		}
	
		func_4(0, 1, -1, 1);
		Global_98945 = true;
	}
	else
	{
		for (j = 0; j < 3; j = j + 1)
		{
			for (k = 0; k < 8; k = k + 1)
			{
				if (k != 0)
				{
					func_74(j, k, &unk2, &unk3);
					unk_0x1164A75E490C27B6(unk2, func_55(j, k, -1), 1);
				}
			}
		}
	
		Global_114135.f_2367.f_539.f_2387[0] = func_55(0, 0, -1);
		Global_114135.f_2367.f_539.f_2387[1] = func_55(1, 0, -1);
		Global_114135.f_2367.f_539.f_2387[2] = func_55(2, 0, -1);
		Global_114135.f_2367.f_539.f_2354 = 1;
		Global_98945 = true;
	}

	return;
}

BOOL func_104() // Position - 0x3C03
{
	if (unk_0x76CD105BCAC6EB9F())
		return true;

	return Global_114135.f_2367.f_539.f_2354;
}

int func_105() // Position - 0x3C26
{
	return Global_33087;
}

BOOL func_106(int iParam0) // Position - 0x3C31
{
	if (!func_50(iParam0))
		return false;

	return IS_BIT_SET(Global_2672939.f_1, iParam0);
}

void func_107() // Position - 0x3C50
{
	if (iLocal_53 != 0 && iLocal_52 != 2)
	{
		if (iLocal_52 == 0)
		{
			if (unk_0x76CD105BCAC6EB9F())
				iLocal_52 = 2;
		
			if (!func_104())
				iLocal_52 = 2;
		}
		else if (iLocal_52 == 1)
		{
			if (!unk_0x76CD105BCAC6EB9F() || !func_106(unk_0x259BE71D8A81D4FA()) || func_105() != 0)
				iLocal_52 = 2;
		}
	
		if (iLocal_52 == 2)
			iLocal_53 = 2;
	}

	return;
}

