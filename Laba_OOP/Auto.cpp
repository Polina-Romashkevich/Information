#include "stdafx.h"
#include "Auto.h"

Auto::Auto()
{
	Model = "";
	Brand = "";
	Year = 0;
};

Auto::~Auto()
{

};

void Auto::setClient(Client _Client)
{
	Client = _Client;
};

Client Auto::getClient() const
{
	return Client;
};

void Auto::setModel(string _Model)
{
	Model = _Model;
};

string Auto::getModel() const
{
	return Model;
};

void Auto::setBrand(string _Brand)
{
	Brand = _Brand;
};

string Auto::getBrand() const
{
	return Brand;
};

void Auto::setYear(int _Year)
{
	Year = _Year;
};

int Auto::getYear() const
{
	return Year;
};

