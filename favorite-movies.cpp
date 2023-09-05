

/*
Ask user what they want to do
Option 1 Add a Movie to the List
Option 2 Remove a movie from the list
Option 3 Display all movies
Option 4 Quit
Repeat
*/

#include <iostream>
#include <vector>
using std::string;
using std::cin;
using std::cout;

void displayOptions () {
    string addMovie = "Add Movie \n";
    string removeMovie = "Remove Movie \n";
    string displayMovies = "Display Movie ist \n";
    string quit = "Quit program \n";
    cout << addMovie;
    cout << removeMovie;
    cout << displayMovies;
    cout << quit;
}

int main() {
   bool programOver = false;
    //string movieList = "Please enter a Movie Title" 
    while (programOver != true) {
        string option = "";
        displayOptions();
        cout << "Choose an option: ";
        cin >> option;
    }
    
    return 0;
}























