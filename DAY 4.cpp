#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class person{
    public:
    int age;
    person(int initialAge)
    {
        if(initialAge>0)
        {
        this->age=initialAge;
    }
    else
    {
        this->age=0;
        cout<<"Age is not valid, setting age to 0."<<endl;
    }
    }
    void yearPasses()
    {
        age++;
    }
    void amIOld()
    {
        if(age<13)
        {
            cout<<"You are young."<<endl;
        }
        else if(age>=13 && age<18)
        {
            cout<<"You are a teenager."<<endl;
        }
        else{
            cout<<"You are old."<<endl;
        }
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int T;
      cin>>T;
      int age;
      while(T>0)
      {
          cin>>age;
          person p(age);
          p.amIOld();
          for(int j=0;j<3;j++)
          {
              p.yearPasses();
          }
          p.amIOld();
cout<<"\n";
          T--;
      }
    return 0;
}
