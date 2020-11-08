
#include "stddef.h"
#include "stdio.h"

typedef char u8;
typedef size_t u32;
#include "hal8822b_fw.c"

int main()
{
    FILE *filp = fopen("rtl8822bu_nic.bin", "wb");
    if (!filp) {
        fprintf(stderr, "Could not open file for writing\n");
        return 1;
    }

    fwrite(array_mp_8822b_fw_nic, array_length_mp_8822b_fw_nic, 1, filp);
    fclose(filp);
}
