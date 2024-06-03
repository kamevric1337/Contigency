#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"item.h"

class Cart{
    private:
        std::vector<Item> cart;
    public:
        void addItem(Item _Item);
        void discharge();
};

