// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_ANDROID_VIEW_ABSSAVEDSTATE_H
#define SCAPIX_ANDROID_VIEW_ABSSAVEDSTATE_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::os { class Parcelable_Creator; }

namespace android::view {

class AbsSavedState : public object_base<SCAPIX_META_STRING("android/view/AbsSavedState"),
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static ref<android::os::Parcelable_Creator> CREATOR_();
	static ref<android::view::AbsSavedState> EMPTY_STATE_();

	ref<android::os::Parcelable> getSuperState();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);

protected:

	AbsSavedState(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>

namespace scapix::java_api {
namespace android::view {

inline ref<android::os::Parcelable_Creator> AbsSavedState::CREATOR_() { return get_static_field<SCAPIX_META_STRING("CREATOR"), ref<android::os::Parcelable_Creator>>(); }
inline ref<android::view::AbsSavedState> AbsSavedState::EMPTY_STATE_() { return get_static_field<SCAPIX_META_STRING("EMPTY_STATE"), ref<android::view::AbsSavedState>>(); }
inline ref<android::os::Parcelable> AbsSavedState::getSuperState() { return call_method<SCAPIX_META_STRING("getSuperState"), ref<android::os::Parcelable>>(); }
inline jint AbsSavedState::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void AbsSavedState::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ABSSAVEDSTATE_H
