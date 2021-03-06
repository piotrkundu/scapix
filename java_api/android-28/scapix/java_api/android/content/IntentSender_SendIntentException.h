// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/util/AndroidException.h>

#ifndef SCAPIX_ANDROID_CONTENT_INTENTSENDER_SENDINTENTEXCEPTION_H
#define SCAPIX_ANDROID_CONTENT_INTENTSENDER_SENDINTENTEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class Exception; }
namespace java::lang { class String; }

namespace android::content {

class IntentSender_SendIntentException : public object_base<SCAPIX_META_STRING("android/content/IntentSender$SendIntentException"),
	android::util::AndroidException>
{
public:

	static ref<IntentSender_SendIntentException> new_object();
	static ref<IntentSender_SendIntentException> new_object(ref<java::lang::String> name);
	static ref<IntentSender_SendIntentException> new_object(ref<java::lang::Exception> cause);

protected:

	IntentSender_SendIntentException(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<IntentSender_SendIntentException> IntentSender_SendIntentException::new_object() { return base_::new_object(); }
inline ref<IntentSender_SendIntentException> IntentSender_SendIntentException::new_object(ref<java::lang::String> name) { return base_::new_object(name); }
inline ref<IntentSender_SendIntentException> IntentSender_SendIntentException::new_object(ref<java::lang::Exception> cause) { return base_::new_object(cause); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_INTENTSENDER_SENDINTENTEXCEPTION_H
