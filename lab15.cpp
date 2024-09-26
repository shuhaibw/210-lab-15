// COMSC-210 | Lab 15 | Shuhaib Walahi

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

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

    ifstream fin ("../input.txt");
    // var to hold temporary title
    string title;
    // var to hold temporary year
    int year;
    // var to hold temporary screenwriter
    string screenwriter;
    // temporary index
    int i = 0;

    if (fin.good())
    {
        while (getline(fin, title))
        {
            fin >> year;
            // ignore the newline after the year
            fin.ignore();
            getline(fin, screenwriter);

            // declare the temp movie object
            Movie movie;

            // populate the movie object
            movie.setTitle(title);
            movie.setYear(year);
            movie.setScreenwriter(screenwriter);

            // add all temp movie objects to vector
            movies.push_back(movie);
            i++;
        }
        fin.close();
    }
    else
    {
        cout << "Error: unable to open file." << endl;
    }

    // print the movies in vector
    for (auto val: movies)
    {
        val.print();
    }

    return 0;
}