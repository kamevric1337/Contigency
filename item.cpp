#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"item.h"

Item::Item()
{
    this->name = "NA";
    this->number = 0;
    this->price = 0.0;
}
Item::Item(std::string _name = "NA", int _number = 0, double _price= 0)
{
    this->name = _name;
    this->number = _number;
    this->price = _price;
}

std::string Item::getName()
{
    return this->name;
}

void Item::setName(std::string _name)
{
    this->name = _name;
}

int Item::getNumber()
{
    return this->number;
}

void Item::setNumber(int _number)
{
    this->number = _number;
}

void Item::setNameKeyboard()
{
    std::cin >> this->name;
}

void Item::setNumberKeyboard()
{
    std::cin >> this->number;
}

double Item::getPrice()
{
    return this->price;
}

void Item::setPrice(double _price)
{
    this->price = _price;
}

void Item::setPriceKeyboard()
{
    std::cin >> this->price;
}

void Item::displayInfo()
{
    std::cout << this->name << "\t" << this->number << '\t' << this->price << " VND" << '\n';
}