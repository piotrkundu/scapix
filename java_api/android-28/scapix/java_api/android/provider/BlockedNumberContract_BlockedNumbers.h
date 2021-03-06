// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT_BLOCKEDNUMBERS_H
#define SCAPIX_ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT_BLOCKEDNUMBERS_H

namespace scapix::java_api {

namespace android::net { class Uri; }
namespace java::lang { class String; }

namespace android::provider {

class BlockedNumberContract_BlockedNumbers : public object_base<SCAPIX_META_STRING("android/provider/BlockedNumberContract$BlockedNumbers"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> COLUMN_E164_NUMBER_();
	static ref<java::lang::String> COLUMN_ID_();
	static ref<java::lang::String> COLUMN_ORIGINAL_NUMBER_();
	static ref<java::lang::String> CONTENT_ITEM_TYPE_();
	static ref<java::lang::String> CONTENT_TYPE_();
	static ref<android::net::Uri> CONTENT_URI_();


protected:

	BlockedNumberContract_BlockedNumbers(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<java::lang::String> BlockedNumberContract_BlockedNumbers::COLUMN_E164_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_E164_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BlockedNumberContract_BlockedNumbers::COLUMN_ID_() { return get_static_field<SCAPIX_META_STRING("COLUMN_ID"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BlockedNumberContract_BlockedNumbers::COLUMN_ORIGINAL_NUMBER_() { return get_static_field<SCAPIX_META_STRING("COLUMN_ORIGINAL_NUMBER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BlockedNumberContract_BlockedNumbers::CONTENT_ITEM_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_ITEM_TYPE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> BlockedNumberContract_BlockedNumbers::CONTENT_TYPE_() { return get_static_field<SCAPIX_META_STRING("CONTENT_TYPE"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> BlockedNumberContract_BlockedNumbers::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT_BLOCKEDNUMBERS_H
