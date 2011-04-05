/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __java_io_VMFile__
#define __java_io_VMFile__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT jlong JNICALL Java_java_io_VMFile_lastModified (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_setReadOnly (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_create (JNIEnv *env, jclass, jstring);
JNIEXPORT jobjectArray JNICALL Java_java_io_VMFile_list (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_renameTo (JNIEnv *env, jclass, jstring, jstring);
JNIEXPORT jlong JNICALL Java_java_io_VMFile_length (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_exists (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_delete (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_setLastModified (JNIEnv *env, jclass, jstring, jlong);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_mkdir (JNIEnv *env, jclass, jstring);
JNIEXPORT jlong JNICALL Java_java_io_VMFile_getTotalSpace (JNIEnv *env, jclass, jstring);
JNIEXPORT jlong JNICALL Java_java_io_VMFile_getFreeSpace (JNIEnv *env, jclass, jstring);
JNIEXPORT jlong JNICALL Java_java_io_VMFile_getUsableSpace (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_setReadable (JNIEnv *env, jclass, jstring, jboolean, jboolean);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_setWritable (JNIEnv *env, jclass, jstring, jboolean, jboolean);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_setExecutable (JNIEnv *env, jclass, jstring, jboolean, jboolean);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_isFile (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_canWrite (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_canWriteDirectory (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_canRead (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_canExecute (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_io_VMFile_isDirectory (JNIEnv *env, jclass, jstring);
JNIEXPORT jstring JNICALL Java_java_io_VMFile_toCanonicalForm (JNIEnv *env, jclass, jstring);

#undef java_io_VMFile_IS_CASE_SENSITIVE
#define java_io_VMFile_IS_CASE_SENSITIVE 1L
#undef java_io_VMFile_IS_DOS_8_3
#define java_io_VMFile_IS_DOS_8_3 0L

#ifdef __cplusplus
}
#endif

#endif /* __java_io_VMFile__ */
