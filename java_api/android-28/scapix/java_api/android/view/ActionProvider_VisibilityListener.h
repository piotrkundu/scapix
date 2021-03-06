// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_VIEW_ACTIONPROVIDER_VISIBILITYLISTENER_H
#define SCAPIX_ANDROID_VIEW_ACTIONPROVIDER_VISIBILITYLISTENER_H

namespace scapix::java_api {


namespace android::view {

class ActionProvider_VisibilityListener : public object_base<SCAPIX_META_STRING("android/view/ActionProvider$VisibilityListener"),
	java::lang::Object>
{
public:

	void onActionProviderVisibilityChanged(jboolean p1);

protected:

	ActionProvider_VisibilityListener(handle_type h) : base_(h) {}

};

} // namespace android::view
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::view {

inline void ActionProvider_VisibilityListener::onActionProviderVisibilityChanged(jboolean p1) { return call_method<SCAPIX_META_STRING("onActionProviderVisibilityChanged"), void>(p1); }

} // namespace android::view
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_VIEW_ACTIONPROVIDER_VISIBILITYLISTENER_H
