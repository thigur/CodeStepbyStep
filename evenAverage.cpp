    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    //If you want to reject decimal input instead of truncating it, you can  
    //convert the input to a double and check to make sure it doesn't have a decimal part 

    int getInteger() {

        string line;
        double d = 0;

        while ( true ) {
            cout << "Integer? ";
            getline(cin, line);
            try {
                d = stod(line);

                if (fmod(d, 1) != 0)
                    throw 0;
                break;
            } catch (...) {
                cout << "Enter an integer, try again: ";
            }
        }
        return d;
    }

    int main() {

        cout << "Enter nonzero integers, and Zero to calculate." << endl;
        int numsToAverage = 0;
        double totalOfEvenNum = 0;
        double numCount = 0;
 
        while ( true ) { 
            numsToAverage = getInteger();
            if(  numsToAverage > 0 ) {
                if( (numsToAverage % 2 ) == 0 ) {
                    totalOfEvenNum += numsToAverage;
                    numCount++;
                }
            }
            else 
                break;
        }
        if( numCount > 0 ) {
            cout << endl;
            cout << "totalOfEvenNum:  " << totalOfEvenNum << endl;
            cout << "numCount:  " << numCount << endl;
            cout << "Average:  " << totalOfEvenNum / numCount << endl;
        }
        else
            cout << "There are No Even Numbers to Average." << endl;

        return 0;
    }
