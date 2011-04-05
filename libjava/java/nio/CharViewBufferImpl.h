
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_CharViewBufferImpl__
#define __java_nio_CharViewBufferImpl__

#pragma interface

#include <java/nio/CharBuffer.h>
extern "Java"
{
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
        class ByteOrder;
        class CharBuffer;
        class CharViewBufferImpl;
    }
  }
}

class java::nio::CharViewBufferImpl : public ::java::nio::CharBuffer
{

public: // actually package-private
  CharViewBufferImpl(::java::nio::ByteBuffer *, jint);
public:
  CharViewBufferImpl(::java::nio::ByteBuffer *, jint, jint, jint, jint, jint, jboolean, ::java::nio::ByteOrder *);
  virtual jchar get();
  virtual jchar get(jint);
  virtual ::java::nio::CharBuffer * put(jchar);
  virtual ::java::nio::CharBuffer * put(jint, jchar);
  virtual ::java::nio::CharBuffer * compact();
  virtual ::java::nio::CharBuffer * slice();
public: // actually package-private
  virtual ::java::nio::CharBuffer * duplicate(jboolean);
public:
  virtual ::java::nio::CharBuffer * duplicate();
  virtual ::java::nio::CharBuffer * asReadOnlyBuffer();
  virtual ::java::lang::CharSequence * subSequence(jint, jint);
  virtual jboolean isReadOnly();
  virtual jboolean isDirect();
  virtual ::java::nio::ByteOrder * order();
private:
  jint __attribute__((aligned(__alignof__( ::java::nio::CharBuffer)))) offset;
  ::java::nio::ByteBuffer * bb;
  jboolean readOnly;
  ::java::nio::ByteOrder * endian;
public:
  static ::java::lang::Class class$;
};

#endif // __java_nio_CharViewBufferImpl__
