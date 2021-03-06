// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/app/Notification_Extender.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_CAREXTENDER_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_CAREXTENDER_H

namespace scapix::java_api {

namespace android::app { class Notification; }
namespace android::app { class Notification_Builder; }
namespace android::app { class Notification_CarExtender_UnreadConversation; }
namespace android::graphics { class Bitmap; }
namespace android::app { class Notification_CarExtender_Builder; }

namespace android::app {

class Notification_CarExtender : public object_base<SCAPIX_META_STRING("android/app/Notification$CarExtender"),
	java::lang::Object,
	android::app::Notification_Extender>
{
public:

	using UnreadConversation = Notification_CarExtender_UnreadConversation;
	using Builder = Notification_CarExtender_Builder;

	static ref<Notification_CarExtender> new_object();
	static ref<Notification_CarExtender> new_object(ref<android::app::Notification> notif);
	ref<android::app::Notification_Builder> extend(ref<android::app::Notification_Builder> builder);
	ref<android::app::Notification_CarExtender> setColor(jint color);
	jint getColor();
	ref<android::app::Notification_CarExtender> setLargeIcon(ref<android::graphics::Bitmap> largeIcon);
	ref<android::graphics::Bitmap> getLargeIcon();
	ref<android::app::Notification_CarExtender> setUnreadConversation(ref<android::app::Notification_CarExtender_UnreadConversation> unreadConversation);
	ref<android::app::Notification_CarExtender_UnreadConversation> getUnreadConversation();

protected:

	Notification_CarExtender(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/Notification_Builder.h>
#include <scapix/java_api/android/app/Notification_CarExtender_UnreadConversation.h>
#include <scapix/java_api/android/graphics/Bitmap.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Notification_CarExtender> Notification_CarExtender::new_object() { return base_::new_object(); }
inline ref<Notification_CarExtender> Notification_CarExtender::new_object(ref<android::app::Notification> notif) { return base_::new_object(notif); }
inline ref<android::app::Notification_Builder> Notification_CarExtender::extend(ref<android::app::Notification_Builder> builder) { return call_method<SCAPIX_META_STRING("extend"), ref<android::app::Notification_Builder>>(builder); }
inline ref<android::app::Notification_CarExtender> Notification_CarExtender::setColor(jint color) { return call_method<SCAPIX_META_STRING("setColor"), ref<android::app::Notification_CarExtender>>(color); }
inline jint Notification_CarExtender::getColor() { return call_method<SCAPIX_META_STRING("getColor"), jint>(); }
inline ref<android::app::Notification_CarExtender> Notification_CarExtender::setLargeIcon(ref<android::graphics::Bitmap> largeIcon) { return call_method<SCAPIX_META_STRING("setLargeIcon"), ref<android::app::Notification_CarExtender>>(largeIcon); }
inline ref<android::graphics::Bitmap> Notification_CarExtender::getLargeIcon() { return call_method<SCAPIX_META_STRING("getLargeIcon"), ref<android::graphics::Bitmap>>(); }
inline ref<android::app::Notification_CarExtender> Notification_CarExtender::setUnreadConversation(ref<android::app::Notification_CarExtender_UnreadConversation> unreadConversation) { return call_method<SCAPIX_META_STRING("setUnreadConversation"), ref<android::app::Notification_CarExtender>>(unreadConversation); }
inline ref<android::app::Notification_CarExtender_UnreadConversation> Notification_CarExtender::getUnreadConversation() { return call_method<SCAPIX_META_STRING("getUnreadConversation"), ref<android::app::Notification_CarExtender_UnreadConversation>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_CAREXTENDER_H
