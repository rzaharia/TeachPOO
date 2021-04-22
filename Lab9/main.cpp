#include <iostream>
#include <cstring>
#include "PasswordManager.h"
using namespace std;


int main()
{
    //Stage 1
    PasswordManager manager;
    //un utilizator are 2 campuri: username si master password, in aceasta ordine folosite in functia de mai jos
    //adaugarea unui nou utilizator: se adauga doar daca utilizatorul nu exista deja
    //HINT: aveti grija la const-uri!, ati putea face verificarea daca 2 utilizatori au acelasi nume prin operatorul == daca il implementati
    manager.AddUser({ "bobby", "m4a1" }).AddUser({ "maxi", "maxiMan" }).AddUser({ "ssrc", "ghasw24912mj@#@" }).AddUser({ "bobby", "bobbo" });

    cout << "Weak passwords: ";
    for (auto it = manager.WeakPasswordIteratorBegin(); it != manager.WeakPasswordIteratorEnd(); ++it)//iterator care trece prin parolele utilizatorilor care au parole sub 8 caractere
    {
        auto [index, username, passwordLength] = *it;
    }
                                                                                                      //cout << *it << " "; //afiseaza acele parole care au sub 8 caractere
    cout << endl;

    //cout << "User analyzer: "<<endl;
    //for (auto it = manager.AnalyzerIteratorBegin(); it != manager.AnalyzerIteratorEnd(); ++it)
    //{
    //    auto [index, username, passwordLength] = *it;
    //    cout << "\tUser: " << username << " with id: " << index << " has the password length: " << passwordLength << endl;
    //}

    auto& user_maxi = manager["maxi"];//getting the user with that username

    //rezolvati pana aici in vreo 30 de minute, ignorati momentan ce este mai jos
    //
    //Stage2 -- just homework, no reward from this point on
    //user_maxi.AddCategory("Passwords"); //adding a category to the user that can hold multiple values
    //auto& maxiPasswordsCategory = user_maxi.GetCategory("Passwords");
    //maxiPasswordsCategory.AddData("pass01");//adding data to the category
    //maxiPasswordsCategory.AddData("pass02");
    //user_maxi.AddCategory("ShoppingList");
    //auto& maxiShoppingListCategory = user_maxi.GetCategory("ShoppingList");
    //maxiShoppingListCategory.AddData("carrots");
    //maxiShoppingListCategory.AddData("apples");

    //for (auto& user : manager)
    //    cout << user.GetUsername() << " " << user.PrintDetails() << endl;///PrintDetails will print each category and its data or "no category found" if there were not found any categories

    return 1;
}