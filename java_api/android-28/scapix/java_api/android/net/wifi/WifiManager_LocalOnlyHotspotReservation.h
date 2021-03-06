// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION_H
#define SCAPIX_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION_H

namespace scapix::java_api {

namespace android::net::wifi { class WifiConfiguration; }

namespace android::net::wifi {

class WifiManager_LocalOnlyHotspotReservation : public object_base<SCAPIX_META_STRING("android/net/wifi/WifiManager$LocalOnlyHotspotReservation"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	ref<android::net::wifi::WifiConfiguration> getWifiConfiguration();
	void close();

protected:

	WifiManager_LocalOnlyHotspotReservation(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi
} // namespace scapix::java_api

#include <scapix/java_api/android/net/wifi/WifiConfiguration.h>

namespace scapix::java_api {
namespace android::net::wifi {

inline ref<android::net::wifi::WifiConfiguration> WifiManager_LocalOnlyHotspotReservation::getWifiConfiguration() { return call_method<SCAPIX_META_STRING("getWifiConfiguration"), ref<android::net::wifi::WifiConfiguration>>(); }
inline void WifiManager_LocalOnlyHotspotReservation::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace android::net::wifi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_WIFIMANAGER_LOCALONLYHOTSPOTRESERVATION_H
