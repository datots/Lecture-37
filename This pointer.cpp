/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


class Bank{
    public:
    string Amount;
        static int ObjectCount;
        
        Bank(string Amount){
            this-> Amount = Amount;
            ObjectCount++;
        }
        
        static int getObjectCount(){
            return ObjectCount;
        }
        
        void Banks(){
            cout<<"There are 4 banks"<<endl;
            cout<<this->getObjectCount()<<endl;
        }    
};

int Bank::ObjectCount = 0;

int main()
{
    Bank bank1("TBC");
    Bank bank2("BOG");
    Bank bank3("Tera");
    Bank bank4("VTB");
    
    bank1.Banks();
    
    return 0;
}