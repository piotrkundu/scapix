// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_TEXT_HTML_TAGHANDLER_H
#define SCAPIX_ANDROID_TEXT_HTML_TAGHANDLER_H

namespace scapix::java_api {

namespace android::text { class Editable; }
namespace java::lang { class String; }
namespace org::xml::sax { class XMLReader; }

namespace android::text {

class Html_TagHandler : public object_base<SCAPIX_META_STRING("android/text/Html$TagHandler"),
	java::lang::Object>
{
public:

	void handleTag(jboolean p1, ref<java::lang::String> p2, ref<android::text::Editable> p3, ref<org::xml::sax::XMLReader> p4);

protected:

	Html_TagHandler(handle_type h) : base_(h) {}

};

} // namespace android::text
} // namespace scapix::java_api

#include <scapix/java_api/android/text/Editable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>

namespace scapix::java_api {
namespace android::text {

inline void Html_TagHandler::handleTag(jboolean p1, ref<java::lang::String> p2, ref<android::text::Editable> p3, ref<org::xml::sax::XMLReader> p4) { return call_method<SCAPIX_META_STRING("handleTag"), void>(p1, p2, p3, p4); }

} // namespace android::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_HTML_TAGHANDLER_H
