// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_CROSSPROFILEAPPS_H
#define SCAPIX_ANDROID_CONTENT_PM_CROSSPROFILEAPPS_H

namespace scapix::java_api {

namespace android::content { class ComponentName; }
namespace android::graphics::drawable { class Drawable; }
namespace android::os { class UserHandle; }
namespace java::lang { class CharSequence; }
namespace java::util { class List; }

namespace android::content::pm {

class CrossProfileApps : public object_base<SCAPIX_META_STRING("android/content/pm/CrossProfileApps"),
	java::lang::Object>
{
public:

	void startMainActivity(ref<android::content::ComponentName> component, ref<android::os::UserHandle> targetUser);
	ref<java::util::List> getTargetUserProfiles();
	ref<java::lang::CharSequence> getProfileSwitchingLabel(ref<android::os::UserHandle> userHandle);
	ref<android::graphics::drawable::Drawable> getProfileSwitchingIconDrawable(ref<android::os::UserHandle> userHandle);

protected:

	CrossProfileApps(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace android::content::pm {

inline void CrossProfileApps::startMainActivity(ref<android::content::ComponentName> component, ref<android::os::UserHandle> targetUser) { return call_method<SCAPIX_META_STRING("startMainActivity"), void>(component, targetUser); }
inline ref<java::util::List> CrossProfileApps::getTargetUserProfiles() { return call_method<SCAPIX_META_STRING("getTargetUserProfiles"), ref<java::util::List>>(); }
inline ref<java::lang::CharSequence> CrossProfileApps::getProfileSwitchingLabel(ref<android::os::UserHandle> userHandle) { return call_method<SCAPIX_META_STRING("getProfileSwitchingLabel"), ref<java::lang::CharSequence>>(userHandle); }
inline ref<android::graphics::drawable::Drawable> CrossProfileApps::getProfileSwitchingIconDrawable(ref<android::os::UserHandle> userHandle) { return call_method<SCAPIX_META_STRING("getProfileSwitchingIconDrawable"), ref<android::graphics::drawable::Drawable>>(userHandle); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_CROSSPROFILEAPPS_H
