// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TELECOM_CALL_DETAILS_H
#define SCAPIX_ANDROID_TELECOM_CALL_DETAILS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace android::telecom { class DisconnectCause; }
namespace android::telecom { class GatewayInfo; }
namespace android::telecom { class PhoneAccountHandle; }
namespace android::telecom { class StatusHints; }
namespace java::lang { class String; }

namespace android::telecom {

class Call_Details : public object_base<SCAPIX_META_STRING("android/telecom/Call$Details"),
	java::lang::Object>
{
public:

	static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO_();
	static jint CAPABILITY_CAN_PAUSE_VIDEO_();
	static jint CAPABILITY_CAN_PULL_CALL_();
	static jint CAPABILITY_DISCONNECT_FROM_CONFERENCE_();
	static jint CAPABILITY_HOLD_();
	static jint CAPABILITY_MANAGE_CONFERENCE_();
	static jint CAPABILITY_MERGE_CONFERENCE_();
	static jint CAPABILITY_MUTE_();
	static jint CAPABILITY_RESPOND_VIA_TEXT_();
	static jint CAPABILITY_SEPARATE_FROM_CONFERENCE_();
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL_();
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_RX_();
	static jint CAPABILITY_SUPPORTS_VT_LOCAL_TX_();
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL_();
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_RX_();
	static jint CAPABILITY_SUPPORTS_VT_REMOTE_TX_();
	static jint CAPABILITY_SUPPORT_DEFLECT_();
	static jint CAPABILITY_SUPPORT_HOLD_();
	static jint CAPABILITY_SWAP_CONFERENCE_();
	static jint PROPERTY_CONFERENCE_();
	static jint PROPERTY_EMERGENCY_CALLBACK_MODE_();
	static jint PROPERTY_ENTERPRISE_CALL_();
	static jint PROPERTY_GENERIC_CONFERENCE_();
	static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY_();
	static jint PROPERTY_HIGH_DEF_AUDIO_();
	static jint PROPERTY_IS_EXTERNAL_CALL_();
	static jint PROPERTY_RTT_();
	static jint PROPERTY_SELF_MANAGED_();
	static jint PROPERTY_WIFI_();

	static jboolean can(jint capabilities, jint capability);
	jboolean can(jint capability);
	static ref<java::lang::String> capabilitiesToString(jint capabilities);
	static jboolean hasProperty(jint properties, jint property);
	jboolean hasProperty(jint property);
	static ref<java::lang::String> propertiesToString(jint properties);
	ref<android::net::Uri> getHandle();
	jint getHandlePresentation();
	ref<java::lang::String> getCallerDisplayName();
	jint getCallerDisplayNamePresentation();
	ref<android::telecom::PhoneAccountHandle> getAccountHandle();
	jint getCallCapabilities();
	jint getCallProperties();
	ref<android::telecom::DisconnectCause> getDisconnectCause();
	jlong getConnectTimeMillis();
	ref<android::telecom::GatewayInfo> getGatewayInfo();
	jint getVideoState();
	ref<android::telecom::StatusHints> getStatusHints();
	ref<android::os::Bundle> getExtras();
	ref<android::os::Bundle> getIntentExtras();
	jlong getCreationTimeMillis();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	Call_Details(handle_type h) : base_(h) {}

};

} // namespace android::telecom
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/telecom/DisconnectCause.h>
#include <scapix/java_api/android/telecom/GatewayInfo.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/android/telecom/StatusHints.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::telecom {

