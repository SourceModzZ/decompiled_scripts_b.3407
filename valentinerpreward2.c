#region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	BOOL bLocal_6 = 0;
	BOOL bLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	BOOL bLocal_32 = 0;
	int iLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

	sLocal_0 = "1.70.01";
	iLocal_20 = -1;
	iLocal_21 = -1;
	uLocal_25 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_28 = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_31 = 2f;
	unk_0xAECC5FA98C879D67(0);
	unk_0x51CC1333A10C4E09();
	uScriptParam_0 == uScriptParam_0;
	num = unk_0x1DD05E817C89C737() + 10000;

	while (unk_0x1DD05E817C89C737() < num)
	{
		SYSTEM::WAIT(0);
	}

	Global_1578043 = unk_0x70E57E9927B6BA58(sLocal_0);

	while (true)
	{
		if (func_67())
			func_65();
	
		if (unk_0x76CD105BCAC6EB9F() && Global_2693671.f_3)
		{
			func_64();
			func_60();
			func_57();
			func_52();
			func_40();
			func_29();
			func_20();
			func_5();
		}
	
		if (unk_0x834C960822A4683F())
			func_2();
		else
			func_1();
	
		SYSTEM::WAIT(0);
	}

	unk_0xBBC29EBE6E1A48FA();
	return;
}

void func_1() // Position - 0xCE
{
	if (unk_0xFC8BFE4B41177C22(uLocal_22))
		unk_0x51C8BEA2005931AB(&uLocal_22);

	return;
}

void func_2() // Position - 0xE5
{
	if (!Global_2684718.f_24)
		return;

	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), uLocal_25, uLocal_28, fLocal_31, 0, 1, 0))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 47, 1);
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 102, 1);
	}

	if (!unk_0xFC8BFE4B41177C22(uLocal_22))
	{
		uLocal_22 = unk_0x4E55EAB577C13329(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, 0, 0, 0);
		unk_0x5C96CEA06531AB03(uLocal_22, -42.2f);
		unk_0xC1DAC4DA85BB166D(uLocal_22, 0, 0);
		unk_0x33D2D42AC3E42D0B(uLocal_22, 1);
	}

	if (!unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
		if (func_4(uLocal_23, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_23, false, false);

	unk_0x66EFB3D6110055C4(0, 220, 1);
	unk_0x66EFB3D6110055C4(0, 221, 1);
	unk_0x66EFB3D6110055C4(0, 295, 1);
	unk_0x66EFB3D6110055C4(0, 294, 1);
	unk_0x66EFB3D6110055C4(0, 292, 1);
	unk_0x66EFB3D6110055C4(0, 293, 1);
	unk_0x66EFB3D6110055C4(0, 270, 1);
	unk_0x66EFB3D6110055C4(0, 273, 1);
	unk_0x66EFB3D6110055C4(0, 271, 1);
	unk_0x66EFB3D6110055C4(0, 272, 1);
	unk_0x66EFB3D6110055C4(0, 290, 1);
	unk_0x66EFB3D6110055C4(0, 291, 1);
	unk_0x66EFB3D6110055C4(0, 1, 1);
	unk_0x66EFB3D6110055C4(0, 2, 1);
	unk_0x66EFB3D6110055C4(0, 5, 1);
	unk_0x66EFB3D6110055C4(0, 6, 1);
	unk_0x66EFB3D6110055C4(0, 3, 1);
	unk_0x66EFB3D6110055C4(0, 4, 1);
	unk_0x66EFB3D6110055C4(0, 239, 1);
	unk_0x66EFB3D6110055C4(0, 240, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 63, 1);
	unk_0x66EFB3D6110055C4(0, 64, 1);
	unk_0x66EFB3D6110055C4(0, 62, 1);
	unk_0x66EFB3D6110055C4(0, 61, 1);
	unk_0x66EFB3D6110055C4(2, 193, 1);
	unk_0x66EFB3D6110055C4(2, 194, 1);
	unk_0x66EFB3D6110055C4(2, 192, 1);
	unk_0x66EFB3D6110055C4(2, 191, 1);
	unk_0x66EFB3D6110055C4(2, 189, 1);
	unk_0x66EFB3D6110055C4(2, 190, 1);
	unk_0x66EFB3D6110055C4(2, 188, 1);
	unk_0x66EFB3D6110055C4(2, 187, 1);
	unk_0x66EFB3D6110055C4(2, 195, 1);
	unk_0x66EFB3D6110055C4(2, 196, 1);
	unk_0x66EFB3D6110055C4(2, 197, 1);
	unk_0x66EFB3D6110055C4(2, 198, 1);
	unk_0x66EFB3D6110055C4(0, 218, 1);
	unk_0x66EFB3D6110055C4(0, 219, 1);
	unk_0x66EFB3D6110055C4(0, 266, 1);
	unk_0x66EFB3D6110055C4(0, 267, 1);
	unk_0x66EFB3D6110055C4(0, 30, 1);
	unk_0x66EFB3D6110055C4(0, 34, 1);
	unk_0x66EFB3D6110055C4(0, 35, 1);
	unk_0x66EFB3D6110055C4(0, 32, 1);
	unk_0x66EFB3D6110055C4(0, 33, 1);
	unk_0x66EFB3D6110055C4(0, 79, 1);
	unk_0x66EFB3D6110055C4(0, 80, 1);
	unk_0x66EFB3D6110055C4(0, 209, 1);
	unk_0x66EFB3D6110055C4(0, 210, 1);
	return;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x328
{
	if (unk_0x76CD105BCAC6EB9F() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = unk_0x7E3F74F641EE6B27();
		else
			*pStopwatch = unk_0x0728E77B2BF91D54();
	else
		*pStopwatch = unk_0x1DD05E817C89C737();

	pStopwatch->f_1 = 1;
	return;
}

BOOL func_4(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x365
{
	if (iParam2 == -1)
		return true;

	if (unk_0x76CD105BCAC6EB9F() && !bParam3)
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uParam0)) >= iParam2)
			return true;
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), uParam0)) >= iParam2)
		return true;

	return false;
}

