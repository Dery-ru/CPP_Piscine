#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>

class Array
{
public:
	T	*arr;
	unsigned int	_size;

	class Error : public std::exception
	{
		public:
			Error(){};
			~Error() throw(){};
			virtual const char *what() const throw()
				{return "out of range\n";}
	};
	Array() : arr(), _size() {};
	Array(unsigned int size) {
		_size = size;
		arr = new T[size];
	}
	Array(const Array &copy) : arr(new T[copy._size]), _size(copy._size)
	{
		for (unsigned int i = 0; i < _size; i++)
			arr[i] = copy.arr[i];
	}
	const Array &operator=(const Array &other)
	{
		_size = other._size;
		delete [] arr;
		arr = new T[_size];
		for(unsigned int i = 0; i < _size; i++)
			arr[i] = other.arr[i];
		return *this;

	}

	unsigned int const & size() const {return this->_size ;}

	T &operator [](unsigned int i)
	{
		if (this->_size <= i || i < 0)
			throw Error();
		return arr[i];

	}

	~Array(){delete [] arr;}

};

#endif