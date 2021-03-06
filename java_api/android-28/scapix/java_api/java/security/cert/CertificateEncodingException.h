// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/CertificateException.h>

#ifndef SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_H
#define SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::security::cert {

class CertificateEncodingException : public object_base<SCAPIX_META_STRING("java/security/cert/CertificateEncodingException"),
	java::security::cert::CertificateException>
{
public:

	static ref<CertificateEncodingException> new_object();
	static ref<CertificateEncodingException> new_object(ref<java::lang::String> message);
	static ref<CertificateEncodingException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause);
	static ref<CertificateEncodingException> new_object(ref<java::lang::Throwable> cause);

protected:

	CertificateEncodingException(handle_type h) : base_(h) {}

};

} // namespace java::security::cert
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::security::cert {

inline ref<CertificateEncodingException> CertificateEncodingException::new_object() { return base_::new_object(); }
inline ref<CertificateEncodingException> CertificateEncodingException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<CertificateEncodingException> CertificateEncodingException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
inline ref<CertificateEncodingException> CertificateEncodingException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

} // namespace java::security::cert
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_CERT_CERTIFICATEENCODINGEXCEPTION_H
