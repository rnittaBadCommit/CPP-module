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
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

		std::string	level_ary_[NUM_LEVEL];
		void	(Harl::*complain_arry_[NUM_LEVEL])(void);
};

#endif
