// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>

DWORD MessageBoxThread(LPVOID lpParam) {
    MessageBox(NULL, L"Hello world!", L"Hello World!", NULL);
    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, NULL, MessageBoxThread, NULL, NULL, NULL);

        break;
    case DLL_THREAD_ATTACH:
 
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

//used to mimic real samcli.dll
//theres gotta be an easier way to copy a dlls exported functions
//maybe ill update when i find it, maybe i wont :)

extern "C" {
    __declspec(dllexport) void __stdcall NetGetDisplayInformationIndex();
    __declspec(dllexport) void __stdcall NetGroupAdd();
    __declspec(dllexport) void __stdcall NetGroupAddUser();
    __declspec(dllexport) void __stdcall NetGroupDel();
    __declspec(dllexport) void __stdcall NetGroupDelUser();
    __declspec(dllexport) void __stdcall NetGroupEnum();
    __declspec(dllexport) void __stdcall NetGroupGetInfo();
    __declspec(dllexport) void __stdcall NetGroupGetUsers();
    __declspec(dllexport) void __stdcall NetGroupSetInfo();
    __declspec(dllexport) void __stdcall NetGroupSetUsers();
    __declspec(dllexport) void __stdcall NetLocalGroupAdd();
    __declspec(dllexport) void __stdcall NetLocalGroupAddMember();
    __declspec(dllexport) void __stdcall NetLocalGroupAddMembers();
    __declspec(dllexport) void __stdcall NetLocalGroupDel();
    __declspec(dllexport) void __stdcall NetLocalGroupDelMember();
    __declspec(dllexport) void __stdcall NetLocalGroupDelMembers();
    __declspec(dllexport) void __stdcall NetLocalGroupEnum();
    __declspec(dllexport) void __stdcall NetLocalGroupGetInfo();
    __declspec(dllexport) void __stdcall NetLocalGroupGetMembers();
    __declspec(dllexport) void __stdcall NetLocalGroupSetInfo();
    __declspec(dllexport) void __stdcall NetLocalGroupSetMembers();
    __declspec(dllexport) void __stdcall NetQueryDisplayInformation();
    __declspec(dllexport) void __stdcall NetUserAdd();
    __declspec(dllexport) void __stdcall NetUserChangePassword();
    __declspec(dllexport) void __stdcall NetUserDel();
    __declspec(dllexport) void __stdcall NetUserEnum();
    __declspec(dllexport) void __stdcall NetUserGetGroups();
    __declspec(dllexport) void __stdcall NetUserGetInfo();
    __declspec(dllexport) void __stdcall NetUserGetInternetIdentityInfo();
    __declspec(dllexport) void __stdcall NetUserModalsGet();
    __declspec(dllexport) void __stdcall NetUserModalsSet();
    __declspec(dllexport) void __stdcall NetUserSetGroups();
    __declspec(dllexport) void __stdcall NetUserSetInfo();
    __declspec(dllexport) void __stdcall NetValidatePasswordPolicy();
    __declspec(dllexport) void __stdcall NetValidatePasswordPolicyFree();
    __declspec(dllexport) void __stdcall NetUserGetLocalGroups();
}

void __stdcall NetGetDisplayInformationIndex()
{
}

void __stdcall NetGroupAdd()
{
}

void __stdcall NetGroupAddUser()
{
}

void __stdcall NetGroupDel()
{
}

void __stdcall NetGroupDelUser()
{
}

void __stdcall NetGroupEnum()
{
}

void __stdcall NetGroupGetInfo()
{
}

void __stdcall NetGroupGetUsers()
{
}

void __stdcall NetGroupSetInfo()
{
}

void __stdcall NetGroupSetUsers()
{
}

void __stdcall NetLocalGroupAdd()
{
}

void __stdcall NetLocalGroupAddMember()
{
}

void __stdcall NetLocalGroupAddMembers()
{
}

void __stdcall NetLocalGroupDel()
{
}

void __stdcall NetLocalGroupDelMember()
{
}

void __stdcall NetLocalGroupDelMembers()
{
}

void __stdcall NetLocalGroupEnum()
{
}

void __stdcall NetLocalGroupGetInfo()
{
}

void __stdcall NetLocalGroupGetMembers()
{
}

void __stdcall NetLocalGroupSetInfo()
{
}

void __stdcall NetLocalGroupSetMembers()
{
}

void __stdcall NetQueryDisplayInformation()
{
}

void __stdcall NetUserAdd()
{
}

void __stdcall NetUserChangePassword()
{
}

void __stdcall NetUserDel()
{
}

void __stdcall NetUserEnum()
{
}

void __stdcall NetUserGetGroups()
{
}

void __stdcall NetUserGetInfo()
{
}

void __stdcall NetUserGetInternetIdentityInfo()
{
}

void __stdcall NetUserModalsGet()
{
}

void __stdcall NetUserModalsSet()
{
}

void __stdcall NetUserSetGroups()
{
}

void __stdcall NetUserSetInfo()
{
}

void __stdcall NetValidatePasswordPolicy()
{
}

void __stdcall NetValidatePasswordPolicyFree()
{
}

void __stdcall NetUserGetLocalGroups() {
}