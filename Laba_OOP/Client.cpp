#include "stdafx.h"
#include "Client.h"
#include <string>

Client::Client()
{
	Name = "";
	Address = "";
	Account = "";
	Number = 0;
}

Client::~Client()
{
	std::cout << "×åëîâåê óâîëåí" << std::endl;
}

void Client::setAuto(Auto _auto)
{
	auto = _auto;
}

Auto Client::getAuto() const
{
	return auto;
}

void Client::setName(string _Name)
{
	Name = _Name;
}

string Client::getName() const
{
	return Name;
}

void Client::setAddress(string _Address)
{
	Address = _Address;
}

string Client::getAddress() const
{
	return Address;
}

void Client::setAccount(string _Account)
{
	Account = _Account;
}

string Client::getAccount() const
{
	return Account;
}

void Client::setNumber(int _Number)
{
	Number = _Number;
}

int Client::getNumber() const
{
	return Number;
}
