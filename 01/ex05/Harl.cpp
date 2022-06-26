#include "Harl.hpp"

Harl::Harl()
{
	level_ary[0] = DEBUG_NAME;
	level_ary[1] = INFO_NAME;
	level_ary[2] = WARNING_NAME;
	level_ary[3] = ERROR_NAME;
	complain_arry[0] = &Harl::debug;
	complain_arry[1] = &Harl::info;
	complain_arry[2] = &Harl::warning;
	complain_arry[3] = &Harl::error;
}

Harl::~Harl()
{

}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < NUM_LEVEL; i++)
		if (level == level_ary[i])
		{
			(this->*complain_arry[i])();
			break ;
		}
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
