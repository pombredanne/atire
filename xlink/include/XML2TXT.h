
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __crosslink_XML2TXT__
#define __crosslink_XML2TXT__

#pragma interface

#ifdef WITH_JNI

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace crosslink
  {
      class XML2TXT;
  }
}

class crosslink::XML2TXT : public ::java::lang::Object
{

public:
  XML2TXT();
  static ::crosslink::XML2TXT * getInstance();
  virtual ::java::lang::String * replaceNonAlphabet(::java::lang::String *, ::java::lang::String *);
  virtual JArray< jbyte > * clean(JArray< jbyte > *);
  virtual JArray< jbyte > * convertFile(::java::lang::String *);
  virtual JArray< jbyte > * convert(::java::lang::String *);
  virtual ::java::lang::String * getText(::java::lang::String *);
  virtual ::java::lang::String * getXmlFileText(::java::lang::String *);
public: // actually package-private
  static void usage();
public:
  static void main(JArray< ::java::lang::String * > *);
private:
  static ::crosslink::XML2TXT * instance;
public:
  static ::java::lang::Class class$;
};

#endif

#endif // __crosslink_XML2TXT__
