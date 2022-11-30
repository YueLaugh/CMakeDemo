#include "Operation.h"

void DoOperation(std::vector<char> bytes)
{
	if (bytes.size() == 0)
	{
		return;
	}
	printf("[%s]:%s\n", __FUNCTION__, &bytes[0]);
}