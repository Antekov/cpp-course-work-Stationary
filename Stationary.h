#pragma once
#include "IStationary.h"

namespace Stationary {
	class Stationary : public IStationary {
	protected:
		std::string name;
		double price;
	public:
		Stationary(System::String^ name, double price) : price(price) {
			if (price < 0) {
				throw InvalidPriceException();
			}
			MarshalString(name, this->name);
		}

		System::String^ Name();
		void Name(String^ name);

		double Price();
		void Price(double price);
	};
}
