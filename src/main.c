#include <stdio.h>
#include "static_lib.h"
#include "share_lib.h"

int main(void)
{
	func_lib_a();
	func_lib_so();
	return 1;
}


