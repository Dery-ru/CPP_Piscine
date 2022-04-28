#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();

    void    makeSound() const;
    const std::string   &getType() const;
    ~WrongAnimal();
};

#endif