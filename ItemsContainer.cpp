#include "ItemsContainer.h"
namespace Stationary {
	template<typename T>
	void ItemsContainer<T>::push_back1(T item)
	{
		if (size < N) {
			//*this[size] = item;
			size++;
		}
		else {
			throw "Container is full";
		}
	}
}
