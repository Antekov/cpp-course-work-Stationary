#pragma once
#include "DrawingStationary.h"
namespace Stationary {
	class Circular :
		public DrawingStationary
	{
	public:	
		Circular();
		Circular(System::String^ name, double price = 0,
			System::String^ category = "standart",
			System::String^ size = "big"
		);

		bool operator<(const IStationary& other) override;
		bool operator==(const IStationary& other) override;
		void print(DataGridView^ dgv) override;
		void save(StreamWriter^ f) override;
		void load(StreamReader^ f) override;
	};
}
