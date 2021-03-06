// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC_H
#define SCAPIX_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security::spec {

class EncodedKeySpec : public object_base<SCAPIX_META_STRING("java/security/spec/EncodedKeySpec"),
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static ref<EncodedKeySpec> new_object(ref<link::java::array<jbyte>> encodedKey);
	ref<java::lang::String> getAlgorithm();
	ref<link::java::array<jbyte>> getEncoded();
	ref<java::lang::String> getFormat();

protected:

	EncodedKeySpec(handle_type h) : base_(h) {}

};

} // namespace java::security::spec
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security::spec {

inline ref<EncodedKeySpec> EncodedKeySpec::new_object(ref<link::java::array<jbyte>> encodedKey) { return base_::new_object(encodedKey); }
inline ref<java::lang::String> EncodedKeySpec::getAlgorithm() { return call_method<SCAPIX_META_STRING("getAlgorithm"), ref<java::lang::String>>(); }
inline ref<link::java::array<jbyte>> EncodedKeySpec::getEncoded() { return call_method<SCAPIX_META_STRING("getEncoded"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> EncodedKeySpec::getFormat() { return call_method<SCAPIX_META_STRING("getFormat"), ref<java::lang::String>>(); }

} // namespace java::security::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC_H
