// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER_H
#define SCAPIX_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER_H

namespace scapix::java_api {

namespace android::database { class Cursor; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class SimpleCursorAdapter_CursorToStringConverter : public object_base<SCAPIX_META_STRING("android/widget/SimpleCursorAdapter$CursorToStringConverter"),
	java::lang::Object>
{
public:

	ref<java::lang::CharSequence> convertToString(ref<android::database::Cursor> p1);

protected:

	SimpleCursorAdapter_CursorToStringConverter(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<java::lang::CharSequence> SimpleCursorAdapter_CursorToStringConverter::convertToString(ref<android::database::Cursor> p1) { return call_method<SCAPIX_META_STRING("convertToString"), ref<java::lang::CharSequence>>(p1); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER_H
