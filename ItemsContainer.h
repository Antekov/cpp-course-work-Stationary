#pragma once
#include <array>
#include <algorithm>
#include <string>
namespace Stationary {
	const size_t N = 100;

	template <typename T>
	class ItemsContainer :
		public std::array<T, N>
	{
		size_t count = 0;
	public:
		ItemsContainer() {
			this->assign(nullptr);
		}

		size_t getSize() { return count; }

		void push_back(T st) {
			if (count < N) {
				(*this)[count++] = st;
			}
			else {
				throw 34;
			}
		}

		iterator begin() {
			return this->begin();
		}

		iterator end() {
			return this->end();
		}

		void sort_by_price() {
			sort(this->begin(), this->end(),
				[](T a, T b) { return a->Price() < b->Price();  });
		}

		void sort_by_name() {
			sort(this->begin(), this->end(),
				[](T a, T b) { return a->Name() < b->Name();  });
		}

		ItemsContainer search_by_name(std::string name) {
			ItemsContainer searchResult;

			for (auto st : *this) {
				if (st->Name() == name) {
					searchResult.push_back(st);
				}
			}

			searchResult.sort_by_name();

			return searchResult;
		}

		ItemsContainer search_by_price(double min_price, double max_price) {
			ItemsContainer searchResult;

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