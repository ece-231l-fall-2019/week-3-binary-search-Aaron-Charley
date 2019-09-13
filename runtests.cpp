#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Timer.h"
#include "search.h"

void readFile(std::vector<int>& this_vect, std::string name)
{
	std::ifstream fin(name);
	while(true)
	{
		int num;
		fin >> num;
		if (fin.eof())
			break;
		this_vect.push_back(num);
	}

}

int main()
{
	std::vector<int> numbers;
	std::vector<int> search;

	readFile(numbers, "numbers");
	readFile(search, "search");


	{
		Timer timer("Time to search all linear values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to all linear with pointers: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	
        {
                Timer timer("Time to search all binary values: ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binarySearch(numbers, search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
        }

        {
                Timer timer("Time to search all binary values with pointer: ");

                int found = 0;
                for (size_t i = 0; i < search.size(); i++)
                {
                        if (binarySearch(numbers.data(), numbers.data() + numbers.size(),
                                        search[i]))
                                found++;
                }

                std::cout << "Found "<< found << "/"
                        << search.size() << " values." << std::endl;
		
	return 0;
}



