
#include<iostream>
    using namespace std;
    int main()
    {
        int n,a,i,min=0;
        cin>>n;
        cin>>a;
        min=a;
        for(i=1;i<n;i++)
        {
            cin>>a;
            if(a<min)
            {
                min=a;
            }
        }
        cout<<"min = "<<min;
        return 0;
    }
