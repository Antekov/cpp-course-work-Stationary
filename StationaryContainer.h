#pragma once
#include "BaseContainer.h"
namespace Stationary {
	template <typename T>
	class StationaryContainer :
		private BaseContainer<T>
	{
	public:
		StationaryContainer() {}

		void push_back(T st) {
			BaseContainer::push_back(st);
		}

		void clear() {
			BaseContainer::clear();
		}

		iterator begin() {
			return BaseContainer::begin();
		}

		iterator end() {
			return BaseContainer::end();
		}

		void sort_by_price() {
			sort(this->begin(), this->end(),
				[](T a, T b) { return a->Price() < b->Price();  });
		}

		void sort_by_name() {
			sort(this->begin(), this->end(),
				[](T a, T b) { return a->Name() < b->Name();  });
		}

		StationaryContainer search_by_name(std::string name) {
			StationaryContainer searchResult;

			for (auto st : *this) {
				if (st->Name() == name) {
					searchResult.push_back(st);
				}
			}

			searchResult.sort_by_name();

			return searchResult;
		}

		StationaryContainer search_by_price(double min_price, double max_price) {
			StationaryContainer searchResult;

			for (auto st : *this) {
				if (st->Price() >= min_price && (max_price < min_price || st->Price() <= max_price)) {
					searchResult.push_back(st);
				}
			}

			searchResult.sort_by_price();

			return searchResult;
		}
	};
}
