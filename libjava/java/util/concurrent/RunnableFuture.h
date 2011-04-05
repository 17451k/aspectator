
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_RunnableFuture__
#define __java_util_concurrent_RunnableFuture__

#pragma interface

#include <java/lang/Object.h>

class java::util::concurrent::RunnableFuture : public ::java::lang::Object
{

public:
  virtual void run() = 0;
  virtual jboolean cancel(jboolean) = 0;
  virtual jboolean isCancelled() = 0;
  virtual jboolean isDone() = 0;
  virtual ::java::lang::Object * get() = 0;
  virtual ::java::lang::Object * get(jlong, ::java::util::concurrent::TimeUnit *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_util_concurrent_RunnableFuture__
