/**
 *     DHIP
**/
//
#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    int id;
    char name[101];
    char section;
    int number;
};

int main()
{
    int n;
    cin>>n;
    for(int k=0; k<n; k++)
    {
        Student s[3];

        for(int i=0; i<3; i++)
        {
            cin >> s[i].id>>s[i].name>>s[i].section>>s[i].number;
        }

        int top = 0;

        for(int i=1; i<3; i++)
        {
            if(s[i].number > s[top].number)
            {
                top = i;
            }
            else if(s[i].number==s[top].number)
            {
                if(s[i].id < s[top].id)
                {
                    top = i;
                }
            }
        }

        cout<<s[top].id<<" "<<s[top].name<<" "<<s[top].section<<" "<<s[top].number<<endl;
    }
    return 0;
}
