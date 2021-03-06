// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_FORMATTABLEFLAGS_H
#define SCAPIX_JAVA_UTIL_FORMATTABLEFLAGS_H

namespace scapix::java_api {
namespace java::util {

class FormattableFlags : public object_base<SCAPIX_META_STRING("java/util/FormattableFlags"),
	java::lang::Object>
{
public:

	static jint LEFT_JUSTIFY_();
	static jint UPPERCASE_();
	static jint ALTERNATE_();


protected:

	FormattableFlags(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util {

inline jint FormattableFlags::LEFT_JUSTIFY_() { return get_static_field<SCAPIX_META_STRING("LEFT_JUSTIFY"), jint>(); }
inline jint FormattableFlags::UPPERCASE_() { return get_static_field<SCAPIX_META_STRING("UPPERCASE"), jint>(); }
inline jint FormattableFlags::ALTERNATE_() { return get_static_field<SCAPIX_META_STRING("ALTERNATE"), jint>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_FORMATTABLEFLAGS_H
