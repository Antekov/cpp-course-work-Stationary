#pragma once
#include "IStationary.h"
namespace Stationary {
	class PaintingStationary :
		public IStationary
	{
	protected:
		std::string name;
		double price;
		std::string type;
		PaintingStationary(System::String^ name, double price);

	public:
		PaintingStationary() : PaintingStationary("", 0.0) {}

		PaintingStationary(System::String^ name, double price, System::String^ type);

		System::String^ Name();
		void Name(String^ name);

		double Price();
		void Price(double price);

		String^ Type();
		void Type(String^ type);
	};
}

