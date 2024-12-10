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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	BOOL bLocal_63 = 0;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = (0.05f + 0.275f) - 0.01f;

	if (unk_0x96CFB880BAC634CE(34))
		unk_0xBBC29EBE6E1A48FA();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_149();
		func_1();
	}

	return;
}

void func_1() // Position - 0xA5
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	i = 0;
	num3 = 0;
	num4 = 0;
	num5 = 0;
	num6 = 0;

	if (unk_0x99DFE4CAC19D527F())
	{
		for (i = 0; i < unk_0x703C4F7316B7195D(1); i = i + 1)
		{
			num7 = unk_0x4BC3E5D2FB0A1665(1, i);
		
			switch (num7)
			{
				case 193:
					func_146();
					break;
			
				case 194:
					func_145();
					break;
			
				case 195:
					func_139(i);
					break;
			
				case 196:
					func_138(i);
					break;
			
				case 197:
					func_127(i);
					break;
			
				case 215:
					func_3(i);
					break;
			}
		}
	}

	for (i = 0; i < unk_0x703C4F7316B7195D(0); i = i + 1)
	{
		num = unk_0x4BC3E5D2FB0A1665(0, i);
		bLocal_63 = true;
	
		switch (num)
		{
			case 141:
				unk_0xFCEF367B86651ED3(0, i, &num2, 1);
			
				if (unk_0xFC8BFE4B41177C22(num2))
				{
					if (unk_0x55B80B6E7AB61270(num2))
					{
						if (func_2(num3))
						{
							Global_56559.f_1[num3] = num2;
							num3 = num3 + 1;
						}
					}
					else if (unk_0x0101C509A6E67F99(num2))
					{
						if (func_2(num5))
						{
							Global_56559.f_25[num5] = num2;
							num5 = num5 + 1;
						}
					}
				}
				break;
		
			case 142:
				unk_0xFCEF367B86651ED3(0, i, &num2, 1);
			
				if (unk_0xFC8BFE4B41177C22(num2))
				{
					if (unk_0x55B80B6E7AB61270(num2))
					{
						if (func_2(num4))
						{
							Global_56559.f_13[num4] = num2;
							num4 = num4 + 1;
						}
					}
					else if (unk_0x0101C509A6E67F99(num2))
					{
						if (func_2(num6))
						{
							Global_56559.f_37[num6] = num2;
							num6 = num6 + 1;
						}
					}
				}
				break;
		}
	}

	Global_56559 = num3;
	Global_56559.f_12 = num4;
	Global_56559.f_24 = num5;
	Global_56559.f_36 = num6;
	return;
}

BOOL func_2(int iParam0) // Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0) // Position - 0x25B
{
	var unk;
	int num;

	if (unk_0xFCEF367B86651ED3(1, iParam0, &unk, 39))
	{
		num = unk_0x7F36EF28AE77E331(unk.f_38);
	
		if (num >= 0 && num < unk_0xA21ED22C344748B0())
		{
			if (unk_0xB73605870CAE4123(num) || unk_0x5CAC0C9085C92014(num))
			{
				if (unk_0x5CAC0C9085C92014(num))
					func_59(num);
				else
					unk_0xA69636D9FC46B96C(num);
			
				func_58(unk.f_37, -1);
			}
			else if (func_49())
			{
				func_4(unk.f_29, unk, unk.f_38, unk.f_16, unk.f_35, unk.f_36);
			}
		}
	}

	return;
}

int func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, int iParam37) // Position - 0x2F8
{
	BOOL flag;
	BOOL flag2;
	var unk;
	int num;
	int num2;
	var unk17;
	int i;
	var unk18;
	int num3;
	int num4;
	int num5;
	int num6;
	var unk28;
	var unk44;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	BOOL flag3;
	int num12;
	int num13;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	int num14;
	int j;
	int num15;

	flag = false;

	if (iParam37 >= 1000000)
	{
		iParam37 = iParam37 - 1000000;
		flag = true;
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_48())
		{
			func_47(uParam22);
			return 0;
		}
	
		if (func_46())
		{
			func_47(uParam22);
			return 0;
		}
	}

	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (flag)
		{
		}
		else if (!unk_0xEDD63461767A518C(&uParam23))
		{
			func_47(uParam22);
			return 0;
		}
	
		if (Global_21009)
		{
			func_47(uParam22);
			return 0;
		}
	
		flag2 = true;
	
		if (!func_45())
		{
			if (!_IS_MISSION_REPEAT_ACTIVE(false))
			{
				if (flag2)
				{
					func_47(uParam22);
					return 0;
				}
			}
		}
	}

	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_43(unk_0x259BE71D8A81D4FA()))
		{
			func_47(uParam22);
			return 0;
		}
	}

	if (unk_0xD6F9DEE4765092A9(&uParam6))
	{
		func_47(uParam22);
		return 0;
	}

	if (unk_0xD6F9DEE4765092A9(&uParam0))
	{
		func_47(uParam22);
		return 0;
	}

	unk = { uParam6 };
	num = func_42(unk);

	if (num != -1)
		func_39(num);

	num2 = unk_0x7F36EF28AE77E331(uParam22);

	if (num2 != -1)
	{
		unk17 = unk_0x32FF25F8A134DEC8(num2);
		i = 0;
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (unk17 == Global_2625723[i /*4*/].f_3 && unk_0x1DD05E817C89C737() < Global_2625723[i /*4*/].f_2)
			{
				Global_2625723[i /*4*/].f_2 = unk_0x1DD05E817C89C737() + 30000;
				i = 12;
				func_47(uParam22);
				return 0;
			}
		}
	}

	unk18.f_1 = -1;
	unk18.f_2 = -1;
	unk18.f_9 = -1;
	func_38(&unk18);
	num3 = 0;
	num4 = 0;
	num5 = 63;
	num6 = 0;
	TEXT_LABEL_ASSIGN_STRING(&unk28, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&unk44, "", 64);
	num7 = 0;
	num8 = 0;
	num9 = 0;
	num10 = 1;
	num11 = 0;
	flag3 = false;

	if (func_37(&uParam0, &num3, &num6))
	{
		num5 = 40;
		num8 = 0;
		num6 = num6;
	}
	else if (func_35(&uParam0, &unk18, false))
	{
		num5 = unk18.f_2;
		num3 = func_34(num5, unk18.f_1);
		num4 = func_33(&unk18);
		unk28 = { func_32(&unk18, false) };
		unk44 = { func_31(&unk18) };
		num8 = 1;
		num7 = func_30(&unk18, false);
		flag3 = func_29(&unk18);
		num12 = func_27(&unk18);
		num13 = func_26(&unk18);
		flag4 = func_21(&unk18);
	
		if (!flag4)
			num11 = 1;
	}
	else
	{
		flag5 = false;
	
		if (func_19(unk_0x259BE71D8A81D4FA(), uParam23))
		{
			if (!unk_0x76CD105BCAC6EB9F())
			{
				flag5 = true;
			}
			else
			{
				func_47(uParam22);
				func_17(false);
				return 0;
			}
		}
	
		if (!func_16())
		{
			if (!flag5)
			{
				if (func_14(unk_0x259BE71D8A81D4FA(), uParam23))
				{
					func_47(uParam22);
					func_17(false);
					return 0;
				}
			}
		}
	
		if (!func_13())
		{
			func_47(uParam22);
			flag6 = true;
			func_17(flag6);
			return 0;
		}
	
		flag7 = false;
	
		if (!flag5)
		{
			if (func_7(uParam23, &flag7, true))
			{
				func_47(uParam22);
				func_17(flag7);
				return 0;
			}
		}
	
		num9 = 1;
		num10 = 0;
		num8 = 1;
	}

	num14 = Global_1685113;

	if (num14 >= 12)
		num14 = num14 - 1;

	for (j = num14 - 1; j >= 0; j = j - 1)
	{
		Global_2623445[num14 /*99*/] = { Global_2623445[j /*99*/] };
		num14 = num14 - 1;
	}

	Global_1685113 = Global_1685113 + 1;

	if (Global_1685113 > 12)
		Global_1685113 = 12;

	num15 = 0;
	Global_2623445[num15 /*99*/] = 0;
	Global_2623445[num15 /*99*/].f_1 = 0;
	Global_2623445[num15 /*99*/].f_5 = 0;
	Global_2623445[num15 /*99*/].f_2 = num9;
	Global_2623445[num15 /*99*/].f_3 = 0;
	Global_2623445[num15 /*99*/].f_4 = num10;
	Global_2623445[num15 /*99*/].f_6 = { uParam0 };
	Global_2623445[num15 /*99*/].f_12 = num12;
	Global_2623445[num15 /*99*/].f_13 = num13;
	Global_2623445[num15 /*99*/].f_15 = { uParam6 };
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[num15 /*99*/].f_31), "", 64);
	Global_2623445[num15 /*99*/].f_49 = num5;
	Global_2623445[num15 /*99*/].f_50 = num3;
	Global_2623445[num15 /*99*/].f_51 = num4;
	Global_2623445[num15 /*99*/].f_91 = uParam22;
	Global_2623445[num15 /*99*/].f_57 = { unk28 };
	Global_2623445[num15 /*99*/].f_73 = { unk44 };
	Global_2623445[num15 /*99*/].f_52 = num7;
	Global_2623445[num15 /*99*/].f_53 = 0;
	Global_2623445[num15 /*99*/].f_53.f_1 = 0;
	Global_2623445[num15 /*99*/].f_53.f_2 = 0;
	Global_2623445[num15 /*99*/].f_56 = num8;
	Global_2623445[num15 /*99*/].f_90 = uParam36;
	Global_2623445[num15 /*99*/].f_92 = -1;
	Global_2623445[num15 /*99*/].f_93 = num11;
	Global_2623445[num15 /*99*/].f_94 = Global_2625775;
	Global_2623445[num15 /*99*/].f_95 = flag3;
	Global_2623445[num15 /*99*/].f_98 = unk_0xEDD63461767A518C(&uParam23);

	if (Global_2623445[num15 /*99*/].f_50 == 0)
		if (Global_2623445[num15 /*99*/].f_51 == 1)
			Global_2623445[num15 /*99*/].f_56 = 0;

	Global_2623445[num15 /*99*/].f_96 = func_6(uParam23, num15);
	Global_2623445[num15 /*99*/].f_97 = 0;
	Global_2623445[num15 /*99*/].f_89 = iParam37;
	Global_2625775 = Global_2625775 + 1;
	Global_2623445[num15 /*99*/].f_47 = func_5(uParam23);

	if (Global_2623445[num15 /*99*/].f_47 != -1)
		Global_2623445[num15 /*99*/].f_48 = unk_0x1DD05E817C89C737() + 15000;

	return 1;
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x84B
{
	var unk;
	int num;

	if (!func_16())
		return -1;

	unk = 1;
	unk[0 /*13*/] = { uParam0 };
	num = unk_0x310461CE0659232F(&unk, 1);

	if (num < 0)
		return -1;

	return num;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13) // Position - 0x886
{
	if (!unk_0xEDD63461767A518C(&uParam0))
		return 0;

	if (Global_2623445[iParam13 /*99*/].f_90 > 0)
		return 0;

	return 1;
}

