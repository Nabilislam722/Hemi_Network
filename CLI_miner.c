#include <windows.h>
#include <stdio.h>

int main()
{
    int fee = 0;
    char fee_str[16];
    char address_str[200];
    

    printf("Enter the PRIVKEY: ");
    scanf("%s", address_str);

    printf("Enter the amount Fee: ");
    scanf("%d", &fee);


    sprintf(fee_str, "%d", fee);

    SetCurrentDirectory("S:/Hemipop");

    SetEnvironmentVariable("POPM_BTC_PRIVKEY", address_str);
    SetEnvironmentVariable("POPM_STATIC_FEE", fee_str);
    SetEnvironmentVariable("POPM_BFG_URL", "wss://testnet.rpc.hemi.network/v1/ws/public");

    system("popmd.exe");

    return 0;
}
