#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define NUM_LEVEL 4
# define DEBUG_NAME "DEBUG"
# define INFO_NAME "INFO"
# define WARNING_NAME "WARNING"
# define ERROR_NAME "ERROR"

class Harl
{
	public:
		Harl();
		virtual ~Harl();
		void	complain(const std::string level);
		void	complain_filtered(const std::string level);
		static bool	is_valid_arg(const std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	invalid_level(void);
		int		convert_level_to_int(const std::string level);

		std::string	level_ary_[NUM_LEVEL];
		void	(Harl::*complain_arry_[NUM_LEVEL])(void);
};

#endif