BOOL func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, BOOL bParam14) // Position - 0x8AF
{
	var unk;

	*uParam13 = 0;

	if (func_12(0))
		return false;

	if (func_16())
	{
		if (!func_11())
		{
			*uParam13 = 1;
			return true;
		}
	}

	if (!func_9(1) && !bParam14)
		return true;

	unk = { func_8(unk_0x259BE71D8A81D4FA()) };

	if (!bParam14 && !unk_0xD43ED7463CB7671C(&unk, &uParam0))
		if (!unk_0xEDD63461767A518C(&uParam0))
			return true;

	return false;
}

struct<13> func_8(int iParam0) // Position - 0x923
{
	var unk;

	unk_0x464E131FD68B953F(iParam0, &unk, 13);
	return unk;
}

BOOL func_9(int iParam0) // Position - 0x93A
{
	if (unk_0x0BA1A956D36B210F() || func_10() && iParam0 == 0)
		if (unk_0x97DD063A9C6137F8(1) == 0 || unk_0xE1E02509169C124E() == 0)
			return false;
	else if (unk_0x97DD063A9C6137F8(1) == 0)
		return false;

	if (func_11() == false)
		return false;

	return true;
}

BOOL func_10() // Position - 0x993
{
	return unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6();
}

BOOL func_11() // Position - 0x9A9
{
	if (unk_0x0BA1A956D36B210F() && unk_0xD25970CBEE074E07())
		return true;

	if (unk_0x1226C55CA7D2269A() && unk_0xD25970CBEE074E07())
		return true;

	if (func_10() && unk_0xB0DF27929B02C57E() == 0 && unk_0xD25970CBEE074E07())
		return true;

	if (func_16() && unk_0xD25970CBEE074E07())
		return true;

	if (unk_0x761778199FE1211C() && unk_0xD25970CBEE074E07())
		return true;

	return false;
}

BOOL func_12(int iParam0) // Position - 0xA21
{
	if (unk_0x0BA1A956D36B210F() || func_10() && iParam0 == 0)
		if (unk_0x97DD063A9C6137F8(0) == 0 || unk_0xE1E02509169C124E() == 0)
			return false;
	else if (unk_0x97DD063A9C6137F8(0) == 0)
		return false;

	if (func_11() == false)
		return false;

	return true;
}

BOOL func_13() // Position - 0xA7A
{
	if (!unk_0x1226C55CA7D2269A())
		return true;

	return unk_0xD25970CBEE074E07();
}

