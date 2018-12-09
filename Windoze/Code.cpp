
//#include <stdio.h>

extern "C" {
	int foo()
	{
		int r = 0;
		for (int i = 0; i < 7; ++i)
		{
			//std::cout << "i = " << i << std::endl;
			// printf("i = %i\n", i);
			r += 1;
		}

		return r;
	}

}
