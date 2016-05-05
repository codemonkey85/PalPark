#pragma once
#include <string>
#include <locale>
#include <vector>
#include <array>
#include "common.h"
namespace GBAMoves
{
	enum gbamoves : uint16
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
		psychoboost
	};
}
namespace GBAGames
{
	enum gbagames : uint16
	{
		colosseum_bonus_disc,
		sapphire,
		ruby,
		emerald,
		firered,
		leafgreen,
		colosseum_xd = 15
	};
}
namespace GBABalls
{
	enum gbaballs : uint16
	{
		masterball = 1,
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
		premierball
	};
}
namespace GBAItems
{
	enum gbaitems : uint16
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
		timerball = 0x000A,
		luxuryball = 0x000B,
		premierball = 0x000C,
		potion = 0x000D,
		antidote = 0x000E,
		burnheal = 0x000F,
		iceheal = 0x0010,
		awakening = 0x0011,
		parlyzheal = 0x0012,
		fullrestore = 0x0013,
		maxpotion = 0x0014,
		hyperpotion = 0x0015,
		superpotion = 0x0016,
		fullheal = 0x0017,
		revive = 0x0018,
		maxrevive = 0x0019,
		freshwater = 0x001A,
		sodapop = 0x001B,
		lemonade = 0x001C,
		moomoomilk = 0x001D,
		energypowder = 0x001E,
		energyroot = 0x001F,
		healpowder = 0x0020,
		revivalherb = 0x0021,
		ether = 0x0022,
		maxether = 0x0023,
		elixir = 0x0024,
		maxelixir = 0x0025,
		lavacookie = 0x0026,
		blueflute = 0x0027,
		yellowflute = 0x0028,
		redflute = 0x0029,
		blackflute = 0x002A,
		whiteflute = 0x002B,
		berryjuice = 0x002C,
		sacredash = 0x002D,
		shoalsalt = 0x002E,
		shoalshell = 0x002F,
		redshard = 0x0030,
		blueshard = 0x0031,
		yellowshard = 0x0032,
		greenshard = 0x0033,
		hpup = 0x003F,
		protein = 0x0040,
		iron = 0x0041,
		carbos = 0x0042,
		calcium = 0x0043,
		rarecandy = 0x0044,
		ppup = 0x0045,
		zinc = 0x0046,
		ppmax = 0x0047,
		guardspec = 0x0049,
		direhit = 0x004A,
		xattack = 0x004B,
		xdefend = 0x004C,
		xspeed = 0x004D,
		xaccuracy = 0x004E,
		xspecial = 0x004F,
		pokedoll = 0x0050,
		fluffytail = 0x0051,
		superrepel = 0x0053,
		maxrepel = 0x0054,
		escaperope = 0x0055,
		repel = 0x0056,
		sunstone = 0x005D,
		moonstone = 0x005E,
		firestone = 0x005F,
		thunderstone = 0x0060,
		waterstone = 0x0061,
		leafstone = 0x0062,
		tinymushroom = 0x0067,
		bigmushroom = 0x0068,
		pearl = 0x006A,
		bigpearl = 0x006B,
		stardust = 0x006C,
		starpiece = 0x006D,
		nugget = 0x006E,
		heartscale = 0x006F,
		orangemail = 0x0079,
		harbormail = 0x007A,
		glittermail = 0x007B,
		mechmail = 0x007C,
		woodmail = 0x007D,
		wavemail = 0x007E,
		beadmail = 0x007F,
		shadowmail = 0x0080,
		tropicmail = 0x0081,
		dreammail = 0x0082,
		fabmail = 0x0083,
		retromail = 0x0084,
		cheriberry = 0x0085,
		chestoberry = 0x0086,
		pechaberry = 0x0087,
		rawstberry = 0x0088,
		aspearberry = 0x0089,
		leppaberry = 0x008A,
		oranberry = 0x008B,
		persimberry = 0x008C,
		lumberry = 0x008D,
		sitrusberry = 0x008E,
		figyberry = 0x008F,
		wikiberry = 0x0090,
		magoberry = 0x0091,
		aguavberry = 0x0092,
		iapapaberry = 0x0093,
		razzberry = 0x0094,
		blukberry = 0x0095,
		nanabberry = 0x0096,
		wepearberry = 0x0097,
		pinapberry = 0x0098,
		pomegberry = 0x0099,
		kelpsyberry = 0x009A,
		qualotberry = 0x009B,
		hondewberry = 0x009C,
		grepaberry = 0x009D,
		tamatoberry = 0x009E,
		cornnberry = 0x009F,
		magostberry = 0x00A0,
		rabutaberry = 0x00A1,
		nomelberry = 0x00A2,
		spelonberry = 0x00A3,
		pamtreberry = 0x00A4,
		watmelberry = 0x00A5,
		durinberry = 0x00A6,
		belueberry = 0x00A7,
		liechiberry = 0x00A8,
		ganlonberry = 0x00A9,
		salacberry = 0x00AA,
		petayaberry = 0x00AB,
		apicotberry = 0x00AC,
		lansatberry = 0x00AD,
		starfberry = 0x00AE,
		enigmaberry = 0x00AF,
		brightpowder = 0x00B3,
		whiteherb = 0x00B4,
		machobrace = 0x00B5,
		expshare = 0x00B6,
		quickclaw = 0x00B7,
		soothebell = 0x00B8,
		mentalherb = 0x00B9,
		choiceband = 0x00BA,
		kingsrock = 0x00BB,
		silverpowder = 0x00BC,
		amuletcoin = 0x00BD,
		cleansetag = 0x00BE,
		souldew = 0x00BF,
		deepseatooth = 0x00C0,
		deepseascale = 0x00C1,
		smokeball = 0x00C2,
		everstone = 0x00C3,
		focusband = 0x00C4,
		luckyegg = 0x00C5,
		scopelens = 0x00C6,
		metalcoat = 0x00C7,
		leftovers = 0x00C8,
		dragonscale = 0x00C9,
		lightball = 0x00CA,
		softsand = 0x00CB,
		hardstone = 0x00CC,
		miracleseed = 0x00CD,
		blackglasses = 0x00CE,
		blackbelt = 0x00CF,
		magnet = 0x00D0,
		mysticwater = 0x00D1,
		sharpbeak = 0x00D2,
		poisonbarb = 0x00D3,
		nevermeltice = 0x00D4,
		spelltag = 0x00D5,
		twistedspoon = 0x00D6,
		charcoal = 0x00D7,
		dragonfang = 0x00D8,
		silkscarf = 0x00D9,
		upgrade = 0x00DA,
		shellbell = 0x00DB,
		seaincense = 0x00DC,
		laxincense = 0x00DD,
		luckypunch = 0x00DE,
		metalpowder = 0x00DF,
		thickclub = 0x00E0,
		stick = 0x00E1,
		redscarf = 0x00FE,
		bluescarf = 0x00FF,
		pinkscarf = 0x0100,
		greenscarf = 0x0101,
		yellowscarf = 0x0102,
		machbike = 0x0103,
		coincase = 0x0104,
		itemfinder = 0x0105,
		oldrod = 0x0106,
		goodrod = 0x0107,
		superrod = 0x0108,
		ssticket = 0x0109,
		contestpass = 0x010A,
		wailmerpail = 0x010C,
		devongoods = 0x010D,
		sootsack = 0x010E,
		basementkey = 0x010F,
		acrobike = 0x0110,
		pokeblockcase = 0x0111,
		letter = 0x0112,
		eonticket = 0x0113,
		redorb = 0x0114,
		blueorb = 0x0115,
		scanner = 0x0116,
		gogoggles = 0x0117,
		meteorite = 0x0118,
		rm1key = 0x0119,
		rm2key = 0x011A,
		rm4key = 0x011B,
		rm6key = 0x011C,
		storagekey = 0x011D,
		rootfossil = 0x011E,
		clawfossil = 0x011F,
		devonscope = 0x0120,
		tm01 = 0x0121,
		tm02 = 0x0122,
		tm03 = 0x0123,
		tm04 = 0x0124,
		tm05 = 0x0125,
		tm06 = 0x0126,
		tm07 = 0x0127,
		tm08 = 0x0128,
		tm09 = 0x0129,
		tm10 = 0x012A,
		tm11 = 0x012B,
		tm12 = 0x012C,
		tm13 = 0x012D,
		tm14 = 0x012E,
		tm15 = 0x012F,
		tm16 = 0x0130,
		tm17 = 0x0131,
		tm18 = 0x0132,
		tm19 = 0x0133,
		tm20 = 0x0134,
		tm21 = 0x0135,
		tm22 = 0x0136,
		tm23 = 0x0137,
		tm24 = 0x0138,
		tm25 = 0x0139,
		tm26 = 0x013A,
		tm27 = 0x013B,
		tm28 = 0x013C,
		tm29 = 0x013D,
		tm30 = 0x013E,
		tm31 = 0x013F,
		tm32 = 0x0140,
		tm33 = 0x0141,
		tm34 = 0x0142,
		tm35 = 0x0143,
		tm36 = 0x0144,
		tm37 = 0x0145,
		tm38 = 0x0146,
		tm39 = 0x0147,
		tm40 = 0x0148,
		tm41 = 0x0149,
		tm42 = 0x014A,
		tm43 = 0x014B,
		tm44 = 0x014C,
		tm45 = 0x014D,
		tm46 = 0x014E,
		tm47 = 0x014F,
		tm48 = 0x0150,
		tm49 = 0x0151,
		tm50 = 0x0152,
		hm01 = 0x0153,
		hm02 = 0x0154,
		hm03 = 0x0155,
		hm04 = 0x0156,
		hm05 = 0x0157,
		hm06 = 0x0158,
		hm07 = 0x0159,
		hm08 = 0x015A,
		oaksparcel = 0x015D,
		pokeflute = 0x015E,
		secretkey = 0x015F,
		bikevoucher = 0x0160,
		goldteeth = 0x0161,
		oldamber = 0x0162,
		cardkey = 0x0163,
		liftkey = 0x0164,
		domefossil = 0x0165,
		helixfossil = 0x0166,
		silphscope = 0x0167,
		bicycle = 0x0168,
		townmap = 0x0169,
		vsseeker = 0x016A,
		famechecker = 0x016B,
		tmcase = 0x016C,
		berrypouch = 0x016D,
		teachytv = 0x016E,
		tripass = 0x016F,
		rainbowpass = 0x0170,
		tea = 0x0171,
		mysticticket = 0x0172,
		auroraticket = 0x0173,
		powderjar = 0x0174,
		ruby = 0x0175,
		sapphire = 0x0176,
		magmaemblem = 0x0177,
		oldseamap = 0x0178,
	};
}
namespace GBALang
{
	enum gbalang : uint16
	{
		japanese = 0x0201,
		english = 0x0202,
		french = 0x0203,
		italian = 0x0204,
		german = 0x0205,
		korean = 0x0206,
		spanish = 0x0207,
	};
}

