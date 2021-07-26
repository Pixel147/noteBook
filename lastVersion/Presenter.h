#ifndef PresenterH
#define PresenterH
#pragma once
#include <vector>
#include <string>
#include"Model.h"
#include"View.h"
#include"people.h"


class Presenter
{
	public:
		Presenter() {};
		void start();	
		



	private:
		string validationEmail();
		string numberPhoneCheck();
		int returnChoice();
		int editNumberProfileCkeckWrong();
		int deleteNumberProfileCkeckWrong();
		void searchPerson();
		void deletePerson();
		void editPerson();
		void addPerson();
		void outputData();
		//void test2();
};

#endif
