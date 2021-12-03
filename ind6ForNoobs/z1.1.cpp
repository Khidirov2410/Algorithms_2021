#include <iostream>
#include <fstream>
#include "String.h"
#include "Subscriber.h"
#include "ArrayManager.h"
#include "SubscribersManager.h"

const char* ERROR_INCORRECT_INPUT_FILE_NAME = "Error: input file not found.";

const char* ERROR_INCORRECT_OUTPUT_FILE_NAME = "Error: output file not found.";

int main(){
    try {

        /*std::string string = "amogus";
        std::string string1 = "amogus";
        std::cout << string.compare(string1);*/

        char inputAddress[40];
        char outputAddress[40];
        int length;

        std::cout << "Input name of file with information:"; std::cin >> inputAddress;
        std::cout << "Input name of file for output:"; std::cin >> outputAddress;

        Subscriber * subscribers = new Subscriber[5];

        std::fstream input(inputAddress);
        if(!input.is_open()) throw ERROR_INCORRECT_INPUT_FILE_NAME;

        input >> length;

        SubscribersManager::readArray(subscribers, length, input);
        input.close();

        SubscribersManager::sortArray(subscribers, length);

        std::fstream output(outputAddress);
        if(!output.is_open()) throw ERROR_INCORRECT_OUTPUT_FILE_NAME;
        SubscribersManager::writeArray(subscribers, length, output);
        input.close();

        std::cout << "Number of unique traffic codes:" << SubscribersManager::getNumberOfUniqTrafficCodes(subscribers, 5) << std::endl;
        std::cout << "Number of different phone numbers on one traffic code:" << SubscribersManager::getNumberOfDiffPhonesOnOneTrafficCode(subscribers, 5);
        return 0;
    }
    catch(const char* error)
    {
        system("cls");
        std::cerr << std::endl << error << std::endl;
        exit(1);
    }
}