#include "article.cpp"
#include "chapter.cpp"
#include "author.cpp"
#include "book.cpp"

int main() {
    Author jan("Jan", "Kowalski");
    jan.print();
    Article article("Sample Article", jan, 2023, "Sample Journal");
    article.displayInfo();
    return 0;
}
