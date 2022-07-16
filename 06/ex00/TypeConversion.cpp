#include "TypeConversion.hpp"

const std::string TypeConversion::MESSAGE_IMPOSSIBLE = "impossible";
const std::string TypeConversion::MESSAGE_NON_DISPLAYABLE = "Non displayable";

TypeConversion::TypeConversion()
: str_data_(""), is_number_(false)//, type_(TYPE_NONE)
{

}

TypeConversion::TypeConversion(const TypeConversion &other)
: str_data_(other.str_data_), is_number_(other.is_number_)
{

}

TypeConversion::~TypeConversion()
{

}

TypeConversion	&TypeConversion::operator=(const TypeConversion &other)
{
	str_data_ = other.str_data_;
	is_number_ = other.is_number_;
	// type_ = other.type_;

	return (*this);
}


//other constructors
TypeConversion::TypeConversion(const std::string str_data)
: str_data_(str_data), is_number_(ft::is_number(str_data))//, type_(strData_to_type(str_data))
{

}


//move
void	TypeConversion::displayAllType()
{
	displayChar();
}

void	TypeConversion::displayChar()
{
	std::cout << "char: ";

	if (is_number_)
	{
		std::istringstream	iss(str_data_);
		int					data;

		iss >> data;
		if (ft::is_valid_range_char(data))
		{
			if (isprint(data))
				std::cout << static_cast<char> (data) << std::endl;
			else
				std::cout << MESSAGE_NON_DISPLAYABLE << std::endl;
		}
		else
			std::cout << MESSAGE_IMPOSSIBLE << std::endl;
	}
	else
		std::cout << MESSAGE_IMPOSSIBLE << std::endl;
}

void	TypeConversion::displayInt()
{
	std::cout << "int: ";

	if (is_number_)
	{
		std::istringstream	iss(str_data_);
		long int			data;

		iss >> data;
		if (ft::is_valid_range_int(data))
		{
			std::cout << static_cast<int> (data) << std::endl;
		}
		else
			std::cout << MESSAGE_IMPOSSIBLE << std::endl;
	}
	else
		std::cout << MESSAGE_IMPOSSIBLE << std::endl;
}

void	TypeConversion::displayFloat()
{
	std::cout << "int: ";

	if (str_data_ == "-inff" || str_data_ == "+inff" || str_data_ == "nanf")
	{
		std::cout << str_data_ << std::endl;
		return ;
	}
	else if (str_data_ == "-inff" || str_data_ == "+inff" || str_data_ == "nan")
	{
		std::cout << str_data_ << "f" << std::endl;
		return;
	}

	if (is_number_)
	{
		std::istringstream	iss(str_data_);
		float			data;

		iss >> data;
		if (std::numeric_limits<float>::lowest() <= data && data <= std::numeric_limits<float>::max())
		{
			std::cout << static_cast<int> (data) << std::endl;
		}
		else
			std::cout << MESSAGE_IMPOSSIBLE << std::endl;
	}
	else
		std::cout << MESSAGE_IMPOSSIBLE << std::endl;
}

//private
// int		TypeConversion::strData_to_type(const std::string str_data)
// {
// 	if ()
// }

