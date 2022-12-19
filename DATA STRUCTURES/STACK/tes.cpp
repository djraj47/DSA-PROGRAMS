#include<iostream>
using namespace std;

class staticdata 
{
  public :
  static int a ;
  int age;
  void getdata(int x)
  {
    age = x;
    a++;
  }
  void show()
  {
    cout<<"a = "<<a<<endl;
    cout<<"age = "<<age<<endl;
  }
};

int staticdata :: a = 0;

int main ()
{
staticdata s1,s2,s3;
s1.getdata(21);
s2.getdata(22);
s3.getdata(23);
s1.show();
s2.show();
s3.show();
return 0;
}