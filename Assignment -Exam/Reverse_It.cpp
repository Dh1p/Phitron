/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

    class Student 
    {
        public: 
        string name;
        int cls;
        char sec;
        int roll;
    };

    int main()
    {
        int n;
        cin >>n;

        Student students[100];
        char section[100];

        for(int i=0; i<n; i++)
        {
            cin>>students[i].name>>students[i].cls>>students[i].sec>>students[i].roll;
            section[i]=students[i].sec;
        }

        for(int i=0; i<n; i++)
        {
            students[i].sec = section[n-1-i];
        }

        for(int i=0; i<n; i++)
        {
            cout<<students[i].name<<" "<<students[i].cls<<" "<<students[i].sec<<" "<<students[i].roll<<endl;
        }

    return 0;
}