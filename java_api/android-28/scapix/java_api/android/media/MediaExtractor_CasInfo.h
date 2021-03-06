// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO_H
#define SCAPIX_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO_H

namespace scapix::java_api {

namespace android::media { class MediaCas_Session; }

namespace android::media {

class MediaExtractor_CasInfo : public object_base<SCAPIX_META_STRING("android/media/MediaExtractor$CasInfo"),
	java::lang::Object>
{
public:

	jint getSystemId();
	ref<android::media::MediaCas_Session> getSession();

protected:

	MediaExtractor_CasInfo(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/media/MediaCas_Session.h>

namespace scapix::java_api {
namespace android::media {

inline jint MediaExtractor_CasInfo::getSystemId() { return call_method<SCAPIX_META_STRING("getSystemId"), jint>(); }
inline ref<android::media::MediaCas_Session> MediaExtractor_CasInfo::getSession() { return call_method<SCAPIX_META_STRING("getSession"), ref<android::media::MediaCas_Session>>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO_H
