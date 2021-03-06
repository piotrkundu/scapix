// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION_H
#define SCAPIX_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace java::lang { class String; }

namespace android::media::tv {

class TvInputService_RecordingSession : public object_base<SCAPIX_META_STRING("android/media/tv/TvInputService$RecordingSession"),
	java::lang::Object>
{
public:

	static ref<TvInputService_RecordingSession> new_object(ref<android::content::Context> context);
	void notifyTuned(ref<android::net::Uri> channelUri);
	void notifyRecordingStopped(ref<android::net::Uri> recordedProgramUri);
	void notifyError(jint error);
	void onTune(ref<android::net::Uri> p1);
	void onTune(ref<android::net::Uri> channelUri, ref<android::os::Bundle> params);
	void onStartRecording(ref<android::net::Uri> p1);
	void onStopRecording();
	void onRelease();
	void onAppPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data);

protected:

	TvInputService_RecordingSession(handle_type h) : base_(h) {}

};

} // namespace android::media::tv
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media::tv {

inline ref<TvInputService_RecordingSession> TvInputService_RecordingSession::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline void TvInputService_RecordingSession::notifyTuned(ref<android::net::Uri> channelUri) { return call_method<SCAPIX_META_STRING("notifyTuned"), void>(channelUri); }
inline void TvInputService_RecordingSession::notifyRecordingStopped(ref<android::net::Uri> recordedProgramUri) { return call_method<SCAPIX_META_STRING("notifyRecordingStopped"), void>(recordedProgramUri); }
inline void TvInputService_RecordingSession::notifyError(jint error) { return call_method<SCAPIX_META_STRING("notifyError"), void>(error); }
inline void TvInputService_RecordingSession::onTune(ref<android::net::Uri> p1) { return call_method<SCAPIX_META_STRING("onTune"), void>(p1); }
inline void TvInputService_RecordingSession::onTune(ref<android::net::Uri> channelUri, ref<android::os::Bundle> params) { return call_method<SCAPIX_META_STRING("onTune"), void>(channelUri, params); }
inline void TvInputService_RecordingSession::onStartRecording(ref<android::net::Uri> p1) { return call_method<SCAPIX_META_STRING("onStartRecording"), void>(p1); }
inline void TvInputService_RecordingSession::onStopRecording() { return call_method<SCAPIX_META_STRING("onStopRecording"), void>(); }
inline void TvInputService_RecordingSession::onRelease() { return call_method<SCAPIX_META_STRING("onRelease"), void>(); }
inline void TvInputService_RecordingSession::onAppPrivateCommand(ref<java::lang::String> action, ref<android::os::Bundle> data) { return call_method<SCAPIX_META_STRING("onAppPrivateCommand"), void>(action, data); }

} // namespace android::media::tv
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_TV_TVINPUTSERVICE_RECORDINGSESSION_H
