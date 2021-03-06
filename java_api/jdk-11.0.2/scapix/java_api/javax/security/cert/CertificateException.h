// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVAX_SECURITY_CERT_CERTIFICATEEXCEPTION_H
#define SCAPIX_JAVAX_SECURITY_CERT_CERTIFICATEEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::security::cert {

class CertificateException : public object_base<SCAPIX_META_STRING("javax/security/cert/CertificateException"),
	java::lang::Exception>
{
public:

	static ref<CertificateException> new_object();
	static ref<CertificateException> new_object(ref<java::lang::String> msg);

protected:

	CertificateException(handle_type h) : base_(h) {}

};

} // namespace javax::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::security::cert {

inline ref<CertificateException> CertificateException::new_object() { return base_::new_object(); }
inline ref<CertificateException> CertificateException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }

} // namespace javax::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_CERT_CERTIFICATEEXCEPTION_H
