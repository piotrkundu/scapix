// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_H
#define SCAPIX_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_H

namespace scapix::java_api {

namespace android::accessibilityservice { class GestureDescription_StrokeDescription; }
namespace android::accessibilityservice { class GestureDescription_Builder; }

namespace android::accessibilityservice {

class GestureDescription : public object_base<SCAPIX_META_STRING("android/accessibilityservice/GestureDescription"),
	java::lang::Object>
{
public:

	using StrokeDescription = GestureDescription_StrokeDescription;
	using Builder = GestureDescription_Builder;

	static jint getMaxStrokeCount();
	static jlong getMaxGestureDuration();
	jint getStrokeCount();
	ref<android::accessibilityservice::GestureDescription_StrokeDescription> getStroke(jint index);

protected:

	GestureDescription(handle_type h) : base_(h) {}

};

} // namespace android::accessibilityservice
} // namespace scapix::java_api

#include <scapix/java_api/android/accessibilityservice/GestureDescription_StrokeDescription.h>

namespace scapix::java_api {
namespace android::accessibilityservice {

inline jint GestureDescription::getMaxStrokeCount() { return call_static_method<SCAPIX_META_STRING("getMaxStrokeCount"), jint>(); }
inline jlong GestureDescription::getMaxGestureDuration() { return call_static_method<SCAPIX_META_STRING("getMaxGestureDuration"), jlong>(); }
inline jint GestureDescription::getStrokeCount() { return call_method<SCAPIX_META_STRING("getStrokeCount"), jint>(); }
inline ref<android::accessibilityservice::GestureDescription_StrokeDescription> GestureDescription::getStroke(jint index) { return call_method<SCAPIX_META_STRING("getStroke"), ref<android::accessibilityservice::GestureDescription_StrokeDescription>>(index); }

} // namespace android::accessibilityservice
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_H
