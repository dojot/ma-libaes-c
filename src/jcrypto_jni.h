/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class br_com_cpqd_jcrypto_jni_JCrypto */

#ifndef _Included_br_com_cpqd_jcrypto_jni_JCrypto
#define _Included_br_com_cpqd_jcrypto_jni_JCrypto
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1size
  (JNIEnv *, jclass);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_init
 * Signature: (Ljava/nio/ByteBuffer;[BI)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1init
  (JNIEnv *, jclass, jobject, jbyteArray, jint);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_key_exp
 * Signature: (Ljava/nio/ByteBuffer;[BI)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1key_1exp
  (JNIEnv *, jclass, jobject, jbyteArray, jint);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_enc
 * Signature: (Ljava/nio/ByteBuffer;[BII[BIII)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1enc
  (JNIEnv *, jclass, jobject, jbyteArray, jint, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_gcm_size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1gcm_1size
  (JNIEnv *, jclass);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_gcm_init
 * Signature: (Ljava/nio/ByteBuffer;[BII)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1gcm_1init
  (JNIEnv *, jclass, jobject, jbyteArray, jint, jint);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_gcm_key_exp
 * Signature: (Ljava/nio/ByteBuffer;[BI)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1gcm_1key_1exp
  (JNIEnv *, jclass, jobject, jbyteArray, jint);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_gcm_aad
 * Signature: (Ljava/nio/ByteBuffer;[B)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1gcm_1aad
  (JNIEnv *, jclass, jobject, jbyteArray);

/*
 * Class:     br_com_cpqd_jcrypto_jni_JCrypto
 * Method:    aes_gcm_enc
 * Signature: (Ljava/nio/ByteBuffer;[BII[BIII)I
 */
JNIEXPORT jint JNICALL Java_br_com_cpqd_jcrypto_jni_JCrypto_aes_1gcm_1enc
  (JNIEnv *, jclass, jobject, jbyteArray, jint, jint, jbyteArray, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif