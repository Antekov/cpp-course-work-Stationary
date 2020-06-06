#pragma once
#include <array>
namespace Stationary {
	const size_t N = 100;

	template <typename T>
	class ItemsContainer :
		public std::array<T, N>
	{
		size_t size = 0;
	public:
		void push_back1(T item);
	};
}