#include <iostream>
#include <vector>
using namespace std;

class Book {
    private:
        string title;
        string author;
        int year;

    public:
        void display() const {
            cout << "Title: " << title << ", Author: " << author << ", Year: " << year << endl;
        }
};

void addBook(vector<Book>& books) {
    string title, author;
    int year;

    cout << "Enter the Title: ";
    cin.ignore();
    getline(cin, title);

    cout << "Enter the Author: ";
    getline(cin, author);

    cout << "Enter the Year: ";
    cin >> year;

    Book newBook(title, author, year);
    books.push_back(newBook);
}

void displayBooks(const vector<Book>& books) {
    for (const auto& book : books) {
        book.display();
    }
}

int main() {
    vector<Book> books;
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Display all Books" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(books);
                break;

            case 2:
                displayBooks(books);
                break;

            case 3:
                exit(0);
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
        }
    }

    return 0;
}
