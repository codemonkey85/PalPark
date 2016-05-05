#pragma once
#include <string>
#include <locale>
#include <vector>
#include <array>
#include "common.h"

// Enums
namespace Items
{
	enum items : uint16
	{
		NOTHING = 0x0000,
		masterball = 0x0001,
		ultraball = 0x0002,
		greatball = 0x0003,
		pokeball = 0x0004,
		safariball = 0x0005,
		netball = 0x0006,
		diveball = 0x0007,
		nestball = 0x0008,
		repeatball = 0x0009,
		timerball = 0x000a,
		luxuryball = 0x000b,
		premierball = 0x000c,
		duskball = 0x000d,
		healball = 0x000e,
		quickball = 0x000f,
		cherishball = 0x0010,
		potion = 0x0011,
		antidote = 0x0012,
		burnheal = 0x0013,
		iceheal = 0x0014,
		awakening = 0x0015,
		parlyzheal = 0x0016,
		fullrestore = 0x0017,
		maxpotion = 0x0018,
		hyperpotion = 0x0019,
		superpotion = 0x001a,
		fullheal = 0x001b,
		revive = 0x001c,
		maxrevive = 0x001d,
		freshwater = 0x001e,
		sodapop = 0x001f,
		lemonade = 0x0020,
		moomoomilk = 0x0021,
		energypowder = 0x0022,
		energyroot = 0x0023,
		healpowder = 0x0024,
		revivalherb = 0x0025,
		ether = 0x0026,
		maxether = 0x0027,
		elixir = 0x0028,
		maxelixir = 0x0029,
		lavacookie = 0x002a,
		berryjuice = 0x002b,
		sacredash = 0x002c,
		hpup = 0x002d,
		protein = 0x002e,
		iron = 0x002f,
		carbos = 0x0030,
		calcium = 0x0031,
		rarecandy = 0x0032,
		ppup = 0x0033,
		zinc = 0x0034,
		ppmax = 0x0035,
		oldgateau = 0x0036,
		guardspec = 0x0037,
		direhit = 0x0038,
		xattack = 0x0039,
		xdefend = 0x003a,
		xspeed = 0x003b,
		xaccuracy = 0x003c,
		xspecial = 0x003d,
		xspdef = 0x003e,
		pokedoll = 0x003f,
		fluffytail = 0x0040,
		blueflute = 0x0041,
		yellowflute = 0x0042,
		redflute = 0x0043,
		blackflute = 0x0044,
		whiteflute = 0x0045,
		shoalsalt = 0x0046,
		shoalshell = 0x0047,
		redshard = 0x0048,
		blueshard = 0x0049,
		yellowshard = 0x004a,
		greenshard = 0x004b,
		superrepel = 0x004c,
		maxrepel = 0x004d,
		escaperope = 0x004e,
		repel = 0x004f,
		sunstone = 0x0050,
		moonstone = 0x0051,
		firestone = 0x0052,
		thunderstone = 0x0053,
		waterstone = 0x0054,
		leafstone = 0x0055,
		tinymushroom = 0x0056,
		bigmushroom = 0x0057,
		pearl = 0x0058,
		bigpearl = 0x0059,
		stardust = 0x005a,
		starpiece = 0x005b,
		nugget = 0x005c,
		heartscale = 0x005d,
		honey = 0x005e,
		growthmulch = 0x005f,
		dampmulch = 0x0060,
		stablemulch = 0x0061,
		gooeymulch = 0x0062,
		rootfossil = 0x0063,
		clawfossil = 0x0064,
		helixfossil = 0x0065,
		domefossil = 0x0066,
		oldamber = 0x0067,
		armorfossil = 0x0068,
		skullfossil = 0x0069,
		rarebone = 0x006a,
		shinystone = 0x006b,
		duskstone = 0x006c,
		dawnstone = 0x006d,
		ovalstone = 0x006e,
		oddkeystone = 0x006f,
		griseousorb = 0x0070,
		dousedrive = 0x0074,
		shockdrive = 0x0075,
		burndrive = 0x0076,
		chilldrive = 0x0077,
		sweetheart = 0x0086,
		adamantorb = 0x0087,
		lustrousorb = 0x0088,
		greetmail = 0x0089,
		favoredmail = 0x008a,
		rsvpmail = 0x008b,
		thanksmail = 0x008c,
		inquirymail = 0x008d,
		likemail = 0x008e,
		replymail = 0x008f,
		bridgemails = 0x0090,
		bridgemaild = 0x0091,
		bridgemailt = 0x0092,
		bridgemailv = 0x0093,
		bridgemailm = 0x0094,
		cheriberry = 0x0095,
		chestoberry = 0x0096,
		pechaberry = 0x0097,
		rawstberry = 0x0098,
		aspearberry = 0x0099,
		leppaberry = 0x009a,
		oranberry = 0x009b,
		persimberry = 0x009c,
		lumberry = 0x009d,
		sitrusberry = 0x009e,
		figyberry = 0x009f,
		wikiberry = 0x00a0,
		magoberry = 0x00a1,
		aguavberry = 0x00a2,
		iapapaberry = 0x00a3,
		razzberry = 0x00a4,
		blukberry = 0x00a5,
		nanabberry = 0x00a6,
		wepearberry = 0x00a7,
		pinapberry = 0x00a8,
		pomegberry = 0x00a9,
		kelpsyberry = 0x00aa,
		qualotberry = 0x00ab,
		hondewberry = 0x00ac,
		grepaberry = 0x00ad,
		tamatoberry = 0x00ae,
		cornnberry = 0x00af,
		magostberry = 0x00b0,
		rabutaberry = 0x00b1,
		nomelberry = 0x00b2,
		spelonberry = 0x00b3,
		pamtreberry = 0x00b4,
		watmelberry = 0x00b5,
		durinberry = 0x00b6,
		belueberry = 0x00b7,
		occaberry = 0x00b8,
		passhoberry = 0x00b9,
		wacanberry = 0x00ba,
		rindoberry = 0x00bb,
		yacheberry = 0x00bc,
		chopleberry = 0x00bd,
		kebiaberry = 0x00be,
		shucaberry = 0x00bf,
		cobaberry = 0x00c0,
		payapaberry = 0x00c1,
		tangaberry = 0x00c2,
		chartiberry = 0x00c3,
		kasibberry = 0x00c4,
		habanberry = 0x00c5,
		colburberry = 0x00c6,
		babiriberry = 0x00c7,
		chilanberry = 0x00c8,
		liechiberry = 0x00c9,
		ganlonberry = 0x00ca,
		salacberry = 0x00cb,
		petayaberry = 0x00cc,
		apicotberry = 0x00cd,
		lansatberry = 0x00ce,
		starfberry = 0x00cf,
		enigmaberry = 0x00d0,
		micleberry = 0x00d1,
		custapberry = 0x00d2,
		jabocaberry = 0x00d3,
		rowapberry = 0x00d4,
		brightpowder = 0x00d5,
		whiteherb = 0x00d6,
		machobrace = 0x00d7,
		expshare = 0x00d8,
		quickclaw = 0x00d9,
		soothebell = 0x00da,
		mentalherb = 0x00db,
		choiceband = 0x00dc,
		kingsrock = 0x00dd,
		silverpowder = 0x00de,
		amuletcoin = 0x00df,
		cleansetag = 0x00e0,
		souldew = 0x00e1,
		deepseatooth = 0x00e2,
		deepseascale = 0x00e3,
		smokeball = 0x00e4,
		everstone = 0x00e5,
		focusband = 0x00e6,
		luckyegg = 0x00e7,
		scopelens = 0x00e8,
		metalcoat = 0x00e9,
		leftovers = 0x00ea,
		dragonscale = 0x00eb,
		lightball = 0x00ec,
		softsand = 0x00ed,
		hardstone = 0x00ee,
		miracleseed = 0x00ef,
		blackglasses = 0x00f0,
		blackbelt = 0x00f1,
		magnet = 0x00f2,
		mysticwater = 0x00f3,
		sharpbeak = 0x00f4,
		poisonbarb = 0x00f5,
		nevermeltice = 0x00f6,
		spelltag = 0x00f7,
		twistedspoon = 0x00f8,
		charcoal = 0x00f9,
		dragonfang = 0x00fa,
		silkscarf = 0x00fb,
		upgrade = 0x00fc,
		shellbell = 0x00fd,
		seaincense = 0x00fe,
		laxincense = 0x00ff,
		luckypunch = 0x0100,
		metalpowder = 0x0101,
		thickclub = 0x0102,
		stick = 0x0103,
		redscarf = 0x0104,
		bluescarf = 0x0105,
		pinkscarf = 0x0106,
		greenscarf = 0x0107,
		yellowscarf = 0x0108,
		widelens = 0x0109,
		muscleband = 0x010a,
		wiseglasses = 0x010b,
		expertbelt = 0x010c,
		lightclay = 0x010d,
		lifeorb = 0x010e,
		powerherb = 0x010f,
		toxicorb = 0x0110,
		flameorb = 0x0111,
		quickpowder = 0x0112,
		focussash = 0x0113,
		zoomlens = 0x0114,
		metronome = 0x0115,
		ironball = 0x0116,
		laggingtail = 0x0117,
		destinyknot = 0x0118,
		blacksludge = 0x0119,
		icyrock = 0x011a,
		smoothrock = 0x011b,
		heatrock = 0x011c,
		damprock = 0x011d,
		gripclaw = 0x011e,
		choicescarf = 0x011f,
		stickybarb = 0x0120,
		powerbracer = 0x0121,
		powerbelt = 0x0122,
		powerlens = 0x0123,
		powerband = 0x0124,
		poweranklet = 0x0125,
		powerweight = 0x0126,
		shedshell = 0x0127,
		bigroot = 0x0128,
		choicespecs = 0x0129,
		flameplate = 0x012a,
		splashplate = 0x012b,
		zapplate = 0x012c,
		meadowplate = 0x012d,
		icicleplate = 0x012e,
		fistplate = 0x012f,
		toxicplate = 0x0130,
		earthplate = 0x0131,
		skyplate = 0x0132,
		mindplate = 0x0133,
		insectplate = 0x0134,
		stoneplate = 0x0135,
		spookyplate = 0x0136,
		dracoplate = 0x0137,
		dreadplate = 0x0138,
		ironplate = 0x0139,
		oddincense = 0x013a,
		rockincense = 0x013b,
		fullincense = 0x013c,
		waveincense = 0x013d,
		roseincense = 0x013e,
		luckincense = 0x013f,
		pureincense = 0x0140,
		protector = 0x0141,
		electirizer = 0x0142,
		magmarizer = 0x0143,
		dubiousdisc = 0x0144,
		reapercloth = 0x0145,
		razorclaw = 0x0146,
		razorfang = 0x0147,
		tm01 = 0x0148,
		tm02 = 0x0149,
		tm03 = 0x014a,
		tm04 = 0x014b,
		tm05 = 0x014c,
		tm06 = 0x014d,
		tm07 = 0x014e,
		tm08 = 0x014f,
		tm09 = 0x0150,
		tm10 = 0x0151,
		tm11 = 0x0152,
		tm12 = 0x0153,
		tm13 = 0x0154,
		tm14 = 0x0155,
		tm15 = 0x0156,
		tm16 = 0x0157,
		tm17 = 0x0158,
		tm18 = 0x0159,
		tm19 = 0x015a,
		tm20 = 0x015b,
		tm21 = 0x015c,
		tm22 = 0x015d,
		tm23 = 0x015e,
		tm24 = 0x015f,
		tm25 = 0x0160,
		tm26 = 0x0161,
		tm27 = 0x0162,
		tm28 = 0x0163,
		tm29 = 0x0164,
		tm30 = 0x0165,
		tm31 = 0x0166,
		tm32 = 0x0167,
		tm33 = 0x0168,
		tm34 = 0x0169,
		tm35 = 0x016a,
		tm36 = 0x016b,
		tm37 = 0x016c,
		tm38 = 0x016d,
		tm39 = 0x016e,
		tm40 = 0x016f,
		tm41 = 0x0170,
		tm42 = 0x0171,
		tm43 = 0x0172,
		tm44 = 0x0173,
		tm45 = 0x0174,
		tm46 = 0x0175,
		tm47 = 0x0176,
		tm48 = 0x0177,
		tm49 = 0x0178,
		tm50 = 0x0179,
		tm51 = 0x017a,
		tm52 = 0x017b,
		tm53 = 0x017c,
		tm54 = 0x017d,
		tm55 = 0x017e,
		tm56 = 0x017f,
		tm57 = 0x0180,
		tm58 = 0x0181,
		tm59 = 0x0182,
		tm60 = 0x0183,
		tm61 = 0x0184,
		tm62 = 0x0185,
		tm63 = 0x0186,
		tm64 = 0x0187,
		tm65 = 0x0188,
		tm66 = 0x0189,
		tm67 = 0x018a,
		tm68 = 0x018b,
		tm69 = 0x018c,
		tm70 = 0x018d,
		tm71 = 0x018e,
		tm72 = 0x018f,
		tm73 = 0x0190,
		tm74 = 0x0191,
		tm75 = 0x0192,
		tm76 = 0x0193,
		tm77 = 0x0194,
		tm78 = 0x0195,
		tm79 = 0x0196,
		tm80 = 0x0197,
		tm81 = 0x0198,
		tm82 = 0x0199,
		tm83 = 0x019a,
		tm84 = 0x019b,
		tm85 = 0x019c,
		tm86 = 0x019d,
		tm87 = 0x019e,
		tm88 = 0x019f,
		tm89 = 0x01a0,
		tm90 = 0x01a1,
		tm91 = 0x01a2,
		tm92 = 0x01a3,
		hm01 = 0x01a4,
		hm02 = 0x01a5,
		hm03 = 0x01a6,
		hm04 = 0x01a7,
		hm05 = 0x01a8,
		hm06 = 0x01a9,
		explorerkit = 0x01ac,
		lootsack = 0x01ad,
		rulebook = 0x01ae,
		pokeradar = 0x01af,
		pointcard = 0x01b0,
		journal = 0x01b1,
		sealcase = 0x01b2,
		fashioncase = 0x01b3,
		sealbag = 0x01b4,
		palpad = 0x01b5,
		workskey = 0x01b6,
		oldcharm = 0x01b7,
		galactickey = 0x01b8,
		redchain = 0x01b9,
		townmap = 0x01ba,
		vsseeker = 0x01bb,
		coincase = 0x01bc,
		oldrod = 0x01bd,
		goodrod = 0x01be,
		superrod = 0x01bf,
		sprayduck = 0x01c0,
		poffincase = 0x01c1,
		bicycle = 0x01c2,
		suitekey = 0x01c3,
		oaksletter = 0x01c4,
		lunarwing = 0x01c5,
		membercard = 0x01c6,
		azureflute = 0x01c7,
		ssticket = 0x01c8,
		contestpass = 0x01c9,
		magmastone = 0x01ca,
		parcel = 0x01cb,
		coupon1 = 0x01cc,
		coupon2 = 0x01cd,
		coupon3 = 0x01ce,
		storagekey = 0x01cf,
		secretpotion = 0x01d0,
		vsrecorder = 0x01d1,
		gracidea = 0x01d2,
		secretkey = 0x01d3,
		apricornbox = 0x01d4,
		unownreport = 0x01d5,
		berrypots = 0x01d6,
		dowsingmchn = 0x01d7,
		bluecard = 0x01d8,
		slowpoketail = 0x01d9,
		clearbell = 0x01da,
		cardkey = 0x01db,
		basementkey = 0x01dc,
		squirtbottle = 0x01dd,
		redscale = 0x01de,
		lostitem = 0x01df,
		pass = 0x01e0,
		machinepart = 0x01e1,
		silverwing = 0x01e2,
		rainbowwing = 0x01e3,
		mysteryegg = 0x01e4,
		redapricorn = 0x01e5,
		ylwapricorn = 0x01e6,
		bluapricorn = 0x01e7,
		grnapricorn = 0x01e8,
		pnkapricorn = 0x01e9,
		whtapricorn = 0x01ea,
		blkapricorn = 0x01eb,
		fastball = 0x01ec,
		levelball = 0x01ed,
		lureball = 0x01ee,
		heavyball = 0x01ef,
		loveball = 0x01f0,
		friendball = 0x01f1,
		moonball = 0x01f2,
		sportball = 0x01f3,
		parkball = 0x01f4,
		photoalbum = 0x01f5,
		gbsounds = 0x01f6,
		tidalbell = 0x01f7,
		ragecandybar = 0x01f8,
		datacard01 = 0x01f9,
		datacard02 = 0x01fa,
		datacard03 = 0x01fb,
		datacard04 = 0x01fc,
		datacard05 = 0x01fd,
		datacard06 = 0x01fe,
		datacard07 = 0x01ff,
		datacard08 = 0x0200,
		datacard09 = 0x0201,
		datacard10 = 0x0202,
		datacard11 = 0x0203,
		datacard12 = 0x0204,
		datacard13 = 0x0205,
		datacard14 = 0x0206,
		datacard15 = 0x0207,
		datacard16 = 0x0208,
		datacard17 = 0x0209,
		datacard18 = 0x020a,
		datacard19 = 0x020b,
		datacard20 = 0x020c,
		datacard21 = 0x020d,
		datacard22 = 0x020e,
		datacard23 = 0x020f,
		datacard24 = 0x0210,
		datacard25 = 0x0211,
		datacard26 = 0x0212,
		datacard27 = 0x0213,
		jadeorb = 0x0214,
		lockcapsule = 0x0215,
		redorb = 0x0216,
		blueorb = 0x0217,
		enigmastone = 0x0218,
		prismscale = 0x0219,
		eviolite = 0x021a,
		floatstone = 0x021b,
		rockyhelmet = 0x021c,
		airballoon = 0x021d,
		redcard = 0x021e,
		ringtarget = 0x021f,
		bindingband = 0x0220,
		absorbbulb = 0x0221,
		cellbattery = 0x0222,
		ejectbutton = 0x0223,
		firegem = 0x0224,
		watergem = 0x0225,
		electricgem = 0x0226,
		grassgem = 0x0227,
		icegem = 0x0228,
		fightinggem = 0x0229,
		poisongem = 0x022a,
		groundgem = 0x022b,
		flyinggem = 0x022c,
		psychicgem = 0x022d,
		buggem = 0x022e,
		rockgem = 0x022f,
		ghostgem = 0x0230,
		dragongem = 0x0231,
		darkgem = 0x0232,
		steelgem = 0x0233,
		normalgem = 0x0234,
		healthwing = 0x0235,
		musclewing = 0x0236,
		resistwing = 0x0237,
		geniuswing = 0x0238,
		cleverwing = 0x0239,
		swiftwing = 0x023a,
		prettywing = 0x023b,
		coverfossil = 0x023c,
		plumefossil = 0x023d,
		libertypass = 0x023e,
		passorb = 0x023f,
		dreamball = 0x0240,
		poketoy = 0x0241,
		propcase = 0x0242,
		dragonskull = 0x0243,
		balmmushroom = 0x0244,
		bignugget = 0x0245,
		pearlstring = 0x0246,
		cometshard = 0x0247,
		reliccopper = 0x0248,
		relicsilver = 0x0249,
		relicgold = 0x024a,
		relicvase = 0x024b,
		relicband = 0x024c,
		relicstatue = 0x024d,
		reliccrown = 0x024e,
		casteliacone = 0x024f,
		direhit2 = 0x0250,
		xspeed2 = 0x0251,
		xspecial2 = 0x0252,
		xspdef2 = 0x0253,
		xdefend2 = 0x0254,
		xattack2 = 0x0255,
		xaccuracy2 = 0x0256,
		xspeed3 = 0x0257,
		xspecial3 = 0x0258,
		xspdef3 = 0x0259,
		xdefend3 = 0x025a,
		xattack3 = 0x025b,
		xaccuracy3 = 0x025c,
		xspeed6 = 0x025d,
		xspecial6 = 0x025e,
		xspdef6 = 0x025f,
		xdefend6 = 0x0260,
		xattack6 = 0x0261,
		xaccuracy6 = 0x0262,
		abilityurge = 0x0263,
		itemdrop = 0x0264,
		itemurge = 0x0265,
		reseturge = 0x0266,
		direhit3 = 0x0267,
		lightstone = 0x0268,
		darkstone = 0x0269,
		tm93 = 0x026a,
		tm94 = 0x026b,
		tm95 = 0x026c,
		xtransceiver = 0x026d,
		godstone = 0x026e,
		gram1 = 0x026f,
		gram2 = 0x0270,
		gram3 = 0x0271,
		xtransceiver2 = 0x0272,
		medalbox = 0x0273,
		dnasplicers = 0x0274,
		dnasplicers2 = 0x0275,
		permit = 0x0276,
		ovalcharm = 0x0277,
		shinycharm = 0x0278,
		plasmacard = 0x0279,
		grubbyhanky = 0x027a,
		colressmchn = 0x027b,
		droppeditem = 0x027c,
		droppeditem2 = 0x027d,
		revealglass = 0x027e
	};
}
namespace Hometowns
{
	enum hometowns : byte
	{
		colosseum_bonus,
		sapphire,
		ruby,
		emerald,
		firered,
		leafgreen,
		heartgold = 7,
		soulsilver,
		diamond = 10,
		pearl,
		platinum,
		colosseum = 15
	};
}
namespace Stat_IDs
{
	enum stat_ids : byte
	{
		hp = 1,
		attack,
		defense,
		spatk,
		spdef,
		speed
	};
}
namespace Stats
{
	enum stats : byte
	{
		hp,
		attack,
		defense,
		spatk,
		spdef,
		speed
	};
}
namespace ContestStat_IDs
{
	enum conteststat_ids : byte
	{
		cool = 1,
		beauty,
		cute,
		smart,
		tough,
		sheen
	};
}
namespace ContestStats
{
	enum conteststats : byte
	{
		cool,
		beauty,
		cute,
		smart,
		tough,
		sheen
	};
}
namespace Moves
{
	enum moves : uint16
	{
		NOTHING,
		pound,
		karatechop,
		doubleslap,
		cometpunch,
		megapunch,
		payday,
		firepunch,
		icepunch,
		thunderpunch,
		scratch,
		vicegrip,
		guillotine,
		razorwind,
		swordsdance,
		cut,
		gust,
		wingattack,
		whirlwind,
		fly,
		bind,
		slam,
		vinewhip,
		stomp,
		doublekick,
		megakick,
		jumpkick,
		rollingkick,
		sandattack,
		headbutt,
		hornattack,
		furyattack,
		horndrill,
		tackle,
		bodyslam,
		wrap,
		takedown,
		thrash,
		doubleedge,
		tailwhip,
		poisonsting,
		twineedle,
		pinmissile,
		leer,
		bite,
		growl,
		roar,
		sing,
		supersonic,
		sonicboom,
		disable,
		acid,
		ember,
		flamethrower,
		mist,
		watergun,
		hydropump,
		surf,
		icebeam,
		blizzard,
		psybeam,
		bubblebeam,
		aurorabeam,
		hyperbeam,
		peck,
		drillpeck,
		submission,
		lowkick,
		counter,
		seismictoss,
		strength,
		absorb,
		megadrain,
		leechseed,
		growth,
		razorleaf,
		solarbeam,
		poisonpowder,
		stunspore,
		sleeppowder,
		petaldance,
		stringshot,
		dragonrage,
		firespin,
		thundershock,
		thunderbolt,
		thunderwave,
		thunder,
		rockthrow,
		earthquake,
		fissure,
		dig,
		toxic,
		confusion,
		psychic,
		hypnosis,
		meditate,
		agility,
		quickattack,
		rage,
		teleport,
		nightshade,
		mimic,
		screech,
		doubleteam,
		recover,
		harden,
		minimize,
		smokescreen,
		confuseray,
		withdraw,
		defensecurl,
		barrier,
		lightscreen,
		haze,
		reflect,
		focusenergy,
		bide,
		metronome,
		mirrormove,
		selfdestruct,
		eggbomb,
		lick,
		smog,
		sludge,
		boneclub,
		fireblast,
		waterfall,
		clamp,
		swift,
		skullbash,
		spikecannon,
		constrict,
		amnesia,
		kinesis,
		softboiled,
		hijumpkick,
		glare,
		dreameater,
		poisongas,
		barrage,
		leechlife,
		lovelykiss,
		skyattack,
		transform,
		bubble,
		dizzypunch,
		spore,
		flash,
		psywave,
		splash,
		acidarmor,
		crabhammer,
		explosion,
		furyswipes,
		bonemerang,
		rest,
		rockslide,
		hyperfang,
		sharpen,
		conversion,
		triattack,
		superfang,
		slash,
		substitute,
		struggle,
		sketch,
		triplekick,
		thief,
		spiderweb,
		mindreader,
		nightmare,
		flamewheel,
		snore,
		curse,
		flail,
		conversion2,
		aeroblast,
		cottonspore,
		reversal,
		spite,
		powdersnow,
		protect,
		machpunch,
		scaryface,
		faintattack,
		sweetkiss,
		bellydrum,
		sludgebomb,
		mudslap,
		octazooka,
		spikes,
		zapcannon,
		foresight,
		destinybond,
		perishsong,
		icywind,
		detect,
		bonerush,
		lockon,
		outrage,
		sandstorm,
		gigadrain,
		endure,
		charm,
		rollout,
		falseswipe,
		swagger,
		milkdrink,
		spark,
		furycutter,
		steelwing,
		meanlook,
		attract,
		sleeptalk,
		healbell,
		return_,
		present,
		frustration,
		safeguard,
		painsplit,
		sacredfire,
		magnitude,
		dynamicpunch,
		megahorn,
		dragonbreath,
		batonpass,
		encore,
		pursuit,
		rapidspin,
		sweetscent,
		irontail,
		metalclaw,
		vitalthrow,
		morningsun,
		synthesis,
		moonlight,
		hiddenpower,
		crosschop,
		twister,
		raindance,
		sunnyday,
		crunch,
		mirrorcoat,
		psychup,
		extremespeed,
		ancientpower,
		shadowball,
		futuresight,
		rocksmash,
		whirlpool,
		beatup,
		fakeout,
		uproar,
		stockpile,
		spitup,
		swallow,
		heatwave,
		hail,
		torment,
		flatter,
		willowisp,
		memento,
		facade,
		focuspunch,
		smellingsalt,
		followme,
		naturepower,
		charge,
		taunt,
		helpinghand,
		trick,
		roleplay,
		wish,
		assist,
		ingrain,
		superpower,
		magiccoat,
		recycle,
		revenge,
		brickbreak,
		yawn,
		knockoff,
		endeavor,
		eruption,
		skillswap,
		imprison,
		refresh,
		grudge,
		snatch,
		secretpower,
		dive,
		armthrust,
		camouflage,
		tailglow,
		lusterpurge,
		mistball,
		featherdance,
		teeterdance,
		blazekick,
		mudsport,
		iceball,
		needlearm,
		slackoff,
		hypervoice,
		poisonfang,
		crushclaw,
		blastburn,
		hydrocannon,
		meteormash,
		astonish,
		weatherball,
		aromatherapy,
		faketears,
		aircutter,
		overheat,
		odorsleuth,
		rocktomb,
		silverwind,
		metalsound,
		grasswhistle,
		tickle,
		cosmicpower,
		waterspout,
		signalbeam,
		shadowpunch,
		extrasensory,
		skyuppercut,
		sandtomb,
		sheercold,
		muddywater,
		bulletseed,
		aerialace,
		iciclespear,
		irondefense,
		block,
		howl,
		dragonclaw,
		frenzyplant,
		bulkup,
		bounce,
		mudshot,
		poisontail,
		covet,
		volttackle,
		magicalleaf,
		watersport,
		calmmind,
		leafblade,
		dragondance,
		rockblast,
		shockwave,
		waterpulse,
		doomdesire,
		psychoboost,
		roost,
		gravity,
		miracleeye,
		wakeupslap,
		hammerarm,
		gyroball,
		healingwish,
		brine,
		naturalgift,
		feint,
		pluck,
		tailwind,
		acupressure,
		metalburst,
		uturn,
		closecombat,
		payback,
		assurance,
		embargo,
		fling,
		psychoshift,
		trumpcard,
		healblock,
		wringout,
		powertrick,
		gastroacid,
		luckychant,
		mefirst,
		copycat,
		powerswap,
		guardswap,
		punishment,
		lastresort,
		worryseed,
		suckerpunch,
		toxicspikes,
		heartswap,
		aquaring,
		magnetrise,
		flareblitz,
		forcepalm,
		aurasphere,
		rockpolish,
		poisonjab,
		darkpulse,
		nightslash,
		aquatail,
		seedbomb,
		airslash,
		xscissor,
		bugbuzz,
		dragonpulse,
		dragonrush,
		powergem,
		drainpunch,
		vacuumwave,
		focusblast,
		energyball,
		bravebird,
		earthpower,
		switcheroo,
		gigaimpact,
		nastyplot,
		bulletpunch,
		avalanche,
		iceshard,
		shadowclaw,
		thunderfang,
		icefang,
		firefang,
		shadowsneak,
		mudbomb,
		psychocut,
		zenheadbutt,
		mirrorshot,
		flashcannon,
		rockclimb,
		defog,
		trickroom,
		dracometeor,
		discharge,
		lavaplume,
		leafstorm,
		powerwhip,
		rockwrecker,
		crosspoison,
		gunkshot,
		ironhead,
		magnetbomb,
		stoneedge,
		captivate,
		stealthrock,
		grassknot,
		chatter,
		judgment,
		bugbite,
		chargebeam,
		woodhammer,
		aquajet,
		attackorder,
		defendorder,
		healorder,
		headsmash,
		doublehit,
		roaroftime,
		spacialrend,
		lunardance,
		crushgrip,
		magmastorm,
		darkvoid,
		seedflare,
		ominouswind,
		shadowforce
	};
}
namespace Natures
{
	enum natures : byte
	{
		hardy,
		lonely,
		brave,
		adamant,
		naughty,
		bold,
		docile,
		relaxed,
		impish,
		lax,
		timid,
		hasty,
		serious,
		jolly,
		naive,
		modest,
		mild,
		quiet,
		bashful,
		rash,
		calm,
		gentle,
		sassy,
		careful,
		quirky
	};
}
namespace Abilities
{
	enum abilities : byte
	{
		NOTHING,
		stench,
		drizzle,
		speedboost,
		battlearmor,
		sturdy,
		damp,
		limber,
		sandveil,
		static_,
		voltabsorb,
		waterabsorb,
		oblivious,
		cloudnine,
		compoundeyes,
		insomnia,
		colorchange,
		immunity,
		flashfire,
		shielddust,
		owntempo,
		suctioncups,
		intimidate,
		shadowtag,
		roughskin,
		wonderguard,
		levitate,
		effectspore,
		synchronize,
		clearbody,
		naturalcure,
		lightningrod,
		serenegrace,
		swiftswim,
		chlorophyll,
		illuminate,
		trace,
		hugepower,
		poisonpoint,
		innerfocus,
		magmaarmor,
		waterveil,
		magnetpull,
		soundproof,
		raindish,
		sandstream,
		pressure,
		thickfat,
		earlybird,
		flamebody,
		runaway,
		keeneye,
		hypercutter,
		pickup,
		truant,
		hustle,
		cutecharm,
		plus,
		minus,
		forecast,
		stickyhold,
		shedskin,
		guts,
		marvelscale,
		liquidooze,
		overgrow,
		blaze,
		torrent,
		swarm,
		rockhead,
		drought,
		arenatrap,
		vitalspirit,
		whitesmoke,
		purepower,
		shellarmor,
		airlock,
		tangledfeet,
		motordrive,
		rivalry,
		steadfast,
		snowcloak,
		gluttony,
		angerpoint,
		unburden,
		heatproof,
		simple,
		dryskin,
		download,
		ironfist,
		poisonheal,
		adaptability,
		skilllink,
		hydration,
		solarpower,
		quickfeet,
		normalize,
		sniper,
		magicguard,
		noguard,
		stall,
		technician,
		leafguard,
		klutz,
		moldbreaker,
		superluck,
		aftermath,
		anticipation,
		forewarn,
		unaware,
		tintedlens,
		filter,
		slowstart,
		scrappy,
		stormdrain,
		icebody,
		solidrock,
		snowwarning,
		honeygather,
		frisk,
		reckless,
		multitype
	};
}
namespace Countries
{
	enum countries : byte
	{
		japanese = 1,
		english,
		french,
		italian,
		german,
		spanish = 7,
		southkorean
	};
}
namespace Locations // TODO: change locations to Gen IV
{
	enum locations : uint16
	{
		NOTHING,
		unovamysteryzone,
		unovafarawayplace,
		nuvematown = 4,
		accumulatown,
		striatoncity,
		nacrenecity,
		casteliacity,
		nimbasacity,
		driftveilcity,
		mistraltoncity,
		icirruscity,
		opelucidcity,
		unovaroute1,
		unovaroute2,
		unovaroute3,
		unovaroute4,
		unovaroute5,
		unovaroute6,
		unovaroute7,
		unovaroute8,
		unovaroute9,
		unovaroute10,
		unovaroute11,
		unovaroute12,
		unovaroute13,
		unovaroute14,
		unovaroute15,
		unovaroute16,
		unovaroute17,
		unovaroute18,
		dreamyard,
		pinwheelforest,
		desertresort,
		reliccastle,
		coldstorage,
		chargestonecave,
		twistmountain,
		dragonspiraltower,
		unovavictoryroad,
		lacunosatown,
		undellatown,
		anvilletown,
		unovapokemonleague,
		nscastle,
		royalunova,
		gearstation,
		battlesubway,
		musicaltheater,
		blackcity,
		whiteforest,
		unitytower,
		wellspringcave,
		mistraltoncave,
		ruminationfield,
		celestialtower,
		mooroficirrus,
		unovashoppingmall,
		challengerscave,
		poketransferlab,
		giantchasm,
		libertygarden,
		p2laboratory,
		skyarrowbridge,
		driftveildrawbridge,
		tubelinebridge,
		villagebridge,
		marvelousbridge,
		entralink,
		abundantshrine,
		undellabay,
		lostlornforest,
		trialchamber,
		guidancechamber,
		entreeforest,
		nimbasacity_2,
		driftveilcity_2,
		mistraltoncity_2,
		icirruscity_2,
		opelucidcity_2,
		nuvematown_2,
		whiteforest_2,
		blackcity_2,
		coldstorage_2,
		chargestonecave_2,
		twistmountain_2,
		dragonspiraltower_2,
		giantchasm_2,
		driftveildrawbridge_2,
		tubelinebridge_2,
		villagebridge_2,
		marvelousbridge_2,
		unovaroute5_2,
		unovaroute6_2,
		unovaroute7_2,
		unovaroute8_2,
		unovaroute9_2,
		unovaroute11_2,
		unovaroute12_2,
		unovaroute13_2,
		unovaroute14_2,
		unovaroute15_2,
		unovaroute16_2,
		lacunosatown_2,
		undellatown_2,
		accumulagate,
		undellagate,
		nacrenegate,
		casteliagate,
		nimbasagate,
		opelucidgate,
		blackgate,
		whitegate,
		bridgegate,
		routegate,
		abyssalruins,
		aspertiacity,
		virbankcity,
		humilaucity,
		pokestarstudios,
		joinavenue,
		floccesytown,
		lentimastown,
		route19,
		route20,
		route21,
		route22,
		route23,
		casteliasewers,
		floccesyranch,
		virbankcomplex,
		reversalmountain,
		strangehouse,
		unovavictoryroad2,
		plasmafrigate,
		relicpassage,
		claytunnel,
		whitetreehollow = 139,
		blacktower,
		seasidecave,
		caveofbeing,
		hiddengrotto,
		marinetube,
		virbankgate,
		aspertiagate,
		naturesanctuary,
		medalsecretariat,
		undergroundruins,
		rockymountainroom,
		glacierroom,
		ironroom,
		pledgegrove,
		daycarecouple_g4 = 2000,
		poketransfer = 30001,
		specialplace_a = 30012,
		specialplace_b = 30012,
		pokemondreamradar = 30015,
		lovelyplace = 40001,
		daycarecouple = 60002
	};
}
namespace Encounters
{
	enum encounters : byte
	{
		palpark_egg_hatched_specialevent,
		tallgrass = 0x2,
		dialga_palkia_ingameevent = 0x4,
		cave_halloforigin,
		surfing_fishing = 0x7,
		building = 0x9,
		greatmarsh_safarizone = 0xa,
		starter_fossil_gift = 0xc
	};
}
namespace Balls
{
	enum balls : byte
	{
		pokeball_,
		masterball,
		ultraball,
		greatball,
		pokeball,
		safariball,
		netball,
		diveball,
		nestball,
		repeatball,
		timerball,
		luxuryball,
		premierball,
		duskball,
		healball,
		quickball,
		cherishball,
		fastball,
		levelball,
		lureball,
		heavyball,
		loveball,
		friendball,
		moonball,
		sportball,
		dreamball
	};
}
namespace Types
{
	enum types : byte
	{
		normal,
		fighting,
		flying,
		poison,
		ground,
		rock,
		bug,
		ghost,
		steel,
		fire,
		water,
		grass,
		electric,
		psychic,
		ice,
		dragon,
		dark
	};
}
namespace Wallpapers
{
	enum wallpapers : byte
	{
		forest,
		city,
		desert,
		savanna,
		crag,
		volcano,
		snow,
		cave,
		beach,
		seafloor,
		river,
		sky,
		poke_center,
		machine,
		checks,
		simple,
		reshiram,
		zekrom,
		monochrome,
		team_plasma,
		munna,
		zoroark,
		subway,
		musical,
		monochrome_2,
		team_plasma_2,
		movie,
		pwt,
		black_kyurem,
		white_kyurem,
		reshiram_2,
		zekrom_2
	};
}
namespace Markings
{
	enum markings : byte
	{
		circle,
		triangle,
		square,
		heart,
		star,
		diamond
	};
}
namespace MoveCategories
{
	enum movecategories : byte
	{
		other = 1,
		physical,
		special
	};
}
namespace PokemonColors
{
	enum pokemoncolors : byte
	{
		black = 1,
		blue,
		brown,
		gray,
		green,
		pink,
		purple,
		red,
		white,
		yellow
	};
}
namespace ItemPockets
{
	enum itempockets : byte
	{
		misc = 1,
		medicine,
		pokeballs,
		machines,
		berries,
		mail,
		battle,
		key
	};
}
namespace Forms
{
	namespace Pichu
	{
		enum pichu : byte
		{
			normal,
			spikyeared
		};
	}
	namespace Unown
	{
		enum unown : byte
		{
			a,
			b,
			c,
			d,
			e,
			f,
			g,
			h,
			i,
			j,
			k,
			l,
			m,
			n,
			o,
			p,
			q,
			r,
			s,
			t,
			u,
			v,
			w,
			x,
			y,
			z,
			exclamation,
			question
		};
	}
	namespace Castform
	{
		enum castform : byte
		{
			normal,
			sunny,
			rainy,
			snowy
		};
	}
	namespace Deoxys
	{
		enum deoxys : byte
		{
			normal,
			attack,
			defense,
			speed
		};
	}
	namespace Burmy_Wormadam
	{
		enum burmy_wormadam : byte
		{
			plant,
			sandy,
			trash
		};
	}
	namespace Cherrim
	{
		enum cherrim : byte
		{
			overcast,
			sunshine
		};
	}
	namespace Shellos_Gastrodon
	{
		enum shellos_gastrodon : byte
		{
			west_sea,
			east_sea
		};
	}
	namespace Rotom
	{
		enum rotom : byte
		{
			normal,
			heat,
			wash,
			frost,
			fan,
			mow
		};
	}
	namespace Giratina
	{
		enum giratina : byte
		{
			altered,
			origin
		};
	}
	namespace Shaymin
	{
		enum shaymin : byte
		{
			land,
			sky
		};
	}
	namespace Arceus
	{
		enum arceus : byte
		{
			normal,
			fist,
			sky,
			toxic,
			earth,
			stone,
			insect,
			spooky,
			iron,
			flame,
			splash,
			meadow,
			zap,
			mind,
			icicle,
			draco,
			dread
		};
	}
	namespace Basculin
	{
		enum basculin : byte
		{
			red_striped,
			blue_striped
		};
	}
	namespace Darmanitan
	{
		enum darmanitan : byte
		{
			standard_mode,
			zen_mode
		};
	}
	namespace Deerling_Sawsbuck
	{
		enum deerling_sawsbuck : byte
		{
			spring,
			summer,
			autumn,
			winter
		};
	}
	namespace Tornadus_Thundurus_Landorus
	{
		enum tornadus_thundurus_landorus : byte
		{
			incarnate,
			therian
		};
	}
	namespace Kyurem
	{
		enum kyurem : byte
		{
			normal,
			white,
			black
		};
	}
	namespace Keldeo
	{
		enum keldeo : byte
		{
			ordinary,
			resolute
		};
	}
	namespace Meloetta
	{
		enum meloetta : byte
		{
			aria,
			pirouette
		};
	}
	namespace Genesect
	{
		enum genesect : byte
		{
			normal,
			douse,
			shock,
			burn,
			chill
		};
	}
}
namespace SpindaColors
{
	enum Base
	{
		BaseLight = 0xe6d6a5,
		BaseShaded = 0xcea573
	};
	enum NormalSpot
	{
		NormalSpotLight = 0xef524a,
		NormalSpotShaded = 0xbd4a31
	};
	enum ShinySpot
	{
		ShinySpotLight = 0xa5ce10,
		ShinyShaded = 0x7b9c00
	};
}
//Markings
struct markingsfield { // Bitfield for the "Markings" of a Pokemon.
	bool circle : 1; // Circle
	bool triangle : 1; // Triangle
	bool square : 1; // Square
	bool heart : 1; // Heart
	bool star : 1; // Star
	bool diamond : 1; // Diamond
byte: 2; // Unused bits
};
//Forms
struct formsfield { // Bitfield for determining the Pokemon's form, fateful encounter, and gender.
	union
	{
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Arceus::arceus arceus_form : 5;
#else
			byte arceus_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Burmy_Wormadam::burmy_wormadam burmy_wormadam_form : 5;
#else
			byte burmy_wormadam_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Castform::castform castform_form : 5;
#else
			byte castform_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Cherrim::cherrim cherrim_form : 5;
#else
			byte cherrim_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Deoxys::deoxys deoxys_form : 5;
#else
			byte deoxys_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Giratina::giratina giratina_form : 5;
#else
			byte giratina_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Pichu::pichu pichu_form : 5;
#else
			byte pichu_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Rotom::rotom rotom_form : 5;
#else
			byte rotom_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Shaymin::shaymin shaymin_form : 5;
#else
			byte shaymin_form : 5;
#endif
		};
		struct
		{
		byte: 3;
#ifdef _MSC_VER
			Forms::Unown::unown unown_form : 5;
#else
			byte unown_form : 5;
#endif
		};
	};
};
//Ribbons
struct sinnohrib1 { // 16 bits
	bool sinnoh_champ_ribbon : 1; //
	bool ability_ribbon : 1; //
	bool great_ability_ribbon : 1; //
	bool double_ability_ribbon : 1; //
	bool multi_ability_ribbon : 1; //
	bool pair_ability_ribbon : 1; //
	bool world_ability_ribbon : 1; //
	bool alert_ribbon : 1; //
	bool shock_ribbon : 1; //
	bool downcast_ribbon : 1; //
	bool careless_ribbon : 1; //
	bool relax_ribbon : 1; //
	bool snooze_ribbon : 1; //
	bool smile_ribbon : 1; //
	bool gorgeous_ribbon : 1; //
	bool royal_ribbon : 1; //
};
struct sinnohrib2 { // 16 bits
	bool gorgeous_royal_ribbon : 1; //
	bool footprint_ribbon : 1; //
	bool record_ribbon : 1; //
	bool history_ribbon : 1; //
	bool legend_ribbon : 1; //
	bool red_ribbon : 1; //
	bool green_ribbon : 1; //
	bool blue_ribbon : 1; //
	bool festival_ribbon : 1; //
	bool carnival_ribbon : 1; //
	bool classic_ribbon : 1; //
	bool premier_ribbon : 1; //
byte: 4; // Padding to 16 bits
};
struct hoennrib1{ // 16 bits
	bool cool_ribbon : 1; //
	bool cool_ribbon_super : 1; //
	bool cool_ribbon_hyper : 1; //
	bool cool_ribbon_master : 1; //
	bool beauty_ribbon : 1; //
	bool beauty_ribbon_super : 1; //
	bool beauty_ribbon_hyper : 1; //
	bool beauty_ribbon_master : 1; //
	bool cute_ribbon : 1; //
	bool cute_ribbon_super : 1; //
	bool cute_ribbon_hyper : 1; //
	bool cute_ribbon_master : 1; //
	bool smart_ribbon : 1; //
	bool smart_ribbon_super : 1; //
	bool smart_ribbon_hyper : 1; //
	bool smart_ribbon_master : 1; //
};
struct hoennrib2{ // 16 bits
	bool tough_ribbon : 1; //
	bool tough_ribbon_super : 1; //
	bool tough_ribbon_hyper : 1; //
	bool tough_ribbon_master : 1; //
	bool champion_ribbon : 1; //
	bool winning_ribbon : 1; //
	bool victory_ribbon : 1; //
	bool artist_ribbon : 1; //
	bool effort_ribbon : 1; //
	bool marine_ribbon : 1; //
	bool land_ribbon : 1; //
	bool sky_ribbon : 1; //
	bool country_ribbon : 1; //
	bool national_ribbon : 1; //
	bool earth_ribbon : 1; //
	bool world_ribbon : 1; //
};
struct sinnohrib3 { // 16 bits
	bool cool_ribbon : 1; //
	bool cool_ribbon_great : 1; //
	bool cool_ribbon_ultra : 1; //
	bool cool_ribbon_master : 1; //
	bool beauty_ribbon : 1; //
	bool beauty_ribbon_great : 1; //
	bool beauty_ribbon_ultra : 1; //
	bool beauty_ribbon_master : 1; //
	bool cute_ribbon : 1; //
	bool cute_ribbon_great : 1; //
	bool cute_ribbon_ultra : 1; //
	bool cute_ribbon_master : 1; //
	bool smart_ribbon : 1; //
	bool smart_ribbon_great : 1; //
	bool smart_ribbon_ultra : 1; //
	bool smart_ribbon_master : 1; //
};
struct sinnohrib4 { // 8 bits
	bool tough_ribbon : 1; //
	bool tough_ribbon_great : 1; //
	bool tough_ribbon_ultra : 1; //
	bool tough_ribbon_master : 1; //
byte: 4; // Padding to 8 bits
};
struct pkmribbons : sinnohrib1, sinnohrib2, hoennrib1, hoennrib2, sinnohrib3, sinnohrib4 {};
#pragma pack(push, 1)
struct pokemon_obj // Size: 0x88
{
	union
	{
		struct
		{
			//Unencrypted Data
			union
			{
				uint32 pid; // The Pokemon's personality value (PID).
				spindaspots_struct spinda_spots;
			};
			bool ispartydatadecrypted : 1;
			bool isboxdatadecrypted : 1;
			bool isspeciesegg : 1;
		byte: 5;
		byte: 8;
			uint16 checksum; // The checksum for the Pokemon data; used to validate data and for encryption / decryption.
			// Block A
			union
			{
				Species::gen_4_species species; // National Pokedex ID
				uint16 species_int;
			};
			union
			{
				Items::items item; // Held item index
				uint16 item_int;
			};
			union
			{
				uint32 id; // Trainer ID and Secret ID as one unsigned 32-bit integer
				struct
				{
					uint16 tid; // Trainer ID
					uint16 sid; // Secret ID
				};
			};
			uint32 exp; // Accumulated experience points
			byte tameness; // Tameness / happiness; used to determine egg hatch steps remaining; used in damage calculation for Return / Frustration; used for some evolutions
			union
			{
				Abilities::abilities ability; // Ability index
				byte ability_int;
			};
			union
			{
				markingsfield markings; // Markings
				byte markings_int;
			};
			union
			{
				Countries::countries country; // Country / language of origin
				byte country_int;
			};
			union
			{
				evsfield evs;
				std::array<byte, 6> ev_ints;
			};
			union
			{
				contestfield contest;
				std::array<byte, 6> contest_ints;
			};
			union
			{
				sinnohrib1 sribbon1; // Sinnoh Ribbons 1
				uint16 sribbon1_int;
			};
			union
			{
				sinnohrib2 sribbon2; // Sinnoh Ribbons 2
				uint16 sribbon2_int;
			};
			// Block B
			union
			{
				std::array<Moves::moves, 4> moves;
				std::array<uint16, 4> move_ints;
			};
			std::array<byte, 4> pp; // Current PP array
			std::array<byte, 4> ppup; // PP Ups used array
			union
			{
				ivsfield ivs; // Individual Values
				struct
				{
				uint16: 16;
				byte: 8;
				byte: 6;
					bool isegg : 1;
					bool isnicknamed : 1;
				};
			};
			union
			{
				hoennrib1 hribbon1; // Hoenn Ribbons 1
				uint16 hribbon1_int;
			};
			union
			{
				hoennrib2 hribbon2; // Hoenn Ribbons 2
				uint16 hribbon2_int;
			};
			union
			{
				formsfield form; // Forms, fateful encounter, gender
				struct
				{
					bool fencounter : 1; // Fateful encounter flag.
					bool female : 1; // Flag to determine if this Pokemon is female.
					bool genderless : 1; // Flag to determine if this Pokemon is genderless.
				byte: 5;
				};
				struct
				{
				byte: 3;
					byte form_int : 5; // Index number of this Pokemon's form.
				};
			};
			byte shiny_leaves;
		uint16: 16;
			union
			{
				Locations::locations pteggmet; // Egg met location
				uint16 pteggmet_int;
			};
			union
			{
				Locations::locations ptmet; // Met location
				uint16 ptmet_int;
			};
			//	union
			//	{
			//		Natures::natures nature; // Nature index
			//		byte nature_int;
			//	};
			//	bool hasdwability : 1; // Dream World Ability flag
			//	bool n_pkm : 1; // N's Pokemon Flag
			//byte: 6; //
			//byte: 8; //
			//uint16: 16; //
			//uint16: 16; //
			//Block C
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
			char nickname[(NICKLENGTH * 2)/*+2*/];
#else
			wchar_t nickname[NICKLENGTH/*+1*/];
#endif
#endif
		byte: 8;
			union
			{
				Hometowns::hometowns hometown; // Original game
				byte hometown_int;
			};
			union
			{
				sinnohrib3 sribbon3; // Sinnoh Ribbons 3
				uint16 sribbon3_int;
			};
			union
			{
				sinnohrib4 sribbon4; // Sinnoh Ribbons 4
				byte sribbon4_int;
			};
			//byte: 8;
		uint32: 32; //
			//Block D
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
			char otname[(OTLENGTH * 2)/*+2*/];
#else
			wchar_t otname[OTLENGTH/*+1*/];
#endif
#endif
			datefield eggdate; // Egg met date; year, month, day
			datefield metdate; // Met date; year, month, day
			union
			{
				Locations::locations eggmet; // Egg met location
				uint16 eggmet_int;
			};
			union
			{
				Locations::locations met; // Met location
				uint16 met_int;
			};
			union
			{
				pokerus pkrs; // PokeRus
				byte pkrs_int;
			};
			union
			{
				Balls::balls ball; // Ball captured with and kept in
				byte ball_int;
			};
			byte metlevel : 7; // The level at which this Pokemon was first encountered.
#ifdef _MSC_VER
			Genders::genders otgender : 1; //Flag to determine if the original trainer was female.
#else
			byte otgender : 1;
#endif
			union
			{
				Encounters::encounters encounter; // Encounter type (unused since Gen V?)
				byte encounter_int;
			};
			union
			{
				Balls::balls hgssball; // Ball captured with and kept in (HGSS)
				byte hgssball_int;
			};
			//byte: 8; //
		byte: 8; //
		};
		byte _raw_data_u8[136];
		uint16 _raw_data_u16[68];
		uint32 _raw_data_u32[34];
	};
	pokemon_obj()
	{
		//_raw_data_p = new char();
		memset(this, 0, sizeof(pokemon_obj));
	}
};
struct status_field
{
	byte sleep : 3;
	bool poison : 1;
	bool burned : 1;
	bool frozen : 1;
	bool paralyzed : 1;
	bool toxic : 1;
};
struct party_field // Size: 0x64
{
	union
	{
		status_field status;
		byte status_int;
	};
byte: 8;
uint16: 16;
	byte level;
	byte capsuleindex;
	uint16 hp;
	union
	{
		struct
		{
			uint16 maxhp;
			uint16 attack;
			uint16 defense;
			uint16 speed;
			uint16 spatk;
			uint16 spdef;
		};
		std::array<uint16, 6> stats;
	};
	byte unknown[0x38];
	byte sealcoordinates[0x18];
};
struct party_pkm : pokemon_obj // Size: 0xEC
{
	union
	{
		party_field party_data;
		byte _raw_party_data_u8[100];
		uint16 _raw_party_data_u16[50];
		uint32 _raw_party_data_u32[25];
	};
	party_pkm()
	{
		memset(this, 0, sizeof(party_pkm));
	}
};
#pragma pack(pop)

