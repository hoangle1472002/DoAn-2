#include <iostream>
#include "Food.h"
#include "list.cpp"
#include<string>
using namespace std;
class Order
{
    int IDOrder;
    int quantity;
    List<Food> l_food;
    float total;
    string datecheckin;
    string datecheckout;

public:
    Order();
    Order(int, int, float, string, string);
    Order(const Order &);
    ~Order();
    friend ostream &operator<<(ostream &, const Order &);
    friend istream &operator>>(istream &, Order &);
    int Get_ID();
    void Set_IDOrder(int);
    float get_total();
    void set_total(float);
    void loadfoodmenu(List<Food> &);
    void select_food(List<Food> *);
    friend class Food;
};