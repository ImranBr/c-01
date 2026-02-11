#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string filename;
	std::string s1;
	std::string s2;
	std::string line;
	size_t pos;

	if (argc != 4)
	{
		std::cerr << "Must be 3 arguments" << std::endl;
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: s1 or s2 must not be empty" << std::endl;
		return (1);
	}

	infile.open(filename.c_str());
	if (!infile)
	{
		std::cerr << "Error: cannot open input file" << std::endl;
		return (1);
	}

	outfile.open((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error: cannot create output file" << std::endl;
		return (1);
	}

	while (std::getline(infile, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}

	infile.close();
	outfile.close();
	return (0);
}