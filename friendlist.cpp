 /*            ***********  Awesome, Nicely Done **************
  * Author: laveenAZ
  * Date:   March 28th, 2019
  * Write a function named friendList that accepts a file name as a parameter and
  * reads friend relationships from a file and stores them into a compound collection
  *  that is returned. You should create a map where each key is a person's name
  * from the file, and the value associated with that key is a set of all friends of
  * that person. Friendships are bi-directional: if Marty is friends with Danielle,
  * Danielle is friends with Marty.
  * The file contains one friend relationship per line, consisting of two names. The
  * names are separated by a single space. You may assume that the file exists and is in
  * a valid proper format. If a file named buddies.txt looks like this:
  * Marty Cynthia
  * Danielle Marty
  * Then the call of friendList("buddies.txt") should return a map with the following
  * contents:
  * {"Cynthia":{"Marty"}, "Danielle":{"Marty"}, "Marty":{"Cynthia", "Danielle"}}
  * Constraints:
  * You may open and read the file only once. Do not re-open it or rewind the stream.
  * You should choose an efficient solution. Choose data structures intelligently
  * and use them properly.
  * You may create one collection (stack, queue, set, map, etc.) or nested/compound
  * structure as auxiliary storage. A nested structure, such as a set of vectors,
  * counts as one collection. (You can have as many simple variables as you like, such
  * as ints or strings.)
  */
    #include <fstream>
    using std::ifstream;
    #include <sstream>
    using std::istringstream;
    #include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
    #include <string>
    using std::string;
    #include<map>
    using std::map;
    using std::make_pair;
    #include<set>

    std::map<std::string, std::set<std::string>> friendList( std::string inPutFile ) {

        std::ifstream file( inPutFile );
        std::string str1, str2;

        std::map<std::string, std::set<std::string>> friendsList;
        std::set<std::string> setOfFriends;

        while ( file >> str1 >> str2 ) {
            friendsList[ str1 ].insert( str2 );
            friendsList[ str2 ].insert( str1 );
        }

        file.close();
        return friendsList;
    }

    /*int main() {

        std::map<std::string, std::set<std::string>> fList;

        fList = friendList("../hello/buddies.txt");
        //iterate over the whold data structure
        for( const auto& pair : fList) {
            std::cout << pair.first << ":";
            for (const auto& s : pair.second )  {
                std::cout << " " << s;
            }
            std::cout << "\n";

        }
        return 0;
    }*/

