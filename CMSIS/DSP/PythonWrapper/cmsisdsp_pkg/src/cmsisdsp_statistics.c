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

#define MODNAME "cmsisdsp_statistics"
#define MODINITNAME cmsisdsp_statistics

#include "cmsisdsp_module.h"


NUMPYVECTORFROMBUFFER(f32,float32_t,NPY_FLOAT);



void typeRegistration(PyObject *module) {

 
}




static PyObject *
cmsis_arm_power_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q63_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q63_t)*1);


    arm_power_q31(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("L",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_power_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    arm_power_f32(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_power_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q63_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q63_t)*1);


    arm_power_q15(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("L",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_power_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    arm_power_q7(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_mean_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q7_t)*1);


    arm_mean_q7(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_mean_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    arm_mean_q15(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_mean_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    arm_mean_q31(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_mean_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    arm_mean_f32(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_var_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    arm_var_f32(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_var_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    arm_var_q31(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_var_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    arm_var_q15(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_rms_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    arm_rms_f32(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_rms_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    arm_rms_q31(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_rms_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    arm_rms_q15(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_std_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    arm_std_f32(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_std_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    arm_std_q31(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_std_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    arm_std_q15(pSrc_converted,blockSize,pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);

    PyObject *pythonResult = Py_BuildValue("O",pResultOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    return(pythonResult);

  }
  return(NULL);
}




static PyObject *
cmsis_arm_min_q7(PyObject *obj, PyObject *args)
{
  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q7_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_min_q7(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_min_no_idx_q7(PyObject *obj, PyObject *args)
{
  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t pResult;

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;



    arm_min_no_idx_q7(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_q7(PyObject *obj, PyObject *args)
{
  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q7_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmin_q7(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_no_idx_q7(PyObject *obj, PyObject *args)
{
  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;





    arm_absmin_no_idx_q7(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_min_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_min_q15(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_min_no_idx_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;





    arm_min_no_idx_q15(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmin_q15(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_no_idx_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;





    arm_absmin_no_idx_q15(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_min_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_min_q31(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_min_no_idx_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;





    arm_min_no_idx_q31(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmin_q31(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_no_idx_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;




    arm_absmin_no_idx_q31(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_min_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_min_f32(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmin_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmin_f32(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_max_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q7_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_max_q7(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_max_no_idx_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;





    arm_max_no_idx_q7(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q7_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmax_q7(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_no_idx_q7(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q7_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q7_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_BYTE,int8_t,q7_t);
    blockSize = arraySizepSrc ;





    arm_absmax_no_idx_q7(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_max_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_max_q15(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_max_no_idx_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;





    arm_max_no_idx_q15(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q15_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmax_q15(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("h",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_no_idx_q15(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q15_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q15_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT16,int16_t,int16_t);
    blockSize = arraySizepSrc ;




    arm_absmax_no_idx_q15(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("h",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_max_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_max_q31(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_max_no_idx_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;





    arm_max_no_idx_q31(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(q31_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmax_q31(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("i",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_no_idx_q31(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  q31_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  q31_t pResult; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_INT32,int32_t,int32_t);
    blockSize = arraySizepSrc ;




    arm_absmax_no_idx_q31(pSrc_converted,blockSize,&pResult);
    PyObject* pResultOBJ=Py_BuildValue("i",pResult);


    FREEARGUMENT(pSrc_converted);
    return(pResultOBJ);

  }
  return(NULL);
}


static PyObject *
cmsis_arm_max_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_max_f32(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}

static PyObject *
cmsis_arm_absmax_f32(PyObject *obj, PyObject *args)
{

  PyObject *pSrc=NULL; // input
  float32_t *pSrc_converted=NULL; // input
  uint32_t blockSize; // input
  float32_t *pResult=NULL; // output
  uint32_t *pIndex=NULL; // output

  if (PyArg_ParseTuple(args,"O",&pSrc))
  {

    GETARGUMENT(pSrc,NPY_DOUBLE,double,float32_t);
    blockSize = arraySizepSrc ;

    pResult=PyMem_Malloc(sizeof(float32_t)*1);


    pIndex=PyMem_Malloc(sizeof(uint32_t)*1);


    arm_absmax_f32(pSrc_converted,blockSize,pResult,pIndex);
    PyObject* pResultOBJ=Py_BuildValue("f",*pResult);
    PyObject* pIndexOBJ=Py_BuildValue("i",*pIndex);

    PyObject *pythonResult = Py_BuildValue("OO",pResultOBJ,pIndexOBJ);

    FREEARGUMENT(pSrc_converted);
    Py_DECREF(pResultOBJ);
    Py_DECREF(pIndexOBJ);
    return(pythonResult);

  }
  return(NULL);
}







static PyMethodDef CMSISDSPMethods[] = {


{"arm_power_q31",  cmsis_arm_power_q31, METH_VARARGS,""},
{"arm_power_f32",  cmsis_arm_power_f32, METH_VARARGS,""},
{"arm_power_q15",  cmsis_arm_power_q15, METH_VARARGS,""},
{"arm_power_q7",  cmsis_arm_power_q7, METH_VARARGS,""},
{"arm_mean_q7",  cmsis_arm_mean_q7, METH_VARARGS,""},
{"arm_mean_q15",  cmsis_arm_mean_q15, METH_VARARGS,""},
{"arm_mean_q31",  cmsis_arm_mean_q31, METH_VARARGS,""},
{"arm_mean_f32",  cmsis_arm_mean_f32, METH_VARARGS,""},
{"arm_var_f32",  cmsis_arm_var_f32, METH_VARARGS,""},
{"arm_var_q31",  cmsis_arm_var_q31, METH_VARARGS,""},
{"arm_var_q15",  cmsis_arm_var_q15, METH_VARARGS,""},
{"arm_rms_f32",  cmsis_arm_rms_f32, METH_VARARGS,""},
{"arm_rms_q31",  cmsis_arm_rms_q31, METH_VARARGS,""},
{"arm_rms_q15",  cmsis_arm_rms_q15, METH_VARARGS,""},
{"arm_std_f32",  cmsis_arm_std_f32, METH_VARARGS,""},
{"arm_std_q31",  cmsis_arm_std_q31, METH_VARARGS,""},
{"arm_std_q15",  cmsis_arm_std_q15, METH_VARARGS,""},

{"arm_min_q7",  cmsis_arm_min_q7, METH_VARARGS,""},
{"arm_min_no_idx_q7",  cmsis_arm_min_no_idx_q7, METH_VARARGS,""},
{"arm_min_no_idx_q15",  cmsis_arm_min_no_idx_q15, METH_VARARGS,""},
{"arm_min_no_idx_q31",  cmsis_arm_min_no_idx_q31, METH_VARARGS,""},
{"arm_min_q15",  cmsis_arm_min_q15, METH_VARARGS,""},
{"arm_min_q31",  cmsis_arm_min_q31, METH_VARARGS,""},
{"arm_min_f32",  cmsis_arm_min_f32, METH_VARARGS,""},
{"arm_absmin_q7",   cmsis_arm_absmin_q7, METH_VARARGS,""},
{"arm_absmin_q15",  cmsis_arm_absmin_q15, METH_VARARGS,""},
{"arm_absmin_q31",  cmsis_arm_absmin_q31, METH_VARARGS,""},
{"arm_absmin_no_idx_q7",   cmsis_arm_absmin_no_idx_q7, METH_VARARGS,""},
{"arm_absmin_no_idx_q15",  cmsis_arm_absmin_no_idx_q15, METH_VARARGS,""},
{"arm_absmin_no_idx_q31",  cmsis_arm_absmin_no_idx_q31, METH_VARARGS,""},
{"arm_absmin_f32",  cmsis_arm_absmin_f32, METH_VARARGS,""},
{"arm_max_q7",  cmsis_arm_max_q7, METH_VARARGS,""},
{"arm_max_q15",  cmsis_arm_max_q15, METH_VARARGS,""},
{"arm_max_q31",  cmsis_arm_max_q31, METH_VARARGS,""},
{"arm_absmax_q7",  cmsis_arm_absmax_q7, METH_VARARGS,""},
{"arm_absmax_q15", cmsis_arm_absmax_q15, METH_VARARGS,""},
{"arm_absmax_q31", cmsis_arm_absmax_q31, METH_VARARGS,""},
{"arm_max_f32",  cmsis_arm_max_f32, METH_VARARGS,""},
{"arm_absmax_f32",  cmsis_arm_absmax_f32, METH_VARARGS,""},
{"arm_max_no_idx_q7",  cmsis_arm_max_no_idx_q7, METH_VARARGS,""},
{"arm_max_no_idx_q15",  cmsis_arm_max_no_idx_q15, METH_VARARGS,""},
{"arm_max_no_idx_q31",  cmsis_arm_max_no_idx_q31, METH_VARARGS,""},
{"arm_absmax_no_idx_q7",  cmsis_arm_absmax_no_idx_q7, METH_VARARGS,""},
{"arm_absmax_no_idx_q15", cmsis_arm_absmax_no_idx_q15, METH_VARARGS,""},
{"arm_absmax_no_idx_q31", cmsis_arm_absmax_no_idx_q31, METH_VARARGS,""},

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