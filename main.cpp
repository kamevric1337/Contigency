
#include<iostream>
#include<string>
#include<vector>
#include"cart.cpp"
#include"item.cpp"

int main()
{
    Cart cart1;
    Item XaPhong("Xa Phong", 1000, 5000);
    Item ThitChoDongHop("ThitChoDongHop", 1001, 50000);
    Item GioGThitCHo("GioThitCho", 1002, 65000);
    cart1.addItem(XaPhong);
    cart1.addItem(ThitChoDongHop);
    cart1.addItem(GioGThitCHo);
    cart1.discharge();
}