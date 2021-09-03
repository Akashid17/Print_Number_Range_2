
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        void DisplayRangeEven(int,int);
};

void ArithmeticX::DisplayRangeEven(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        cout<<"Invalid Range\n";
        return;
    }

    for(int i = iNo1; i <= iNo2; i++)
    {
        if(i%2 == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter First Number\n";
    cin>>iValue1;

    cout<<"Enter Second Number\n";
    cin>>iValue2;

    ArithmeticX aobj;
    aobj.DisplayRangeEven(iValue1,iValue2);

    return 0;
}