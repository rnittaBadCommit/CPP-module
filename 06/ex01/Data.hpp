#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

class	Data
{
	public:
		//canonical
					Data();
					Data(const Data &other);
		virtual		~Data();
		Data		&operator=(const Data &other);

		//other constructors
		Data(const std::string name);

		//getter & setter
		const std::string	&getName() const;
		void				setName(const std::string);

	private:
		std::string name_;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
