#include<iostream>
using namespace std;
class BCE
{
      int code;
      static int count;
      public: void setcode()
      {
        count++;
        code=count;
      }
      void showcode()
      {
        cout<<"student code="<<code<<"BCE/078"<<endl;
      }
      static void showcount()
      {
        cout<<"records of"<<count<<"students found"<<endl;
      }
};
int BCE::count;
int main()
{
    BCE s1, s2;
    s1.setcode();
    s2.setcode();
    BCE::showcount();
    BCE s3;
    s3.setcode();
    BCE::showcount();
    s1.showcode();
    s2.showcode();
    s3.showcode();
    return 0;
}