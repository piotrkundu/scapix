// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTPATHPARAMETERS_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTPATHPARAMETERS_H

namespace scapix::java_api {
namespace java::security::cert {

class CertPathParameters : public object_base<SCAPIX_META_STRING("java/security/cert/CertPathParameters"),
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	ref<java::lang::Object> clone();

protected:

	CertPathParameters(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::security::cert {

inline ref<java::lang::Object> CertPathParameters::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTPATHPARAMETERS_H
