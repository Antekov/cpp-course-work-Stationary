#pragma once
#include "IStationary.h"
namespace Stationary {
	class DrawingStationary :
		public IStationary
	{
	protected:
		std::string name;
		double price;
		std::string category;
		DrawingStationary(System::String^ name, double price);
	public:
		DrawingStationary() : DrawingStationary("", 0.0) {}

		DrawingStationary(System::String^ name, double price, System::String^ category);

		System::String^ Name();
		void Name(String^ name);

		double Price();
		void Price(double price);

		String^ Category();
		void Category(String^ type);
	};
}

