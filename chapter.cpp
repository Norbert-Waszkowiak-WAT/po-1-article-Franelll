#include <iostream>
#include <string>
#include "article.cpp"

using namespace std;

class Chapter{

private:
string title;
Author author;
int chapterNumber;

public:

Chapter() : chapterNumber(1) {};

Chapter(string chapterTitle, Author chapterAuthor, int number)
: title(chapterTitle), author(chapterAuthor), chapterNumber(number){};

    Chapter(const Chapter &other)
        : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {};

    Chapter(const Article &article)
        : title(article.getTitle()), author(article.getAuthor()), chapterNumber(1) {};

    string getTitle() const 
    { return title; }

    Author getAuthor() const 
    { return author; }

    int getChapterNumber() const 
    { return chapterNumber; }

   
    void displayInfo() 
    {
        cout << "Chapter " << chapterNumber << ": " << title << " by " << author.getName() << " " << author.getSurname() << endl;
    }

};
