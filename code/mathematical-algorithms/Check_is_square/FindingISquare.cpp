#include<iostream>
using namespace std;
int main()
{
    int t;// test cases
    cout<<"type number of test cases :"<<endl;
    cin>>t;
    while(t--)
        {
        int n,i;// n= number
        int temp=0;
        cout<<"Enter number :"<<endl;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            if(i*i==n)
            {
                temp=1;
                break;
            }

        }
        if(temp==1)
            cout<<"yes and number is :"<<i<<endl;
        else
            cout<<"not found"<<endl;

    }

    return 0;

}
