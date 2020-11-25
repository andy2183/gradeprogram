//
//  main.cpp
//  gradeprogram
//
//  Created by Andy Tamara on 11/24/20.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int MAX_NUMBER_OF_STUDENTS = 100;
    int scores[MAX_NUMBER_OF_STUDENTS];
    int best = 0;
    
    int numberOfScores;
    cout << "Enter the number of students: ";
    cin >> numberOfScores;
    
    cout << "Enter " << numberOfScores << " scores: ";
    
    for (int i = 0; i < numberOfScores; i++)
    {
        cin >> scores[i];
        if (scores[i] > best)
            best = scores[i];
    }
    char grade;
    for (int i = 0; i < numberOfScores; i++)
    {
        if (scores[i] >= best - 10)
        {
            grade = 'A';
        }
        else if (scores[i] >= best - 20)
            grade = 'B';
        else if (scores[i] >= best - 30)
            grade = 'C';
        else if (scores[i] >= best - 40)
            grade = 'D';
        else
            grade = 'D';
        cout << "Student# "  << i +1 << " grade is " << grade << endl;
    }
    
    return 0;
}
