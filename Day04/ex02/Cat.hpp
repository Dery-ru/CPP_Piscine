#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
    Cat();
    Cat(const Cat &copy);
    Cat&  operator= (const Cat &other);

    void    makeSound() const;
    const std::string   &getType() const;
	virtual	Brain *getBrain( void ) const;
    virtual ~Cat();
};

#endif