BOOL func_14(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xA92
{
	if (!func_15(iParam0))
	{
		if (func_16())
			if (unk_0x8EF8E27D73EB5271(&uParam1))
				return false;
	
		if (!unk_0x97DD063A9C6137F8(0))
			if (!unk_0x97DD063A9C6137F8(1))
				return true;
	}

	return false;
}

BOOL func_15(int iParam0) // Position - 0xACF
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_16() // Position - 0xAFB
{
	return unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C();
}

void func_17(BOOL bParam0) // Position - 0xB11
{
	int num;

	if (bParam0)
		if (!unk_0x1226C55CA7D2269A())
			return;

	if (func_16())
		return;

	num = unk_0x1DD05E817C89C737();

	if (num < Global_2625772)
		return;

	if (unk_0x4C705AAF75363287())
		return;

	if (bParam0)
		_DISPLAY_HELP_TEXT("INV_NO_XBOXLIVE", -1);
	else
		_DISPLAY_HELP_TEXT("INV_RESTRICT" /*You have received an Invite to user-generated content which is currently restricted by your control settings.*/, -1);

	Global_2625772 = num + 1800000;
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xB71
{
	unk_0xAC98CA65AD9A3215(text);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
	return;
}

BOOL func_19(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0xB88
{
	if (!func_15(uParam0))
	{
		if (func_16())
			if (unk_0x8EF8E27D73EB5271(&uParam1))
				return false;
	
		if (!func_20())
			return true;
	}

	return false;
}

BOOL func_20() // Position - 0xBBB
{
	if (unk_0x62B038F95CEA3FE9() == 0)
		return false;

	if (func_10())
		if (unk_0x97DD063A9C6137F8(1))
			if (unk_0xD25970CBEE074E07())
				return true;
	else if (func_16())
		if (unk_0x8FF2665359043205(0, -3, 1))
			return true;
	else if (unk_0x761778199FE1211C())
		if (unk_0x9A9677D7F3615A86(0, -1))
			if (unk_0xD25970CBEE074E07())
				return true;

	return false;
}

BOOL func_21(var uParam0) // Position - 0xC22
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_25(uParam0))
		return IS_BIT_SET(Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return IS_BIT_SET(Global_2628534.f_1.f_63, 14);
	
		return flag;
	}

	num = func_22(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794744.f_4[num /*89*/].f_76, 14);
	
		case 62:
			return IS_BIT_SET(Global_949659.f_1804[num /*89*/].f_76, 14);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_22(var uParam0) // Position - 0xCF2
{
	int i;

	if (unk_0xD6F9DEE4765092A9(&(uParam0->f_3)))
		return -1;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return 9999;
	
		return -1;
	}

	i = 0;

	switch (uParam0->f_2)
	{
		case 63:
			if (IS_BIT_SET(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
				if (unk_0x1B79E937E91F40C3(&Global_794744.f_4[uParam0->f_1 /*89*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_794744.f_4[uParam0->f_1 /*89*/].f_76, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (i = 0; i < 1518; i = i + 1)
			{
				if (IS_BIT_SET(Global_794744.f_4[i /*89*/].f_76, 13))
				{
					if (unk_0x1B79E937E91F40C3(&Global_794744.f_4[i /*89*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = i;
						return i;
					}
				}
			}
		
			return -1;
	
		case 62:
			if (IS_BIT_SET(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
				if (unk_0x1B79E937E91F40C3(&Global_949659.f_1804[uParam0->f_1 /*89*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_949659.f_1804[uParam0->f_1 /*89*/].f_76, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (i = 0; i < 300; i = i + 1)
			{
				if (IS_BIT_SET(Global_949659.f_1804[i /*89*/].f_76, 13))
				{
					if (unk_0x1B79E937E91F40C3(&Global_949659.f_1804[i /*89*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = i;
						return i;
					}
				}
			}
		
			return -1;
	
		case 40:
			return uParam0->f_1;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
	{
		if (IS_BIT_SET(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
			if (unk_0x1B79E937E91F40C3(&Global_982384.f_4[uParam0->f_1 /*89*/], &(uParam0->f_3)))
				return uParam0->f_1;
	
		if (IS_BIT_SET(Global_982384.f_4[uParam0->f_1 /*89*/].f_76, 13))
			if (Global_1573131.f_5)
				return -1;
	
		for (i = 0; i < 62; i = i + 1)
		{
			if (IS_BIT_SET(Global_982384.f_4[i /*89*/].f_76, 13))
			{
				if (unk_0x1B79E937E91F40C3(&Global_982384.f_4[i /*89*/], &(uParam0->f_3)))
				{
					uParam0->f_1 = i;
					return i;
				}
			}
		}
	
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}

	return -1;
}

BOOL func_23(var uParam0) // Position - 0xF48
{
	if (Global_2628534)
		if (unk_0x1B79E937E91F40C3(&(Global_2628534.f_1), &(uParam0->f_3)))
			return true;

	return false;
}

BOOL func_24(int iParam0) // Position - 0xF6D
{
	return iParam0 == 9999;
}

BOOL func_25(var uParam0) // Position - 0xF7B
{
	int num;

	num = uParam0->f_9;

	if (num == -1)
		return false;

	if (!Global_2625777.f_356[num /*75*/])
		return false;

	if (!unk_0x1B79E937E91F40C3(&(Global_2625777.f_356[num /*75*/].f_10), &(uParam0->f_3)))
		return false;

	if (!IS_BIT_SET(Global_2625777.f_356[num /*75*/].f_5, 3))
		return false;

	return true;
}

int func_26(var uParam0) // Position - 0xFDB
{
	int num;
	int num2;

	num = 0;
	num2 = func_22(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[num2 /*89*/].f_80;
	
		case 62:
			return num;
	
		default:
		
	}

	return num;
}

int func_27(var uParam0) // Position - 0x1024
{
	var unk;
	int num;
	int num2;

	unk.f_2 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_12 = -1;
	num = 0;
	num2 = func_22(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			unk = { func_28(uParam0) };
			return unk.f_1;
	
		case 62:
			return num;
	
		default:
		
	}

	return num;
}

struct<13> func_28(var uParam0) // Position - 0x108B
{
	var unk;
	int num;

	unk.f_2 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_12 = -1;
	num = func_22(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_135107[num /*13*/];
	
		case 62:
			return Global_949659.f_28505[num /*13*/];
	
		default:
		
	}

	return unk;
}

BOOL func_29(var uParam0) // Position - 0x1102
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_25(uParam0))
		return IS_BIT_SET(Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return IS_BIT_SET(Global_2628534.f_1.f_63, 17);
	
		return flag;
	}

	num = func_22(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794744.f_4[num /*89*/].f_76, 17);
	
		case 62:
			return IS_BIT_SET(Global_949659.f_1804[num /*89*/].f_76, 17);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_30(var uParam0, BOOL bParam1) // Position - 0x11D2
{
	int num;
	int num2;

	num = 0;

	if (!bParam1)
		if (func_25(uParam0))
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628668.f_513[uParam0->f_9];

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_54;
	
		return num;
	}

	num2 = func_22(uParam0);

	if (num2 == -1)
		return 0;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[num2 /*89*/].f_54;
	
		case 62:
			return Global_949659.f_1804[num2 /*89*/].f_54;
	
		case 40:
			return 0;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
		return Global_982384.f_4[num2 /*89*/].f_54;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

struct<16> func_31(var uParam0) // Position - 0x12B1
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NO DESCRIPTION", 64);

	if (func_25(uParam0))
		return Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_28;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_28;
	
		return unk;
	}

	num = func_22(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[num /*89*/].f_38;
	
		case 62:
			return Global_949659.f_1804[num /*89*/].f_38;
	
		case 40:
			return unk;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
		return Global_982384.f_4[num /*89*/].f_38;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

struct<16> func_32(var uParam0, BOOL bParam1) // Position - 0x13A1
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "UNKNOWN", 64);

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);

	if (!bParam1)
	{
		if (func_25(uParam0))
		{
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628668[uParam0->f_9 /*16*/];
		
			return Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_12;
	
		return unk;
	}

	num = func_22(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[num /*89*/].f_22;
	
		case 62:
			return Global_949659.f_1804[num /*89*/].f_22;
	
		case 40:
			return unk;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
		return Global_982384.f_4[num /*89*/].f_22;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

int func_33(var uParam0) // Position - 0x14C3
{
	int num;
	int num2;

	num = -1;

	if (func_25(uParam0))
		return Global_2625777.f_356[uParam0->f_9 /*75*/].f_10.f_55;

	if (func_24(uParam0->f_1))
	{
		if (func_23(uParam0))
			return Global_2628534.f_1.f_55;
	
		return num;
	}

	num2 = func_22(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794744.f_4[num2 /*89*/].f_68;
	
		case 62:
			return Global_949659.f_1804[num2 /*89*/].f_68;
	
		case 40:
			return num;
	
		default:
		
	}

	if (uParam0->f_2 == unk_0x259BE71D8A81D4FA())
		return Global_982384.f_4[num2 /*89*/].f_68;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

int func_34(int iParam0, int iParam1) // Position - 0x1591
{
	if (func_24(iParam1))
	{
		if (Global_2628534)
			return Global_2628534.f_1.f_53;
	
		return 352;
	}

	switch (iParam0)
	{
		case 63:
			return Global_794744.f_4[iParam1 /*89*/].f_65;
	
		case 62:
			return Global_949659.f_1804[iParam1 /*89*/].f_65;
	
		default:
		
	}

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		return Global_982384.f_4[iParam1 /*89*/].f_65;
	else if (iParam0 < 32)
		return 352;

	return 352;
}

BOOL func_35(var uParam0, var uParam1, BOOL bParam2) // Position - 0x161A
{
	int i;
	int num;
	int num2;

	if (!unk_0x76CD105BCAC6EB9F())
		return false;

	if (unk_0xD6F9DEE4765092A9(uParam0))
		return false;

	i = 0;
	num = -1;
	num2 = 1518;

	if (!bParam2)
		num2 = 1500;

	for (i = 0; i < num2; i = i + 1)
	{
		if (IS_BIT_SET(Global_794744.f_4[i /*89*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&Global_794744.f_4[i /*89*/], uParam0))
			{
				num = Global_794744.f_4[i /*89*/].f_65;
				*uParam1 = func_36(num);
				uParam1->f_1 = i;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794744.f_4[i /*89*/] };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (i = 0; i < 300; i = i + 1)
	{
		if (IS_BIT_SET(Global_949659.f_1804[i /*89*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&Global_949659.f_1804[i /*89*/], uParam0))
			{
				num = Global_949659.f_1804[i /*89*/].f_65;
				*uParam1 = func_36(num);
				uParam1->f_1 = i;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *uParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (i = 0; i < 62; i = i + 1)
	{
		if (IS_BIT_SET(Global_982384.f_4[i /*89*/].f_76, 13))
		{
			if (unk_0x1B79E937E91F40C3(&Global_982384.f_4[i /*89*/], uParam0))
			{
				num = Global_982384.f_4[i /*89*/].f_65;
				*uParam1 = func_36(num);
				uParam1->f_1 = i;
				uParam1->f_2 = unk_0x259BE71D8A81D4FA();
				uParam1->f_3 = { *uParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	return false;
}

int func_36(int iParam0) // Position - 0x17AA
{
	switch (iParam0)
	{
		case 15:
			return 226;
	
		case 14:
			return 227;
	
		case 122:
			return 231;
	
		case 11:
			return 228;
	
		case 13:
			return 229;
	
		case 12:
			return 230;
	
		case 8:
			return 233;
	
		case 1:
			return 234;
	
		case 5:
			return 232;
	
		case 6:
			return 235;
	
		case 3:
			return 238;
	
		case 0:
			return 236;
	
		case 2:
			return 237;
	
		case 148:
			return 49;
	
		case 151:
			return 52;
	
		case 152:
			return 53;
	
		case 157:
			return 54;
	
		case 153:
			return 55;
	
		case 154:
			return 56;
	
		case 155:
			return 57;
	
		case 159:
			return 58;
	
		case 162:
			return 51;
	
		case 142:
			return 60;
	
		case 160:
			return 62;
	
		case 164:
			return 63;
	
		case 163:
			return 64;
	
		case 166:
			return 65;
	
		case 167:
			return 66;
	
		case 168:
			return 67;
	
		case 169:
			return 68;
	
		case 170:
			return 69;
	
		case 171:
			return 70;
	
		case 172:
			return 71;
	
		case 173:
			return 72;
	
		case 178:
			return 73;
	
		case 188:
			return 74;
	
		case 214:
			return 75;
	
		case 215:
			return 76;
	
		case 216:
			return 77;
	
		case 217:
			return 78;
	
		case 218:
			return 79;
	
		case 219:
			return 80;
	
		case 220:
			return 81;
	
		case 221:
			return 82;
	
		case 179:
			return 84;
	
		case 189:
			return 83;
	
		case 180:
			return 85;
	
		case 182:
			return 87;
	
		case 183:
			return 88;
	
		case 185:
			return 89;
	
		case 186:
			return 90;
	
		case 190:
			return 91;
	
		case 191:
			return 92;
	
		case 192:
			return 93;
	
		case 193:
			return 94;
	
		case 205:
			return 102;
	
		case 194:
			return 95;
	
		case 197:
			return 96;
	
		case 198:
			return 97;
	
		case 195:
			return 98;
	
		case 199:
			return 99;
	
		case 200:
			return 100;
	
		case 201:
			return 101;
	
		case 207:
			return 103;
	
		case 208:
			return 104;
	
		case 209:
			return 105;
	
		case 210:
			return 106;
	
		case 225:
			return 107;
	
		case 226:
			return 108;
	
		case 227:
			return 109;
	
		case 229:
			return 110;
	
		case 230:
			return 111;
	
		case 233:
			return 113;
	
		case 237:
			return 115;
	
		case 238:
			return 116;
	
		case 249:
			return 123;
	
		case 239:
			return 117;
	
		case 240:
			return 118;
	
		case 241:
			return 119;
	
		case 242:
			return 120;
	
		case 244:
			return 121;
	
		case 248:
			return 122;
	
		case 250:
			return 124;
	
		case 243:
			return 125;
	
		case 158:
			return 126;
	
		case 181:
			return 86;
	
		case 150:
			return 127;
	
		case 24:
			return 128;
	
		case 26:
			return 129;
	
		case 256:
			return 130;
	
		case 258:
			return 131;
	
		case 259:
			return 133;
	
		case 271:
			return 134;
	
		case 273:
			return 135;
	
		case 276:
			return 136;
	
		case 277:
			return 137;
	
		case 262:
			return 138;
	
		case 263:
			return 139;
	
		case 264:
			return 140;
	
		case 268:
			return 141;
	
		case 269:
			return 143;
	
		case 270:
			return 144;
	
		case 275:
			return 145;
	
		case 286:
			return 146;
	
		case 267:
			return 148;
	
		case 266:
			return 147;
	
		case 287:
			return 149;
	
		case 289:
			return 150;
	
		case 147:
			return 151;
	
		case 291:
			return 152;
	
		case 292:
			return 153;
	
		case 293:
			return 154;
	
		case 294:
			return 155;
	
		case 295:
			return 156;
	
		case 296:
			return 157;
	
		case 297:
			return 158;
	
		case 298:
			return 159;
	
		case 299:
			return 160;
	
		case 300:
			return 161;
	
		case 301:
			return 162;
	
		case 288:
			return 163;
	
		case 290:
			return 164;
	
		case 304:
			return 165;
	
		case 305:
			return 166;
	
		case 306:
			return 167;
	
		case 307:
			return 168;
	
		case 308:
			return 169;
	
		case 309:
			return 170;
	
		case 310:
			return 171;
	
		case 311:
			return 172;
	
		case 312:
			return 173;
	
		case 313:
			return 174;
	
		case 314:
			return 175;
	
		case 315:
			return 176;
	
		case 316:
			return 177;
	
		case 317:
			return 178;
	
		case 318:
			return 179;
	
		case 320:
			return 180;
	
		case 322:
			return 181;
	
		case 323:
			return 182;
	
		case 324:
			return 183;
	
		case 325:
			return 184;
	
		case 326:
			return 185;
	
		case 327:
			return 186;
	
		case 328:
			return 187;
	
		case 329:
			return 188;
	
		case 330:
			return 189;
	
		case 331:
			return 190;
	
		case 332:
			return 191;
	
		case 333:
			return 192;
	
		case 337:
			return 193;
	
		case 338:
			return 194;
	
		case 339:
			return 195;
	
		case 340:
			return 196;
	
		case 343:
			return 197;
	
		case 344:
			return 198;
	
		case 345:
			return 199;
	
		case 346:
			return 200;
	
		case 347:
			return 201;
	
		case 348:
			return 202;
	
		case 349:
			return 203;
	
		case 350:
			return 204;
	
		case 351:
			return 205;
	
		case 353:
			return 207;
	
		default:
		
	}

	return 0;
}

BOOL func_37(var uParam0, var uParam1, var uParam2) // Position - 0x1EC6
{
	int num;
	var unk;
	var unk3;
	var unk7;

	if (unk_0xD6F9DEE4765092A9(uParam0))
		return false;

	num = unk_0x31A0D8A679F7D5A7(uParam0);

	if (!(num > 12))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, unk_0xE82BC2F91FAEEAE8(uParam0, 0, 5), 8);

	if (!unk_0x1B79E937E91F40C3(&unk, "FAKE_"))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk3, unk_0xE82BC2F91FAEEAE8(uParam0, 5, 12), 16);

	if (unk_0x1B79E937E91F40C3(&unk3, "GOLF___"))
		*uParam1 = 11;
	else if (unk_0x1B79E937E91F40C3(&unk3, "TENNIS_"))
		*uParam1 = 12;
	else if (unk_0x1B79E937E91F40C3(&unk3, "PILOTS_"))
		*uParam1 = 122;
	else if (unk_0x1B79E937E91F40C3(&unk3, "SHOOTR_"))
		*uParam1 = 13;
	else if (unk_0x1B79E937E91F40C3(&unk3, "DARTS__"))
		*uParam1 = 14;
	else if (unk_0x1B79E937E91F40C3(&unk3, "ARMWRS_"))
		*uParam1 = 15;
	else
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk7, unk_0xE82BC2F91FAEEAE8(uParam0, 12, num), 8);

	if (!unk_0xA2ADD4A27CA857C2(&unk7, uParam2))
		return false;

	return true;
}

void func_38(var uParam0) // Position - 0x1FB5
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
	return;
}

void func_39(int iParam0) // Position - 0x1FD8
{
	int i;
	int num;
	int j;

	if (iParam0 >= Global_1685113)
		return;

	i = 0;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (unk_0x1DD05E817C89C737() > Global_2625723[i /*4*/].f_2 || Global_2625723[i /*4*/].f_2 == 0)
		{
			if (unk_0xA21ED22C344748B0() > 0 && Global_2623445[iParam0 /*99*/].f_91 < unk_0xA21ED22C344748B0())
			{
				Global_2625723[i /*4*/].f_3 = unk_0x32FF25F8A134DEC8(Global_2623445[iParam0 /*99*/].f_91);
				Global_2625723[i /*4*/].f_2 = unk_0x1DD05E817C89C737() + 30000;
				i = 12;
			}
		}
	}

	if (Global_2623445[iParam0 /*99*/].f_92 != -1)
		unk_0xFE3A52C5B7AE3101(Global_2623445[iParam0 /*99*/].f_92);

	if (!Global_2623445[iParam0 /*99*/].f_56)
		if (Global_2623445[iParam0 /*99*/].f_52 != 0)
			unk_0x2D133345AB736461(Global_2623445[iParam0 /*99*/].f_52);

	func_47(Global_2623445[iParam0 /*99*/].f_91);
	num = iParam0;

	for (j = num + 1; j < Global_1685113; j = j + 1)
	{
		Global_2623445[num /*99*/] = { Global_2623445[j /*99*/] };
		num = num + 1;
	}

	func_41(num);
	Global_1685113 = Global_1685113 - 1;

	if (Global_1685086)
		if (Global_1685084 > 0)
			func_40();

	return;
}

void func_40() // Position - 0x2120
{
	Global_1685086 = false;
	return;
}

void func_41(int iParam0) // Position - 0x212D
{
	Global_2623445[iParam0 /*99*/] = 0;
	Global_2623445[iParam0 /*99*/].f_1 = 0;
	Global_2623445[iParam0 /*99*/].f_5 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_15), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_31), "", 64);
	Global_2623445[iParam0 /*99*/].f_47 = -1;
	Global_2623445[iParam0 /*99*/].f_48 = unk_0x1DD05E817C89C737();
	Global_2623445[iParam0 /*99*/].f_49 = -1;
	Global_2623445[iParam0 /*99*/].f_50 = -1;
	Global_2623445[iParam0 /*99*/].f_51 = -1;
	Global_2623445[iParam0 /*99*/].f_52 = 0;
	Global_2623445[iParam0 /*99*/].f_53 = 0;
	Global_2623445[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2623445[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2623445[iParam0 /*99*/].f_56 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_57), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2623445[iParam0 /*99*/].f_73), "", 64);
	Global_2623445[iParam0 /*99*/].f_89 = 0;
	Global_2623445[iParam0 /*99*/].f_90 = 0;
	Global_2623445[iParam0 /*99*/].f_91 = -1;
	Global_2623445[iParam0 /*99*/].f_92 = -1;
	Global_2623445[iParam0 /*99*/].f_93 = 0;
	Global_2623445[iParam0 /*99*/].f_94 = -1;
	Global_2623445[iParam0 /*99*/].f_95 = 0;
	Global_2623445[iParam0 /*99*/].f_96 = 0;
	Global_2623445[iParam0 /*99*/].f_97 = 0;
	Global_2623445[iParam0 /*99*/].f_98 = 0;
	return;
}

int func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x226F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1685113; i = i + 1)
	{
		if (unk_0x1B79E937E91F40C3(&uParam0, &(Global_2623445[i /*99*/].f_15)))
			return i;
	}

	return -1;
}

BOOL func_43(int iParam0) // Position - 0x22A8
{
	return IS_BIT_SET(Global_1845221[iParam0 /*889*/].f_140, 22);
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x22BE
{
	if (!bExcludeBenchmark && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

BOOL func_45() // Position - 0x22E6
{
	if (Global_114135.f_9089.f_330[0 /*6*/])
		return true;

	return false;
}

BOOL func_46() // Position - 0x2303
{
	return IS_BIT_SET(Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_140, 2);
}

void func_47(var uParam0) // Position - 0x231A
{
	int num;

	num = unk_0x7F36EF28AE77E331(uParam0);

	if (num < 0 || num >= unk_0xA21ED22C344748B0())
		return;

	if (unk_0x97F5F6E518D1ADB5(num))
		return;

	return;
}

BOOL func_48() // Position - 0x234D
{
	return Global_1575037 == 10;
}

BOOL func_49() // Position - 0x235C
{
	if (!Global_79539)
		return true;
	else if (func_50())
		return true;

	return false;
}

BOOL func_50() // Position - 0x237F
{
	if (!func_51())
		return false;

	return true;
}

BOOL func_51() // Position - 0x2394
{
	if (Global_1574612)
		return true;

	if (func_57())
		return true;

	if (func_56())
		return true;

	return func_52(120, -1);
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x23C4
{
	var unk;
	int num;

	unk = func_53(iParam0, iParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return 0;
}

var func_53(int iParam0, int iParam1) // Position - 0x23E8
{
	return unk_0xD69CE161FE614531(2, iParam0, func_54(iParam1));
}

int func_54(int iParam0) // Position - 0x23FD
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_55();
	
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

int func_55() // Position - 0x2431
{
	return Global_1574926;
}

BOOL func_56() // Position - 0x243D
{
	return Global_1575072;
}

BOOL func_57() // Position - 0x2449
{
	return Global_1575074;
}

void func_58(int iParam0, int iParam1) // Position - 0x2455
{
	int num;

	num = iParam1;

	if (num == -1)
		num = func_55();

	Global_1575064[num] = iParam0;
	return;
}

void func_59(int iParam0) // Position - 0x2477
{
	func_120();

	if (func_119(1))
	{
		if (!func_108())
		{
			if (!func_94(1))
			{
				if (unk_0x834C960822A4683F())
					func_93();
			
				func_62(1, false);
				unk_0xA69636D9FC46B96C(iParam0);
				func_61();
				func_60();
			}
		}
	}

	return;
}

void func_60() // Position - 0x24BC
{
	Global_1928991.f_7 = 1;
	return;
}

void func_61() // Position - 0x24CB
{
	Global_1928991.f_6 = 1;
	return;
}

void func_62(int iParam0, BOOL bParam1) // Position - 0x24DA
{
	if (func_119(iParam0))
	{
		Global_1928991.f_16[iParam0 /*44*/].f_5 = 1;
		func_64(iParam0, false);
		func_63();
	
		if (bParam1)
			Global_1928991 = 1;
	}

	return;
}

void func_63() // Position - 0x250D
{
	Global_1928991.f_2 = 1;
	return;
}

void func_64(int iParam0, BOOL bParam1) // Position - 0x251C
{
	var unk;

	if (!unk_0x834C960822A4683F())
	{
		if (bParam1)
		{
			func_92();
			_SET_PLAYER_CONTROL_EX(unk_0x259BE71D8A81D4FA(), false, 81920, 0);
			Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_96 = 8;
			func_75();
			func_74();
		}
	
		func_73(iParam0);
		func_72(iParam0);
		func_70();
		func_69();
		func_63();
	}

	unk = { func_68(iParam0) };
	func_67(iParam0);
	func_65(&unk);
	return;
}

void func_65(char* sParam0) // Position - 0x2588
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_2684718.f_863), sParam0, 24);

	if (func_66())
		TEXT_LABEL_ASSIGN_STRING(&(Global_1048576.f_44), sParam0, 24);

	return;
}

BOOL func_66() // Position - 0x25AC
{
	return IS_BIT_SET(Global_2685658.f_1.f_2809, 5);
}

void func_67(int iParam0) // Position - 0x25BF
{
	Global_1928991.f_16[iParam0 /*44*/].f_3 = 1;
	return;
}

struct<6> func_68(int iParam0) // Position - 0x25D4
{
	return Global_1928991.f_16[iParam0 /*44*/].f_6;
}

void func_69() // Position - 0x25EA
{
	Global_2684718.f_9 = 100;
	return;
}

void func_70() // Position - 0x25FA
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2684718, 5);
	func_71();
	return;
}

void func_71() // Position - 0x260F
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2684718, 8);
	return;
}

void func_72(int iParam0) // Position - 0x2621
{
	Global_1928991.f_8 = iParam0;
	return;
}

void func_73(int iParam0) // Position - 0x2631
{
	Global_1928991.f_9 = iParam0;
	return;
}

void func_74() // Position - 0x2641
{
	Global_2693671.f_1 = 0;
	return;
}

void func_75() // Position - 0x2650
{
	char* str;

	TEXT_LABEL_ASSIGN_STRING(&(Global_2684718.f_863), str, 24);
	return;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, int iParam3) // Position - 0x2663
{
	eSetPlayerControlFlags controlBs;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	BOOL flag25;
	BOOL flag26;
	var unk;
	int num;

	if (bParam1)
		if (unk_0x828F3FAE99DA791A())
			unk_0x6FF322107B12B749(0);

	if (func_91())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!unk_0x76CD105BCAC6EB9F())
	{
		controlBs = espcfParam2;
		unk_0x4686BC3BFDBB5348(plParam0, bParam1, controlBs);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		flag16 = espcfParam2 & 32768 != 0;
		flag17 = espcfParam2 & 65536 != 0;
		flag18 = espcfParam2 & 131072 != 0;
		flag19 = espcfParam2 & 262144 != 0;
		flag20 = espcfParam2 & 524288 != 0;
		flag21 = espcfParam2 & 1048576 != 0;
		flag22 = espcfParam2 & 2097152 != 0;
		flag23 = espcfParam2 & 4194304 != 0;
		flag24 = espcfParam2 & 8388608 != 0;
		flag25 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
			flag = false;
	
		if (!func_89())
		{
			flag26 = false;
		
			if (bParam1 == true)
				flag26 = true;
		
			if (flag16 == false && !flag21)
				flag26 = true;
		
			if (flag10 == true)
				flag26 = true;
		
			if (flag26)
				return;
		}
	
		flag18;
	
		if (unk_0x762604C40829DB72(plParam0) && unk_0x75EAB09F5E974116(plParam0) || iParam3 == 1)
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(plParam0), 0))
				return;
		
			unk = unk_0x56E414973C2A8C0E(plParam0);
		
			if (!flag20)
			{
				if (flag19 && bParam1 == false && unk_0x76CD105BCAC6EB9F())
					unk_0x6E2FA5434737D22F(1);
				else if (flag14 || !func_86(unk_0x259BE71D8A81D4FA(), 0) && !func_85() && !func_84(unk_0x259BE71D8A81D4FA()))
					unk_0x4285E11B28063EE0(unk, !flag14, 0);
			
				if (!flag14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !flag19)
						unk_0x6E2FA5434737D22F(0);
				
					Global_2657991[plParam0 /*467*/].f_257 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_81(0, 0, 0);
				
					if (flag25)
						unk_0xE3F88173F42C071B();
				}
			
				if (!func_80(unk) && !unk_0xB431D60610E7F85F(unk))
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, 1, 0);
			
				if (!unk_0xA3736D76B0E93E93(unk))
				{
					if (!flag21)
						unk_0x5D7CD709B34C90F0(unk, 0);
				
					unk_0x11C125313CB8ADA2(unk, 1);
				}
				else if (!flag21)
				{
					unk_0x5D7CD709B34C90F0(unk, 0);
				}
			
				unk_0x3F58BFCF656F0DF1(unk, 1);
				unk_0x2B52F77101390E6F(plParam0, 0);
				unk_0x6C4F5AA91D39455C(plParam0, 0);
			
				if (unk_0x4CEC77F224BCD884(unk) && unk_0x69CD279BFCFE278E(unk))
					unk_0xAF8337BF5A296283(unk);
			
				unk_0x9FF00EA9A61211D2(unk, 1);
			
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_79();
					func_78();
				}
			
				if (unk_0x705A7AB2D4BC0A9B())
					!flag23;
			
				unk_0x787F8EE1F6FBDC6D();
				Global_2657991[plParam0 /*467*/].f_258 = 0;
			
				if (!flag24)
					flag3 = true;
			
				if (Global_2697787)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697787 = false;
				}
			
				if (Global_2635516.f_2982)
					Global_2635516.f_2982 = 0;
			}
			else
			{
				if (!func_80(unk) && !unk_0xB431D60610E7F85F(unk))
				{
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, !flag15, 0);
				
					if (!unk_0xA3736D76B0E93E93(unk))
					{
						if (!flag21)
							unk_0x5D7CD709B34C90F0(unk, flag16);
					
						if (!flag16)
							unk_0x11C125313CB8ADA2(unk, 1);
					}
				
					if (func_77(*Global_4718592.f_187633))
						unk_0x5D7CD709B34C90F0(unk, 1);
				}
			
				if (Global_1575056)
					flag10 = false;
			
				if (flag10)
					unk_0x2B52F77101390E6F(plParam0, 0);
				else
					unk_0x2B52F77101390E6F(plParam0, 1);
			
				unk_0x3F58BFCF656F0DF1(unk, flag17);
			
				if (flag3)
					if (!unk_0xBFD01C2045360289(unk) && !unk_0x7F420695E3F776FB(unk, 0))
						unk_0x19626F992DC71FB9(unk);
			}
		
			num = 0;
		
			if (flag2)
				num = num | 2;
		
			if (flag3)
				num = num | 4;
		
			if (flag4)
				num = num | 8;
		
			if (flag5)
				num = num | 16;
		
			if (flag6)
				num = num | 32;
		
			if (flag7)
				num = num | 64;
		
			if (flag8)
				num = num | 128;
		
			if (flag9)
				num = num | 256;
		
			if (flag10)
				num = num | 512;
		
			if (flag11)
				num = num | 1024;
		
			if (flag12)
				num = num | 2048;
		
			if (flag13)
				num = num | 4096;
		
			unk_0x4686BC3BFDBB5348(plParam0, bParam1, num);
		}
	}

	return;
}

