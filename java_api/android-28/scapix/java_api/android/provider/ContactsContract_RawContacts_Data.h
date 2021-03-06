// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/BaseColumns.h>
#include <scapix/java_api/android/provider/ContactsContract_DataColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA_H
#define SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::provider {

class ContactsContract_RawContacts_Data : public object_base<SCAPIX_META_STRING("android/provider/ContactsContract$RawContacts$Data"),
	java::lang::Object,
	android::provider::BaseColumns,
	android::provider::ContactsContract_DataColumns>
{
public:

	static ref<java::lang::String> CONTENT_DIRECTORY_();


protected:

	ContactsContract_RawContacts_Data(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> ContactsContract_RawContacts_Data::CONTENT_DIRECTORY_() { return get_static_field<SCAPIX_META_STRING("CONTENT_DIRECTORY"), ref<java::lang::String>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CONTACTSCONTRACT_RAWCONTACTS_DATA_H
