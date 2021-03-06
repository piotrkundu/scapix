// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY_LOGINMODULECONTROLFLAG_H
#define SCAPIX_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY_LOGINMODULECONTROLFLAG_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::security::auth::login {

class AppConfigurationEntry_LoginModuleControlFlag : public object_base<SCAPIX_META_STRING("javax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag"),
	java::lang::Object>
{
public:

	static ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> REQUIRED_();
	static ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> REQUISITE_();
	static ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> SUFFICIENT_();
	static ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> OPTIONAL_();

	ref<java::lang::String> toString();

protected:

	AppConfigurationEntry_LoginModuleControlFlag(handle_type h) : base_(h) {}

};

} // namespace javax::security::auth::login
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::security::auth::login {

inline ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> AppConfigurationEntry_LoginModuleControlFlag::REQUIRED_() { return get_static_field<SCAPIX_META_STRING("REQUIRED"), ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag>>(); }
inline ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> AppConfigurationEntry_LoginModuleControlFlag::REQUISITE_() { return get_static_field<SCAPIX_META_STRING("REQUISITE"), ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag>>(); }
inline ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> AppConfigurationEntry_LoginModuleControlFlag::SUFFICIENT_() { return get_static_field<SCAPIX_META_STRING("SUFFICIENT"), ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag>>(); }
inline ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag> AppConfigurationEntry_LoginModuleControlFlag::OPTIONAL_() { return get_static_field<SCAPIX_META_STRING("OPTIONAL"), ref<javax::security::auth::login::AppConfigurationEntry_LoginModuleControlFlag>>(); }
inline ref<java::lang::String> AppConfigurationEntry_LoginModuleControlFlag::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace javax::security::auth::login
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_AUTH_LOGIN_APPCONFIGURATIONENTRY_LOGINMODULECONTROLFLAG_H
