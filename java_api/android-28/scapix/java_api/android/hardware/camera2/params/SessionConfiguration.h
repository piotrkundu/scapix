// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_SESSIONCONFIGURATION_H
#define SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_SESSIONCONFIGURATION_H

namespace scapix::java_api {

namespace android::hardware::camera2 { class CameraCaptureSession_StateCallback; }
namespace android::hardware::camera2 { class CaptureRequest; }
namespace android::hardware::camera2::params { class InputConfiguration; }
namespace java::util { class List; }
namespace java::util::concurrent { class Executor; }

namespace android::hardware::camera2::params {

class SessionConfiguration : public object_base<SCAPIX_META_STRING("android/hardware/camera2/params/SessionConfiguration"),
	java::lang::Object>
{
public:

	static jint SESSION_HIGH_SPEED_();
	static jint SESSION_REGULAR_();

	static ref<SessionConfiguration> new_object(jint sessionType, ref<java::util::List> outputs, ref<java::util::concurrent::Executor> executor, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> cb);
	jint getSessionType();
	ref<java::util::List> getOutputConfigurations();
	ref<android::hardware::camera2::CameraCaptureSession_StateCallback> getStateCallback();
	ref<java::util::concurrent::Executor> getExecutor();
	void setInputConfiguration(ref<android::hardware::camera2::params::InputConfiguration> input);
	ref<android::hardware::camera2::params::InputConfiguration> getInputConfiguration();
	void setSessionParameters(ref<android::hardware::camera2::CaptureRequest> params);
	ref<android::hardware::camera2::CaptureRequest> getSessionParameters();

protected:

	SessionConfiguration(handle_type h) : base_(h) {}

};

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#include <scapix/java_api/android/hardware/camera2/CameraCaptureSession_StateCallback.h>
#include <scapix/java_api/android/hardware/camera2/CaptureRequest.h>
#include <scapix/java_api/android/hardware/camera2/params/InputConfiguration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

namespace scapix::java_api {
namespace android::hardware::camera2::params {

inline jint SessionConfiguration::SESSION_HIGH_SPEED_() { return get_static_field<SCAPIX_META_STRING("SESSION_HIGH_SPEED"), jint>(); }
inline jint SessionConfiguration::SESSION_REGULAR_() { return get_static_field<SCAPIX_META_STRING("SESSION_REGULAR"), jint>(); }
inline ref<SessionConfiguration> SessionConfiguration::new_object(jint sessionType, ref<java::util::List> outputs, ref<java::util::concurrent::Executor> executor, ref<android::hardware::camera2::CameraCaptureSession_StateCallback> cb) { return base_::new_object(sessionType, outputs, executor, cb); }
inline jint SessionConfiguration::getSessionType() { return call_method<SCAPIX_META_STRING("getSessionType"), jint>(); }
inline ref<java::util::List> SessionConfiguration::getOutputConfigurations() { return call_method<SCAPIX_META_STRING("getOutputConfigurations"), ref<java::util::List>>(); }
inline ref<android::hardware::camera2::CameraCaptureSession_StateCallback> SessionConfiguration::getStateCallback() { return call_method<SCAPIX_META_STRING("getStateCallback"), ref<android::hardware::camera2::CameraCaptureSession_StateCallback>>(); }
inline ref<java::util::concurrent::Executor> SessionConfiguration::getExecutor() { return call_method<SCAPIX_META_STRING("getExecutor"), ref<java::util::concurrent::Executor>>(); }
inline void SessionConfiguration::setInputConfiguration(ref<android::hardware::camera2::params::InputConfiguration> input) { return call_method<SCAPIX_META_STRING("setInputConfiguration"), void>(input); }
inline ref<android::hardware::camera2::params::InputConfiguration> SessionConfiguration::getInputConfiguration() { return call_method<SCAPIX_META_STRING("getInputConfiguration"), ref<android::hardware::camera2::params::InputConfiguration>>(); }
inline void SessionConfiguration::setSessionParameters(ref<android::hardware::camera2::CaptureRequest> params) { return call_method<SCAPIX_META_STRING("setSessionParameters"), void>(params); }
inline ref<android::hardware::camera2::CaptureRequest> SessionConfiguration::getSessionParameters() { return call_method<SCAPIX_META_STRING("getSessionParameters"), ref<android::hardware::camera2::CaptureRequest>>(); }

} // namespace android::hardware::camera2::params
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_CAMERA2_PARAMS_SESSIONCONFIGURATION_H
