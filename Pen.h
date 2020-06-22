#pragma once
#include "WritingStationary.h"

namespace Stationary {

	class Pen :
		public WritingStationary
	{
		std::string type;
		std::string model;
	public:
		Pen();
		Pen(System::String^ name, double price=0,
			System::String^ color="",
			System::String^ type="",
			System::String^ model="");

		String^ Color();
		void Color(String^ color);

		String^ Type();
		void Type(String^ type);

		String^ Model();
		void Model(String^ model);
			   
		bool operator<(const IStationary& other) override;
		bool operator==(const IStationary& other) override;
		void print(DataGridView^ dgv) override;
		void save(StreamWriter^ f) override;
		void load(StreamReader^ f) override;
	};
}
