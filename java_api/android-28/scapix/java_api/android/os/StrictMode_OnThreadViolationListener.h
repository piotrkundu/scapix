// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OS_STRICTMODE_ONTHREADVIOLATIONLISTENER_H
#define SCAPIX_ANDROID_OS_STRICTMODE_ONTHREADVIOLATIONLISTENER_H

namespace scapix::java_api {

namespace android::os::strictmode { class Violation; }

namespace android::os {

class StrictMode_OnThreadViolationListener : public object_base<SCAPIX_META_STRING("android/os/StrictMode$OnThreadViolationListener"),
	java::lang::Object>
{
public:

	void onThreadViolation(ref<android::os::strictmode::Violation> p1);

protected:

	StrictMode_OnThreadViolationListener(handle_type h) : base_(h) {}

};

} // namespace android::os
} // namespace scapix::java_api

#include <scapix/java_api/android/os/strictmode/Violation.h>

namespace scapix::java_api {
namespace android::os {

inline void StrictMode_OnThreadViolationListener::onThreadViolation(ref<android::os::strictmode::Violation> p1) { return call_method<SCAPIX_META_STRING("onThreadViolation"), void>(p1); }

} // namespace android::os
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OS_STRICTMODE_ONTHREADVIOLATIONLISTENER_H
