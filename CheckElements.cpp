
#include <iostream>
#include <ctime>
#include <ctime>
using namespace std;
// forward decleration
void matchTheseArrays(int[], int[]);
// main function
int main()
{
    // constant
    const int ARRAY_SIZE = 5;
    // variable
    int numbers;
    // Arrays
    int lottery[ARRAY_SIZE];
    int user[ARRAY_SIZE];
    srand(time(0));
    // user array input
    cout << "Enter the elements in user array(0-10) one-by-one:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> user[i];
        // storing random numbers in lottery array
    }
    for (int i = 0; i < 5; i++)
    {
        lottery[i] = rand() % 10;
    }
    // calling the match function
    matchTheseArrays(user, lottery);

    return 0;
}
// function to match the elments of Arrays
void matchTheseArrays(int user[], int lottery[])
{
    int check;
    // using for-loop
    for (int first = 0; first < 5; first++)
    {
        // nested for-loop
        for (int second = 0; second < 5; second++)
        {
            // using if statement
            if (user[second] == lottery[first])
            {
                check++;
            }
        }
        // using if statement
        if (check == 1)
        {
            cout << "There is " << check << " same element...\n";
        }
    }
    // using if statement
    if (check != 1)
    {
        cout << "there are " << check << " same elements..\n";
    }
    // using if statement
    if (check == 5)
    {
        cout << "You are a grand prize winner.......\n";
    }
}
