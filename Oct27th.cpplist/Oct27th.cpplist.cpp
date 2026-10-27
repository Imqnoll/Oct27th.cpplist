#include <iostream>
#include <vector>  // A list of THINGS (numbers, strings, chars, etc.) that can grow and shrink as needed
#include <string>

void demoPrintingAListOfGrades()
{
    std::vector<int> listOfGrades =
    {
        9,
        9,
        100,
        70,
        0,
        90,
    };

    for (int locationInArray = 0; locationInArray < listOfGrades.size(); locationInArray++)
    {
        std::cout << listOfGrades[locationInArray] << " ";
        // Prints 9 9 100 70 0 90
    }

    std::cout << std::endl;
}

std::vector<std::string> maketoDOList()
{
    std::vector<std::string> toDoList; // Initially make this list empty

    std::string continueOrNot = "yes";

    while (continueOrNot == "yes")
    {
        std::cout << "Enter a thing on your to-do list." << std::endl;

        std::string newTask;
        std::getline(std::cin, newTask);

        toDoList.push_back(newTask);

        std::cout << "Are you done adding tasks (yes/no)?" << std::endl;
        std::getline(std::cin, continueOrNot);
    }

    return toDoList;
}

void printTheList(const std::vector<std::string>& theList)
{
    std::cout << "\nYour To-Do List:" << std::endl;

    for (int index = 0; index < theList.size(); ++index)
    {
        std::cout << index + 1 << ". " << theList[index] << std::endl;
    }
}

int main()
{
    demoPrintingAListOfGrades();

    std::vector<std::string> myToDoList = maketoDOList();

    printTheList(myToDoList);

    return 0;
}