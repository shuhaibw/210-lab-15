// COMSC-210 | Lab 15 | Shuhaib Walahi

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class Movie
{
    private:
        string title;
        int year;
        string screenwriter;
    public:

        // setters
        void setTitle(const string& t) {title = t;} // string& avoids copy of string
        void setYear(int y) {year = y;}
        void setScreenwriter(const string& s) {screenwriter = s;}

        // getters
        string getTitle() const {return title;}
        int getYear() const {return year;}
        string getScreenwriter() const {return screenwriter;}

        // print the movie
        void print() const
        {
            cout << "Movie: " << title << endl;
            cout << setw(19) << "Year released: " << year << endl;
            cout << setw(18) << "Screenwriter: " << screenwriter << endl << endl;
        }
};

int main()
{
    // vector to hold the movie objects
    vector<Movie> movies;

    return 0;
}