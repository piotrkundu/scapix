// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_ANDROID_MEDIA_MEDIACAS_SESSION_H
#define SCAPIX_ANDROID_MEDIA_MEDIACAS_SESSION_H

namespace scapix::java_api {


namespace android::media {

class MediaCas_Session : public object_base<SCAPIX_META_STRING("android/media/MediaCas$Session"),
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	void setPrivateData(ref<link::java::array<jbyte>> data);
	void processEcm(ref<link::java::array<jbyte>> data, jint offset, jint length);
	void processEcm(ref<link::java::array<jbyte>> data);
	void close();

protected:

	MediaCas_Session(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::media {

inline void MediaCas_Session::setPrivateData(ref<link::java::array<jbyte>> data) { return call_method<SCAPIX_META_STRING("setPrivateData"), void>(data); }
inline void MediaCas_Session::processEcm(ref<link::java::array<jbyte>> data, jint offset, jint length) { return call_method<SCAPIX_META_STRING("processEcm"), void>(data, offset, length); }
inline void MediaCas_Session::processEcm(ref<link::java::array<jbyte>> data) { return call_method<SCAPIX_META_STRING("processEcm"), void>(data); }
inline void MediaCas_Session::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MEDIACAS_SESSION_H
