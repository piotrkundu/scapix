// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEUNIT_H
#define SCAPIX_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEUNIT_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::icu::text {

class RelativeDateTimeFormatter_RelativeUnit : public object_base<SCAPIX_META_STRING("android/icu/text/RelativeDateTimeFormatter$RelativeUnit"),
	java::lang::Enum>
{
public:

	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> SECONDS_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> MINUTES_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> HOURS_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> DAYS_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> WEEKS_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> MONTHS_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> YEARS_();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> QUARTERS_();

	static ref<link::java::array<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>> values();
	static ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> valueOf(ref<java::lang::String> name);

protected:

	RelativeDateTimeFormatter_RelativeUnit(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::SECONDS_() { return get_static_field<SCAPIX_META_STRING("SECONDS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::MINUTES_() { return get_static_field<SCAPIX_META_STRING("MINUTES"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::HOURS_() { return get_static_field<SCAPIX_META_STRING("HOURS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::DAYS_() { return get_static_field<SCAPIX_META_STRING("DAYS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::WEEKS_() { return get_static_field<SCAPIX_META_STRING("WEEKS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::MONTHS_() { return get_static_field<SCAPIX_META_STRING("MONTHS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::YEARS_() { return get_static_field<SCAPIX_META_STRING("YEARS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::QUARTERS_() { return get_static_field<SCAPIX_META_STRING("QUARTERS"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(); }
inline ref<link::java::array<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>> RelativeDateTimeFormatter_RelativeUnit::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>>(); }
inline ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit> RelativeDateTimeFormatter_RelativeUnit::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::icu::text::RelativeDateTimeFormatter_RelativeUnit>>(name); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_RELATIVEDATETIMEFORMATTER_RELATIVEUNIT_H