void func_5() // Position - 0x3B8
{
	int num;
	int num2;

	if (unk_0x834C960822A4683F())
		return;

	if (func_19(unk_0x259BE71D8A81D4FA()) && func_9() == unk_0x259BE71D8A81D4FA() && _DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
	{
		num = unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), 419.2876f, 4815.4233f, -59.9983f, 0.4f, 0.5f, 2f, 0, 1, 0);
		num2 = func_7(unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()), 350.4359f, 50f);
	
		if (num && num2)
			if (unk_0x4D9174D8796EA622())
				if (!func_6(unk_0x4A8C381C258A124D(), joaat("SCRIPT_TASK_ACHIEVE_HEADING"), true))
					unk_0x2280392018BC0DD3(unk_0x4A8C381C258A124D(), 180f, 0);
	}

	return;
}

BOOL func_6(var uParam0, int iParam1, BOOL bParam2) // Position - 0x462
{
	int num;

	num = unk_0x9B5C1660CCDF7189(uParam0, iParam1);

	if (num == 1 || num == 0)
		return true;
	else if (!bParam2)
		if (num == 2 || num == 3)
			return true;

	return false;
}

int func_7(float fParam0, float fParam1, float fParam2) // Position - 0x4A8
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return 1;
	else if (fParam0 < num || fParam0 > num2)
		return 1;

	return 0;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x51D
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return true;

	return false;
}

Player func_9() // Position - 0x53E
{
	return func_10(unk_0x259BE71D8A81D4FA());
}

Player func_10(Player plParam0) // Position - 0x54E
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return plParam0;

	if (func_16(plParam0) != -1)
	{
		num = func_15(func_16(plParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (func_13(plParam0, false))
				return func_11(plParam0);
		
			return plParam0;
		}
		else if (num == 3)
		{
			return _INVALID_PLAYER_INDEX();
		}
	
		return Global_2657991[plParam0 /*467*/].f_324.f_11;
	}

	return _INVALID_PLAYER_INDEX();
}

