#pragma once
#include <string>
#include <deque>
namespace Stationary {
	template <typename T>
	class BaseContainer :
		public std::deque<T>
	{
	};

}