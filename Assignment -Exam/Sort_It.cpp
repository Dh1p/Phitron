/**
 *     DHIP
**/
#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for(int i=0; i<n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int ti = students[i].math_marks + students[i].eng_marks;
            int tj = students[j].math_marks + students[j].eng_marks;

            if(tj>ti)
            {
                swap(students[i],students[j]);
            }
            else if(ti==tj && students[j].id<students[i].id)
            {
                swap(students[i],students[j]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout << students[i].nm<<" "<<students[i].cls<<" "<<students[i].s<<" "<<students[i].id<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }
    return 0;
}