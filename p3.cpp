#include <iostream>
using namespace std;

/*
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18 
19 20 21 22 23 24 
25 26 27 28 29 30 
31 32 33 34 35 36
*/
int main()
{
    int size, count = 1;
    cout << "Enter the size of the pattern: ";
    cin >> size;
    int i = 1;
    while (i <= size)
    {
        int j = 1;
        while (j <= size)
        {
            cout << count<< " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

// The above code can be written using for loop as well

    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}