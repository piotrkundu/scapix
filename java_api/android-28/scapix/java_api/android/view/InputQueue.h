// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_INPUTQUEUE_H
#define SCAPIX_ANDROID_VIEW_INPUTQUEUE_H

namespace scapix::java_api {

namespace android::view { class InputQueue_Callback; }

namespace android::view {

class InputQueue : public object_base<SCAPIX_META_STRING("android/view/InputQueue"),
	java::lang::Object>
{
public:

	using Callback = InputQueue_Callback;


protected:

	InputQueue(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::view {


} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_INPUTQUEUE_H
