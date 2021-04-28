#include <ntddk.h>

#include "common.h"


NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
	NTSTATUS status = STATUS_SUCCESS;

	DriverObject->DriverUnload = DriverUnload;

	KdPrint(("DriverTemplate start success!\n"));

	return status;
}


VOID DriverUnload(_In_ PDRIVER_OBJECT DriverObject)
{
	KdPrint(("DriverTemplate stop success!\n"));
}