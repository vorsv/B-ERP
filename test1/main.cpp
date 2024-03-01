#include<iostream>
#include<string.h>

class block{
int dat;
std::string hash;
block *pre,*nxt;
public:
    block(int date,block pree,block nxte){
        dat = date;
        pre = pree;
        nxt = nxte;
        hash = hashc(dat);
    }
    std::string hashc(int dat);
};
int main(){
    std::cout << "hi test cpp";
}