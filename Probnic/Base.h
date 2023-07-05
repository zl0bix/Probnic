#pragma once


#include<string>
#include<vector>
#include<iostream>

class Base
{
public:
	Base();
	Base(std::string namePlant, std::string weightPlant);
	std::string namePlant;
	std::string weightPlant;
	virtual Base* plants()=0;
};

class Plod {
public:
	Plod();
	std::string namePlod;
	std::string amountPlod;
	std::string getNamePlod();
	std::string getAmountPlod();
	virtual Plod* plods()=0;
};

class Tree:public Base {
public:
	std::string namePlant1;
	std::string weightPlant1;
	Tree();
	Base* plants() {
		Base* tmp = new Tree();
		return tmp;
	}
};

class Shiska:public Plod {
public:
	Shiska();
	std::string namePlod1;
	std::string amountPlod1;
	Plod* plods() {
		Plod* tmp = new Shiska(); 
		return tmp;
	}
};

