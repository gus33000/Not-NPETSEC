// NPETSEC.h - Contains declarations of npetsec functions
#pragma once

#ifdef NPETSEC_EXPORTS
#define NPETSEC_API __declspec(dllexport)
#else
#define NPETSEC_API __declspec(dllimport)
#endif

extern "C" NPETSEC_API __int64 NPETSEC_Init(__int64 val1);
extern "C" NPETSEC_API __int64 NPETSEC_DppItemSize(unsigned int val1, int *val2);
extern "C" NPETSEC_API __int64 NPETSEC_UnlockSimlock(unsigned int val1, __int64 val2);
extern "C" NPETSEC_API __int64 NPETSEC_GetSimlockStatus(__int64 val1);
extern "C" NPETSEC_API __int64 NPETSEC_DppItemRead(unsigned int a1, unsigned int a2, __int64 a3, unsigned int a4);
extern "C" NPETSEC_API __int64 NPETSEC_ValidateMultiSim(__int64 a1, __int64 a2);
extern "C" NPETSEC_API void    NPETSEC_Deinit();

typedef __int64(STDAPICALLTYPE NPETSEC_INIT)
(
	IN __int64				val1
);
typedef NPETSEC_INIT FAR* LPNPETSEC_INIT;

typedef __int64(STDAPICALLTYPE NPETSEC_DPPITEMSIZE)
(
	IN unsigned int val1, IN int* val2
);
typedef NPETSEC_DPPITEMSIZE FAR* LPNPETSEC_DPPITEMSIZE;

typedef __int64(STDAPICALLTYPE NPETSEC_UNLOCKSIMLOCK)
(
	IN unsigned int val1, IN __int64 val2
);
typedef NPETSEC_UNLOCKSIMLOCK FAR* LPNPETSEC_UNLOCKSIMLOCK;

typedef __int64(STDAPICALLTYPE NPETSEC_GETSIMLOCKSTATUS)
(
	IN __int64 val1
);
typedef NPETSEC_GETSIMLOCKSTATUS FAR* LPNPETSEC_GETSIMLOCKSTATUS;

typedef __int64(STDAPICALLTYPE NPETSEC_DPPITEMREAD)
(
	IN unsigned int a1, IN unsigned int a2, IN __int64 a3, IN unsigned int a4
);
typedef NPETSEC_DPPITEMREAD FAR* LPNPETSEC_DPPITEMREAD;

typedef __int64(STDAPICALLTYPE NPETSEC_VALIDATEMULTISIM)
(
	IN __int64 a1, IN __int64 a2
);
typedef NPETSEC_VALIDATEMULTISIM FAR* LPNPETSEC_VALIDATEMULTISIM;

typedef void(STDAPICALLTYPE NPETSEC_DEINIT)
(
	
);
typedef NPETSEC_DEINIT FAR* LPNPETSEC_DEINIT;