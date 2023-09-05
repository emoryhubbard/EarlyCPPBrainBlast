

/*

1 Add a Movie to the List
2 Remove a movie from the list
3 Display all movies
4 Quit
Choose an option: _

(Repeat)
*/

#include <iostream>
#include <vector>
#include <sstream>
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::getline;

void displayOptions () {
    string addMovie = "1 Add Movie \n";
    string removeMovie = "2 Remove Movie \n";
    string displayMovies = "3 Display Movie list \n";
    string quit = "4 Quit program \n";
    cout << addMovie;
    cout << removeMovie;
    cout << displayMovies;
    cout << quit;
}
void addMovie(vector<string> &movieList) {
    string movie;
    cout << "Enter movie name: \n";
    getline(cin, movie);

    movieList.emplace_back(movie);
}
int main() {
   bool programOver = false;
   vector<string> movieList;
    //string movieList = "Please enter a Movie Title" 
    while (programOver != true) {
        string option = "";
        displayOptions();
        cout << "Choose an option: ";
        cin >> option;

        if (option == "1") {
            addMovie(movieList);
        }
    }
    
    return 0;
}























