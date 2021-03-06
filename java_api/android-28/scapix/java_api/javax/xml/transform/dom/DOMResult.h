// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/transform/Result.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_DOM_DOMRESULT_H
#define SCAPIX_JAVAX_XML_TRANSFORM_DOM_DOMRESULT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace org::w3c::dom { class Node; }

namespace javax::xml::transform::dom {

class DOMResult : public object_base<SCAPIX_META_STRING("javax/xml/transform/dom/DOMResult"),
	java::lang::Object,
	javax::xml::transform::Result>
{
public:

	static ref<java::lang::String> FEATURE_();

	static ref<DOMResult> new_object();
	static ref<DOMResult> new_object(ref<org::w3c::dom::Node> node);
	static ref<DOMResult> new_object(ref<org::w3c::dom::Node> node, ref<java::lang::String> systemId);
	static ref<DOMResult> new_object(ref<org::w3c::dom::Node> node, ref<org::w3c::dom::Node> nextSibling);
	static ref<DOMResult> new_object(ref<org::w3c::dom::Node> node, ref<org::w3c::dom::Node> nextSibling, ref<java::lang::String> systemId);
	void setNode(ref<org::w3c::dom::Node> node);
	ref<org::w3c::dom::Node> getNode();
	void setNextSibling(ref<org::w3c::dom::Node> nextSibling);
	ref<org::w3c::dom::Node> getNextSibling();
	void setSystemId(ref<java::lang::String> systemId);
	ref<java::lang::String> getSystemId();

protected:

	DOMResult(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform::dom
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

namespace scapix::java_api {
namespace javax::xml::transform::dom {

inline ref<java::lang::String> DOMResult::FEATURE_() { return get_static_field<SCAPIX_META_STRING("FEATURE"), ref<java::lang::String>>(); }
inline ref<DOMResult> DOMResult::new_object() { return base_::new_object(); }
inline ref<DOMResult> DOMResult::new_object(ref<org::w3c::dom::Node> node) { return base_::new_object(node); }
inline ref<DOMResult> DOMResult::new_object(ref<org::w3c::dom::Node> node, ref<java::lang::String> systemId) { return base_::new_object(node, systemId); }
inline ref<DOMResult> DOMResult::new_object(ref<org::w3c::dom::Node> node, ref<org::w3c::dom::Node> nextSibling) { return base_::new_object(node, nextSibling); }
inline ref<DOMResult> DOMResult::new_object(ref<org::w3c::dom::Node> node, ref<org::w3c::dom::Node> nextSibling, ref<java::lang::String> systemId) { return base_::new_object(node, nextSibling, systemId); }
inline void DOMResult::setNode(ref<org::w3c::dom::Node> node) { return call_method<SCAPIX_META_STRING("setNode"), void>(node); }
inline ref<org::w3c::dom::Node> DOMResult::getNode() { return call_method<SCAPIX_META_STRING("getNode"), ref<org::w3c::dom::Node>>(); }
inline void DOMResult::setNextSibling(ref<org::w3c::dom::Node> nextSibling) { return call_method<SCAPIX_META_STRING("setNextSibling"), void>(nextSibling); }
inline ref<org::w3c::dom::Node> DOMResult::getNextSibling() { return call_method<SCAPIX_META_STRING("getNextSibling"), ref<org::w3c::dom::Node>>(); }
inline void DOMResult::setSystemId(ref<java::lang::String> systemId) { return call_method<SCAPIX_META_STRING("setSystemId"), void>(systemId); }
inline ref<java::lang::String> DOMResult::getSystemId() { return call_method<SCAPIX_META_STRING("getSystemId"), ref<java::lang::String>>(); }

} // namespace javax::xml::transform::dom
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_DOM_DOMRESULT_H
