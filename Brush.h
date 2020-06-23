#pragma once
#include "PaintingStationary.h"
namespace Stationary {
	class Brush :
		public PaintingStationary
	{
		int thickness;
	public:
		Brush();
		Brush(System::String^ name, double price = 0,
			System::String^ type = "",
			int thickness = 10);

		int Thickness();
		void Thickness(int thickness);

		bool operator<(const IStationary& other) override;
		bool operator==(const IStationary& other) override;
		void print(DataGridView^ dgv) override;
		void save(StreamWriter^ f) override;
		void load(StreamReader^ f) override;
	};
}

