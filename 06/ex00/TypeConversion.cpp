#include "TypeConversion.hpp"

const std::string TypeConversion::MESSAGE_IMPOSSIBLE = "impossible";
const std::string TypeConversion::MESSAGE_NON_DISPLAYABLE = "Non displayable";

TypeConversion::TypeConversion()
{
	throw InvalidInputException();
}

TypeConversion::TypeConversion(const TypeConversion &other)
{
	*this = other;
}

TypeConversion::~TypeConversion()
{

}

TypeConversion	&TypeConversion::operator=(const TypeConversion &other)
{
	s_input_value_ = other.s_input_value_;
	type_ = other.type_;
	c_value_ = other.c_value_;
	i_value_ = other.i_value_;
	f_value_ = other.f_value_;
	d_value_ = other.d_value_;

	return (*this);
}

void	TypeConversion::display()
{
	switch (type_)
	{
	case TYPE_CHAR:
		caseChar();
		break;
	
	case TYPE_INT:
		caseInt();
		break;
	
	case TYPE_FLOAT:
		caseFloat();
		break;
	
	case TYPE_DOUBLE:
		caseDouble();
		break;
	
	case TYPE_INF_NAN:
		caseINF_NAN();
		break;

	default:
		break;
	}
}

//other constructors
TypeConversion::TypeConversion(const std::string s_input_value)
: s_input_value_(s_input_value)
{
	set_type_(s_input_value);
}

void		TypeConversion::set_type_(const std::string s_input_value)
{
	{
		std::string		str_inf_nan[] = {"+inf", "+inff", "-inf", "-inff", "nan", "nanf", ""};
		for (size_t i = 0; str_inf_nan[i] != ""; i++)
			if (s_input_value == str_inf_nan[i])
			{
				type_ = TYPE_INF_NAN;
				s_input_value_ = str_inf_nan[i / 2 * 2];
				return ;
			}
	}

	size_t		len_input_value = s_input_value.length();

	if (len_input_value == 1 && !std::isdigit(s_input_value[0]))
		type_ = TYPE_CHAR;
	else if (ft::is_int(s_input_value))
		type_ = TYPE_INT;
	else if (ft::is_float(s_input_value))
	{
		s_input_value_[s_input_value_.length() - 1] = '\0';
		type_ = TYPE_FLOAT;
	}
	else if (ft::is_double(s_input_value))
		type_ = TYPE_DOUBLE;
	else
		throw InvalidInputException();
}

//case <TYPE>
void	TypeConversion::caseChar()
{
	c_value_ = s_input_value_[0];
	i_value_ = static_cast<int> (c_value_);
	f_value_ = static_cast<float> (c_value_);
	d_value_ = static_cast<double> (c_value_);

	displayAllType();
}

void	TypeConversion::caseInt()
{
	try
	{
		i_value_ = ft::stoi(s_input_value_);
		c_value_ = static_cast<int> (i_value_);
		f_value_ = static_cast<float> (i_value_);
		d_value_ = static_cast<double> (i_value_);
		displayAllType();
	}
	catch (const std::exception &e)
	{
		caseOverFlow();
	}
}

void	TypeConversion::caseFloat()
{
	std::istringstream iss(s_input_value_);

	iss >> f_value_;
	if (ft::is_valid_range_float(f_value_))
	{
		caseOverFlow();
		return ;
	}

	c_value_ = static_cast<int> (f_value_);
	i_value_ = static_cast<long> (f_value_);
	d_value_ = static_cast<double> (f_value_);

	displayAllType();
}

void	TypeConversion::caseDouble()
{
	std::istringstream iss(s_input_value_);

	iss >> d_value_;
	if (d_value_ < std::numeric_limits<double>::lowest() || std::numeric_limits<double>::max() < d_value_)
	{
		caseOverFlow();
		return ;
	}

	c_value_ = static_cast<int> (d_value_);
	i_value_ = static_cast<long> (d_value_);
	f_value_ = static_cast<double> (d_value_);

	displayAllType();
}

void	TypeConversion::caseOverFlow()
{
	std::cout << "char: " << MESSAGE_IMPOSSIBLE << std::endl;
	std::cout << "int: " << MESSAGE_IMPOSSIBLE << std::endl;
	std::cout << "float: " << MESSAGE_IMPOSSIBLE << std::endl;
	std::cout << "double: " << MESSAGE_IMPOSSIBLE << std::endl;
}

void	TypeConversion::caseINF_NAN()
{
	std::cout << "char: " << MESSAGE_IMPOSSIBLE << std::endl;
	std::cout << "int: " << MESSAGE_IMPOSSIBLE << std::endl;
	std::cout << "float: " << s_input_value_ + "f" << std::endl;
	std::cout << "double: " << s_input_value_ << std::endl;
}


//display
void	TypeConversion::displayAllType()
{
	displayChar(c_value_);
	displayInt(i_value_);
	displayFloat(f_value_);
	displayDouble(d_value_);
}

void	TypeConversion::displayChar(const int c_value)
{
	std::cout << "char: ";

	if (!ft::is_valid_range_char(c_value))
		std::cout << MESSAGE_IMPOSSIBLE << std::endl;
	else if (std::isprint(c_value))
	{
		char	c = static_cast<char> (c_value);
		std::cout << "\'" << c << "\'" << std::endl;
	}
	else
		std::cout << MESSAGE_NON_DISPLAYABLE << std::endl;
}

void	TypeConversion::displayInt(const long i_value)
{
	std::cout << "int: ";
	if (ft::is_valid_range_int(i_value))
		std::cout << static_cast<int> (i_value) << std::endl;
	else
		std::cout << MESSAGE_IMPOSSIBLE << std::endl;
}

void	TypeConversion::displayFloat(const double f_value)
{
	std::cout << "float: ";
g
	if (ft::is_valid_range_float(f_value))
		std::cout << static_cast<float> (f_value) << 'f' << std::endl;
	else
		std::cout << MESSAGE_IMPOSSIBLE << std::endl;
}

void	TypeConversion::displayDouble(const double d_value)
{
	std::cout << "double: " << d_value << std::endl;
}

const char	*TypeConversion::InvalidInputException::what() const throw()
{
	return ("Invalid Input");
}
