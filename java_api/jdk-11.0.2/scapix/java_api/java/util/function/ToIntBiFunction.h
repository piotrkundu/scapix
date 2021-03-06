// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FUNCTION_TOINTBIFUNCTION_H
#define SCAPIX_JAVA_UTIL_FUNCTION_TOINTBIFUNCTION_H

namespace scapix::java_api {
namespace java::util::function {

class ToIntBiFunction : public object_base<SCAPIX_META_STRING("java/util/function/ToIntBiFunction"),
	java::lang::Object>
{
public:

	jint applyAsInt(ref<java::lang::Object> p1, ref<java::lang::Object> p2);

protected:

	ToIntBiFunction(handle_type h) : base_(h) {}

};

} // namespace java::util::function
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::function {

inline jint ToIntBiFunction::applyAsInt(ref<java::lang::Object> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("applyAsInt"), jint>(p1, p2); }

} // namespace java::util::function
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FUNCTION_TOINTBIFUNCTION_H
