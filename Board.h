#pragma once
#include "DrawingStationary.h"
namespace Stationary {
	class Board :
		public DrawingStationary
	{
        std::string material;
        double width;
        double height;
    public:
        
        Board(String^ name = "", double price = 0,
            String^ category = "standart", String^ size = "big",
            String^ material = "paper",
            double width = 5.5, double height = 7.7);

		String^ Material();
		void Material(String^ material);

		double Width();
		void Width(double width);

		double Height();
		void Height(double height);

		bool operator<(const IStationary& other) override;
		bool operator==(const IStationary& other) override;
		void print(DataGridView^ dgv) override;
		void save(StreamWriter^ f) override;
		void load(StreamReader^ f) override;
	};

}