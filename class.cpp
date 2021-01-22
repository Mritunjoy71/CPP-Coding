#include<iostream>
using namespace std;
class myclass{
//private to my class
//int a;
public:
   // void set_a(int num);
   // int get_a();
    int a;

};
/*void myclass :: set_a(int num)
{
    a=num;
}
int myclass :: get_a()
{
    return a;
} */
int main()
{
    myclass ob1,ob2;
    ob1.a=10;
    ob2.a=99;
    cout <<ob1.a <<"\n";
    cout <<ob2.a <<"\n";
    return 0;
}
