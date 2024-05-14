#include <iostream>
using namespace std;
struct talaba{
    int age;
    string fullname;
    string group;
    float height;
    void chiqar(){
    cout<<"Ma'lumotlar:"<<endl;
    cout<<"Ism familiya: "<<fullname<<endl;
    cout<<"Yoshi: "<<age<<endl;
    cout<<"Guruxi: "<<group<<endl;
    cout<<"Bo'yi: "<<height<<endl;}
};
int main()
{
    talaba talaba1,talaba2;
    talaba1.fullname="Dedahanov Ismoil";
    talaba1.age=17;
    talaba1.group="641-23";
    talaba1.height=170.1;
    talaba1.chiqar();
    return 0;
}
