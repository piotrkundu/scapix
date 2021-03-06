// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/CalendarContract_EventDaysColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYS_H

namespace scapix::java_api {

namespace android::content { class ContentResolver; }
namespace android::database { class Cursor; }
namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class CalendarContract_EventDays : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$EventDays"),
	java::lang::Object,
	android::provider::CalendarContract_EventDaysColumns>
{
public:

	static ref<android::net::Uri> CONTENT_URI_();

	static ref<android::database::Cursor> query(ref<android::content::ContentResolver> cr, jint startDay, jint numDays, ref<link::java::array<java::lang::String>> projection);

protected:

	CalendarContract_EventDays(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentResolver.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> CalendarContract_EventDays::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }
inline ref<android::database::Cursor> CalendarContract_EventDays::query(ref<android::content::ContentResolver> cr, jint startDay, jint numDays, ref<link::java::array<java::lang::String>> projection) { return call_static_method<SCAPIX_META_STRING("query"), ref<android::database::Cursor>>(cr, startDay, numDays, projection); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_EVENTDAYS_H
