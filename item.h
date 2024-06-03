#pragma once
#include<iostream>
#include<string>

class Item{
    private:
        std::string name;
        int number;
        double price;
    public:
        Item();
        Item(std::string, int, double);
        void setName(std::string _name);
        void setNameKeyboard();
        std::string getName();

        void setNumber(int _number);
        void setNumberKeyboard();
        int getNumber();

        double getPrice();
        void setPrice(double _price);
        void setPriceKeyboard();

        void displayInfo();
};