// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST_H
#define SCAPIX_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace java::lang { class String; }

namespace android::net::wifi::p2p::nsd {

class WifiP2pServiceRequest : public object_base<SCAPIX_META_STRING("android/net/wifi/p2p/nsd/WifiP2pServiceRequest"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest> newInstance(jint protocolType, ref<java::lang::String> queryData);
	static ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest> newInstance(jint protocolType);
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	WifiP2pServiceRequest(handle_type h) : base_(h) {}

};

} // namespace android::net::wifi::p2p::nsd
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::net::wifi::p2p::nsd {

inline ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest> WifiP2pServiceRequest::newInstance(jint protocolType, ref<java::lang::String> queryData) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest>>(protocolType, queryData); }
inline ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest> WifiP2pServiceRequest::newInstance(jint protocolType) { return call_static_method<SCAPIX_META_STRING("newInstance"), ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest>>(protocolType); }
inline jboolean WifiP2pServiceRequest::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint WifiP2pServiceRequest::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jint WifiP2pServiceRequest::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void WifiP2pServiceRequest::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::net::wifi::p2p::nsd
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST_H
