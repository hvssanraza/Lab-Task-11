#include <iostream>
using namespace std;

double calc(int total_lectures, int lectures_taken)
{
    return (lectures_taken*100)/total_lectures;
}
int main() {

    int totalStudents = 0, eligibleStudents = 0;
    char choice;
    cout<<"Welcome to Attendance Tracking System"<<endl;

    do {
        int total_lectures, lectures_taken;
        cout<<"Enter the total number of classes: "<<endl;
        cin>> total_lectures;
        cout<< "Enter the number of classes attended: "<<endl;
        cin>> lectures_taken;

        double percentage= calc(total_lectures, lectures_taken);
        cout<< "Total Percentage: "<<percentage<<"%"<<endl;

        if (percentage >= 75.0) {
            cout << "Eligible for the exam." << endl;
            eligibleStudents++;
        } else {
            cout << "Not eligible for the exam." << endl;
        }

        totalStudents++;
        cout << "Do you want to enter details for another student? (y/n): ";
        cin >> choice;
        cout << endl;
    } while (choice == 'y' || choice == 'Y');

   
    cout << "Total Students registered: " << totalStudents << endl;
    cout << "Students Eligible for Exam: " << eligibleStudents << endl;

    return 0;
}

