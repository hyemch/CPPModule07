#include "iter.hpp"

template <typename T>
void	printElement(const T& element)
{
		std::cout << "\033[38;5;214m" << element << "\033[0m" << std::endl;
}

int	main(void)
{
	char		charArray[] = "Good morning~*";
	int			intArray[] = {1, 2, 3, 4, 5};
	std::string lineArray[] = {"hi", "hello", "bye"};

	iter(charArray, 15, printElement<char>);
	std::cout << "\033[38;5;117m---------------------------------------\033[0m" << std:: endl;
	iter(intArray, 5, printElement<int>);
	std::cout << "\033[38;5;117m---------------------------------------\033[0m" << std:: endl;
	iter(lineArray, 4, printElement<std::string>);
	return 0;
}