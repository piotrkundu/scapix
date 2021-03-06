// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_CALLBACK_H
#define SCAPIX_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_CALLBACK_H

namespace scapix::java_api {


namespace android::media::projection {

class MediaProjection_Callback : public object_base<SCAPIX_META_STRING("android/media/projection/MediaProjection$Callback"),
	java::lang::Object>
{
public:

	static ref<MediaProjection_Callback> new_object();
	void onStop();

protected:

	MediaProjection_Callback(handle_type h) : base_(h) {}

};

} // namespace android::media::projection
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media::projection {

inline ref<MediaProjection_Callback> MediaProjection_Callback::new_object() { return base_::new_object(); }
inline void MediaProjection_Callback::onStop() { return call_method<SCAPIX_META_STRING("onStop"), void>(); }

} // namespace android::media::projection
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION_CALLBACK_H
