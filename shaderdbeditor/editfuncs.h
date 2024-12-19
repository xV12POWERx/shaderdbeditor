#pragma once
#include "g_variables.h"
#include "framework.h"
#include "funcs.h"
#include "Resource.h"
#include "exportfuncs.h"

void edit_central(lv_item_data* item_data, char* new_value);
void clone_txe(table_parent &src_table, int index, database_export* new_db);