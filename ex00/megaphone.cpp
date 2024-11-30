//CABECERA

#include <iostream>
#include <cctype>

int main (int argc, char **argv)
{
	int	arg_index	= 1;
	int	char_index	= 0;
	char	*sentence 	= NULL;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (arg_index < argc)
		{
			sentence = argv[arg_index];
			while (*sentence != '\0')
			{
				if (isalpha(*sentence) && islower(*sentence))
					*sentence = toupper(*sentence);
				std::cout << *sentence;
				*sentence ++; 
			}
			arg_index++;
		}
	}
	std::cout << std::endl;
	return (0);
}
