/* ----------------------------------------------------------------------
 * Project:      CMSIS DSP Python Wrapper
 * Title:        cmsismodule.h
 * Description:  C code for the CMSIS-DSP Python wrapper
 *
 * $Date:        27 April 2021
 * $Revision:    V1.0
 *
 * Target Processor: Cortex-M cores
 * -------------------------------------------------------------------- */
/*
 * Copyright (C) 2010-2021 ARM Limited or its affiliates. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define MODNAME "cmsisdsp_support"
#define MODINITNAME cmsisdsp_support

#include "cmsisdsp_module.h"



NUMPYVECTORFROMBUFFER(f32,float32_t,NPY_FLOAT);


void typeRegistration(PyObject *module) {

 
}




static PyObject *
cmsis_arm_fill_f32(PyObject *obj, PyObject *args)
{

  float32_t value; // input
  float32_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"fi",&value,&blockSize))
  {

    pDst=PyMem_Malloc(sizeof(float32_t)*blockSize);


    arm_fill_f32(value,pDst,blockSize);
 FLOATARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_fill_q31(PyObject *obj, PyObject *args)
{

  q31_t value; // input
  q31_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"ii",&value,&blockSize))
  {

    pDst=PyMem_Malloc(sizeof(q31_t)*blockSize);


    arm_fill_q31(value,pDst,blockSize);
 INT32ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_fill_q15(PyObject *obj, PyObject *args)
{

  q15_t value; // input
  q15_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"hi",&value,&blockSize))
  {

    pDst=PyMem_Malloc(sizeof(q15_t)*blockSize);


    arm_fill_q15(value,pDst,blockSize);
 INT16ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_fill_q7(PyObject *obj, PyObject *args)
{

  q31_t value; // input
  q7_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"ii",&value,&blockSize))
  {

    pDst=PyMem_Malloc(sizeof(q7_t)*blockSize);


    arm_fill_q7((q7_t)value,pDst,blockSize);
 INT8ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}



static PyObject *
cmsis_arm_copy_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  float32_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(float32_t)*blockSize);


    arm_copy_f32(pSrc_converted,pDst,blockSize);
 FLOATARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_copy_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  q7_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q7_t)*blockSize);


    arm_copy_q7(pSrc_converted,pDst,blockSize);
 INT8ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_copy_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  q15_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q15_t)*blockSize);


    arm_copy_q15(pSrc_converted,pDst,blockSize);
 INT16ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_copy_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  q31_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q31_t)*blockSize);


    arm_copy_q31(pSrc_converted,pDst,blockSize);
 INT32ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}









static PyObject *
cmsis_arm_q7_to_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  q31_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q31_t)*blockSize);


    arm_q7_to_q31(pSrc_converted,pDst,blockSize);
 INT32ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}




static PyObject *
cmsis_arm_q7_to_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  q15_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q15_t)*blockSize);


    arm_q7_to_q15(pSrc_converted,pDst,blockSize);
 INT16ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}




static PyObject *
cmsis_arm_q7_to_float(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  float32_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(float32_t)*blockSize);


    arm_q7_to_float(pSrc_converted,pDst,blockSize);
 FLOATARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}






static PyObject *
cmsis_arm_q31_to_float(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  float32_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(float32_t)*blockSize);


    arm_q31_to_float(pSrc_converted,pDst,blockSize);
 FLOATARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}






static PyObject *
cmsis_arm_float_to_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  q31_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q31_t)*blockSize);


    arm_float_to_q31(pSrc_converted,pDst,blockSize);
 INT32ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_float_to_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  q15_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q15_t)*blockSize);


    arm_float_to_q15(pSrc_converted,pDst,blockSize);
 INT16ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_float_to_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  q7_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q7_t)*blockSize);


    arm_float_to_q7(pSrc_converted,pDst,blockSize);
 INT8ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_q31_to_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  q15_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q15_t)*blockSize);


    arm_q31_to_q15(pSrc_converted,pDst,blockSize);
 INT16ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_q31_to_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  q7_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q7_t)*blockSize);


    arm_q31_to_q7(pSrc_converted,pDst,blockSize);
 INT8ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_q15_to_float(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  float32_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(float32_t)*blockSize);


    arm_q15_to_float(pSrc_converted,pDst,blockSize);
 FLOATARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_q15_to_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  q31_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q31_t)*blockSize);


    arm_q15_to_q31(pSrc_converted,pDst,blockSize);
 INT32ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_q15_to_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  q7_t *pDst=NULL; // output
  uint32_t blockSize; // input

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pDst=PyMem_Malloc(sizeof(q7_t)*blockSize);


    arm_q15_to_q7(pSrc_converted,pDst,blockSize);
 INT8ARRAY1(pDstOBJ,blockSize,pDst);

    PyObject *pythonResult = Py_BuildValue("O",pDstOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pDstOBJ);
    return(pythonResult);

  }
  return(NULL);
}




static PyMethodDef CMSISDSPMethods[] = {


{"arm_copy_f32",  cmsis_arm_copy_f32, METH_VARARGS,""},
{"arm_copy_q7",  cmsis_arm_copy_q7, METH_VARARGS,""},
{"arm_copy_q15",  cmsis_arm_copy_q15, METH_VARARGS,""},
{"arm_copy_q31",  cmsis_arm_copy_q31, METH_VARARGS,""},


{"arm_q7_to_q31",  cmsis_arm_q7_to_q31, METH_VARARGS,""},
{"arm_q7_to_q15",  cmsis_arm_q7_to_q15, METH_VARARGS,""},
{"arm_q7_to_float",  cmsis_arm_q7_to_float, METH_VARARGS,""},
{"arm_q31_to_float",  cmsis_arm_q31_to_float, METH_VARARGS,""},



{"arm_float_to_q31",  cmsis_arm_float_to_q31, METH_VARARGS,""},
{"arm_float_to_q15",  cmsis_arm_float_to_q15, METH_VARARGS,""},
{"arm_float_to_q7",  cmsis_arm_float_to_q7, METH_VARARGS,""},
{"arm_q31_to_q15",  cmsis_arm_q31_to_q15, METH_VARARGS,""},
{"arm_q31_to_q7",  cmsis_arm_q31_to_q7, METH_VARARGS,""},
{"arm_q15_to_float",  cmsis_arm_q15_to_float, METH_VARARGS,""},
{"arm_q15_to_q31",  cmsis_arm_q15_to_q31, METH_VARARGS,""},
{"arm_q15_to_q7",  cmsis_arm_q15_to_q7, METH_VARARGS,""},


{"arm_fill_f32",  cmsis_arm_fill_f32, METH_VARARGS,""},
{"arm_fill_q31",  cmsis_arm_fill_q31, METH_VARARGS,""},
{"arm_fill_q15",  cmsis_arm_fill_q15, METH_VARARGS,""},
{"arm_fill_q7",  cmsis_arm_fill_q7, METH_VARARGS,""},

    {"error_out", (PyCFunction)error_out, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

#ifdef IS_PY3K
static int cmsisdsp_traverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int cmsisdsp_clear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}


static struct PyModuleDef moduledef = {
        PyModuleDef_HEAD_INIT,
        MODNAME,
        NULL,
        sizeof(struct module_state),
        CMSISDSPMethods,
        NULL,
        cmsisdsp_traverse,
        cmsisdsp_clear,
        NULL
};

#define INITERROR return NULL

PyMODINIT_FUNC
CAT(PyInit_,MODINITNAME)(void)


#else
#define INITERROR return

void CAT(init,MODINITNAME)(void)
#endif
{
    import_array();

  #ifdef IS_PY3K
    PyObject *module = PyModule_Create(&moduledef);
  #else
    PyObject *module = Py_InitModule(MODNAME, CMSISDSPMethods);
  #endif

  if (module == NULL)
      INITERROR;
  struct module_state *st = GETSTATE(module);
  
  st->error = PyErr_NewException(MODNAME".Error", NULL, NULL);
  if (st->error == NULL) {
      Py_DECREF(module);
      INITERROR;
  }


  typeRegistration(module);

  #ifdef IS_PY3K
    return module;
  #endif
}