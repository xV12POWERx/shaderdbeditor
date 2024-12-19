#pragma once
#include "framework.h"
#include "structs.h"
#include "funcs.h"



void boilerplate_txe(HWND hwnd, HWND hwndTree, database*& dbptr, int& treesize, generic_hwnds*& hwnd_container, RECT rc, RECT rcTree);
void boilerplate_vs(HWND hwnd, HWND hwndTree, database*& dbptr, int &treesize, generic_hwnds*& hwnd_container, RECT rc, RECT rcTree);
void boilerplate_ps(HWND hwnd, HWND hwndTree, database*& dbptr, int &treesize, generic_hwnds*& hwnd_container, RECT rc, RECT rcTree);
void boilerplate_table(HWND hwnd, HWND hwndTree, database*& dbptr, int &treesize, generic_hwnds*& hwnd_container, RECT rc, RECT rcTree);
void boilerplate_vbuffer(HWND hwnd, HWND hwndTree, database*& dbptr, int &treesize, generic_hwnds*& hwnd_container, RECT rc, RECT rcTree);
void boilerplate_strings(HWND hwnd, HWND hwndTree, database*& dbptr, int &treesize, generic_hwnds*& hwnd_container, RECT rc, RECT rcTree);