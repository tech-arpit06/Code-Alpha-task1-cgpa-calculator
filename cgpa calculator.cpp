#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of courses: ";
    cin >> n;

    float grade, credit;
    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "\nEnter details of each course\n";

    for(int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter Grade Point: ";
        cin >> grade;

        cout << "Enter Credit Hours: ";
        cin >> credit;

        totalGradePoints += grade * credit;
        totalCredits += credit;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n--------------------------";
    cout << "\nTotal Credits = "
         << totalCredits;

    cout << "\nTotal Grade Points = "
         << totalGradePoints;

    cout << "\nCGPA = "
         << fixed << setprecision(2)
         << cgpa;

    cout << "\n--------------------------";

    return 0;
}
