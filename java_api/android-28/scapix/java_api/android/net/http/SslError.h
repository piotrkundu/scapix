// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_HTTP_SSLERROR_H
#define SCAPIX_ANDROID_NET_HTTP_SSLERROR_H

namespace scapix::java_api {

namespace android::net::http { class SslCertificate; }
namespace java::lang { class String; }
namespace java::security::cert { class X509Certificate; }

namespace android::net::http {

class SslError : public object_base<SCAPIX_META_STRING("android/net/http/SslError"),
	java::lang::Object>
{
public:

	static jint SSL_DATE_INVALID_();
	static jint SSL_EXPIRED_();
	static jint SSL_IDMISMATCH_();
	static jint SSL_INVALID_();
	static jint SSL_MAX_ERROR_();
	static jint SSL_NOTYETVALID_();
	static jint SSL_UNTRUSTED_();

	static ref<SslError> new_object(jint error, ref<android::net::http::SslCertificate> certificate);
	static ref<SslError> new_object(jint error, ref<java::security::cert::X509Certificate> certificate);
	static ref<SslError> new_object(jint error, ref<android::net::http::SslCertificate> certificate, ref<java::lang::String> url);
	static ref<SslError> new_object(jint error, ref<java::security::cert::X509Certificate> certificate, ref<java::lang::String> url);
	ref<android::net::http::SslCertificate> getCertificate();
	ref<java::lang::String> getUrl();
	jboolean addError(jint error);
	jboolean hasError(jint error);
	jint getPrimaryError();
	ref<java::lang::String> toString();

protected:

	SslError(handle_type h) : base_(h) {}

};

} // namespace android::net::http
} // namespace scapix::java_api

#include <scapix/java_api/android/net/http/SslCertificate.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>

namespace scapix::java_api {
namespace android::net::http {

inline jint SslError::SSL_DATE_INVALID_() { return get_static_field<SCAPIX_META_STRING("SSL_DATE_INVALID"), jint>(); }
inline jint SslError::SSL_EXPIRED_() { return get_static_field<SCAPIX_META_STRING("SSL_EXPIRED"), jint>(); }
inline jint SslError::SSL_IDMISMATCH_() { return get_static_field<SCAPIX_META_STRING("SSL_IDMISMATCH"), jint>(); }
inline jint SslError::SSL_INVALID_() { return get_static_field<SCAPIX_META_STRING("SSL_INVALID"), jint>(); }
inline jint SslError::SSL_MAX_ERROR_() { return get_static_field<SCAPIX_META_STRING("SSL_MAX_ERROR"), jint>(); }
inline jint SslError::SSL_NOTYETVALID_() { return get_static_field<SCAPIX_META_STRING("SSL_NOTYETVALID"), jint>(); }
inline jint SslError::SSL_UNTRUSTED_() { return get_static_field<SCAPIX_META_STRING("SSL_UNTRUSTED"), jint>(); }
inline ref<SslError> SslError::new_object(jint error, ref<android::net::http::SslCertificate> certificate) { return base_::new_object(error, certificate); }
inline ref<SslError> SslError::new_object(jint error, ref<java::security::cert::X509Certificate> certificate) { return base_::new_object(error, certificate); }
inline ref<SslError> SslError::new_object(jint error, ref<android::net::http::SslCertificate> certificate, ref<java::lang::String> url) { return base_::new_object(error, certificate, url); }
inline ref<SslError> SslError::new_object(jint error, ref<java::security::cert::X509Certificate> certificate, ref<java::lang::String> url) { return base_::new_object(error, certificate, url); }
inline ref<android::net::http::SslCertificate> SslError::getCertificate() { return call_method<SCAPIX_META_STRING("getCertificate"), ref<android::net::http::SslCertificate>>(); }
inline ref<java::lang::String> SslError::getUrl() { return call_method<SCAPIX_META_STRING("getUrl"), ref<java::lang::String>>(); }
inline jboolean SslError::addError(jint error) { return call_method<SCAPIX_META_STRING("addError"), jboolean>(error); }
inline jboolean SslError::hasError(jint error) { return call_method<SCAPIX_META_STRING("hasError"), jboolean>(error); }
inline jint SslError::getPrimaryError() { return call_method<SCAPIX_META_STRING("getPrimaryError"), jint>(); }
inline ref<java::lang::String> SslError::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::net::http
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_HTTP_SSLERROR_H
