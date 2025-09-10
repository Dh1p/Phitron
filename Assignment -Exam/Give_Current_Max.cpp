/**
 *     DHIP
 **/
#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;

    Student(string n, int a, int m)
    {
        this->name = n;
        this->age = a;
        this->marks = m;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.age > b.age;
        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age, marks;
        cin >> name >> age >> marks;
        pq.push(Student(name, age, marks));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string name;
            int age, marks;
            cin >> name >> age >> marks;
            pq.push(Student(name, age, marks));
            cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << "\n";
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << "\n";
        }
        else if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty\n";
                else
                    cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << "\n";
            }
        }
    }
    return 0;
}