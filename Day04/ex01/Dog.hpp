#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain*	brain;
public:
    Dog();
    Dog(const Dog &copy);
    Dog&  operator= (const Dog &other);

    void    makeSound() const;
    const std::string   &getType() const;
	virtual	Brain *getBrain( void ) const;
    virtual ~Dog();
};

#endif