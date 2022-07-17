#include "Data.hpp"

int	main()
{
	Data	data1("data1");
	uintptr_t	tmp = serialize(&data1);
	std::cout << "data1.ptr: " << &data1 << std::endl;
	std::cout << "tmp.ptr: " << std::hex << tmp << std::endl;

	Data	*data1_re = deserialize(tmp);
	std::cout << "data1_re.ptr: " << &data1_re << std::endl;
	std::cout << "data1_re.name: " << data1_re->getName() << std::endl;
	data1_re->setName("new name");
	std::cout << "data1_re.new_name: " << data1_re->getName() << std::endl;
	std::cout << "data1.new_name: " << data1.getName() << std::endl;
}