// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/android/icu/util/Freezable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_DATEINTERVALINFO_H
#define SCAPIX_ANDROID_ICU_TEXT_DATEINTERVALINFO_H

namespace scapix::java_api {

namespace android::icu::text { class DateIntervalInfo_PatternInfo; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class String; }
namespace java::util { class Locale; }

namespace android::icu::text {

class DateIntervalInfo : public object_base<SCAPIX_META_STRING("android/icu/text/DateIntervalInfo"),
	java::lang::Object,
	java::lang::Cloneable,
	android::icu::util::Freezable,
	java::io::Serializable>
{
public:

	using PatternInfo = DateIntervalInfo_PatternInfo;

	static ref<DateIntervalInfo> new_object(ref<android::icu::util::ULocale> locale);
	static ref<DateIntervalInfo> new_object(ref<java::util::Locale> locale);
	void setIntervalPattern(ref<java::lang::String> skeleton, jint lrgDiffCalUnit, ref<java::lang::String> intervalPattern);
	ref<android::icu::text::DateIntervalInfo_PatternInfo> getIntervalPattern(ref<java::lang::String> skeleton, jint field);
	ref<java::lang::String> getFallbackIntervalPattern();
	void setFallbackIntervalPattern(ref<java::lang::String> fallbackPattern);
	jboolean getDefaultOrder();
	ref<java::lang::Object> clone();
	jboolean isFrozen();
	ref<android::icu::text::DateIntervalInfo> freeze();
	ref<android::icu::text::DateIntervalInfo> cloneAsThawed();
	jboolean equals(ref<java::lang::Object> a);
	jint hashCode();

protected:

	DateIntervalInfo(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/DateIntervalInfo_PatternInfo.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<DateIntervalInfo> DateIntervalInfo::new_object(ref<android::icu::util::ULocale> locale) { return base_::new_object(locale); }
inline ref<DateIntervalInfo> DateIntervalInfo::new_object(ref<java::util::Locale> locale) { return base_::new_object(locale); }
inline void DateIntervalInfo::setIntervalPattern(ref<java::lang::String> skeleton, jint lrgDiffCalUnit, ref<java::lang::String> intervalPattern) { return call_method<SCAPIX_META_STRING("setIntervalPattern"), void>(skeleton, lrgDiffCalUnit, intervalPattern); }
inline ref<android::icu::text::DateIntervalInfo_PatternInfo> DateIntervalInfo::getIntervalPattern(ref<java::lang::String> skeleton, jint field) { return call_method<SCAPIX_META_STRING("getIntervalPattern"), ref<android::icu::text::DateIntervalInfo_PatternInfo>>(skeleton, field); }
inline ref<java::lang::String> DateIntervalInfo::getFallbackIntervalPattern() { return call_method<SCAPIX_META_STRING("getFallbackIntervalPattern"), ref<java::lang::String>>(); }
inline void DateIntervalInfo::setFallbackIntervalPattern(ref<java::lang::String> fallbackPattern) { return call_method<SCAPIX_META_STRING("setFallbackIntervalPattern"), void>(fallbackPattern); }
inline jboolean DateIntervalInfo::getDefaultOrder() { return call_method<SCAPIX_META_STRING("getDefaultOrder"), jboolean>(); }
inline ref<java::lang::Object> DateIntervalInfo::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline jboolean DateIntervalInfo::isFrozen() { return call_method<SCAPIX_META_STRING("isFrozen"), jboolean>(); }
inline ref<android::icu::text::DateIntervalInfo> DateIntervalInfo::freeze() { return call_method<SCAPIX_META_STRING("freeze"), ref<android::icu::text::DateIntervalInfo>>(); }
inline ref<android::icu::text::DateIntervalInfo> DateIntervalInfo::cloneAsThawed() { return call_method<SCAPIX_META_STRING("cloneAsThawed"), ref<android::icu::text::DateIntervalInfo>>(); }
inline jboolean DateIntervalInfo::equals(ref<java::lang::Object> a) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(a); }
inline jint DateIntervalInfo::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_DATEINTERVALINFO_H