BOOL func_77(int iParam0) // Position - 0x2B17
{
	return iParam0 == 17;
}

void func_78() // Position - 0x2B24
{
	var unk;

	Global_2672939.f_1100 = 0;
	Global_2672939.f_1101 = 0;
	Global_2672939.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672939.f_1107 = -1;
	Global_2672939.f_1108 = 0;
	Global_2635516.f_2993 = { unk };
	return;
}

void func_79() // Position - 0x2B71
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657991[unk_0x259BE71D8A81D4FA() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
	return;
}

BOOL func_80(var uParam0) // Position - 0x2BAF
{
	int num;

	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return true;
	}
	else
	{
		num = unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num == 0)
			return true;
	}

	return false;
}

void func_81(int iParam0, int iParam1, int iParam2) // Position - 0x2BE0
{
	int num;
	int i;

	unk_0x1C2F771CDC87A3A5(iParam1, 0);

	if (iParam0 == 1)
		if (unk_0xFC8BFE4B41177C22(iParam1))
			if (unk_0x501EBB0523078750(iParam1))
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_83();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = 0; i < 8; i = i + 1)
					{
						unk_0x07938654FF332D78(i, Global_2621446.f_58[i]);
					}
				}
			
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_86(unk_0x259BE71D8A81D4FA(), 0))
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		else
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
	
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_82(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}

	return;
}

