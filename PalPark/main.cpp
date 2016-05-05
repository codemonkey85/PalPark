#include "include\pk3.h"
#include "include\pk4.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		//return 0;
	}

	map<GBASpecies::gen_3_species, Species::gen_4_species> gen_3_species_to_gen_4_species = create_map();

	auto thing = GBASpecies::deoxys;

	cout << thing << '\n';
	cout << gen_3_species_to_gen_4_species[thing] << '\n';

	string test;
	cin >> test;
	return 0;
}