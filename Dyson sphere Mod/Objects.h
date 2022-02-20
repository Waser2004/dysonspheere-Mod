#pragma once
#include <iostream>
#include <string>

using namespace std;

namespace Items {
	class Iron
	{
	public:
		int index = 0;
		int production_facility = 0;
		int production_time = 1;
		int production_requerments[1][2] = { {1, 1} };

		int get_index() {
			return index;
		}

		int get_production_facility() {
			return production_facility;
		}
	};
}
