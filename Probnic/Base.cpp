#include "Base.h"

Plod::Plod():namePlod("No Name"), amountPlod("Middle"){}

std::string Plod::getNamePlod()
{
	return namePlod;
}

std::string Plod::getAmountPlod()
{
	return amountPlod;
}

Base::Base():namePlant("No Name"), weightPlant("Large"){}

Base::Base(std::string namePlant, std::string weightPlant)
{
	this->namePlant = namePlant;
	this->weightPlant = weightPlant;
}

Shiska::Shiska():namePlod1("Orange"), amountPlod1("Small"){}

Tree::Tree():namePlant1("No Name"), weightPlant1("Large")
{
}