Player func_11(Player plParam0) // Position - 0x5DD
{
	if (func_12(plParam0))
		return Global_1887549[plParam0 /*611*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_12(Player plParam0) // Position - 0x600
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_13(Player plParam0, BOOL bParam1) // Position - 0x622
{
	if (!func_12(plParam0))
		return false;

	if (!bParam1)
		if (func_14(plParam0))
			return false;

	return func_12(Global_1887549[plParam0 /*611*/].f_10);
}

BOOL func_14(Player plParam0) // Position - 0x65A
{
	if (func_12(plParam0))
		if (func_12(Global_1887549[plParam0 /*611*/].f_10))
			return Global_1887549[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

int func_15(int iParam0) // Position - 0x68F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	}

	return -1;
}

int func_16(Player plParam0) // Position - 0xBAB
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657991[plParam0 /*467*/].f_324.f_8;
		else if (Global_1575084 || Global_2635516.f_2981 && plParam0 == unk_0x259BE71D8A81D4FA() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657991[plParam0 /*467*/].f_324.f_8;

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0xC1A
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0xC7A
{
	return -1;
}

BOOL func_19(Player plParam0) // Position - 0xC83
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657991[plParam0 /*467*/].f_324.f_8 != -1)
				return func_15(Global_2657991[plParam0 /*467*/].f_324.f_8) == 9;

	return false;
}

void func_20() // Position - 0xCCA
{
	if (func_28(unk_0x259BE71D8A81D4FA()) && Global_2657991[unk_0x259BE71D8A81D4FA() /*467*/].f_324.f_11 == unk_0x259BE71D8A81D4FA())
	{
		func_26();
	
		if (bLocal_35 || !bLocal_34)
			_STOPWATCH_RESET(&uLocal_37, true, false);
	}
	else
	{
		func_25();
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_37))
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_37, 5000, true))
		{
			_STOPWATCH_DESTROY(&uLocal_37);
		
			if (bLocal_36)
			{
				bLocal_36 = false;
				Global_2696450 = false;
			}
		}
		else if (!bLocal_36)
		{
			if (!Global_2696450)
			{
				Global_2696450 = true;
				bLocal_36 = true;
				_STOPWATCH_RESET(&uLocal_37, true, false);
			}
		}
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xD62
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0xD6F
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (unk_0x76CD105BCAC6EB9F() && !useLocalTimer)
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *pStopwatch)) >= millis)
			return true;
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xDCD
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xE12
{
	return uParam0->f_1;
}

void func_25() // Position - 0xE1E
{
	bLocal_34 = false;
	bLocal_35 = false;
	iLocal_33 = 0;
	return;
}

void func_26() // Position - 0xE2F
{
	int i;
	int num;

	if (!bLocal_34)
	{
		num = iLocal_33 + 30;
	
		if (num >= 1932)
			num = 1931;
	
		for (i = iLocal_33; i <= num; i = i + 1)
		{
			if (IS_BIT_SET(Global_4547350[i /*26*/].f_13, 14))
			{
				if (func_27(Global_4547350[i /*26*/].f_15.f_2))
				{
					bLocal_35 = true;
					bLocal_34 = true;
					return;
				}
			}
		
			iLocal_33 = iLocal_33 + 1;
		}
	
		if (num == 1931)
			bLocal_34 = true;
	}

	return;
}

BOOL func_27(int iParam0) // Position - 0xEA1
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return false;
	}

	return true;
}

BOOL func_28(Player plParam0) // Position - 0xED0
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657991[plParam0 /*467*/].f_324.f_8 != -1)
				return func_15(Global_2657991[plParam0 /*467*/].f_324.f_8) == 24;

	return false;
}