void func_82(int iParam0, int iParam1) // Position - 0x2CB0
{
	int num;

	num = iParam0;

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, 1);

	return;
}

void func_83() // Position - 0x2CCC
{
	int i;

	if (!unk_0xAD15761928FCF79C())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = unk_0xBCF87EE3DC296C2A(i);
			}
		
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_84(int iParam0) // Position - 0x2D24
{
	if (func_86(iParam0, 0))
		return true;

	if (func_85())
		if (iParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657991[iParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_85() // Position - 0x2D63
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_86(int iParam0, int iParam1) // Position - 0x2D71
{
	BOOL flag;

	if (!func_88(iParam0))
		return false;

	if (iParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_87(-1, false) == 8;
	else
		flag = Global_1845221[iParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(iParam0))
			flag = unk_0x1864096A95E36EBA(iParam0) == 8;

	return flag;
}

int func_87(int iParam0, BOOL bParam1) // Position - 0x2DCA
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_55();

	if (Global_1575064[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

BOOL func_88(int iParam0) // Position - 0x2E0B
{
	int num;

	num = iParam0;

	if (num < 0)
		return false;

	if (num >= 32)
		return false;

	return true;
}

BOOL func_89() // Position - 0x2E2D
{
	if (func_90() == 0)
		return true;

	return false;
}

int func_90() // Position - 0x2E42
{
	return Global_1574633.f_18;
}

BOOL func_91() // Position - 0x2E50
{
	if (IS_BIT_SET(Global_1845221[unk_0x259BE71D8A81D4FA() /*889*/].f_885, 2) && !(Global_2685658.f_2847.f_216 == -1))
		return true;

	return false;
}

void func_92() // Position - 0x2E81
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2684718, 7);
	return;
}

void func_93() // Position - 0x2E92
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_2684718.f_2), 15);
	return;
}

BOOL func_94(int iParam0) // Position - 0x2EA6
{
	if (iParam0 || func_107())
	{
		if (!func_96(true))
			return true;
	
		if (!func_95())
			return true;
	
		if (unk_0xB10D024D4A098884())
			return true;
	}

	return false;
}

BOOL func_95() // Position - 0x2EE2
{
	return Global_1928991.f_4;
}

BOOL func_96(BOOL bParam0) // Position - 0x2EF0
{
	if (!func_104())
		return false;

	if (func_99(func_101(-1), 0) >= 1 || func_52(123, -1) && func_52(133, -1))
	{
		func_98();
		return true;
	}
	else if (bParam0)
	{
		func_97();
	}

	return false;
}

void func_97() // Position - 0x2F41
{
	Global_1928991.f_5 = 1;
	return;
}

void func_98() // Position - 0x2F50
{
	Global_1928991.f_4 = 1;
	return;
}

int func_99(int iParam0, int iParam1) // Position - 0x2F5F
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (func_100(num) == iParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_100(num) < iParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

// Unhandled jump detected. Output should be considered invalid
int func_100(int iParam0) // Position - 0x301A
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return 6100;
		
			case 6:
				return &func_64;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return 50200;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return joaat("pyro_sub_bass_synth");
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		
			default:
				goto 0x534;
		}
	}
	else
	{
		num = iParam0 - 99;
		num2 = (num * (num + 1)) / 2;
		return 1555800 + (num * 28500) + (num2 * 50);
	}

	return 1555800;
}

