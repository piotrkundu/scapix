// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ORG_XML_SAX_XMLREADER_H
#define SCAPIX_ORG_XML_SAX_XMLREADER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::xml::sax { class ContentHandler; }
namespace org::xml::sax { class DTDHandler; }
namespace org::xml::sax { class EntityResolver; }
namespace org::xml::sax { class ErrorHandler; }
namespace org::xml::sax { class InputSource; }

namespace org::xml::sax {

class XMLReader : public object_base<SCAPIX_META_STRING("org/xml/sax/XMLReader"),
	java::lang::Object>
{
public:

	jboolean getFeature(ref<java::lang::String> p1);
	void setFeature(ref<java::lang::String> p1, jboolean p2);
	ref<java::lang::Object> getProperty(ref<java::lang::String> p1);
	void setProperty(ref<java::lang::String> p1, ref<java::lang::Object> p2);
	void setEntityResolver(ref<org::xml::sax::EntityResolver> p1);
	ref<org::xml::sax::EntityResolver> getEntityResolver();
	void setDTDHandler(ref<org::xml::sax::DTDHandler> p1);
	ref<org::xml::sax::DTDHandler> getDTDHandler();
	void setContentHandler(ref<org::xml::sax::ContentHandler> p1);
	ref<org::xml::sax::ContentHandler> getContentHandler();
	void setErrorHandler(ref<org::xml::sax::ErrorHandler> p1);
	ref<org::xml::sax::ErrorHandler> getErrorHandler();
	void parse(ref<org::xml::sax::InputSource> p1);
	void parse(ref<java::lang::String> p1);

protected:

	XMLReader(handle_type h) : base_(h) {}

};

} // namespace org::xml::sax
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>

namespace scapix::java_api {
namespace org::xml::sax {

inline jboolean XMLReader::getFeature(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getFeature"), jboolean>(p1); }
inline void XMLReader::setFeature(ref<java::lang::String> p1, jboolean p2) { return call_method<SCAPIX_META_STRING("setFeature"), void>(p1, p2); }
inline ref<java::lang::Object> XMLReader::getProperty(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getProperty"), ref<java::lang::Object>>(p1); }
inline void XMLReader::setProperty(ref<java::lang::String> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("setProperty"), void>(p1, p2); }
inline void XMLReader::setEntityResolver(ref<org::xml::sax::EntityResolver> p1) { return call_method<SCAPIX_META_STRING("setEntityResolver"), void>(p1); }
inline ref<org::xml::sax::EntityResolver> XMLReader::getEntityResolver() { return call_method<SCAPIX_META_STRING("getEntityResolver"), ref<org::xml::sax::EntityResolver>>(); }
inline void XMLReader::setDTDHandler(ref<org::xml::sax::DTDHandler> p1) { return call_method<SCAPIX_META_STRING("setDTDHandler"), void>(p1); }
inline ref<org::xml::sax::DTDHandler> XMLReader::getDTDHandler() { return call_method<SCAPIX_META_STRING("getDTDHandler"), ref<org::xml::sax::DTDHandler>>(); }
inline void XMLReader::setContentHandler(ref<org::xml::sax::ContentHandler> p1) { return call_method<SCAPIX_META_STRING("setContentHandler"), void>(p1); }
inline ref<org::xml::sax::ContentHandler> XMLReader::getContentHandler() { return call_method<SCAPIX_META_STRING("getContentHandler"), ref<org::xml::sax::ContentHandler>>(); }
inline void XMLReader::setErrorHandler(ref<org::xml::sax::ErrorHandler> p1) { return call_method<SCAPIX_META_STRING("setErrorHandler"), void>(p1); }
inline ref<org::xml::sax::ErrorHandler> XMLReader::getErrorHandler() { return call_method<SCAPIX_META_STRING("getErrorHandler"), ref<org::xml::sax::ErrorHandler>>(); }
inline void XMLReader::parse(ref<org::xml::sax::InputSource> p1) { return call_method<SCAPIX_META_STRING("parse"), void>(p1); }
inline void XMLReader::parse(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("parse"), void>(p1); }

} // namespace org::xml::sax
} // namespace scapix::java_api

#endif // SCAPIX_ORG_XML_SAX_XMLREADER_H
