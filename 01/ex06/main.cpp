#include "Harl.hpp"
#include "ft_utils.hpp"

static bool	is_valid_num_args_(int argc)
{
	if (argc == 2)
		return (VALID);
	else
		return (INVALID);
}

int main(int argc, char **argv)
{
	Harl	harl;

	if (is_valid_num_args_(argc) == INVALID)
	{
		std::cout << "Error: invalid number of args" << std::endl;
		return (1);
	}
	else
	{
		harl.complain_filtered(std::string(argv[1]));
	}
}