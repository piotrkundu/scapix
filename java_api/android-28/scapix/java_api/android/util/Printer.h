// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_UTIL_PRINTER_H
#define SCAPIX_ANDROID_UTIL_PRINTER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::util {

class Printer : public object_base<SCAPIX_META_STRING("android/util/Printer"),
	java::lang::Object>
{
public:

	void println(ref<java::lang::String> p1);

protected:

	Printer(handle_type h) : base_(h) {}

};

} // namespace android::util
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::util {

inline void Printer::println(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("println"), void>(p1); }

} // namespace android::util
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_UTIL_PRINTER_H
