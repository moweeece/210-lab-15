#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// class Declaration
class Movie
{
    private:
    string title;
    int year;
    string writer;
    
    public:
    // getters and setters
    string getTitle()           { return title; }
    void setTitle(string t)     { title = t; }
    int getYear()               { return year; }
    void setYear(int y)         { year = y; }
    string getWriter()          { return writer; }
    void setWriter(string w)    { writer = w; }


    // print mehtod
    void print()
    {
        cout << "Movie: " << title << endl;
        cout << setw(20) << "Year released: " << setw(5) << year << endl;
        cout << setw(20) << "Screenwriter: " << setw(5) << writer << endl << endl;
    }

};


int main() {

    vector<Movie> movies_vec;
    ifstream fin ("input.txt");

    string t;  // temporary title variable
    int y;     // temporary year variable
    string w;  // temporary writer variable

    if (fin.good()) {
        while (getline(fin, t))
        {
            fin >> y;
            fin.ignore();
            getline(fin, w);

            // temporary Movie object
            Movie movie;
            movie.setTitle(t);
            movie.setYear(y);
            movie.setWriter(w);

            // populate movie vector
            movies_vec.push_back(movie);

            movie.print();
        }

        fin.close();
    }
    else 
    {
        cout << "Error reading file" << endl;
    }

    return 0;
}