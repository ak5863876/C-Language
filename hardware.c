#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <setupapi.h>
#include <cfgmgr32.h>
#include <stdio.h>

#pragma comment(lib, "setupapi.lib")

int main(void)
{
    HDEVINFO hDevInfo;
    SP_DEVINFO_DATA devInfoData;
    DWORD i;

    hDevInfo = SetupDiGetClassDevs(
        NULL,
        NULL,
        NULL,
        DIGCF_PRESENT | DIGCF_ALLCLASSES);

    if (hDevInfo == INVALID_HANDLE_VALUE)
    {
        printf("SetupDiGetClassDevs failed.\n");
        return 1;
    }

    devInfoData.cbSize = sizeof(SP_DEVINFO_DATA);

    for (i = 0; SetupDiEnumDeviceInfo(hDevInfo, i, &devInfoData); i++)
    {
        char desc[1024] = "";
        char friendly[1024] = "";
        char hardwareID[4096] = "";
        char manufacturer[256] = "";

        SetupDiGetDeviceRegistryPropertyA(
            hDevInfo,
            &devInfoData,
            SPDRP_DEVICEDESC,
            NULL,
            (PBYTE)desc,
            sizeof(desc),
            NULL);

        SetupDiGetDeviceRegistryPropertyA(
            hDevInfo,
            &devInfoData,
            SPDRP_FRIENDLYNAME,
            NULL,
            (PBYTE)friendly,
            sizeof(friendly),
            NULL);

        SetupDiGetDeviceRegistryPropertyA(
            hDevInfo,
            &devInfoData,
            SPDRP_HARDWAREID,
            NULL,
            (PBYTE)hardwareID,
            sizeof(hardwareID),
            NULL);

        SetupDiGetDeviceRegistryPropertyA(
            hDevInfo,
            &devInfoData,
            SPDRP_MFG,
            NULL,
            (PBYTE)manufacturer,
            sizeof(manufacturer),
            NULL);

        printf("=================================================\n");
        printf("Description : %s\n", desc);

        if (friendly[0])
            printf("Friendly    : %s\n", friendly);

        if (manufacturer[0])
            printf("Manufacturer: %s\n", manufacturer);

        if (hardwareID[0])
            printf("Hardware ID : %s\n", hardwareID);

        printf("\n");
    }

    SetupDiDestroyDeviceInfoList(hDevInfo);

    return 0;
}