void func_29() // Position - 0xF17
{
	if (bLocal_32)
		return;

	if (func_39(28272, -1))
	{
		bLocal_32 = true;
		return;
	}

	if (!func_38())
		return;

	if (func_32())
		_STAT_SET_PACKED_BOOL(28272, 1, -1);

	bLocal_32 = true;
	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0xF59
{
	if (iParam2 == -1)
		iParam2 = func_31();

	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
	return;
}

int func_31() // Position - 0xF77
{
	return Global_1574926;
}

BOOL func_32() // Position - 0xF83
{
	if (func_36(166, -1))
		return true;

	if (func_39(28287, -1))
		return true;

	if (IS_BIT_SET(func_33(12035, -1), 0))
		return true;

	if (IS_BIT_SET(Global_1976576[unk_0x259BE71D8A81D4FA() /*128*/].f_71.f_2, 0))
		return true;

	return false;
}

int func_33(int iParam0, int iParam1) // Position - 0xFD1
{
	var unk;
	int num;

	if (iParam0 != 15468)
	{
		unk = func_34(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

int func_34(int iParam0, int iParam1) // Position - 0x1000
{
	return unk_0xD69CE161FE614531(0, iParam0, func_35(iParam1));
}

int func_35(int iParam0) // Position - 0x1015
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_31();
	
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

BOOL func_36(int iParam0, int iParam1) // Position - 0x1049
{
	var unk;
	BOOL num;

	unk = func_37(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

var func_37(int iParam0, int iParam1) // Position - 0x106D
{
	return unk_0xD69CE161FE614531(10, iParam0, func_35(iParam1));
}

BOOL func_38() // Position - 0x1083
{
	if (Global_76640 && unk_0x486FF5D06E9659F1(joaat("appinternet")) > 0)
		return true;

	return false;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x10A7
{
	if (iParam1 == -1)
		iParam1 = func_31();

	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

void func_40() // Position - 0x10C3
{
	int num;
	int num2;
	int num3;
	float num4;
	float num5;
	var unk47;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_14))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8920, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_14, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_14, false, false);
			_STOPWATCH_DESTROY(&uLocal_14);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_12) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_12, 1000, false))
	{
		if (iLocal_21 == -1)
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				iLocal_21 = unk_0xCA369FBC0DE29517();
				unk_0xBD618A73193F9982(iLocal_21, "05", unk_0x4A8C381C258A124D(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_12, 4000, false))
		{
			if (!unk_0x9F0C06CFBACDD6A1(iLocal_21))
				unk_0x8E4825CCACA34B58(iLocal_21);
		
			unk_0x394AFAC073E1F277(iLocal_21);
			iLocal_21 = -1;
			unk_0xB43467C43086A6A1("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_12, false, false);
			_STOPWATCH_DESTROY(&uLocal_12);
		}
	}

	if (!bLocal_6 && !func_48())
		return;

	bLocal_6 = true;
	unk_0x0B0C9A0F9AAEB7F0(&Global_8920, 2);

	if (!unk_0xFC8BFE4B41177C22(uLocal_5))
	{
		num = joaat("imp_prop_ship_01a");
		unk_0xEC9DAA34BBB4658C(num);
	
		if (unk_0x6252BC0DD8A320DB(num))
		{
			uLocal_5 = unk_0x43AFC452F25F3A2F(num, 360.8759f, 5623.4272f, 780.1747f, 0, 0, 1, 0);
			unk_0x55098D9E9AD58806(num);
			unk_0x5D7CD709B34C90F0(uLocal_5, 1);
			unk_0xF88FC425EC7D675D(uLocal_5, 8000);
			num2 = func_33(7869, -1);
			func_47(7869, num2 + 1, -1, 1);
			num3.f_1 = 1;
			num3 = 24;
			unk_0xCF78529B9B88C73E(&num3);
			uLocal_16 = { unk_0xD1A6A821F5AC81DB(uLocal_5, 0) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_46();
	
		if (unk_0x9390801B06EE998F() || unk_0xDDED2C93E8FD5B69())
		{
			if (iLocal_20 == -1)
			{
				unk_0xCAC4020CCF361AC8("DLC_GR_CS2_General_Scene");
				iLocal_20 = unk_0xCA369FBC0DE29517();
				unk_0xBD618A73193F9982(iLocal_20, "07", uLocal_5, "DLC_GR_CS2_Sounds", 0, 0);
			}
		
			if (!bLocal_7)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_8, 4500, false))
				{
					unk_0x5D7CD709B34C90F0(uLocal_5, 0);
					_STOPWATCH_RESET(&uLocal_8, false, false);
					_STOPWATCH_DESTROY(&uLocal_8);
					_STOPWATCH_INITIALIZE(&uLocal_10, false, false);
					bLocal_7 = true;
				}
			}
			else
			{
				num4 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_10, false, false)) / SYSTEM::TO_FLOAT(func_44());
				num5 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_8, false, false)) / SYSTEM::TO_FLOAT(func_43());
				num5 = num5 * num4;
				unk47 = { func_41(uLocal_16, func_42(), num5) };
				unk_0xB2BD5837A8D3CEDA(uLocal_5, unk47, 1, 0, 0, 1);
			
				if (num5 >= 1f)
				{
					iLocal_19 = iLocal_19 + 1;
					uLocal_16 = { unk_0xD1A6A821F5AC81DB(uLocal_5, 0) };
					_STOPWATCH_RESET(&uLocal_8, false, false);
					_STOPWATCH_DESTROY(&uLocal_8);
				
					if (func_43() == -1)
					{
						unk_0x51C8BEA2005931AB(&uLocal_5);
						unk_0xD4BCC7D6BFB4EF0F();
					
						if (!unk_0x9F0C06CFBACDD6A1(iLocal_20))
							unk_0x8E4825CCACA34B58(iLocal_20);
					
						unk_0x394AFAC073E1F277(iLocal_20);
						iLocal_20 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_12, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_14, false, false);
						_STOPWATCH_RESET(&uLocal_10, false, false);
						_STOPWATCH_DESTROY(&uLocal_10);
						uLocal_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						bLocal_6 = false;
						bLocal_7 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1368
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_42() // Position - 0x1383
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_43() // Position - 0x13F5
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_44() // Position - 0x1433
{
	return 3150;
}

int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x143E
{
	if (unk_0x76CD105BCAC6EB9F() && !useLocalTimer)
		if (!useAccurateTime)
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *pStopwatch);
		else
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *pStopwatch);

	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *pStopwatch);
}

