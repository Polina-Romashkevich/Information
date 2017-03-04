#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <Auto.h>
using namespace std;

class Client
{
private:
	string Name;//ФИО
	string Address;//Адоес
	string Account;//Расчетный счет
	Auto auto;
	int Number;
public:
	Client();
	~Client();
	void setAuto(Auto);
	Auto getAuto() const;
	void setName(string);
	string getName() const;
	void setAddress(string);
	string getAddress() const;
	void setAccount(string);
	string getAccount() const;
	void setNumber(int);
	int getNumber() const;
};

