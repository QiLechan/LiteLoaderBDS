#pragma once

#define LITELOADER_VERSION_DEV 0
#define LITELOADER_VERSION_BETA 1
#define LITELOADER_VERSION_RELEASE 2

#define LITELOADER_VERSION_MAJOR 2
#define LITELOADER_VERSION_MINOR 12
#define LITELOADER_VERSION_REVISION 1
#define LITELOADER_VERSION_COMMIT_SHA UNKNOWN
#define LITELOADER_VERSION_STATUS LITELOADER_VERSION_DEV
#define LITELOADER_VERSION_STATUS_VERSION 0

#define TARGET_BDS_PROTOCOL_VERSION 575

#define LITELOADER_VERSION ll::getLoaderVersion()


#define TO_VERSION_STRING(ver) #ver
#define TO_VERSION_STRING_EXPAND(ver) TO_VERSION_STRING(ver)

// Used in LiteLoader.rc or ScriptEngine.rc
#if LITELOADER_VERSION_STATUS == LITELOADER_VERSION_BETA
#define LITELOADER_FILE_VERSION_FLAG VS_FF_DEBUG
#define LITELOADER_FILE_VERSION_STRING TO_VERSION_STRING_EXPAND(LITELOADER_VERSION_MAJOR.LITELOADER_VERSION_MINOR.LITELOADER_VERSION_REVISION-beta.LITELOADER_VERSION_STATUS_VERSION+LITELOADER_VERSION_COMMIT_SHA)
#elif LITELOADER_VERSION_STATUS == LITELOADER_VERSION_DEV
#define LITELOADER_FILE_VERSION_FLAG VS_FF_PRIVATEBUILD
#define LITELOADER_FILE_VERSION_STRING TO_VERSION_STRING_EXPAND(LITELOADER_VERSION_MAJOR.LITELOADER_VERSION_MINOR.LITELOADER_VERSION_REVISION-dev.LITELOADER_VERSION_STATUS_VERSION+LITELOADER_VERSION_COMMIT_SHA)
#else
#define LITELOADER_FILE_VERSION_FLAG 0x00000000L
#define LITELOADER_FILE_VERSION_STRING TO_VERSION_STRING_EXPAND(LITELOADER_VERSION_MAJOR.LITELOADER_VERSION_MINOR.LITELOADER_VERSION_REVISION+LITELOADER_VERSION_COMMIT_SHA)
#endif