void func_46() // Position - 0x1485
{
	float num;

	num = { unk_0x88124E0D60FB8D11(uLocal_5, 2) };
	num = 0f;
	num.f_1 = 0f;
	num.f_2 = num.f_2 + 1f;
	unk_0xCF39804E8C88080E(uLocal_5, num, 2, 1);
	return;
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x14B6
{
	int num;

	num = func_34(iParam0, iParam2);

	if (num != 0)
		unk_0x1164A75E490C27B6(num, iParam1, iParam3);

	return;
}

BOOL func_48() // Position - 0x14D9
{
	if (func_39(22107, -1) && Global_2640052 == 7 && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && func_51(unk_0x4A8C381C258A124D(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2685658.f_3078.f_178 >= 1 && Global_2685658.f_3078.f_178 < 4 && func_50() && func_49())
		return true;

	return false;
}

BOOL func_49() // Position - 0x155A
{
	if (func_39(15476, -1) && func_33(5453, func_31()) > 577)
		return true;

	return false;
}

BOOL func_50() // Position - 0x1586
{
	int num;
	int num2;
	float num3;

	unk_0x239D73A1DE006629(&num, &num2, &num3);

	if (num3 < 0.5f)
		if (num == joaat("rain") || num == joaat("THUNDER") || num2 == joaat("xmas"))
			return true;
	else if (num2 == joaat("rain") || num2 == joaat("THUNDER") || num2 == joaat("xmas"))
		return true;

	return false;
}

BOOL func_51(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x15FD
{
	return SYSTEM::VDIST2(unk_0xD1A6A821F5AC81DB(uParam0, 1), fParam1) <= fParam4 * fParam4;
}

void func_52() // Position - 0x161A
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_56(unk_0x259BE71D8A81D4FA()) && !func_55(unk_0x259BE71D8A81D4FA()))
		{
			if (!unk_0x02F51D23580B7A15(unk_0x4A8C381C258A124D()))
				if (!IS_BIT_SET(iLocal_4, 0))
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_4, 0);
		
			if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 184, 1))
				if (!IS_BIT_SET(iLocal_4, 1))
					unk_0x0B0C9A0F9AAEB7F0(&iLocal_4, 1);
		}
		else if (!func_55(unk_0x259BE71D8A81D4FA()))
		{
			if (func_54(unk_0x259BE71D8A81D4FA()))
				if (iLocal_4 != 0 && !unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
					func_53();
			else
				func_53();
		}
		else if (iLocal_4 != 0)
		{
			iLocal_4 = 0;
		}
	}

	return;
}

