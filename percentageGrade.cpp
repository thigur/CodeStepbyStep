    #include <iostream>
    #include <stdio.h>      /* printf */
    #include <math.h>       /* fmod */

    using namespace std;

    //If you want to reject decimal input instead of truncating it, you can  
    //convert the input to a double and check to make sure it doesn't have a decimal part 

    int getInteger() {

        string line;
        double d = 0;

        while (std::getline(cin, line))
            try {
                d = std::stod(line);

                if (std::fmod(d, 1) != 0)
                    throw 0;

                break;
            } catch (...) {
                cout << "Enter an integer, try again: ";
            }
        return d;
    }

    int main() {

        cout << "What percentage did you earn? ";
        int percent = getInteger();

        if (percent >= 90)
            cout << "You got an A!" << endl;
        else if (percent >= 80)
            cout << "You got a B!" << endl;
        else if (percent >= 70)
            cout << "You got a C!" << endl;
        else if (percent >= 60)
            cout << "You got a D!" << endl;
        else
            cout << "You got an F!" << endl;
    }