inline jint Call_Details::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"), jint>(); }
inline jint Call_Details::CAPABILITY_CAN_PAUSE_VIDEO_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CAN_PAUSE_VIDEO"), jint>(); }
inline jint Call_Details::CAPABILITY_CAN_PULL_CALL_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_CAN_PULL_CALL"), jint>(); }
inline jint Call_Details::CAPABILITY_DISCONNECT_FROM_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_DISCONNECT_FROM_CONFERENCE"), jint>(); }
inline jint Call_Details::CAPABILITY_HOLD_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_HOLD"), jint>(); }
inline jint Call_Details::CAPABILITY_MANAGE_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_MANAGE_CONFERENCE"), jint>(); }
inline jint Call_Details::CAPABILITY_MERGE_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_MERGE_CONFERENCE"), jint>(); }
inline jint Call_Details::CAPABILITY_MUTE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_MUTE"), jint>(); }
inline jint Call_Details::CAPABILITY_RESPOND_VIA_TEXT_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_RESPOND_VIA_TEXT"), jint>(); }
inline jint Call_Details::CAPABILITY_SEPARATE_FROM_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SEPARATE_FROM_CONFERENCE"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_RX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_LOCAL_RX"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORTS_VT_LOCAL_TX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_LOCAL_TX"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_RX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_REMOTE_RX"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORTS_VT_REMOTE_TX_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORTS_VT_REMOTE_TX"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORT_DEFLECT_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORT_DEFLECT"), jint>(); }
inline jint Call_Details::CAPABILITY_SUPPORT_HOLD_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SUPPORT_HOLD"), jint>(); }
inline jint Call_Details::CAPABILITY_SWAP_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("CAPABILITY_SWAP_CONFERENCE"), jint>(); }
inline jint Call_Details::PROPERTY_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_CONFERENCE"), jint>(); }
inline jint Call_Details::PROPERTY_EMERGENCY_CALLBACK_MODE_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_EMERGENCY_CALLBACK_MODE"), jint>(); }
inline jint Call_Details::PROPERTY_ENTERPRISE_CALL_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_ENTERPRISE_CALL"), jint>(); }
inline jint Call_Details::PROPERTY_GENERIC_CONFERENCE_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_GENERIC_CONFERENCE"), jint>(); }
inline jint Call_Details::PROPERTY_HAS_CDMA_VOICE_PRIVACY_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_HAS_CDMA_VOICE_PRIVACY"), jint>(); }
inline jint Call_Details::PROPERTY_HIGH_DEF_AUDIO_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_HIGH_DEF_AUDIO"), jint>(); }
inline jint Call_Details::PROPERTY_IS_EXTERNAL_CALL_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_IS_EXTERNAL_CALL"), jint>(); }
inline jint Call_Details::PROPERTY_RTT_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_RTT"), jint>(); }
inline jint Call_Details::PROPERTY_SELF_MANAGED_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_SELF_MANAGED"), jint>(); }
inline jint Call_Details::PROPERTY_WIFI_() { return get_static_field<SCAPIX_META_STRING("PROPERTY_WIFI"), jint>(); }
inline jboolean Call_Details::can(jint capabilities, jint capability) { return call_static_method<SCAPIX_META_STRING("can"), jboolean>(capabilities, capability); }
inline jboolean Call_Details::can(jint capability) { return call_method<SCAPIX_META_STRING("can"), jboolean>(capability); }
inline ref<java::lang::String> Call_Details::capabilitiesToString(jint capabilities) { return call_static_method<SCAPIX_META_STRING("capabilitiesToString"), ref<java::lang::String>>(capabilities); }
inline jboolean Call_Details::hasProperty(jint properties, jint property) { return call_static_method<SCAPIX_META_STRING("hasProperty"), jboolean>(properties, property); }
inline jboolean Call_Details::hasProperty(jint property) { return call_method<SCAPIX_META_STRING("hasProperty"), jboolean>(property); }
inline ref<java::lang::String> Call_Details::propertiesToString(jint properties) { return call_static_method<SCAPIX_META_STRING("propertiesToString"), ref<java::lang::String>>(properties); }
inline ref<android::net::Uri> Call_Details::getHandle() { return call_method<SCAPIX_META_STRING("getHandle"), ref<android::net::Uri>>(); }
inline jint Call_Details::getHandlePresentation() { return call_method<SCAPIX_META_STRING("getHandlePresentation"), jint>(); }
inline ref<java::lang::String> Call_Details::getCallerDisplayName() { return call_method<SCAPIX_META_STRING("getCallerDisplayName"), ref<java::lang::String>>(); }
inline jint Call_Details::getCallerDisplayNamePresentation() { return call_method<SCAPIX_META_STRING("getCallerDisplayNamePresentation"), jint>(); }
inline ref<android::telecom::PhoneAccountHandle> Call_Details::getAccountHandle() { return call_method<SCAPIX_META_STRING("getAccountHandle"), ref<android::telecom::PhoneAccountHandle>>(); }
inline jint Call_Details::getCallCapabilities() { return call_method<SCAPIX_META_STRING("getCallCapabilities"), jint>(); }
inline jint Call_Details::getCallProperties() { return call_method<SCAPIX_META_STRING("getCallProperties"), jint>(); }
inline ref<android::telecom::DisconnectCause> Call_Details::getDisconnectCause() { return call_method<SCAPIX_META_STRING("getDisconnectCause"), ref<android::telecom::DisconnectCause>>(); }
inline jlong Call_Details::getConnectTimeMillis() { return call_method<SCAPIX_META_STRING("getConnectTimeMillis"), jlong>(); }
inline ref<android::telecom::GatewayInfo> Call_Details::getGatewayInfo() { return call_method<SCAPIX_META_STRING("getGatewayInfo"), ref<android::telecom::GatewayInfo>>(); }
inline jint Call_Details::getVideoState() { return call_method<SCAPIX_META_STRING("getVideoState"), jint>(); }
inline ref<android::telecom::StatusHints> Call_Details::getStatusHints() { return call_method<SCAPIX_META_STRING("getStatusHints"), ref<android::telecom::StatusHints>>(); }
inline ref<android::os::Bundle> Call_Details::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline ref<android::os::Bundle> Call_Details::getIntentExtras() { return call_method<SCAPIX_META_STRING("getIntentExtras"), ref<android::os::Bundle>>(); }
inline jlong Call_Details::getCreationTimeMillis() { return call_method<SCAPIX_META_STRING("getCreationTimeMillis"), jlong>(); }
inline jboolean Call_Details::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint Call_Details::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Call_Details::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::telecom
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TELECOM_CALL_DETAILS_H