int func_101(int iParam0) // Position - 0x3555
{
	return func_102(640, iParam0);
}

int func_102(int iParam0, int iParam1) // Position - 0x3566
{
	var unk;
	int num;

	if (iParam0 != 15468)
	{
		unk = func_103(iParam0, iParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

var func_103(int iParam0, int iParam1) // Position - 0x3595
{
	return unk_0xD69CE161FE614531(0, iParam0, func_54(iParam1));
}

BOOL func_104() // Position - 0x35AA
{
	if (func_106() && func_105(0))
		return true;

	return false;
}

var func_105(int iParam0) // Position - 0x35C8
{
	return Global_1574538[iParam0];
}

var func_106() // Position - 0x35D8
{
	return func_105(func_55() + 1);
}

int func_107() // Position - 0x35EA
{
	return Global_1928991.f_2;
}

BOOL func_108() // Position - 0x35F8
{
	if (func_118() || !func_116(-1) || !func_114() || !func_111() || !func_110() || func_109())
		return true;

	return false;
}

BOOL func_109() // Position - 0x3643
{
	return Global_2696429;
}

BOOL func_110() // Position - 0x364F
{
	if (unk_0x38640D2193CB547F(903) == 1)
		return true;

	return false;
}

BOOL func_111() // Position - 0x366A
{
	int num;

	if (func_112(&num) == 0)
		if (num == 1)
			return false;

	return true;
}

int func_112(var uParam0) // Position - 0x3687
{
	if (func_113())
	{
		*uParam0 = 11;
		return 1;
	}

	return unk_0x0C81430427CA20D7(uParam0);
}

BOOL func_113() // Position - 0x36A5
{
	return Global_33365;
}

BOOL func_114() // Position - 0x36B0
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (func_115(i) == 1)
		{
			i = 2;
			return true;
		}
	}

	return false;
}

int func_115(int iParam0) // Position - 0x36DC
{
	if (func_52(76, iParam0) == true)
		return 1;

	return 0;
}

BOOL func_116(int iParam0) // Position - 0x36F8
{
	int num;
	int num2;

	num = func_117(iParam0);
	num2 = unk_0x38640D2193CB547F(num);

	if (IS_BIT_SET(num2, 1))
		return true;

	return false;
}

int func_117(int iParam0) // Position - 0x371C
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_55();

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

BOOL func_118() // Position - 0x377F
{
	return Global_2684718.f_745;
}

BOOL func_119(int iParam0) // Position - 0x378E
{
	return Global_1928991.f_16[iParam0 /*44*/].f_4;
}

void func_120() // Position - 0x37A2
{
	int i;
	int num;

	func_126();

	if (unk_0x23AB41CD7BD481B9() && !func_123())
	{
		for (i = 0; i < 5; i = i + 1)
		{
			num = unk_0xC9892FE6CC695923(func_122(i));
		
			if (num > 0)
			{
				Global_1928991.f_16[i /*44*/] = num;
				func_121(i, num);
			}
		}
	}
	else
	{
		for (i = 0; i < 5; i = i + 1)
		{
			Global_1928991.f_16[i /*44*/].f_4 = 0;
		}
	}

	return;
}

void func_121(int iParam0, int iParam1) // Position - 0x3819
{
	BOOL flag;
	var unk;
	var unk17;

	flag = true;

	if (unk_0x59632E3312C5FFDF(iParam1, "contentId", &unk))
		TEXT_LABEL_COPY(&(Global_1928991.f_16[iParam0 /*44*/].f_6), { unk }, 6);
	else
		flag = false;

	if (unk_0x59632E3312C5FFDF(iParam1, "playlist", &unk))
		Global_1928991.f_16[iParam0 /*44*/].f_12 = { unk };
	else
		flag = false;

	if (unk_0xF5EB76164CE420A5(iParam1, &unk))
		Global_1928991.f_16[iParam0 /*44*/].f_28 = { unk };
	else
		flag = false;

	if (iParam0 == 1)
	{
		if (unk_0x72930FB68F9B4179(iParam1, "coronaCountdown", &unk17))
			Global_1928991.f_16[iParam0 /*44*/].f_1 = unk17;
		else
			Global_1928991.f_16[iParam0 /*44*/].f_1 = 120000;
	
		Global_1928991.f_16[iParam0 /*44*/].f_2 = 0;
	
		if (unk_0x72930FB68F9B4179(iParam1, "eventSubType", &unk17))
			Global_1928991.f_16[iParam0 /*44*/].f_2 = unk17;
	}

	if (flag)
	{
		if (iParam0 != 1)
			Global_1928991.f_1 = 1;
	
		Global_1928991.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1928991.f_16[iParam0 /*44*/].f_4 = 0;
	}

	return;
}

char* func_122(int iParam0) // Position - 0x3927
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
	
		case 1:
			return "Tournament";
	
		case 2:
			return "LiveStreaming";
	
		case 3:
			return "Sweepstakes";
	
		case 4:
			return "FeaturedPlaylist";
	
		default:
		
	}

	return "";
}

