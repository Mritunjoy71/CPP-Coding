#include<iostream>
#include<cstring>
using namespace std;
class card {
    char title[80];
    char author[80];
    int number ;
public:
    void store(char *t,char *name,int num);

    void show();



};
void card::store(char *t,char *name,int num){
    strcpy(title,t);
    strcpy(author,name);
    number=num;

}

void card::show()
{
    cout<<"title: " <<title <<"\n";
    cout<<"author: " <<author<<"\n";
    cout<<"number on hand: "<<number<<"\n";


}
int main()
{
    card book1,book2,book3;
    book1.store("dune","frank herbert",2);
    book1.store("aguner porosmoni","humayun ahmed",5);
    book1.store("amar bondhu rashed","zafar iqbal",7);

    book1.show();
    book2.show();
    book3.show();
    return 0;



}


















