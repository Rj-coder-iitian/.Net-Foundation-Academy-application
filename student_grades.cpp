#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string firstName;
        string lastName;
        int gradeAverage;
        char letterGrade;
        int scores;
        Student(string fName, string lName, int sum, int t){
            firstName = fName;
            lastName = lName;
            scores = sum;
            gradeAverage = sum/t;
            if(gradeAverage >= 90 && gradeAverage <= 100){
                letterGrade = 'A';
            }else if(gradeAverage >= 80 && gradeAverage <= 89){
                letterGrade = 'B';
            }else if(gradeAverage >= 70 && gradeAverage <= 79){
                letterGrade = 'C';
            }else if(gradeAverage >= 60 && gradeAverage <= 69){
                letterGrade = 'D';
            }else if(gradeAverage >= 0 && gradeAverage <= 59){
                letterGrade = 'F';
            }
        }
};

int main() {
    int n,t;
    cout << "Enter number of students: " << endl;
    cin >> n;
    cout << endl << "Enter number of test: " << endl;
    cin >> t;
    vector<Student> student;
    for(int i=0;i<n;i++){
        string fName,lName;
        cout << "Enter Name: ";
        cin >> fName >> lName;
        cout << endl << "Enter test scores: ";
        vector<int> score(t,0);
        int sum = 0;
        for(int j=0;j<t;j++){
            cin >> score[j];
            sum += score[j];
        }
        Student s = Student(fName,lName,sum,t);
        student.push_back(s);
        cout << endl;
    }
    for(int i=0;i<n;i++){
        cout << student[i].firstName << " " << student[i].lastName << " " << student[i].gradeAverage << " " << student[i].letterGrade << endl; 
    }
    
    return 0;
}
