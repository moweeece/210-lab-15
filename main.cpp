#include <iostream>
#include <iomanip>
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
        cout << setw(15) << "Year: " << year << endl;
        cout << setw(15) << "Writer: " << writer << endl << endl;
    }

};


int main() {

    // First movie object
    Movie movie1;
   


    return 0;
}