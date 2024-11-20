#include <iostream>
#include <string>
#include "author.cpp" 

using namespace std;

class Article
{
private:
    string title;
    Author author;
    int publicationYear;
    string journal;

public:
    
    Article() : publicationYear(0) {};

   
    Article(string articleTitle, Author articleAuthor, int year, string journalName)
        : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {};

   
    Article(const Article &other)
        : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {};

    
    string getTitle() const 
    { return title; }

    
    Author getAuthor() const 
    { return author; }

    
    int getPublicationYear() const 
    { return publicationYear; }

    
    string getJournal() const 
    { return journal; }

    
    void displayInfo() 
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author.getName() << " " << author.getSurname() << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "Journal: " << journal << endl;
    }
};