static const std::string ballnames[26] = {
	"Poké Ball",
	"Master Ball",
	"Ultra Ball",
	"Great Ball",
	"Poké Ball",
	"Safari Ball",
	"Net Ball",
	"Dive Ball",
	"Nest Ball",
	"Repeat Ball",
	"Timer Ball",
	"Luxury Ball",
	"Premier Ball",
	"Dusk Ball",
	"Heal Ball",
	"Quick Ball",
	"Cherish Ball",
	"Fast Ball",
	"Level Ball",
	"Lure Ball",
	"Heavy Ball",
	"Love Ball",
	"Friend Ball",
	"Moon Ball",
	"Sport Ball"
};
static const int RIBBONS_MAX_NUM = 80;
static const std::string ribbon_identifiers[RIBBONS_MAX_NUM] = {
	"sinnoh-champ-ribbon",
	"ability-ribbon",
	"great-ability-ribbon",
	"double-ability-ribbon",
	"multi-ability-ribbon",
	"pair-ability-ribbon",
	"world-ability-ribbon",
	"alert-ribbon",
	"shock-ribbon",
	"downcast-ribbon",
	"careless-ribbon",
	"relax-ribbon",
	"snooze-ribbon",
	"smile-ribbon",
	"gorgeous-ribbon",
	"royal-ribbon",
	"gorgeous-royal-ribbon",
	"footprint-ribbon",
	"record-ribbon",
	//    "history-ribbon",
	"event-ribbon",
	"legend-ribbon",
	//    "red-ribbon",
	//    "green-ribbon",
	//    "blue-ribbon",
	//    "festival-ribbon",
	//    "carnival-ribbon",
	"world-champion-ribbon",
	"birthday-ribbon",
	"special-ribbon",
	"souvenir-ribbon",
	"wishing-ribbon",
	"classic-ribbon",
	"premier-ribbon",
	"cool-ribbon",
	"cool-ribbon-great",
	"cool-ribbon-ultra",
	"cool-ribbon-master",
	"beauty-ribbon",
	"beauty-ribbon-great",
	"beauty-ribbon-ultra",
	"beauty-ribbon-master",
	"cute-ribbon",
	"cute-ribbon-great",
	"cute-ribbon-ultra",
	"cute-ribbon-master",
	"smart-ribbon",
	"smart-ribbon-great",
	"smart-ribbon-ultra",
	"smart-ribbon-master",
	"tough-ribbon",
	"tough-ribbon-great",
	"tough-ribbon-ultra",
	"tough-ribbon-master",
	"cool-ribbon",
	"cool-ribbon-super",
	"cool-ribbon-hyper",
	"cool-ribbon-master",
	"beauty-ribbon",
	"beauty-ribbon-super",
	"beauty-ribbon-hyper",
	"beauty-ribbon-master",
	"cute-ribbon",
	"cute-ribbon-super",
	"cute-ribbon-hyper",
	"cute-ribbon-master",
	"smart-ribbon",
	"smart-ribbon-super",
	"smart-ribbon-hyper",
	"smart-ribbon-master",
	"tough-ribbon",
	"tough-ribbon-super",
	"tough-ribbon-hyper",
	"tough-ribbon-master",
	"champion-ribbon",
	"winning-ribbon",
	"victory-ribbon",
	"artist-ribbon",
	"effort-ribbon",
	"marine-ribbon",
	"land-ribbon",
	"sky-ribbon",
	"country-ribbon",
	"national-ribbon",
	"earth-ribbon",
	"world-ribbon"
};
static const std::string ribbon_names[RIBBONS_MAX_NUM] = {
	"Sinnoh Champ Ribbon",
	"Ability Ribbon",
	"Great Ability Ribbon",
	"Double Ability Ribbon",
	"Multi Ability Ribbon",
	"Pair Ability Ribbon",
	"World Ability Ribbon",
	"Alert Ribbon",
	"Shock Ribbon",
	"Downcast Ribbon",
	"Careless Ribbon",
	"Relax Ribbon",
	"Snooze Ribbon",
	"Smile Ribbon",
	"Gorgeous Ribbon",
	"Royal Ribbon",
	"Gorgeous Royal Ribbon",
	"Footprint Ribbon",
	"Record Ribbon",
	//    "History Ribbon",
	"Event Ribbon",
	"Legend Ribbon",
	//    "Red Ribbon",
	//    "Green Ribbon",
	//    "Blue Ribbon",
	//    "Festival Ribbon",
	//    "Carnival Ribbon",
	"World Champion Ribbon",
	"Birthday Ribbon",
	"Special Ribbon",
	"Souvenir Ribbon",
	"Wishing Ribbon",
	"Classic Ribbon",
	"Premier Ribbon",
	"Cool Ribbon",
	"Cool Ribbon Great",
	"Cool Ribbon Ultra",
	"Cool Ribbon Master",
	"Beauty Ribbon",
	"Beauty Ribbon Great",
	"Beauty Ribbon Ultra",
	"Beauty Ribbon Master",
	"Cute Ribbon",
	"Cute Ribbon Great",
	"Cute Ribbon Ultra",
	"Cute Ribbon Master",
	"Smart Ribbon",
	"Smart Ribbon Great",
	"Smart Ribbon Ultra",
	"Smart Ribbon Maste",
	"Tough Ribbon",
	"Tough Ribbon Great",
	"Tough Ribbon Ultra",
	"Tough Ribbon Master",
	"Cool Ribbon",
	"Cool Ribbon Super",
	"Cool Ribbon Hyper",
	"Cool Ribbon Master",
	"Beauty Ribbon",
	"Beauty Ribbon Super",
	"Beauty Ribbon Hyper",
	"Beauty Ribbon Master",
	"Cute Ribbon",
	"Cute Ribbon Super",
	"Cute Ribbon Hyper",
	"Cute Ribbon Master",
	"Smart Ribbon",
	"Smart Ribbon Super",
	"Smart Ribbon Hyper",
	"Smart Ribbon Master",
	"Tough Ribbon",
	"Tough Ribbon Super",
	"Tough Ribbon Hyper",
	"Tough Ribbon Master",
	"Champion Ribbon",
	"Winning Ribbon",
	"Victory Ribbon",
	"Artist Ribbon",
	"Effort Ribbon",
	"Marine Ribbon",
	"Land Ribbon",
	"Sky Ribbon",
	"Country Ribbon",
	"National Ribbon",
	"Earth Ribbon",
	"World Ribbon"
};
static const int hiddenpowertypes[16] = {
	Types::fighting,
	Types::flying,
	Types::poison,
	Types::ground,
	Types::rock,
	Types::bug,
	Types::ghost,
	Types::steel,
	Types::fire,
	Types::water,
	Types::grass,
	Types::electric,
	Types::psychic,
	Types::ice,
	Types::dragon,
	Types::dark
};
const byte natureconvert[25][2] =
{ { 0, 1 },
{ 1, 6 },
{ 2, 21 },
{ 3, 11 },
{ 4, 17 },
{ 5, 2 },
{ 6, 7 },
{ 7, 22 },
{ 8, 12 },
{ 9, 18 },
{ 10, 5 },
{ 11, 10 },
{ 12, 25 },
{ 13, 16 },
{ 14, 20 },
{ 15, 3 },
{ 16, 8 },
{ 17, 23 },
{ 18, 13 },
{ 19, 15 },
{ 20, 4 },
{ 21, 9 },
{ 22, 24 },
{ 23, 14 },
{ 24, 19 } };
const byte pokerusstrains[0x10] = {
	1, 2, 3, 4,
	1, 2, 3, 4,
	1, 2, 3, 4,
	1, 2, 3, 4
};
