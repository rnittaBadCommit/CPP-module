#include "Harl.hpp"

Harl::Harl()
{
	level_ary_[0] = std::string(DEBUG_NAME);
	level_ary_[1] = INFO_NAME;
	level_ary_[2] = WARNING_NAME;
	level_ary_[3] = ERROR_NAME;
	complain_arry_[0] = &Harl::debug;
	complain_arry_[1] = &Harl::info;
	complain_arry_[2] = &Harl::warning;
	complain_arry_[3] = &Harl::error;
}

Harl::~Harl()
{

}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < NUM_LEVEL; i++)
		if (level == level_ary_[i])
		{
			(this->*complain_arry_[i])();
			break ;
		}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}
