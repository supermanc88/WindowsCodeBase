#ifndef _COMMON_H_
#define _COMMON_H_

#include <ntddk.h>


#ifdef __cplusplus
extern "C" {
#endif

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);

VOID DriverUnload(_In_ PDRIVER_OBJECT DriverObject);
	

#ifdef __cplusplus
}
#endif


#endif	// _COMMON_H_