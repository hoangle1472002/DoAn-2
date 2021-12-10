#include "Order.h"
Order::Order()
{
}
Order::Order(int IDOrder, int quantity, float total, date datecheckin, date datecheckout)
    : IDOrder(IDOrder), quantity(quantity), total(total), datecheckin(datecheckin), datecheckout(datecheckout)
{
}
Order::Order(const Order &o)
{
    this->IDOrder = o.IDOrder;
    this->quantity = o.quantity;
    this->l_food = o.l_food;
    this->total = o.total;
    this->datecheckin = o.datecheckin;
    this->datecheckout = o.datecheckout;
}
Order::~Order() {}
int Order::Get_ID()
{
    return this->IDOrder;
}
void Order::Set_IDOrder(int IDOrder)
{
    this->IDOrder = IDOrder;
}
ostream &operator<<(ostream &cout, const Order &o)
{
    cout << "IDOrder: " << o.IDOrder << endl;
    cout << "Cac mon da chon:" << endl;
    cout << o.l_food << endl;
    cout << "Tong gia:" << o.total << endl;
    return cout;
}
istream &operator>>(istream &cin, Order &o)
{
    cout << "IDFood: ";
    cin >> o.IDOrder;
    return cin;
}
void Order::select_food(List<Food> l_menu)
{
    int i, n, IDFood;
    this->total = 0;
    Node<Food> *temp;
    do
    {
        cout << "Nhap ID mon: ";
        cin >> IDFood;
        temp = l_menu.Search(IDFood);
        if (temp != NULL)
        {
            total += temp->getData().Get_Price();
            this->l_food.Insert(temp->getData());
        }
        else
            this->l_food.Insert(Food());
        cout << "Tiep tuc chon mon? (1.Yes 0.No): ";
        cin >> i;
    } while (i != 0);
}