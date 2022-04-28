#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
    std::string type;
public:
    // Animal();
    // Animal(const std::string name);
    // Animal(const Animal &copy);
    // Animal&  operator= (const Animal &other);

    virtual void    makeSound() const = 0;
    virtual const std::string   &getType() const = 0;
	virtual	Brain	*getBrain( void ) const = 0;
    virtual ~Animal();
};

#endif