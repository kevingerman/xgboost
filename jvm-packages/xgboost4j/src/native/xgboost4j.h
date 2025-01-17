/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ml_dmlc_xgboost4j_java_XGBoostJNI */

#ifndef _Included_ml_dmlc_xgboost4j_java_XGBoostJNI
#define _Included_ml_dmlc_xgboost4j_java_XGBoostJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBGetLastError
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBGetLastError
  (JNIEnv *, jclass);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromFile
 * Signature: (Ljava/lang/String;I[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromFile
  (JNIEnv *, jclass, jstring, jint, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromDataIter
 * Signature: (Ljava/util/Iterator;Ljava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromDataIter
  (JNIEnv *, jclass, jobject, jstring, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromCSREx
 * Signature: ([J[I[FI[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromCSREx
  (JNIEnv *, jclass, jlongArray, jintArray, jfloatArray, jint, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromCSCEx
 * Signature: ([J[I[FI[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromCSCEx
  (JNIEnv *, jclass, jlongArray, jintArray, jfloatArray, jint, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromMat
 * Signature: ([FIIF[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromMat
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloat, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromMatRef
 * Signature: (JIIF[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromMatRef
  (JNIEnv *, jclass, jlong, jint, jint, jfloat, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSliceDMatrix
 * Signature: (J[I[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSliceDMatrix
  (JNIEnv *, jclass, jlong, jintArray, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixFree
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSaveBinary
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSaveBinary
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSetFloatInfo
 * Signature: (JLjava/lang/String;[F)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSetFloatInfo
  (JNIEnv *, jclass, jlong, jstring, jfloatArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSetUIntInfo
 * Signature: (JLjava/lang/String;[I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSetUIntInfo
  (JNIEnv *, jclass, jlong, jstring, jintArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixGetFloatInfo
 * Signature: (JLjava/lang/String;[[F)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixGetFloatInfo
  (JNIEnv *, jclass, jlong, jstring, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixGetUIntInfo
 * Signature: (JLjava/lang/String;[[I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixGetUIntInfo
  (JNIEnv *, jclass, jlong, jstring, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixNumRow
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixNumRow
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterCreate
 * Signature: ([J[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterCreate
  (JNIEnv *, jclass, jlongArray, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterFree
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterFree
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSetParam
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSetParam
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterUpdateOneIter
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterUpdateOneIter
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterBoostOneIter
 * Signature: (JJ[F[F)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterBoostOneIter
  (JNIEnv *, jclass, jlong, jlong, jfloatArray, jfloatArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterEvalOneIter
 * Signature: (JI[J[Ljava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterEvalOneIter
  (JNIEnv *, jclass, jlong, jint, jlongArray, jobjectArray, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterPredict
 * Signature: (JJII[[F)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterPredict
  (JNIEnv *, jclass, jlong, jlong, jint, jint, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterLoadModel
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterLoadModel
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSaveModel
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSaveModel
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterLoadModelFromBuffer
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterLoadModelFromBuffer
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterGetModelRaw
 * Signature: (J[[B)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterGetModelRaw
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterDumpModelEx
 * Signature: (JLjava/lang/String;ILjava/lang/String;[[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterDumpModelEx
  (JNIEnv *, jclass, jlong, jstring, jint, jstring, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterDumpModelExWithFeatures
 * Signature: (J[Ljava/lang/String;ILjava/lang/String;[[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterDumpModelExWithFeatures
  (JNIEnv *, jclass, jlong, jobjectArray, jint, jstring, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterGetAttrNames
 * Signature: (J[[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterGetAttrNames
  (JNIEnv *, jclass, jlong, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterGetAttr
 * Signature: (JLjava/lang/String;[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterGetAttr
  (JNIEnv *, jclass, jlong, jstring, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSetAttr
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSetAttr
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterLoadRabitCheckpoint
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterLoadRabitCheckpoint
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterSaveRabitCheckpoint
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterSaveRabitCheckpoint
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGBoosterGetNumFeature
 * Signature: (J[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGBoosterGetNumFeature
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitInit
 * Signature: ([Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitInit
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitFinalize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitFinalize
  (JNIEnv *, jclass);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitTrackerPrint
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitTrackerPrint
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitGetRank
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitGetRank
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitGetWorldSize
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitGetWorldSize
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitVersionNumber
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitVersionNumber
  (JNIEnv *, jclass, jintArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    RabitAllreduce
 * Signature: (Ljava/nio/ByteBuffer;III)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_RabitAllreduce
  (JNIEnv *, jclass, jobject, jint, jint, jint);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixSetInfoFromInterface
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixSetInfoFromInterface
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDeviceQuantileDMatrixCreateFromCallback
 * Signature: (Ljava/util/Iterator;FII[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDeviceQuantileDMatrixCreateFromCallback
  (JNIEnv *, jclass, jobject, jfloat, jint, jint, jlongArray);

/*
 * Class:     ml_dmlc_xgboost4j_java_XGBoostJNI
 * Method:    XGDMatrixCreateFromArrayInterfaceColumns
 * Signature: (Ljava/lang/String;FI[J)I
 */
JNIEXPORT jint JNICALL Java_ml_dmlc_xgboost4j_java_XGBoostJNI_XGDMatrixCreateFromArrayInterfaceColumns
  (JNIEnv *, jclass, jstring, jfloat, jint, jlongArray);

#ifdef __cplusplus
}
#endif
#endif
