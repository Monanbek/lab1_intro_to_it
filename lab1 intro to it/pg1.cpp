#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string fio;
    char pol;
    double stipendiya;
};

int main()
{
    int n;
    cout << "Kolichestvo studentov: ";
    cin >> n;

    Student* students = new Student[n];

    cout << "Vvedite dannye studentov:" << endl;

    for (int i = 0; i < n; ++i)
    {
        cin.ignore();

        cout << "FIO: ";
        getline(cin, students[i].fio);

        cout << "Pol (M/F): ";
        cin >> students[i].pol;

        cout << "Stipendiya: ";
        cin >> students[i].stipendiya;
    }

    char nuzhniyPol;
    cout << "Vvedite nuzhniy pol: ";
    cin >> nuzhniyPol;

    cout << "Result:" << endl;

    for (int i = 0; i < n; ++i)
    {
        if (students[i].pol == nuzhniyPol && students[i].stipendiya == 0)
            cout << students[i].fio << endl;
    }

    delete[] students;
    return 0;
}