// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/Telephony_TextBasedSmsColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_TELEPHONY_SMS_CONVERSATIONS_H
#define SCAPIX_ANDROID_PROVIDER_TELEPHONY_SMS_CONVERSATIONS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class Telephony_Sms_Conversations : public object_base<SCAPIX_META_STRING("android/provider/Telephony$Sms$Conversations"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::Telephony_TextBasedSmsColumns>
{
public:

	static ref<android::net::Uri> CONTENT_URI_();
	static ref<java::lang::String> DEFAULT_SORT_ORDER_();
	static ref<java::lang::String> MESSAGE_COUNT_();
	static ref<java::lang::String> SNIPPET_();


protected:

	Telephony_Sms_Conversations(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> Telephony_Sms_Conversations::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<java::lang::String> Telephony_Sms_Conversations::DEFAULT_SORT_ORDER_() { return get_static_field<SCAPIX_META_STRING("DEFAULT_SORT_ORDER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_Sms_Conversations::MESSAGE_COUNT_() { return get_static_field<SCAPIX_META_STRING("MESSAGE_COUNT"), ref<java::lang::String>>(); }
inline ref<java::lang::String> Telephony_Sms_Conversations::SNIPPET_() { return get_static_field<SCAPIX_META_STRING("SNIPPET"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_TELEPHONY_SMS_CONVERSATIONS_H
