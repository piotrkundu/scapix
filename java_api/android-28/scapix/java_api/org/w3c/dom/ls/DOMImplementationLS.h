// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_H
#define SCAPIX_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::w3c::dom::ls { class LSInput; }
namespace org::w3c::dom::ls { class LSOutput; }
namespace org::w3c::dom::ls { class LSParser; }
namespace org::w3c::dom::ls { class LSSerializer; }

namespace org::w3c::dom::ls {

class DOMImplementationLS : public object_base<SCAPIX_META_STRING("org/w3c/dom/ls/DOMImplementationLS"),
	java::lang::Object>
{
public:

	static jshort MODE_ASYNCHRONOUS_();
	static jshort MODE_SYNCHRONOUS_();

	ref<org::w3c::dom::ls::LSParser> createLSParser(jshort p1, ref<java::lang::String> p2);
	ref<org::w3c::dom::ls::LSSerializer> createLSSerializer();
	ref<org::w3c::dom::ls::LSInput> createLSInput();
	ref<org::w3c::dom::ls::LSOutput> createLSOutput();

protected:

	DOMImplementationLS(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom::ls
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSOutput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSParser.h>
#include <scapix/java_api/org/w3c/dom/ls/LSSerializer.h>

namespace scapix::java_api {
namespace org::w3c::dom::ls {

inline jshort DOMImplementationLS::MODE_ASYNCHRONOUS_() { return get_static_field<SCAPIX_META_STRING("MODE_ASYNCHRONOUS"), jshort>(); }
inline jshort DOMImplementationLS::MODE_SYNCHRONOUS_() { return get_static_field<SCAPIX_META_STRING("MODE_SYNCHRONOUS"), jshort>(); }
inline ref<org::w3c::dom::ls::LSParser> DOMImplementationLS::createLSParser(jshort p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("createLSParser"), ref<org::w3c::dom::ls::LSParser>>(p1, p2); }
inline ref<org::w3c::dom::ls::LSSerializer> DOMImplementationLS::createLSSerializer() { return call_method<SCAPIX_META_STRING("createLSSerializer"), ref<org::w3c::dom::ls::LSSerializer>>(); }
inline ref<org::w3c::dom::ls::LSInput> DOMImplementationLS::createLSInput() { return call_method<SCAPIX_META_STRING("createLSInput"), ref<org::w3c::dom::ls::LSInput>>(); }
inline ref<org::w3c::dom::ls::LSOutput> DOMImplementationLS::createLSOutput() { return call_method<SCAPIX_META_STRING("createLSOutput"), ref<org::w3c::dom::ls::LSOutput>>(); }

} // namespace org::w3c::dom::ls
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_H
