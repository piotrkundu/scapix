// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_H
#define SCAPIX_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_H

namespace scapix::java_api {

namespace android::hardware::display { class VirtualDisplay; }
namespace android::hardware::display { class VirtualDisplay_Callback; }
namespace android::media::projection { class MediaProjection_Callback; }
namespace android::os { class Handler; }
namespace android::view { class Surface; }
namespace java::lang { class String; }

namespace android::media::projection {

class MediaProjection : public object_base<SCAPIX_META_STRING("android/media/projection/MediaProjection"),
	java::lang::Object>
{
public:

	using Callback = MediaProjection_Callback;

	void registerCallback(ref<android::media::projection::MediaProjection_Callback> callback, ref<android::os::Handler> handler);
	void unregisterCallback(ref<android::media::projection::MediaProjection_Callback> callback);
	ref<android::hardware::display::VirtualDisplay> createVirtualDisplay(ref<java::lang::String> name, jint width, jint height, jint dpi, jint flags, ref<android::view::Surface> surface, ref<android::hardware::display::VirtualDisplay_Callback> callback, ref<android::os::Handler> handler);
	void stop();

protected:

	MediaProjection(handle_type h) : base_(h) {}

};

} // namespace android::media::projection
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/display/VirtualDisplay.h>
#include <scapix/java_api/android/hardware/display/VirtualDisplay_Callback.h>
#include <scapix/java_api/android/media/projection/MediaProjection_Callback.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::projection {

inline void MediaProjection::registerCallback(ref<android::media::projection::MediaProjection_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("registerCallback"), void>(callback, handler); }
inline void MediaProjection::unregisterCallback(ref<android::media::projection::MediaProjection_Callback> callback) { return call_method<SCAPIX_META_STRING("unregisterCallback"), void>(callback); }
inline ref<android::hardware::display::VirtualDisplay> MediaProjection::createVirtualDisplay(ref<java::lang::String> name, jint width, jint height, jint dpi, jint flags, ref<android::view::Surface> surface, ref<android::hardware::display::VirtualDisplay_Callback> callback, ref<android::os::Handler> handler) { return call_method<SCAPIX_META_STRING("createVirtualDisplay"), ref<android::hardware::display::VirtualDisplay>>(name, width, height, dpi, flags, surface, callback, handler); }
inline void MediaProjection::stop() { return call_method<SCAPIX_META_STRING("stop"), void>(); }

} // namespace android::media::projection
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_H
