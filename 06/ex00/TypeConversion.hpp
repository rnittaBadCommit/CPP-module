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
		TypeConversion(const std::string str_data);

		//move
		void	displayAllType();
		void	displayChar();
		void	displayInt();
		void	displayFloat();
		void	displayDouble();

	private:
		std::string		str_data_;
		bool			is_number_;
		static const std::string	MESSAGE_IMPOSSIBLE;
		static const std::string	MESSAGE_NON_DISPLAYABLE;
		// int				type_;

		// enum
		// {
		// 	TYPE_NONE,
		// 	TYPE_CHAR,
		// 	TYPE_INT,
		// 	TYPE_FLOAT,
		// 	TYPE_DOUBLE,
		// 	TYPE_LAST,
		// };

		// int		strData_to_type(const std::string str_data);

		

};

#endif
