#pragma once
#include <array>
namespace Stationary {
	const size_t N = 100;

	template <typename T>
	class ItemsContainer :
		public std::array<T, N>
	{
	};

}