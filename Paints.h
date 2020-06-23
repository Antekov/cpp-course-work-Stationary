#pragma once
#include "PaintingStationary.h"
namespace Stationary {
	class Paints :
		public PaintingStationary
	{
		int colorsCount;
	public:
		Paints();
		Paints(System::String^ name, double price = 0,
			System::String^ type = "",
			int colorsCount = 10);

		int ColorsCount();
		void ColorsCount(int colorsCount);

		bool operator<(const IStationary& other) override;
		bool operator==(const IStationary& other) override;
		void print(DataGridView^ dgv) override;
		void save(StreamWriter^ f) override;
		void load(StreamReader^ f) override;
	};
}

