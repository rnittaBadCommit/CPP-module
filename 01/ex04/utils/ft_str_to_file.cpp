#include "ft_utils.hpp"

namespace ft
{
	int	str_to_file(std::string file_name, std::string content, t_err *err)
	{
		std::ofstream ofs(file_name.c_str());
		if (ofs.fail())
		{
			*err = CANT_OPEN_FILE;
			return (CANT_OPEN_FILE);
		}
		else
		{
			ofs << content;
			ofs.close();
			return (NO_ERR);
		}
	}

	int	str_to_file(std::string file_name, std::string content)
	{
		std::ofstream ofs(file_name.c_str());
		if (ofs.fail())
			return (CANT_OPEN_FILE);
		else
		{
			std::cout << content;
			return (NO_ERR);
		}
	}
}
