#pragma once
#include "framework.h"
#include "structs.h"

BOOL init_columns(HWND hWndListView, int list_width);
HWND create_lv(HWND hwnd, RECT rc, RECT rcTree);
long _stdcall EditProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);