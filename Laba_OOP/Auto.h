#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <Client.h>
using namespace std;

class Auto
{
private:
	string Model;//Модель
	string Brand;//Марка
	int Year;//Год выпуска
public:
	Auto();
	~Auto();
	void setClient(Client);
	Client getClient() const;
	void setModel(string);
	string getModel() const;
	void setBrand(string);
	string getBrand() const;
	void setYear(int);
	int getYear() const;
};

