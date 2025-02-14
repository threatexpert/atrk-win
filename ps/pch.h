// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H

// TODO: 添加要在此处预编译的标头
#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#ifndef _WIN64
#define _WIN32_WINNT 0x0501
#else
#define _WIN32_WINNT 0x0502
#endif
#define PSAPI_VERSION 1

#include <WinSock2.h>
#include <Windows.h>
#include <Ws2ipdef.h>
#include <assert.h>
#include <tchar.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcore.h>
#include <atlsafe.h>
#include <atlstr.h>

#include <list>
#include <vector>
#include <map>

#include <Psapi.h>

#endif //PCH_H
