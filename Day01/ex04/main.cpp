#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>

void errorMsg(std::string str)
{
	std::cout << str << std::endl;
	exit(EXIT_FAILURE);
}

void	errnoError(void)
{
	std::cout << "Error : " << strerror(errno) << std::endl;
	exit(EXIT_FAILURE);
}

void	argsCheck(int argc, char **argv)
{
	if (argc != 4)
		errorMsg("wrong count args!");
	std::string s0 = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s0.empty() || s1.empty() || s2.empty())
		errorMsg("one of args empty!");
}

int main(int argc, char **argv)
{
	std::string			new_file;
	std::ifstream		infile;
	std::ofstream		outfile;
	std::size_t			index;
	std::stringstream	buf;
	std::string			line;

	argsCheck(argc, argv);
	infile.open(argv[1], std::ios::in);
	if (!infile.good())
		errnoError();
	if (infile.peek() == EOF)
		errorMsg("File is empty");
	buf << infile.rdbuf();
	line = buf.str();
	new_file = argv[1];
	new_file += ".replace";
	outfile.open(new_file);
	if (!infile.good())
		errnoError();
	 index = 0;
	while ((index = line.find(argv[2], index)) != std::string::npos && strcmp(argv[2],argv[3]))
	{
		line.erase(index, strlen(argv[2]));
		line.insert(index, argv[3]);
	}
	outfile << line;
	infile.close();
	outfile.close();
	return(0);
}