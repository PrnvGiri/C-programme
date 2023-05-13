#include<iostream>
using namespace std;
class name
{
    public:
    static int a ;
    static void z()
    {
      cout<<a<<endl;
      a++;
    }
};
int name::a;
int main()
{
 name ob;
 ob.z();
 ob.z();
 ob.z();
 ob.z();
 ob.z();
}
