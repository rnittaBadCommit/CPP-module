#ifndef TYPE_CONVERSION_HPP
# define TYPE_CONVERSION_HPP

# include <iostream>
# include <sstream>
# include <limits>
#include <wchar.h>
#include <math.h> 
#include "utils/ft_utils.hpp"

class TypeConversion
{
	public:
					TypeConversion();
					TypeConversion(const TypeConversion &other);
		virtual		~TypeConversion();
		TypeConversion	&operator=(const TypeConversion &other);

		//other constructors
		TypeConversion(const std::string s_input_value);

		void	display();

	private:
		std::string		s_input_value_;
		int		type_;
		int		c_value_;
		long	i_value_;
		double	f_value_;
		double	d_value_;

		static const std::string	MESSAGE_IMPOSSIBLE;
		static const std::string	MESSAGE_NON_DISPLAYABLE;

		void		set_type_(const std::string s_input_value);

		//case <TYPE>
		void	caseChar();
		void	caseInt();
		void	caseFloat();
		void	caseDouble();
		void	caseOverFlow();
		void	caseINF_NAN();

		//display
		void	displayAllType();
		void	displayChar(const int c_value);
		void	displayInt(const long i_value);
		void	displayFloat(const double f_value);
		void	displayDouble(const double d_value);

		enum
		{
			TYPE_NONE,
			TYPE_CHAR,
			TYPE_INT,
			TYPE_FLOAT,
			TYPE_DOUBLE,
			TYPE_INF_NAN,
			TYPE_INVALID,
			TYPE_LAST
		};

		class InvalidInputException : public std::exception
		{
			const char *what() const throw();
		};

};

#endif
