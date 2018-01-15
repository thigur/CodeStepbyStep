    /* Code Step By Step Practice Problems */
    /* Jan 2nd 2018 */

    #include <iostream>
    #include <string>      // std::getline(string)
    #include <fstream>      // std::ifstream
    #include <iomanip>      // std::setw

    using namespace std;

    void hoursWorked( string filename ) {

        ifstream istrm( filename );

        if ( istrm.is_open() ) {

            string line;
            string empName;
            int employeeID;
            double numDays;
            float totalHrsWk = 0.0;

            while (getline( istrm, line ) ) {
                istringstream iss(line);
                string token;

                iss >> token; 
                employeeID = stoi( token );
                iss >> token; 
                empName = token;
                cout << setw( 8 ) << left << empName << " (ID# "; 
                cout << setw( 4 ) << right << employeeID; 
                cout << ")";

                while ( iss >> token) { // do stuff //
                    totalHrsWk += stof( token );
                    numDays++; 
                }
                    cout << setw( 3 );
                    cout << " worked " << fixed << setprecision( 1 ) << totalHrsWk << " hours" << " (";
                    cout << fixed << setprecision( 2 ) << ( totalHrsWk / numDays ) << "/day)" << endl;
                    totalHrsWk = 0; 
                    numDays = 0; 
            }
            istrm.close();
        } else
            cout << "Unable to ope file." << endl;
    }

    /*  The main function() */
    int main() {

        string filename = "hours.txt";

        hoursWorked( filename );

        cout << endl;
        cout << "This is my what happened!" << endl;
        return 0;
    }
