// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMER_H
#define SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::util { class Properties; }
namespace javax::xml::transform { class ErrorListener; }
namespace javax::xml::transform { class Result; }
namespace javax::xml::transform { class Source; }
namespace javax::xml::transform { class URIResolver; }

namespace javax::xml::transform {

class Transformer : public object_base<SCAPIX_META_STRING("javax/xml/transform/Transformer"),
	java::lang::Object>
{
public:

	void reset();
	void transform(ref<javax::xml::transform::Source> p1, ref<javax::xml::transform::Result> p2);
	void setParameter(ref<java::lang::String> p1, ref<java::lang::Object> p2);
	ref<java::lang::Object> getParameter(ref<java::lang::String> p1);
	void clearParameters();
	void setURIResolver(ref<javax::xml::transform::URIResolver> p1);
	ref<javax::xml::transform::URIResolver> getURIResolver();
	void setOutputProperties(ref<java::util::Properties> p1);
	ref<java::util::Properties> getOutputProperties();
	void setOutputProperty(ref<java::lang::String> p1, ref<java::lang::String> p2);
	ref<java::lang::String> getOutputProperty(ref<java::lang::String> p1);
	void setErrorListener(ref<javax::xml::transform::ErrorListener> p1);
	ref<javax::xml::transform::ErrorListener> getErrorListener();

protected:

	Transformer(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/javax/xml/transform/ErrorListener.h>
#include <scapix/java_api/javax/xml/transform/Result.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/javax/xml/transform/URIResolver.h>

namespace scapix::java_api {
namespace javax::xml::transform {

inline void Transformer::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline void Transformer::transform(ref<javax::xml::transform::Source> p1, ref<javax::xml::transform::Result> p2) { return call_method<SCAPIX_META_STRING("transform"), void>(p1, p2); }
inline void Transformer::setParameter(ref<java::lang::String> p1, ref<java::lang::Object> p2) { return call_method<SCAPIX_META_STRING("setParameter"), void>(p1, p2); }
inline ref<java::lang::Object> Transformer::getParameter(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getParameter"), ref<java::lang::Object>>(p1); }
inline void Transformer::clearParameters() { return call_method<SCAPIX_META_STRING("clearParameters"), void>(); }
inline void Transformer::setURIResolver(ref<javax::xml::transform::URIResolver> p1) { return call_method<SCAPIX_META_STRING("setURIResolver"), void>(p1); }
inline ref<javax::xml::transform::URIResolver> Transformer::getURIResolver() { return call_method<SCAPIX_META_STRING("getURIResolver"), ref<javax::xml::transform::URIResolver>>(); }
inline void Transformer::setOutputProperties(ref<java::util::Properties> p1) { return call_method<SCAPIX_META_STRING("setOutputProperties"), void>(p1); }
inline ref<java::util::Properties> Transformer::getOutputProperties() { return call_method<SCAPIX_META_STRING("getOutputProperties"), ref<java::util::Properties>>(); }
inline void Transformer::setOutputProperty(ref<java::lang::String> p1, ref<java::lang::String> p2) { return call_method<SCAPIX_META_STRING("setOutputProperty"), void>(p1, p2); }
inline ref<java::lang::String> Transformer::getOutputProperty(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("getOutputProperty"), ref<java::lang::String>>(p1); }
inline void Transformer::setErrorListener(ref<javax::xml::transform::ErrorListener> p1) { return call_method<SCAPIX_META_STRING("setErrorListener"), void>(p1); }
inline ref<javax::xml::transform::ErrorListener> Transformer::getErrorListener() { return call_method<SCAPIX_META_STRING("getErrorListener"), ref<javax::xml::transform::ErrorListener>>(); }

} // namespace javax::xml::transform
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMER_H
