/*************************************************************************
	> File Name: 12_3_pe_b.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 10 Jul 2014 10:21:38 PM CST
 ************************************************************************/

#include <stdio.h>
#include "12_3_pe_a.h"

int main(void)
{
    int mode;
    double distance;
    double consumption;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(&mode);
        get_info(mode, &distance, &consumption);
        show_info(mode, distance, consumption);
        printf("Enter 0 for metric mode, 1 for US mode(-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}
