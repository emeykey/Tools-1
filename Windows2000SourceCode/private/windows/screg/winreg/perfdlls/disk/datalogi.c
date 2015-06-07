/*++ 

Copyright (c) 1996  Microsoft Corporation

Module Name:

    datalogi.c

Abstract:
       
    a file containing the constant data structures used by the Performance
    Monitor data for the Physical Disk Performance data objects

Created:

    Bob Watson  22-Oct-1996

Revision History:

    None.

--*/
//
//  Include Files
//

#include <windows.h>
#include <winperf.h>
#include <ntprfctr.h>
#include <perfutil.h>
#include "datalogi.h"

// dummy variable for field sizing.
static LDISK_COUNTER_DATA   lcd;

//
//  Constant structure initializations 
//      defined in datalogi.h
//
LDISK_DATA_DEFINITION LogicalDiskDataDefinition = {

    {   0,
        sizeof(LDISK_DATA_DEFINITION),
        sizeof(PERF_OBJECT_TYPE),
        LOGICAL_DISK_OBJECT_TITLE_INDEX,
        0,
        237,
        0,
        PERF_DETAIL_NOVICE,
        (sizeof(LDISK_DATA_DEFINITION)-sizeof(PERF_OBJECT_TYPE))/
        sizeof(PERF_COUNTER_DEFINITION),
        5,
        0,
        UNICODE_CODE_PAGE,
        {0L,0L},
        {0L,0L}        
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        408,
        0,
        409,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_RAW_FRACTION,
        sizeof (lcd.DiskFreeMbytes1),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskFreeMbytes1
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        408,
        0,
        409,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_RAW_BASE,
        sizeof (lcd.DiskTotalMbytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTotalMbytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        410,
        0,
        411,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_RAWCOUNT,
        sizeof (lcd.DiskFreeMbytes2),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskFreeMbytes2
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        198,
        0,
        199,
        0,
        1,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_RAWCOUNT,
        sizeof (lcd.DiskCurrentQueueLength),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskCurrentQueueLength
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        200,
        0,
        201,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_100NS_TIMER,
        sizeof (lcd.DiskTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        200,
        0,
        201,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_TIMESTAMP,
        sizeof (lcd.DiskTimeTimestamp),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTimeTimestamp
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1400,
        0,
        1401,
        0,
        2,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_100NS_QUEUELEN_TYPE,
        sizeof (lcd.DiskAvgQueueLength),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgQueueLength
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        202,
        0,
        203,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_100NS_TIMER,
        sizeof (lcd.DiskReadTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskReadTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        202,
        0,
        203,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_TIMESTAMP,
        sizeof (lcd.DiskTimeTimestamp),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTimeTimestamp
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1402,
        0,
        1403,
        0,
        2,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_100NS_QUEUELEN_TYPE,
        sizeof (lcd.DiskReadQueueLength),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskReadQueueLength
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        204,
        0,
        205,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_100NS_TIMER,
        sizeof (lcd.DiskWriteTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskWriteTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        204,
        0,
        205,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_TIMESTAMP,
        sizeof (lcd.DiskTimeTimestamp),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTimeTimestamp
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1404,
        0,
        1405,
        0,
        2,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_100NS_QUEUELEN_TYPE,
        sizeof (lcd.DiskWriteQueueLength),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskWriteQueueLength
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        206,
        0,
        207,
        0,
        3,
        PERF_DETAIL_ADVANCED,
        PERF_AVERAGE_TIMER,
        sizeof (lcd.DiskAvgTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        206,
        0,
        207,
        0,
        0,
        PERF_DETAIL_ADVANCED,
        PERF_AVERAGE_BASE,
        sizeof (lcd.DiskTransfersBase1),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTransfersBase1
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        208,
        0,
        209,
        0,
        3,
        PERF_DETAIL_ADVANCED,
        PERF_AVERAGE_TIMER,
        sizeof (lcd.DiskAvgReadTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgReadTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        208,
        0,
        209,
        0,
        0,
        PERF_DETAIL_ADVANCED,
        PERF_AVERAGE_BASE,
        sizeof (lcd.DiskReadsBase1),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskReadsBase1
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        210,
        0,
        211,
        0,
        3,
        PERF_DETAIL_ADVANCED,
        PERF_AVERAGE_TIMER,
        sizeof (lcd.DiskAvgWriteTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgWriteTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        210,
        0,
        211,
        0,
        0,
        PERF_DETAIL_ADVANCED,
        PERF_AVERAGE_BASE,
        sizeof (lcd.DiskWritesBase1),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskWritesBase1
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        212,
        0,
        213,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_COUNTER,
        sizeof (lcd.DiskTransfers),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTransfers
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        214,
        0,
        215,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_COUNTER,
        sizeof (lcd.DiskReads),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskReads
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        216,
        0,
        217,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_COUNTER_COUNTER,
        sizeof (lcd.DiskWrites),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskWrites
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        218,
        0,
        219,
        0,
        -4,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_BULK_COUNT,
        sizeof (lcd.DiskBytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        220,
        0,
        221,
        0,
        -4,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_BULK_COUNT,
        sizeof (lcd.DiskReadBytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskReadBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        222,
        0,
        223,
        0,
        -4,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_BULK_COUNT,
        sizeof (lcd.DiskWriteBytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskWriteBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        224,
        0,
        225,
        0,
        -2,
        PERF_DETAIL_EXPERT,
        PERF_AVERAGE_BULK,
        sizeof (lcd.DiskAvgBytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        224,
        0,
        225,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_AVERAGE_BASE,
        sizeof (lcd.DiskTransfersBase2),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTransfersBase2
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        226,
        0,
        227,
        0,
        -2,
        PERF_DETAIL_EXPERT,
        PERF_AVERAGE_BULK,
        sizeof (lcd.DiskAvgReadBytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgReadBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        226,
        0,
        227,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_AVERAGE_BASE,
        sizeof (lcd.DiskReadsBase2),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskReadsBase2
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        228,
        0,
        229,
        0,
        -2,
        PERF_DETAIL_EXPERT,
        PERF_AVERAGE_BULK,
        sizeof (lcd.DiskAvgWriteBytes),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskAvgWriteBytes
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        228,
        0,
        229,
        0,
        0,
        PERF_DETAIL_EXPERT,
        PERF_AVERAGE_BASE,
        sizeof (lcd.DiskWritesBase2),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskWritesBase2
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1482,
        0,
        1483,
        0,
        0,
        PERF_DETAIL_ADVANCED,
        PERF_PRECISION_100NS_TIMER,
        sizeof (lcd.IdleTime),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->IdleTime
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1482,
        0,
        1483,
        0,
        0,
        PERF_DETAIL_NOVICE,
        PERF_PRECISION_TIMESTAMP,
        sizeof (lcd.DiskTimeTimestamp),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->DiskTimeTimestamp
    },
    {   sizeof(PERF_COUNTER_DEFINITION),
        1484,
        0,
        1485,
        0,
        0,
        PERF_DETAIL_ADVANCED,
        PERF_COUNTER_COUNTER,
        sizeof (lcd.SplitCount),
        (DWORD)(ULONG_PTR)&((PLDISK_COUNTER_DATA)0)->SplitCount
    }
};