BOOL func_123() // Position - 0x3974
{
	if (!func_124())
		return true;

	return false;
}

BOOL func_124() // Position - 0x3989
{
	if (func_125())
		return false;

	if (unk_0x5676319ACE5BEC37() == 0)
		return false;

	return true;
}

BOOL func_125() // Position - 0x39A9
{
	return Global_2696929;
}

void func_126() // Position - 0x39B5
{
	var unk;

	unk.f_8 = -1;
	unk.f_9 = -1;
	unk.f_16 = 6;
	Global_1928991 = { unk };
	return;
}

void func_127(int iParam0) // Position - 0x39E0
{
	var unk;

	if (Global_79539)
		unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	else
		unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_21055, 1);

	if (unk_0xFCEF367B86651ED3(1, iParam0, &unk, 21))
		func_129();

	Global_2746945.f_1 = 0;
	Global_2746945.f_33 = -1;
	Global_2746945.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2746945.f_4), "", 64);
	func_128(&(Global_2746945.f_20));
	return;
}

void func_128(var uParam0) // Position - 0x3A48
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	return;
}

void func_129() // Position - 0x3A90
{
	Global_2746945.f_2 = 1;
	Global_2746945.f_38 = 1;

	if (unk_0x261E3728EE56B3AC())
	{
		if (unk_0x5150DDF9D3BDA9E5())
		{
			while (unk_0x8BDB5F6FED3994AD())
			{
				SYSTEM::WAIT(0);
			}
		
			unk_0x7D8697356CC73FFD();
			Global_2746945 = 0;
			Global_2746945.f_2 = 0;
		}
		else if (IS_GAMER_HANDLE_VALID(Global_2746945.f_20))
		{
			if (unk_0xEDD63461767A518C(&(Global_2746945.f_20)))
				if (!unk_0x484CF81C32C3D413(&(Global_2746945.f_20)))
					func_136();
		}
		else
		{
			func_136();
		}
	}
	else
	{
		func_136();
	}

	if (Global_2746945.f_37)
		func_130(0);

	Global_2746945.f_37 = 0;
	Global_2746945.f_3 = 0;
	return;
}

