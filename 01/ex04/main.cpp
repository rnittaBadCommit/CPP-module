#include "ft_sed.hpp"

int main(int argc, char **argv)
{
	t_err err = NO_ERR;

	if (is_valid_args(argc, argv, &err) == INVALID)
		return (ft_error(err));
	std::string file_content = ft::file_to_str(argv[1], &err);
	if (err != NO_ERR)
		return (ft_error(err));
	ft::replace(file_content, argv[2], argv[3]);
	if (ft::str_to_file(std::string(argv[1]) + std::string(".replace"), file_content, &err) != NO_ERR)
		return (ft_error(err));

}