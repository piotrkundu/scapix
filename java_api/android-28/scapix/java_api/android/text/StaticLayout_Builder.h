// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_STATICLAYOUT_BUILDER_H
#define SCAPIX_ANDROID_TEXT_STATICLAYOUT_BUILDER_H

namespace scapix::java_api {

namespace android::text { class Layout_Alignment; }
namespace android::text { class StaticLayout; }
namespace android::text { class TextDirectionHeuristic; }
namespace android::text { class TextPaint; }
namespace android::text { class TextUtils_TruncateAt; }
namespace java::lang { class CharSequence; }

namespace android::text {

class StaticLayout_Builder : public object_base<SCAPIX_META_STRING("android/text/StaticLayout$Builder"),
	java::lang::Object>
{
public:

	static ref<android::text::StaticLayout_Builder> obtain(ref<java::lang::CharSequence> source, jint start, jint end, ref<android::text::TextPaint> paint, jint width);
	ref<android::text::StaticLayout_Builder> setText(ref<java::lang::CharSequence> source);
	ref<android::text::StaticLayout_Builder> setAlignment(ref<android::text::Layout_Alignment> alignment);
	ref<android::text::StaticLayout_Builder> setTextDirection(ref<android::text::TextDirectionHeuristic> textDir);
	ref<android::text::StaticLayout_Builder> setLineSpacing(jfloat spacingAdd, jfloat spacingMult);
	ref<android::text::StaticLayout_Builder> setIncludePad(jboolean includePad);
	ref<android::text::StaticLayout_Builder> setUseLineSpacingFromFallbacks(jboolean useLineSpacingFromFallbacks);
	ref<android::text::StaticLayout_Builder> setEllipsizedWidth(jint ellipsizedWidth);
	ref<android::text::StaticLayout_Builder> setEllipsize(ref<android::text::TextUtils_TruncateAt> ellipsize);
	ref<android::text::StaticLayout_Builder> setMaxLines(jint maxLines);
	ref<android::text::StaticLayout_Builder> setBreakStrategy(jint breakStrategy);
	ref<android::text::StaticLayout_Builder> setHyphenationFrequency(jint hyphenationFrequency);
	ref<android::text::StaticLayout_Builder> setIndents(ref<link::java::array<jint>> leftIndents, ref<link::java::array<jint>> rightIndents);
	ref<android::text::StaticLayout_Builder> setJustificationMode(jint justificationMode);
	ref<android::text::StaticLayout> build();

protected:

	StaticLayout_Builder(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/text/Layout_Alignment.h>
#include <scapix/java_api/android/text/StaticLayout.h>
#include <scapix/java_api/android/text/TextDirectionHeuristic.h>
#include <scapix/java_api/android/text/TextPaint.h>
#include <scapix/java_api/android/text/TextUtils_TruncateAt.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::text {

inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::obtain(ref<java::lang::CharSequence> source, jint start, jint end, ref<android::text::TextPaint> paint, jint width) { return call_static_method<SCAPIX_META_STRING("obtain"), ref<android::text::StaticLayout_Builder>>(source, start, end, paint, width); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setText(ref<java::lang::CharSequence> source) { return call_method<SCAPIX_META_STRING("setText"), ref<android::text::StaticLayout_Builder>>(source); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setAlignment(ref<android::text::Layout_Alignment> alignment) { return call_method<SCAPIX_META_STRING("setAlignment"), ref<android::text::StaticLayout_Builder>>(alignment); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setTextDirection(ref<android::text::TextDirectionHeuristic> textDir) { return call_method<SCAPIX_META_STRING("setTextDirection"), ref<android::text::StaticLayout_Builder>>(textDir); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setLineSpacing(jfloat spacingAdd, jfloat spacingMult) { return call_method<SCAPIX_META_STRING("setLineSpacing"), ref<android::text::StaticLayout_Builder>>(spacingAdd, spacingMult); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setIncludePad(jboolean includePad) { return call_method<SCAPIX_META_STRING("setIncludePad"), ref<android::text::StaticLayout_Builder>>(includePad); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setUseLineSpacingFromFallbacks(jboolean useLineSpacingFromFallbacks) { return call_method<SCAPIX_META_STRING("setUseLineSpacingFromFallbacks"), ref<android::text::StaticLayout_Builder>>(useLineSpacingFromFallbacks); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setEllipsizedWidth(jint ellipsizedWidth) { return call_method<SCAPIX_META_STRING("setEllipsizedWidth"), ref<android::text::StaticLayout_Builder>>(ellipsizedWidth); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setEllipsize(ref<android::text::TextUtils_TruncateAt> ellipsize) { return call_method<SCAPIX_META_STRING("setEllipsize"), ref<android::text::StaticLayout_Builder>>(ellipsize); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setMaxLines(jint maxLines) { return call_method<SCAPIX_META_STRING("setMaxLines"), ref<android::text::StaticLayout_Builder>>(maxLines); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setBreakStrategy(jint breakStrategy) { return call_method<SCAPIX_META_STRING("setBreakStrategy"), ref<android::text::StaticLayout_Builder>>(breakStrategy); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setHyphenationFrequency(jint hyphenationFrequency) { return call_method<SCAPIX_META_STRING("setHyphenationFrequency"), ref<android::text::StaticLayout_Builder>>(hyphenationFrequency); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setIndents(ref<link::java::array<jint>> leftIndents, ref<link::java::array<jint>> rightIndents) { return call_method<SCAPIX_META_STRING("setIndents"), ref<android::text::StaticLayout_Builder>>(leftIndents, rightIndents); }
inline ref<android::text::StaticLayout_Builder> StaticLayout_Builder::setJustificationMode(jint justificationMode) { return call_method<SCAPIX_META_STRING("setJustificationMode"), ref<android::text::StaticLayout_Builder>>(justificationMode); }
inline ref<android::text::StaticLayout> StaticLayout_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::text::StaticLayout>>(); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STATICLAYOUT_BUILDER_H
