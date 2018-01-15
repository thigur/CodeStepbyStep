    /* Code Step By Step Practice Problems */
    /* Jan 2nd 2018 */

    #include <iostream>
    #include <string>      // std::getline(string)
    #include <fstream>      // std::ifstream
    #include<streambuf>

    using namespace std;

    int main() {

        ifstream input;
        input.open("streamErrors-data.txt");

        string name;
        getline( input, name);      // #1   "Donald Knuth"
        cout << name << endl;

        char gender;
        gender = input.get();        // #2   'M'
        cout << gender << endl;
        input.ignore( 256, '\n' );

        string age;
        getline(input, age);
        int hesage = stoi(age);        // #3   76
        cout << hesage << endl;

        string jobtitle;
        input >> jobtitle;           // #4   "Stanford U."
        cout << jobtitle << " ";
        input >> jobtitle;           // #4   "Stanford U."
        cout << jobtitle << endl;

        input.close();

        cout << "This is my what happened!" << endl;
        return 0;
    }
