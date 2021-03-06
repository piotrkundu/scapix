// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_PACKAGEINFO_H
#define SCAPIX_ANDROID_CONTENT_PM_PACKAGEINFO_H

namespace scapix::java_api {

namespace android::content::pm { class ActivityInfo; }
namespace android::content::pm { class ApplicationInfo; }
namespace android::content::pm { class ConfigurationInfo; }
namespace android::content::pm { class FeatureGroupInfo; }
namespace android::content::pm { class FeatureInfo; }
namespace android::content::pm { class InstrumentationInfo; }
namespace android::content::pm { class PermissionInfo; }
namespace android::content::pm { class ProviderInfo; }
namespace android::content::pm { class ServiceInfo; }
namespace android::content::pm { class Signature; }
namespace android::content::pm { class SigningInfo; }
namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }
namespace java::lang { class String; }

namespace android::content::pm {

class PackageInfo : public object_base<SCAPIX_META_STRING("android/content/pm/PackageInfo"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint INSTALL_LOCATION_AUTO_();
	static jint INSTALL_LOCATION_INTERNAL_ONLY_();
	static jint INSTALL_LOCATION_PREFER_EXTERNAL_();
	static jint REQUESTED_PERMISSION_GRANTED_();
	ref<link::java::array<android::content::pm::ActivityInfo>> activities();
	void activities(ref<link::java::array<android::content::pm::ActivityInfo>>);
	ref<android::content::pm::ApplicationInfo> applicationInfo();
	void applicationInfo(ref<android::content::pm::ApplicationInfo>);
	jint baseRevisionCode();
	void baseRevisionCode(jint);
	ref<link::java::array<android::content::pm::ConfigurationInfo>> configPreferences();
	void configPreferences(ref<link::java::array<android::content::pm::ConfigurationInfo>>);
	ref<link::java::array<android::content::pm::FeatureGroupInfo>> featureGroups();
	void featureGroups(ref<link::java::array<android::content::pm::FeatureGroupInfo>>);
	jlong firstInstallTime();
	void firstInstallTime(jlong);
	ref<link::java::array<jint>> gids();
	void gids(ref<link::java::array<jint>>);
	jint installLocation();
	void installLocation(jint);
	ref<link::java::array<android::content::pm::InstrumentationInfo>> instrumentation();
	void instrumentation(ref<link::java::array<android::content::pm::InstrumentationInfo>>);
	jlong lastUpdateTime();
	void lastUpdateTime(jlong);
	ref<java::lang::String> packageName();
	void packageName(ref<java::lang::String>);
	ref<link::java::array<android::content::pm::PermissionInfo>> permissions();
	void permissions(ref<link::java::array<android::content::pm::PermissionInfo>>);
	ref<link::java::array<android::content::pm::ProviderInfo>> providers();
	void providers(ref<link::java::array<android::content::pm::ProviderInfo>>);
	ref<link::java::array<android::content::pm::ActivityInfo>> receivers();
	void receivers(ref<link::java::array<android::content::pm::ActivityInfo>>);
	ref<link::java::array<android::content::pm::FeatureInfo>> reqFeatures();
	void reqFeatures(ref<link::java::array<android::content::pm::FeatureInfo>>);
	ref<link::java::array<java::lang::String>> requestedPermissions();
	void requestedPermissions(ref<link::java::array<java::lang::String>>);
	ref<link::java::array<jint>> requestedPermissionsFlags();
	void requestedPermissionsFlags(ref<link::java::array<jint>>);
	ref<link::java::array<android::content::pm::ServiceInfo>> services();
	void services(ref<link::java::array<android::content::pm::ServiceInfo>>);
	ref<java::lang::String> sharedUserId();
	void sharedUserId(ref<java::lang::String>);
	jint sharedUserLabel();
	void sharedUserLabel(jint);
	ref<link::java::array<android::content::pm::Signature>> signatures();
	void signatures(ref<link::java::array<android::content::pm::Signature>>);
	ref<android::content::pm::SigningInfo> signingInfo();
	void signingInfo(ref<android::content::pm::SigningInfo>);
	ref<link::java::array<java::lang::String>> splitNames();
	void splitNames(ref<link::java::array<java::lang::String>>);
	ref<link::java::array<jint>> splitRevisionCodes();
	void splitRevisionCodes(ref<link::java::array<jint>>);
	jint versionCode();
	void versionCode(jint);
	ref<java::lang::String> versionName();
	void versionName(ref<java::lang::String>);

	static ref<PackageInfo> new_object();
	jlong getLongVersionCode();
	void setLongVersionCode(jlong longVersionCode);
	ref<java::lang::String> toString();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags);

protected:

