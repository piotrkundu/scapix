// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_WIFIMANAGER_WPSCALLBACK_H
#define SCAPIX_ANDROID_NET_WIFI_WIFIMANAGER_WPSCALLBACK_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::net::wifi {

class WifiManager_WpsCallback : public object_base<SCAPIX_META_STRING("android/net/wifi/WifiManager$WpsCallback"),
	java::lang::Object>
{
public:

	static ref<WifiManager_WpsCallback> new_object();
	void onStarted(ref<java::lang::String> p1);
	void onSucceeded();
	void onFailed(jint p1);

protected:

	WifiManager_WpsCallback(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi {

inline ref<WifiManager_WpsCallback> WifiManager_WpsCallback::new_object() { return base_::new_object(); }
inline void WifiManager_WpsCallback::onStarted(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("onStarted"), void>(p1); }
inline void WifiManager_WpsCallback::onSucceeded() { return call_method<SCAPIX_META_STRING("onSucceeded"), void>(); }
inline void WifiManager_WpsCallback::onFailed(jint p1) { return call_method<SCAPIX_META_STRING("onFailed"), void>(p1); }

} // namespace android::net::wifi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_WIFIMANAGER_WPSCALLBACK_H
