#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Items {
	class Iron_Ore
	{
	public:
		int index = 0;
		int type = 0;

		int production_facility = 27;
		int production_time = 2;
	};

	class Copper_Ore
	{
	public:
		int index = 1;
		int type = 0;

		int production_facility = 27;
		int production_time = 2;
	};

	class Stone
	{
	public:
		int index = 2;
		int type = 0;

		int production_facility = 27;
		int production_time = 2;
	};

	class Coal
	{
	public:
		int index = 3;
		int type = 0;

		int production_facility = 27;
		int production_time = 2;
	};

	class Silicon_Ore
	{
	public:
		int index = 4;
		int type = 0;

		int production_facility = 27;
		int production_time = 2;
	};

	class Titanium_Ore
	{
	public:
		int index = 5;
		int type = 0;

		int production_facility = 27;
		int production_time = 2;
	};

	class Water
	{
	public:
		int index = 6;
		int type = 0;

		int production_facility = 29;
		int production_time = 2;
	};
}

namespace Buildings {
	class Mining_Machine
	{
	public:
		int index = 27;
		int connected_nodes = 8;

		int production_facility = 1;
		int production_time = 3;
		int production_items[4][2] = { {4, 12}, {2, 37}, {2, 25}, {2, 48} };
	};

	class Water_Pump
	{
	public:
		int index = 29;
		int connected_nodes = 1;

		int production_facility = 1;
		int production_time = 3;
		int production_items[4][2] = { {8, 12}, {4, 14}, {4, 39}, {2, 37} };
	};
}
