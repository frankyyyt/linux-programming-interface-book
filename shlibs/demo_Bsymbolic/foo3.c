/*************************************************************************\
*                  Copyright (C) Michael Kerrisk, 2014.                   *
*                                                                         *
* This program is free software. You may use, modify, and redistribute it *
* under the terms of the GNU Affero General Public License as published   *
* by the Free Software Foundation, either version 3 or (at your option)   *
* any later version. This program is distributed without any warranty.    *
* See the file COPYING.agpl-v3 for details.                               *
\*************************************************************************/

#include <stdlib.h>
#include <stdio.h>

void
xyz(void)
{
    printf("        func3-xyz\n");
}

void
func3(int x)
{
    printf("Called func3\n");
    xyz();
    abc();
}