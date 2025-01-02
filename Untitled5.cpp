#include <iostream>

using namespace std;

int findHighestGrade(int grades[], int size)
{

    int highest = grades[0];

    for (int i = 1; i < size; ++i)
    {

        highest = max(highest, grades[i]);

    }

    return highest;

}

int main()
{

    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    int grades[numStudents];

    cout << "Enter the grades for each student:\n";

    for (int i = 0; i < numStudents; ++i)
    {

        cin >> grades[i];

    }

    int highestGrade = findHighestGrade(grades, numStudents);

    double sum = 0.0;

    for (int i = 0; i < numStudents; ++i)
    {

        sum += grades[i];

    }
    double averageGrade = sum / numStudents;

    int numAbove90 = 0;

    for (int i = 0; i < numStudents; ++i)
    {

        if (grades[i] > 90)
        {

            numAbove90++;

        }
        
    }

    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Average Grade: " << averageGrade << endl;
    cout << "Number of Students Above 90%: " << numAbove90 << endl;

    return 0;

}
