#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include<cstdarg>

MyLibrary::MyLibrary(const MyLibrary& other):
output_stream(other.output_stream),books_number(other.books_number),books(new int[books_number])
{
    memcpy(this->books, other.books, this->books_number * sizeof(int));
}

MyLibrary::MyLibrary(ostream& output_stream) :output_stream(output_stream), books_number(-1), books(nullptr)
{
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books) :
    output_stream(output_stream), books_number(books_number)//,books(books)
{
    this->books = new int[this->books_number];//malloc([this->books_number * sizeof(int))
    //for ... [this->books]
    memcpy(this->books, books, this->books_number * sizeof(int));
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) :
    output_stream(output_stream), books_number(books_number), books(new int[books_number])
{
    srand(time(NULL));

    for (int i = 0; i < books_number; i++)
        this->books[i] = rand() % max + min;
}

MyLibrary::MyLibrary(ostream& output_stream, const char* books_values) :
    output_stream(output_stream)
{
    int books_values_length = strlen(books_values);
    if (books_values_length == 0)
    {
        books = nullptr;
        books_number = -1;
        return;
    }

    int count = 1;
    for (int i = 0; i < books_values_length; i++)
        if (books_values[i] == ';')
            count++;
    books_number = count;
    books = new int[books_number];

    count = 0;//index valori in books

    char* copy = _strdup(books_values);//malloc(strlen(books_values) + 1 )
    char* ptr = strtok(copy, ";");
    while (ptr)
    {
        books[count++] = atoi(ptr);
        ptr = strtok(NULL, ";");
    }

    free(copy);
}

MyLibrary::MyLibrary(ostream& output_stream, int books_count, ...) :
    output_stream(output_stream), books_number(books_count), books(new int[books_number])
{
    int index = 0;
    va_list args;
    va_start(args, books_count);
    for (int i = 0; i < books_number; i++)
    {
        books[i] = va_arg(args, int);
    }
    va_end(args);
}

void MyLibrary::print_books()
{
    output_stream << "Found " << books_number << " books" << endl;
    for (int i = 0; i < books_number; i++)
        output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
    delete[] books;
}

void MyLibrary::update_books_id_by_index(int book_index, int book_id)
{
    if (book_index < books_number)
        this->books[book_index] = book_id;
}

int MyLibrary::get_book_index_by_id(int index) const
{
    if (index >= books_number)
        return -1;
    return books[index];
}

int MyLibrary::get_books_count() const
{
    return books_number;
}