//Ribbons
struct gbaribbons
{
	union
	{
		struct
		{
			uint16 cool : 3;
			uint16 beauty : 3;
			uint16 cute : 3;
			uint16 smart : 3;
			uint16 tough : 3;
		uint16: 1;
			bool : 2;
			bool artist : 1;
			bool effort : 1;
			bool : 4;
			bool national : 1;
			bool : 6;
			bool fencounter : 1;
		};
		struct
		{
			bool : 8;
			bool : 7;
			bool champion : 1;
			bool : 8;
			bool : 8;
		};
	};
};
struct gbamarks
{
	bool circle : 1;
	bool square : 1;
	bool triangle : 1;
	bool heart : 1;
	bool : 4;
};
struct ppbonuses_struct
{
	byte move1 : 2;
	byte move2 : 2;
	byte move3 : 2;
	byte move4 : 2;
};
#pragma pack(push, 1)
struct pokemon_gen3
{
	union
	{
		struct
		{
			union
			{
				uint32 pid; // The Pokemon's personality value (PID).
				spindaspots_struct spinda_spots;
			};
			union
			{
				uint32 id;
				struct
				{
					uint16 tid;
					uint16 sid;
				};
			};
			byte nickname[10];
			union
			{
				GBALang::gbalang lang;
				uint16 lang_int;
			};
			byte otname[7];
			union
			{
				gbamarks markings;
				byte markings_int;
			};
			uint16 checksum;
		uint16: 16;
			union
			{
				struct
				{
					union
					{
						GBASpecies::gen_3_species species;
						uint16 species_int;
					};
					union
					{
						GBAItems::gbaitems item;
						uint16 item_int;
					};
					uint32 exp;
					ppbonuses_struct ppbonuses;
					byte friendship;
				uint16: 16;
					union
					{
						std::array<GBAMoves::gbamoves, 4> moves;
						std::array<uint16, 4> move_ints;
					};
					std::array<byte, 4> movepp;
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
						pokerus pkrs;
						byte pkrs_int;
					};
					byte metloc;
					union
					{
						struct
						{
							uint16 metlevel : 7;
#ifdef _MSC_VER
							GBAGames::gbagames game : 4;
							GBABalls::gbaballs ball : 4;
#else
							byte game : 4;
							byte ball : 4;
#endif
						uint16: 1;
						};
						struct
						{
						byte: 8;
						byte: 7;
#ifdef _MSC_VER
							Genders::genders trainergender : 1; //Flag to determine if the original trainer was female.
#else
							byte trainergender : 1;
#endif
						};
					};
					union
					{
						ivsfield ivs; // Individual Values
						struct
						{
						uint16: 16;
						byte: 8;
						byte: 6;
							bool isegg : 1;
							byte ability_flag : 1;
						};
					};
					gbaribbons ribbons;
				};
				byte encrypted_data[48];
			};
		};
		byte _raw_data_u8[80];
		uint16 _raw_data_u16[40];
		uint32 _raw_data_u32[20];
	};
	pokemon_gen3()
	{
		memset(this, 0, sizeof(pokemon_gen3));
	}
};
struct pokemon_gen3_party : pokemon_gen3
{
	union
	{
		struct
		{
			uint32 status;
			byte level;
			byte pkrs_remaining;
			uint16 curhp;
			uint16 totalhp;
			uint16 atk;
			uint16 def;
			uint16 speed;
			uint16 spatk;
			uint16 spdef;
		};
		byte _raw_party_data_u8[20];
		uint16 _raw_party_data_u16[10];
		uint32 _raw_party_data_u32[5];
	};
	pokemon_gen3_party()
	{
		memset(this, 0, sizeof(pokemon_gen3_party));
	};
};