void func_130(int iParam0) // Position - 0x3B30
{
	if (func_135())
		return;

	if (Global_21284)
		if (func_134())
			func_132(true, true);
		else
			func_132(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8920, 16);

	if (unk_0xE87F28FD4128D063())
		unk_0x0F15249D24BC5ADA(0);

	Global_22425 = 5;

	if (iParam0 == 1)
		unk_0x0B0C9A0F9AAEB7F0(&Global_8919, 30);
	else
		unk_0x8744D2E3FC95740E(&Global_8919, 30);

	if (!func_131())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_131() // Position - 0x3BBA
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_132(BOOL bParam0, BOOL bParam1) // Position - 0x3BE1
{
	if (bParam0)
	{
		if (func_133(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				unk_0x78C4EBB0251847E2(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			unk_0x6B7EA0158D00C600(Global_21003);
		else
			unk_0x6B7EA0158D00C600(Global_20994);
	}

	return;
}

BOOL func_133(int iParam0) // Position - 0x3C55
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

BOOL func_134() // Position - 0x3CAC
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_135() // Position - 0x3CBA
{
	return IS_BIT_SET(Global_1957675, 19);
}

void func_136() // Position - 0x3CC9
{
	Global_2746945.f_1 = 0;
	Global_2746945 = 0;
	Global_2746945.f_2 = 0;
	Global_2746945.f_33 = -1;
	Global_2746945.f_34 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2746945.f_4), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_2746945.f_39[0 /*16*/], "", 64);
	Global_2746945.f_38 = 0;
	Global_2746945.f_56 = 0;
	Global_2746945.f_57 = 0;
	Global_2746945.f_58 = -2;
	Global_2746945.f_3 = 0;
	func_128(&(Global_2746945.f_20));
	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x3D38
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_138(int iParam0) // Position - 0x3D48
{
	var unk;

	if (unk_0xFCEF367B86651ED3(1, iParam0, &unk, 15))
	{
		Global_2746945.f_33 = unk.f_1;
		Global_2746945.f_34 = unk;
	}

	return;
}

void func_139(int iParam0) // Position - 0x3D73
{
	var unk;

	if (unk_0xFCEF367B86651ED3(1, iParam0, &unk, 21))
	{
		if (Global_2746945.f_3 == 0)
		{
			if (!func_140(&(unk.f_8)))
			{
				unk_0x04C07C028D5A3A1A(0, 2);
			}
			else
			{
				Global_2746945.f_3 = 1;
				TEXT_LABEL_COPY(&(Global_2746945.f_4), { unk }, 16);
				Global_2746945.f_20 = { unk.f_8 };
				TEXT_LABEL_ASSIGN_STRING(&Global_2746945.f_39[0 /*16*/], "", 64);
				Global_2746945.f_58 = -2;
				Global_2746945.f_56 = 0;
				Global_2746945.f_57 = 0;
			}
		}
		else if (!func_140(&(unk.f_8)))
		{
			unk_0x04C07C028D5A3A1A(0, 2);
		}
		else
		{
			Global_2746945.f_3 = 1;
			TEXT_LABEL_COPY(&(Global_2746945.f_4), { unk }, 16);
			Global_2746945.f_20 = { unk.f_8 };
			TEXT_LABEL_ASSIGN_STRING(&Global_2746945.f_39[0 /*16*/], "", 64);
			Global_2746945.f_58 = -2;
			Global_2746945.f_56 = 0;
			Global_2746945.f_57 = 0;
		}
	}

	return;
}

BOOL func_140(var uParam0) // Position - 0x3E57
{
	if (Global_79539)
	{
		if (func_50() == false)
			return false;
	
		if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), true, true))
			if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
				if (unk_0x837FF265C016E3B7(unk_0x4A8C381C258A124D()) >= 1f)
					return false;
	}

	if (unk_0x5676319ACE5BEC37() == 0)
		return false;

	Global_2746945.f_1;

	if (Global_21292 == 1)
		return false;

	if (Global_1836713)
		return false;

	if (Global_2746945.f_36)
		return false;

	if (func_131())
		return false;

	if (Global_44181 != 6 && Global_44181 != 8 && Global_44181 != 12 && Global_44181 != 15)
		return false;

	if (func_143() && !func_142(12))
		return false;

	if (unk_0xE87F28FD4128D063())
		return false;

	if (unk_0x0CB7695268A7F50F())
		return false;

	if (!func_141(unk_0x259BE71D8A81D4FA()))
		return false;

	if (unk_0x4D9174D8796EA622())
		return false;

	if (Global_79800)
		return false;

	if (unk_0x7B3F26F5D11BF3BE())
		if (!unk_0xF060DE6D44C11C50(unk_0x259BE71D8A81D4FA()))
			return false;

	if (!unk_0x261E3728EE56B3AC())
		return false;

	if (unk_0x73038C255039CB0A(uParam0) || unk_0x4BD40114338C93C0(uParam0))
		return false;

	if (unk_0xD948F622B2C316C0(uParam0) || unk_0x48888A41791BFEF1(uParam0))
		return false;

	if (unk_0x6FE3848CD1092574())
		if (func_16())
			if (unk_0x03D7696E3D331706())
				return false;
		else if (func_10())
			return false;

	return true;
}

BOOL func_141(int iParam0) // Position - 0x3FDB
{
	int num;
	var unk;

	if (unk_0x62B038F95CEA3FE9() == 0)
		return false;

	num = -1;

	if (iParam0 != unk_0x259BE71D8A81D4FA())
	{
		num = iParam0;
	
		if (num == -1)
			return false;
	}

	if (unk_0x0BA1A956D36B210F() || func_10())
		if (unk_0x9A9677D7F3615A86(0, num))
			if (unk_0xD25970CBEE074E07())
				return true;

	if (unk_0x1226C55CA7D2269A() || func_16())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			if (unk_0x521B8DE052C56837(0, -3, 1) || unk_0x9A9677D7F3615A86(1, -1))
				return true;
		}
		else
		{
			unk = { func_8(iParam0) };
		
			if (unk_0x9A9677D7F3615A86(0, -1) || unk_0x9A9677D7F3615A86(1, -1) && unk_0xEDD63461767A518C(&unk))
				return true;
		}
	}

	if (unk_0x761778199FE1211C())
		if (unk_0x9A9677D7F3615A86(0, num))
			if (unk_0xD25970CBEE074E07())
				return true;

	return false;
}

BOOL func_142(int iParam0) // Position - 0x40B5
{
	return Global_44181 == iParam0;
}

BOOL func_143() // Position - 0x40C3
{
	if (Global_44181 == 15)
		return false;

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(int player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x40D8
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

void func_145() // Position - 0x4138
{
	func_136();
	return;
}

void func_146() // Position - 0x4144
{
	Global_2746945.f_1 = 1;
	Global_2746945.f_33 = -1;
	Global_2746945.f_34 = -1;

	if (unk_0xA0C7B98BCF1EEF9E(Global_21047) == 1)
	{
		if (Global_21054)
		{
			func_147(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
		
			if (Global_21009)
				func_147(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_147(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}

	return;
}

void func_147(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x41BD
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		unk_0x330108B080A2132F(SYSTEM::ROUND(fParam6));

	if (!unk_0xD6F9DEE4765092A9(sParam7))
		func_148(sParam7);

	if (!unk_0xD6F9DEE4765092A9(sParam8))
		func_148(sParam8);

	if (!unk_0xD6F9DEE4765092A9(sParam9))
		func_148(sParam9);

	if (!unk_0xD6F9DEE4765092A9(sParam10))
		func_148(sParam10);

	if (!unk_0xD6F9DEE4765092A9(sParam11))
		func_148(sParam11);

	unk_0xE6B753D52F4CA222();
	return;
}

void func_148(char* sParam0) // Position - 0x4270
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
	return;
}

void func_149() // Position - 0x4282
{
	int i;

	if (bLocal_63)
	{
		Global_56559 = 0;
		Global_56559.f_12 = 0;
		Global_56559.f_24 = 0;
		Global_56559.f_36 = 0;
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_56559.f_1[i] = 0;
			Global_56559.f_13[i] = 0;
			Global_56559.f_25[i] = 0;
			Global_56559.f_37[i] = 0;
		}
	
		bLocal_63 = false;
	}

	return;
}

