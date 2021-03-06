// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY_VALIDATIONFAILEDEXCEPTION_H
#define SCAPIX_ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY_VALIDATIONFAILEDEXCEPTION_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }

namespace android::app::admin {

class SystemUpdatePolicy_ValidationFailedException : public object_base<SCAPIX_META_STRING("android/app/admin/SystemUpdatePolicy$ValidationFailedException"),
	java::lang::IllegalArgumentException,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE_();
	static jint ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG_();
	static jint ERROR_DUPLICATE_OR_OVERLAP_();
	static jint ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE_();
	static jint ERROR_NEW_FREEZE_PERIOD_TOO_LONG_();
	static jint ERROR_UNKNOWN_();

	jint getErrorCode();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	SystemUpdatePolicy_ValidationFailedException(handle_type h) : base_(h) {}

};

} // namespace android::app::admin
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::app::admin {

inline ref<android::os::Parcelable_Creator> SystemUpdatePolicy_ValidationFailedException::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE_() { return get_static_field<SCAPIX_META_STRING("ERROR_COMBINED_FREEZE_PERIOD_TOO_CLOSE"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG_() { return get_static_field<SCAPIX_META_STRING("ERROR_COMBINED_FREEZE_PERIOD_TOO_LONG"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_DUPLICATE_OR_OVERLAP_() { return get_static_field<SCAPIX_META_STRING("ERROR_DUPLICATE_OR_OVERLAP"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE_() { return get_static_field<SCAPIX_META_STRING("ERROR_NEW_FREEZE_PERIOD_TOO_CLOSE"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_NEW_FREEZE_PERIOD_TOO_LONG_() { return get_static_field<SCAPIX_META_STRING("ERROR_NEW_FREEZE_PERIOD_TOO_LONG"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::ERROR_UNKNOWN_() { return get_static_field<SCAPIX_META_STRING("ERROR_UNKNOWN"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::getErrorCode() { return call_method<SCAPIX_META_STRING("getErrorCode"), jint>(); }
inline jint SystemUpdatePolicy_ValidationFailedException::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void SystemUpdatePolicy_ValidationFailedException::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::app::admin
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_ADMIN_SYSTEMUPDATEPOLICY_VALIDATIONFAILEDEXCEPTION_H
