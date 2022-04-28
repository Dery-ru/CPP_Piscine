#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
private:
	std::string	name;
	unsigned int			grade;
public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat&  operator= (const Bureaucrat &other);
	void	setGrade(int Grade);
	unsigned int	getGrade() const;
	std::string	getName() const;
	Bureaucrat &operator++();
	Bureaucrat &operator--();
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif
