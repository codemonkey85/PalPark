#pragma once
typedef unsigned char byte; // 8 bits
typedef unsigned short int uint16; // 16 bits
typedef unsigned int uint32; // 32 bits

static const int NICKLENGTH = 11;
static const int OTLENGTH = 8;
static const int BOXNAMELENGTH = 20;

//Date
struct datefield {
	byte year;
	byte month;
	byte day;
};

//Pokerus
struct pokerus {
	byte days : 4;
	byte strain : 4;
};

//Individual Values
struct ivsfield { // Bitfield for the Pokemon's Individual Values (IVs).
	uint32 hp : 5; // Hit Points
	uint32 attack : 5; // Attack
	uint32 defense : 5; // Defense
	uint32 speed : 5; // Speed
	uint32 spatk : 5; // Special Attack
	uint32 spdef : 5; // Special Defense
uint32: 2;
};

//Effort Values
struct evsfield {
	byte hp; // HP EVs
	byte attack; // Attack EVs
	byte defense; // Defense EVs
	byte speed; // Speed EVs
	byte spatk; // Special Attack EVs
	byte spdef; // Special Defnse EVs
};

//Contest
struct contestfield {
	byte cool; // Cool
	byte beauty; // Beauty; used for Feebas evolution (to Milotic)
	byte cute; // Cute
	byte smart; // Smart
	byte tough; // Tough
	byte sheen; // Sheen
};

//Spinda spot coordinate
struct spot_coordinates
{
	byte x : 4;
	byte y : 4;
};

//Spinda spot coordinate struct
struct spindaspots_struct
{
	spot_coordinates tr;
	spot_coordinates tl;
	spot_coordinates br;
	spot_coordinates bl;
};

//Genders
namespace Genders
{
	enum genders : byte
	{
		male,
		female,
		genderless
	};
}
