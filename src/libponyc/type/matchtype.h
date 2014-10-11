#ifndef MATCHTYPE_H
#define MATCHTYPE_H

#include <platform.h>
#include "../ast/ast.h"

PONY_EXTERN_C_BEGIN

bool could_subtype(ast_t* sub, ast_t* super);

PONY_EXTERN_C_END

#endif
