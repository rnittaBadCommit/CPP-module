#include "ft_utils.hpp"

namespace ft
{
	std::string	file_to_str(std::string file_name, t_err *err)
	{
		std::string ret;
		if (file_name.empty())
		{
			*err = EMPTY_FILE_NAME;
			return (ret);
		}
		std::ifstream ifs(file_name.c_str());
		if (ifs.fail())
		{
			*err = CANT_OPEN_FILE;
			return (ret);
		}
		std::istreambuf_iterator<char> it(ifs);
		std::istreambuf_iterator<char> last;
		ret = std::string(it, last);
		ifs.close();
		return (ret);
	}
}
