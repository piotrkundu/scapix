// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/TextView.h>

#ifndef SCAPIX_ANDROID_WIDGET_DIGITALCLOCK_H
#define SCAPIX_ANDROID_WIDGET_DIGITALCLOCK_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class DigitalClock : public object_base<SCAPIX_META_STRING("android/widget/DigitalClock"),
	android::widget::TextView>
{
public:

	static ref<DigitalClock> new_object(ref<android::content::Context> context);
	static ref<DigitalClock> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	ref<java::lang::CharSequence> getAccessibilityClassName();

protected:

	DigitalClock(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<DigitalClock> DigitalClock::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<DigitalClock> DigitalClock::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline ref<java::lang::CharSequence> DigitalClock::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_DIGITALCLOCK_H
