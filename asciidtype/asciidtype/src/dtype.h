#ifndef _NPY_DTYPE_H
#define _NPY_DTYPE_H

// clang-format off
#include <Python.h>
#include "structmember.h"
// clang-format on

#define PY_ARRAY_UNIQUE_SYMBOL asciidtype_ARRAY_API
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#define NO_IMPORT_ARRAY
#include "numpy/arrayobject.h"
#include "numpy/experimental_dtype_api.h"
#include "numpy/ndarraytypes.h"

typedef struct {
    PyArray_Descr base;
    long size;
} ASCIIDTypeObject;

extern PyArray_DTypeMeta ASCIIDType;
extern PyTypeObject *ASCIIScalar_Type;

ASCIIDTypeObject *
new_asciidtype_instance(long size);

int
init_ascii_dtype(void);

#endif /*_NPY_DTYPE_H*/
