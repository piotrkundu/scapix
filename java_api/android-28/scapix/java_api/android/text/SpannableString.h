// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/android/text/GetChars.h>
#include <scapix/java_api/android/text/Spannable.h>

#ifndef SCAPIX_ANDROID_TEXT_SPANNABLESTRING_H
#define SCAPIX_ANDROID_TEXT_SPANNABLESTRING_H

namespace scapix::java_api {

namespace java::lang { class Class; }
namespace java::lang { class String; }

namespace android::text {

class SpannableString : public object_base<SCAPIX_META_STRING("android/text/SpannableString"),
	java::lang::Object,
	java::lang::CharSequence,
	android::text::GetChars,
	android::text::Spannable>
{
public:

	static ref<SpannableString> new_object(ref<java::lang::CharSequence> source);
	static ref<android::text::SpannableString> valueOf(ref<java::lang::CharSequence> source);
	void setSpan(ref<java::lang::Object> what, jint start, jint end, jint flags);
	void removeSpan(ref<java::lang::Object> what);
	ref<java::lang::CharSequence> subSequence(jint start, jint end);
	void getChars(jint start, jint end, ref<link::java::array<jchar>> dest, jint off);
	jint length();
	jint getSpanStart(ref<java::lang::Object> what);
	jint getSpanFlags(ref<java::lang::Object> what);
	jint nextSpanTransition(jint start, jint limit, ref<java::lang::Class> kind);
	ref<link::java::array<java::lang::Object>> getSpans(jint queryStart, jint queryEnd, ref<java::lang::Class> kind);
	jint hashCode();
	jboolean equals(ref<java::lang::Object> o);
	jint getSpanEnd(ref<java::lang::Object> what);
	ref<java::lang::String> toString();
	jchar charAt(jint i);

protected:

	SpannableString(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::text {

inline ref<SpannableString> SpannableString::new_object(ref<java::lang::CharSequence> source) { return base_::new_object(source); }
inline ref<android::text::SpannableString> SpannableString::valueOf(ref<java::lang::CharSequence> source) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::text::SpannableString>>(source); }
inline void SpannableString::setSpan(ref<java::lang::Object> what, jint start, jint end, jint flags) { return call_method<SCAPIX_META_STRING("setSpan"), void>(what, start, end, flags); }
inline void SpannableString::removeSpan(ref<java::lang::Object> what) { return call_method<SCAPIX_META_STRING("removeSpan"), void>(what); }
inline ref<java::lang::CharSequence> SpannableString::subSequence(jint start, jint end) { return call_method<SCAPIX_META_STRING("subSequence"), ref<java::lang::CharSequence>>(start, end); }
inline void SpannableString::getChars(jint start, jint end, ref<link::java::array<jchar>> dest, jint off) { return call_method<SCAPIX_META_STRING("getChars"), void>(start, end, dest, off); }
inline jint SpannableString::length() { return call_method<SCAPIX_META_STRING("length"), jint>(); }
inline jint SpannableString::getSpanStart(ref<java::lang::Object> what) { return call_method<SCAPIX_META_STRING("getSpanStart"), jint>(what); }
inline jint SpannableString::getSpanFlags(ref<java::lang::Object> what) { return call_method<SCAPIX_META_STRING("getSpanFlags"), jint>(what); }
inline jint SpannableString::nextSpanTransition(jint start, jint limit, ref<java::lang::Class> kind) { return call_method<SCAPIX_META_STRING("nextSpanTransition"), jint>(start, limit, kind); }
inline ref<link::java::array<java::lang::Object>> SpannableString::getSpans(jint queryStart, jint queryEnd, ref<java::lang::Class> kind) { return call_method<SCAPIX_META_STRING("getSpans"), ref<link::java::array<java::lang::Object>>>(queryStart, queryEnd, kind); }
inline jint SpannableString::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean SpannableString::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint SpannableString::getSpanEnd(ref<java::lang::Object> what) { return call_method<SCAPIX_META_STRING("getSpanEnd"), jint>(what); }
inline ref<java::lang::String> SpannableString::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline jchar SpannableString::charAt(jint i) { return call_method<SCAPIX_META_STRING("charAt"), jchar>(i); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_SPANNABLESTRING_H
