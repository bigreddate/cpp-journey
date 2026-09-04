#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter three numbers: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x
    
	int y{};       // define variable y to hold user input (and value-initialize it)
    std::cin >> y; // get number from keyboard and store it in variable y

	int z{};       // define variable z to hold user input (and value-initialize it)
    std::cin >> z; // get number from keyboard and store it in variable z

    std::cout << "You entered " << x << ", " << y << ", and " << z << '\n';
    return 0;
}