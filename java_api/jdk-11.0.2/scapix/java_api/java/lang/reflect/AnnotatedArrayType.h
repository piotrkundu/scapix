// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>

#ifndef SCAPIX_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE_H
#define SCAPIX_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE_H

namespace scapix::java_api {
namespace java::lang::reflect {

class AnnotatedArrayType : public object_base<SCAPIX_META_STRING("java/lang/reflect/AnnotatedArrayType"),
	java::lang::Object,
	java::lang::reflect::AnnotatedType>
{
public:

	ref<java::lang::reflect::AnnotatedType> getAnnotatedGenericComponentType();
	ref<java::lang::reflect::AnnotatedType> getAnnotatedOwnerType();

protected:

	AnnotatedArrayType(handle_type h) : base_(h) {}

};

} // namespace java::lang::reflect
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::lang::reflect {

inline ref<java::lang::reflect::AnnotatedType> AnnotatedArrayType::getAnnotatedGenericComponentType() { return call_method<SCAPIX_META_STRING("getAnnotatedGenericComponentType"), ref<java::lang::reflect::AnnotatedType>>(); }
inline ref<java::lang::reflect::AnnotatedType> AnnotatedArrayType::getAnnotatedOwnerType() { return call_method<SCAPIX_META_STRING("getAnnotatedOwnerType"), ref<java::lang::reflect::AnnotatedType>>(); }

} // namespace java::lang::reflect
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_REFLECT_ANNOTATEDARRAYTYPE_H
