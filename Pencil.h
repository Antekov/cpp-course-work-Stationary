#pragma once
#include "WritingStationary.h"
namespace Stationary {
	class Pencil :
		public WritingStationary
	{
		double thickness;
	public:
		Pencil(String^ name = "", double price = 0,
			String^ color = "blue",
			double thickness = 0.5) : WritingStationary(name, price, color),
			thickness(thickness) {}

		String^ Color();
		void Color(String^ color);

		double Thickness();
		void Thickness(double thickness);
	
		bool operator<(const IStationary& other) override;
		bool operator==(const IStationary& other) override;
		void print(DataGridView^ dgv) override;
		void save(StreamWriter^ f) override;
		void load(StreamReader^ f) override;
	};

}