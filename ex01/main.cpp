#include "iter.hpp"

//template <typename T>
//void	printElement(const T& element)
//{
//		std::cout << "\033[38;5;214m" << element << "\033[0m" << std::endl;
//}
//
//int	main(void)
//{
//	const char		charArray[] = "Good morning~*";
//	int			intArray[] = {5, 4, 3, 2, 1};
//	std::string lineArray[] = {"hi", "hello", "bye"};
//
//	iter(charArray, 15, printElement<char>);
//	std::cout << "\033[38;5;117m---------------------------------------\033[0m" << std:: endl;
//	iter(intArray, 5, printElement<int>);
//	std::cout << "\033[38;5;117m---------------------------------------\033[0m" << std:: endl;
//	iter(lineArray, 4, printElement<std::string>);
//	return 0;
//}

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T& x )
{
	std::cout << x << std::endl;
	return;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print<const int> );
	iter( tab2, 5, print<Awesome> );

	return 0;
}