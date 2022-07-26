#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		//canonical
						MutantStack() {}
						MutantStack(const MutantStack &other)
						{
							*this = other;
						}
		virtual			~MutantStack() {}
		MutantStack 	&operator=(const MutantStack &other)
						{
							if (this == &other)
								return *this;
							this->std::stack<T, Container>::operator=(other);
							return *this;
						}

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() { return (c.begin()); }
		iterator end() { return (c.end()); }

		reverse_iterator rbegin() { return (c.rbegin()); }
		reverse_iterator rend() { return (c.rend()); }

		const_iterator begin() const { return (c.begin()); }
		const_iterator end() const { return (c.end()); }

		const_reverse_iterator rbegin() const { return (c.rbegin()); }
		const_reverse_iterator rend() const { return (c.rend()); }
};

#endif