void func_53() // Position - 0x16C6
{
	if (IS_BIT_SET(iLocal_4, 0))
	{
		unk_0x68F395D64BC35E68(unk_0x4A8C381C258A124D(), 0);
		unk_0x8744D2E3FC95740E(&iLocal_4, 0);
	}

	if (IS_BIT_SET(iLocal_4, 1))
	{
		unk_0x8744D2E3FC95740E(&iLocal_4, 1);
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 184, 0);
	}

	return;
}

BOOL func_54(Player plParam0) // Position - 0x16FE
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657991[plParam0 /*467*/].f_324.f_8 != -1;
		else if (Global_1575084 && plParam0 == unk_0x259BE71D8A81D4FA() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657991[plParam0 /*467*/].f_324.f_8 != -1;

	return false;
}

BOOL func_55(Player plParam0) // Position - 0x1764
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_324, 3);

	return false;
}

BOOL func_56(Player plParam0) // Position - 0x1795
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_2657991[plParam0 /*467*/].f_324.f_20 != -1;

	return false;
}

void func_57() // Position - 0x17BA
{
	if (Global_113078 && unk_0x486FF5D06E9659F1(joaat("director_mode")) <= 0 && func_58())
		unk_0x597D3F733B15F96E();

	return;
}

BOOL func_58() // Position - 0x17E6
{
	if (func_59() == 0)
		return true;

	return false;
}

int func_59() // Position - 0x17FB
{
	return Global_1574633.f_18;
}

void func_60() // Position - 0x1809
{
	if (!bLocal_3)
	{
		if (Global_1836482)
		{
			if (func_63() || func_61())
				Global_262145.f_19912 = 1;
			else
				Global_262145.f_19912 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836482)
	{
		bLocal_3 = false;
	}

	return;
}

int func_61() // Position - 0x1853
{
	int num;
	var unk;
	int i;

	num = func_62(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10716)
		return 0;

	unk = 4;
	unk[0] = func_62(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = func_62(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = func_62(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = func_62(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10712 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10716)
			return 0;
	}

	return 1;
}

int func_62(int iParam0) // Position - 0x18E2
{
	int num;
	int num2;

	num = iParam0;

	if (unk_0xDF7F16323520B858(num, &num2, -1))
		return num2;

	return 0;
}

int func_63() // Position - 0x1900
{
	int num;
	var unk;
	int i;

	num = func_62(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10715)
		return 0;

	unk = 4;
	unk[0] = func_62(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = func_62(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = func_62(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = func_62(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10711 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10715)
			return 0;
	}

	return 1;
}

void func_64() // Position - 0x198F
{
	int i;

	if (unk_0x761778199FE1211C())
	{
		for (i = 0; i < 32; i = i + 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845221[i /*889*/].f_832), 1);
		}
	}

	return;
}

void func_65() // Position - 0x19C2
{
	if (bLocal_1)
	{
		unk_0xBFE94E91C83D8794(0f, 0.23f);
		unk_0x5A18938160AE52D0(255, 255, 255, 255);
		func_66(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (unk_0x4D9174D8796EA622())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x875A214D5EBCA509(2, 189))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (unk_0x875A214D5EBCA509(2, 190))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (unk_0x875A214D5EBCA509(2, 189))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (unk_0x875A214D5EBCA509(2, 190))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (unk_0x875A214D5EBCA509(2, 188))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (unk_0x4D9174D8796EA622())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x875A214D5EBCA509(2, 188))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (unk_0x875A214D5EBCA509(2, 190))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (unk_0x875A214D5EBCA509(2, 189))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (unk_0x875A214D5EBCA509(2, 190))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (unk_0x875A214D5EBCA509(2, 189))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		}
	}

	return;
}

void func_66(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x1BC1
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0xB993F5B7A74B2A85(sParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
	return;
}

BOOL func_67() // Position - 0x1BDE
{
	return unk_0x087611B922B50F13(-1762644250);
}

