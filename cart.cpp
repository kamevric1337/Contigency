#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"cart.h"


void Cart::addItem(Item _Item)
{
    this->cart.push_back(_Item);
}

void Cart::discharge()
{
    double sum = 0;
    for(int i = 0; i < cart.size(); i++)
    {
        cart[i].displayInfo();
        sum += cart[i].getPrice();
    }
    std::cout << "Total discharge: " << sum << " VND";
}