	PackageInfo(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/content/pm/ApplicationInfo.h>
#include <scapix/java_api/android/content/pm/ConfigurationInfo.h>
#include <scapix/java_api/android/content/pm/FeatureGroupInfo.h>
#include <scapix/java_api/android/content/pm/FeatureInfo.h>
#include <scapix/java_api/android/content/pm/InstrumentationInfo.h>
#include <scapix/java_api/android/content/pm/PermissionInfo.h>
#include <scapix/java_api/android/content/pm/ProviderInfo.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/content/pm/Signature.h>
#include <scapix/java_api/android/content/pm/SigningInfo.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::pm {

inline ref<android::os::Parcelable_Creator> PackageInfo::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint PackageInfo::INSTALL_LOCATION_AUTO_() { return get_static_field<SCAPIX_META_STRING("INSTALL_LOCATION_AUTO"), jint>(); }
inline jint PackageInfo::INSTALL_LOCATION_INTERNAL_ONLY_() { return get_static_field<SCAPIX_META_STRING("INSTALL_LOCATION_INTERNAL_ONLY"), jint>(); }
inline jint PackageInfo::INSTALL_LOCATION_PREFER_EXTERNAL_() { return get_static_field<SCAPIX_META_STRING("INSTALL_LOCATION_PREFER_EXTERNAL"), jint>(); }
inline jint PackageInfo::REQUESTED_PERMISSION_GRANTED_() { return get_static_field<SCAPIX_META_STRING("REQUESTED_PERMISSION_GRANTED"), jint>(); }
inline ref<link::java::array<android::content::pm::ActivityInfo>> PackageInfo::activities() { return get_field<SCAPIX_META_STRING("activities"), ref<link::java::array<android::content::pm::ActivityInfo>>>(); }
inline void PackageInfo::activities(ref<link::java::array<android::content::pm::ActivityInfo>> v) { set_field<SCAPIX_META_STRING("activities"), ref<link::java::array<android::content::pm::ActivityInfo>>>(v); }
inline ref<android::content::pm::ApplicationInfo> PackageInfo::applicationInfo() { return get_field<SCAPIX_META_STRING("applicationInfo"), ref<android::content::pm::ApplicationInfo>>(); }
inline void PackageInfo::applicationInfo(ref<android::content::pm::ApplicationInfo> v) { set_field<SCAPIX_META_STRING("applicationInfo"), ref<android::content::pm::ApplicationInfo>>(v); }
inline jint PackageInfo::baseRevisionCode() { return get_field<SCAPIX_META_STRING("baseRevisionCode"), jint>(); }
inline void PackageInfo::baseRevisionCode(jint v) { set_field<SCAPIX_META_STRING("baseRevisionCode"), jint>(v); }
inline ref<link::java::array<android::content::pm::ConfigurationInfo>> PackageInfo::configPreferences() { return get_field<SCAPIX_META_STRING("configPreferences"), ref<link::java::array<android::content::pm::ConfigurationInfo>>>(); }
inline void PackageInfo::configPreferences(ref<link::java::array<android::content::pm::ConfigurationInfo>> v) { set_field<SCAPIX_META_STRING("configPreferences"), ref<link::java::array<android::content::pm::ConfigurationInfo>>>(v); }
inline ref<link::java::array<android::content::pm::FeatureGroupInfo>> PackageInfo::featureGroups() { return get_field<SCAPIX_META_STRING("featureGroups"), ref<link::java::array<android::content::pm::FeatureGroupInfo>>>(); }
inline void PackageInfo::featureGroups(ref<link::java::array<android::content::pm::FeatureGroupInfo>> v) { set_field<SCAPIX_META_STRING("featureGroups"), ref<link::java::array<android::content::pm::FeatureGroupInfo>>>(v); }
inline jlong PackageInfo::firstInstallTime() { return get_field<SCAPIX_META_STRING("firstInstallTime"), jlong>(); }
inline void PackageInfo::firstInstallTime(jlong v) { set_field<SCAPIX_META_STRING("firstInstallTime"), jlong>(v); }
inline ref<link::java::array<jint>> PackageInfo::gids() { return get_field<SCAPIX_META_STRING("gids"), ref<link::java::array<jint>>>(); }
inline void PackageInfo::gids(ref<link::java::array<jint>> v) { set_field<SCAPIX_META_STRING("gids"), ref<link::java::array<jint>>>(v); }
inline jint PackageInfo::installLocation() { return get_field<SCAPIX_META_STRING("installLocation"), jint>(); }
inline void PackageInfo::installLocation(jint v) { set_field<SCAPIX_META_STRING("installLocation"), jint>(v); }
inline ref<link::java::array<android::content::pm::InstrumentationInfo>> PackageInfo::instrumentation() { return get_field<SCAPIX_META_STRING("instrumentation"), ref<link::java::array<android::content::pm::InstrumentationInfo>>>(); }
inline void PackageInfo::instrumentation(ref<link::java::array<android::content::pm::InstrumentationInfo>> v) { set_field<SCAPIX_META_STRING("instrumentation"), ref<link::java::array<android::content::pm::InstrumentationInfo>>>(v); }
inline jlong PackageInfo::lastUpdateTime() { return get_field<SCAPIX_META_STRING("lastUpdateTime"), jlong>(); }
inline void PackageInfo::lastUpdateTime(jlong v) { set_field<SCAPIX_META_STRING("lastUpdateTime"), jlong>(v); }
inline ref<java::lang::String> PackageInfo::packageName() { return get_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(); }
inline void PackageInfo::packageName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("packageName"), ref<java::lang::String>>(v); }
inline ref<link::java::array<android::content::pm::PermissionInfo>> PackageInfo::permissions() { return get_field<SCAPIX_META_STRING("permissions"), ref<link::java::array<android::content::pm::PermissionInfo>>>(); }
inline void PackageInfo::permissions(ref<link::java::array<android::content::pm::PermissionInfo>> v) { set_field<SCAPIX_META_STRING("permissions"), ref<link::java::array<android::content::pm::PermissionInfo>>>(v); }
inline ref<link::java::array<android::content::pm::ProviderInfo>> PackageInfo::providers() { return get_field<SCAPIX_META_STRING("providers"), ref<link::java::array<android::content::pm::ProviderInfo>>>(); }
inline void PackageInfo::providers(ref<link::java::array<android::content::pm::ProviderInfo>> v) { set_field<SCAPIX_META_STRING("providers"), ref<link::java::array<android::content::pm::ProviderInfo>>>(v); }
inline ref<link::java::array<android::content::pm::ActivityInfo>> PackageInfo::receivers() { return get_field<SCAPIX_META_STRING("receivers"), ref<link::java::array<android::content::pm::ActivityInfo>>>(); }
inline void PackageInfo::receivers(ref<link::java::array<android::content::pm::ActivityInfo>> v) { set_field<SCAPIX_META_STRING("receivers"), ref<link::java::array<android::content::pm::ActivityInfo>>>(v); }
inline ref<link::java::array<android::content::pm::FeatureInfo>> PackageInfo::reqFeatures() { return get_field<SCAPIX_META_STRING("reqFeatures"), ref<link::java::array<android::content::pm::FeatureInfo>>>(); }
inline void PackageInfo::reqFeatures(ref<link::java::array<android::content::pm::FeatureInfo>> v) { set_field<SCAPIX_META_STRING("reqFeatures"), ref<link::java::array<android::content::pm::FeatureInfo>>>(v); }
inline ref<link::java::array<java::lang::String>> PackageInfo::requestedPermissions() { return get_field<SCAPIX_META_STRING("requestedPermissions"), ref<link::java::array<java::lang::String>>>(); }
inline void PackageInfo::requestedPermissions(ref<link::java::array<java::lang::String>> v) { set_field<SCAPIX_META_STRING("requestedPermissions"), ref<link::java::array<java::lang::String>>>(v); }
inline ref<link::java::array<jint>> PackageInfo::requestedPermissionsFlags() { return get_field<SCAPIX_META_STRING("requestedPermissionsFlags"), ref<link::java::array<jint>>>(); }
inline void PackageInfo::requestedPermissionsFlags(ref<link::java::array<jint>> v) { set_field<SCAPIX_META_STRING("requestedPermissionsFlags"), ref<link::java::array<jint>>>(v); }
inline ref<link::java::array<android::content::pm::ServiceInfo>> PackageInfo::services() { return get_field<SCAPIX_META_STRING("services"), ref<link::java::array<android::content::pm::ServiceInfo>>>(); }
inline void PackageInfo::services(ref<link::java::array<android::content::pm::ServiceInfo>> v) { set_field<SCAPIX_META_STRING("services"), ref<link::java::array<android::content::pm::ServiceInfo>>>(v); }
inline ref<java::lang::String> PackageInfo::sharedUserId() { return get_field<SCAPIX_META_STRING("sharedUserId"), ref<java::lang::String>>(); }
inline void PackageInfo::sharedUserId(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("sharedUserId"), ref<java::lang::String>>(v); }
inline jint PackageInfo::sharedUserLabel() { return get_field<SCAPIX_META_STRING("sharedUserLabel"), jint>(); }
inline void PackageInfo::sharedUserLabel(jint v) { set_field<SCAPIX_META_STRING("sharedUserLabel"), jint>(v); }
inline ref<link::java::array<android::content::pm::Signature>> PackageInfo::signatures() { return get_field<SCAPIX_META_STRING("signatures"), ref<link::java::array<android::content::pm::Signature>>>(); }
inline void PackageInfo::signatures(ref<link::java::array<android::content::pm::Signature>> v) { set_field<SCAPIX_META_STRING("signatures"), ref<link::java::array<android::content::pm::Signature>>>(v); }
inline ref<android::content::pm::SigningInfo> PackageInfo::signingInfo() { return get_field<SCAPIX_META_STRING("signingInfo"), ref<android::content::pm::SigningInfo>>(); }
inline void PackageInfo::signingInfo(ref<android::content::pm::SigningInfo> v) { set_field<SCAPIX_META_STRING("signingInfo"), ref<android::content::pm::SigningInfo>>(v); }
inline ref<link::java::array<java::lang::String>> PackageInfo::splitNames() { return get_field<SCAPIX_META_STRING("splitNames"), ref<link::java::array<java::lang::String>>>(); }
inline void PackageInfo::splitNames(ref<link::java::array<java::lang::String>> v) { set_field<SCAPIX_META_STRING("splitNames"), ref<link::java::array<java::lang::String>>>(v); }
inline ref<link::java::array<jint>> PackageInfo::splitRevisionCodes() { return get_field<SCAPIX_META_STRING("splitRevisionCodes"), ref<link::java::array<jint>>>(); }
inline void PackageInfo::splitRevisionCodes(ref<link::java::array<jint>> v) { set_field<SCAPIX_META_STRING("splitRevisionCodes"), ref<link::java::array<jint>>>(v); }
inline jint PackageInfo::versionCode() { return get_field<SCAPIX_META_STRING("versionCode"), jint>(); }
inline void PackageInfo::versionCode(jint v) { set_field<SCAPIX_META_STRING("versionCode"), jint>(v); }
inline ref<java::lang::String> PackageInfo::versionName() { return get_field<SCAPIX_META_STRING("versionName"), ref<java::lang::String>>(); }
inline void PackageInfo::versionName(ref<java::lang::String> v) { set_field<SCAPIX_META_STRING("versionName"), ref<java::lang::String>>(v); }
inline ref<PackageInfo> PackageInfo::new_object() { return base_::new_object(); }
inline jlong PackageInfo::getLongVersionCode() { return call_method<SCAPIX_META_STRING("getLongVersionCode"), jlong>(); }
inline void PackageInfo::setLongVersionCode(jlong longVersionCode) { return call_method<SCAPIX_META_STRING("setLongVersionCode"), void>(longVersionCode); }
inline ref<java::lang::String> PackageInfo::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jint PackageInfo::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void PackageInfo::writeToParcel(ref<android::os::Parcel> dest, jint parcelableFlags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, parcelableFlags); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_PACKAGEINFO_H
