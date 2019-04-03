 /*            ***********  Awesome, Nicely Done **************
  * Author: laveenAZ
  * Date:   March 28th, 2019
  * Write a function named byAge that accepts three parameters:
  * 1) a reference to a Map where each key is a person's name (a string)
  *    and the associated value is that person's age (an integer);
  * 2) an integer for a minimum age; and
  * 3) an integer for a max age.
  * Your function should return a new map with information about people
  * with ages between the min and max, inclusive.

In your result map, each key is an integer age, and the value for that key is a string with the names of all people at that age, separated by "and" if there is more than one person of that age. The order of names for a given age should be in alphabetical order, such as "Bob and Carl" rather than "Carl and Bob". (This is the order in which they naturally occur in the parameter map.) Include only ages between the min and max inclusive, where there is at least one person of that age in the parameter map. If the map passed is empty, or if there are no people in the map between the min/max ages, return an empty map.

For example, if a map named ages stores the following key:value pairs:

{"Allison":18, "Benson":48, "David":20, "Erik":20, "Galen":15, "Grace:25,
"Helene":40, "Janette":18, "Jessica":35, "Marty":35, "Paul":28, "Sara":15,
"Stuart":98, "Tyler":6, "Zack":20}

The call of byAge(ages, 16, 25) should return the following map:

{18:"Allison and Janette", 20:"David and Erik and Zack", 25:"Grace"}

For the same map, the call of byAge(ages, 20, 40) should return the following map:

{20:"David and Erik and Zack", 25:"Grace", 28:"Paul", 35:"Jessica and Marty", 40:"Helene"}

Constraints: Obey the following restrictions in your solution.

    You will need to construct a map to store your results, but you may not use any other structures (arrays, lists, etc.) as auxiliary storage. (You can have as many simple variables as you like.)
    You should not modify the contents of the map passed to your function.
    Declare your function in such a way that any caller can be sure that this will not happen.
    Your solution should run in no worse than O(N log N) time, where N is the number of pairs in the map.


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

    int main() {

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
    }

