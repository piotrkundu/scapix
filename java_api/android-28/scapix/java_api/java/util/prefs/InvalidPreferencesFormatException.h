// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION_H
#define SCAPIX_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::util::prefs {

class InvalidPreferencesFormatException : public object_base<SCAPIX_META_STRING("java/util/prefs/InvalidPreferencesFormatException"),
	java::lang::Exception>
{
public:

	static ref<InvalidPreferencesFormatException> new_object(ref<java::lang::Throwable> cause);
	static ref<InvalidPreferencesFormatException> new_object(ref<java::lang::String> message);
	static ref<InvalidPreferencesFormatException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);

protected:

	InvalidPreferencesFormatException(handle_type h) : base_(h) {}

};

} // namespace java::util::prefs
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::util::prefs {

inline ref<InvalidPreferencesFormatException> InvalidPreferencesFormatException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline ref<InvalidPreferencesFormatException> InvalidPreferencesFormatException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<InvalidPreferencesFormatException> InvalidPreferencesFormatException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

} // namespace java::util::prefs
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_PREFS_INVALIDPREFERENCESFORMATEXCEPTION_H
