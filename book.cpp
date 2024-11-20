#include <iostream>
#include <string>
#include <vector>
#include "chapter.cpp"
using namespace std;

class Book
{
private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;

public:
    Book()
        :  publicationYear(0) {};

    Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> bookChapters)
        : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {};

    string getTitle() const 
    { return title; }

    Author getAuthor() const
     { return author; }

    int getPublicationYear() const 
    { return publicationYear; }

    vector<Chapter> getChapters() const 
    { return chapters; }

    void addChapter(const Chapter &chapter)
    {
        chapters.push_back(chapter);
    }

    void displayInfo() 
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author.getName() << " " << author.getSurname() << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "Chapters:" << endl;

        for (const auto &chapter : chapters)
        {
            cout << "  - " << chapter.getTitle() << " (Chapter " << chapter.getChapterNumber() << ")" << endl;
        }
    }
};