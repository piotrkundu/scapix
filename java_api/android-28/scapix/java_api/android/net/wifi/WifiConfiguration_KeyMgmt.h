// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT_H
#define SCAPIX_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::net::wifi {

class WifiConfiguration_KeyMgmt : public object_base<SCAPIX_META_STRING("android/net/wifi/WifiConfiguration$KeyMgmt"),
	java::lang::Object>
{
public:

	static jint IEEE8021X_();
	static jint NONE_();
	static jint WPA_EAP_();
	static jint WPA_PSK_();
	static ref<link::java::array<java::lang::String>> strings();
	static ref<java::lang::String> varName();


protected:

	WifiConfiguration_KeyMgmt(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi {

inline jint WifiConfiguration_KeyMgmt::IEEE8021X_() { return get_static_field<SCAPIX_META_STRING("IEEE8021X"), jint>(); }
inline jint WifiConfiguration_KeyMgmt::NONE_() { return get_static_field<SCAPIX_META_STRING("NONE"), jint>(); }
inline jint WifiConfiguration_KeyMgmt::WPA_EAP_() { return get_static_field<SCAPIX_META_STRING("WPA_EAP"), jint>(); }
inline jint WifiConfiguration_KeyMgmt::WPA_PSK_() { return get_static_field<SCAPIX_META_STRING("WPA_PSK"), jint>(); }
inline ref<link::java::array<java::lang::String>> WifiConfiguration_KeyMgmt::strings() { return get_static_field<SCAPIX_META_STRING("strings"), ref<link::java::array<java::lang::String>>>(); }
inline ref<java::lang::String> WifiConfiguration_KeyMgmt::varName() { return get_static_field<SCAPIX_META_STRING("varName"), ref<java::lang::String>>(); }

} // namespace android::net::wifi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_WIFICONFIGURATION_KEYMGMT_H
