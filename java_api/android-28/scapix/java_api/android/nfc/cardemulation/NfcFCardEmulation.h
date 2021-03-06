// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NFC_CARDEMULATION_NFCFCARDEMULATION_H
#define SCAPIX_ANDROID_NFC_CARDEMULATION_NFCFCARDEMULATION_H

namespace scapix::java_api {

namespace android::app { class Activity; }
namespace android::content { class ComponentName; }
namespace android::nfc { class NfcAdapter; }
namespace java::lang { class String; }

namespace android::nfc::cardemulation {

class NfcFCardEmulation : public object_base<SCAPIX_META_STRING("android/nfc/cardemulation/NfcFCardEmulation"),
	java::lang::Object>
{
public:

	static ref<android::nfc::cardemulation::NfcFCardEmulation> getInstance(ref<android::nfc::NfcAdapter> adapter);
	ref<java::lang::String> getSystemCodeForService(ref<android::content::ComponentName> service);
	jboolean registerSystemCodeForService(ref<android::content::ComponentName> service, ref<java::lang::String> systemCode);
	jboolean unregisterSystemCodeForService(ref<android::content::ComponentName> service);
	ref<java::lang::String> getNfcid2ForService(ref<android::content::ComponentName> service);
	jboolean setNfcid2ForService(ref<android::content::ComponentName> service, ref<java::lang::String> nfcid2);
	jboolean enableService(ref<android::app::Activity> activity, ref<android::content::ComponentName> service);
	jboolean disableService(ref<android::app::Activity> activity);

protected:

	NfcFCardEmulation(handle_type h) : base_(h) {}

};

} // namespace android::nfc::cardemulation
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/nfc/NfcAdapter.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::nfc::cardemulation {

inline ref<android::nfc::cardemulation::NfcFCardEmulation> NfcFCardEmulation::getInstance(ref<android::nfc::NfcAdapter> adapter) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::nfc::cardemulation::NfcFCardEmulation>>(adapter); }
inline ref<java::lang::String> NfcFCardEmulation::getSystemCodeForService(ref<android::content::ComponentName> service) { return call_method<SCAPIX_META_STRING("getSystemCodeForService"), ref<java::lang::String>>(service); }
inline jboolean NfcFCardEmulation::registerSystemCodeForService(ref<android::content::ComponentName> service, ref<java::lang::String> systemCode) { return call_method<SCAPIX_META_STRING("registerSystemCodeForService"), jboolean>(service, systemCode); }
inline jboolean NfcFCardEmulation::unregisterSystemCodeForService(ref<android::content::ComponentName> service) { return call_method<SCAPIX_META_STRING("unregisterSystemCodeForService"), jboolean>(service); }
inline ref<java::lang::String> NfcFCardEmulation::getNfcid2ForService(ref<android::content::ComponentName> service) { return call_method<SCAPIX_META_STRING("getNfcid2ForService"), ref<java::lang::String>>(service); }
inline jboolean NfcFCardEmulation::setNfcid2ForService(ref<android::content::ComponentName> service, ref<java::lang::String> nfcid2) { return call_method<SCAPIX_META_STRING("setNfcid2ForService"), jboolean>(service, nfcid2); }
inline jboolean NfcFCardEmulation::enableService(ref<android::app::Activity> activity, ref<android::content::ComponentName> service) { return call_method<SCAPIX_META_STRING("enableService"), jboolean>(activity, service); }
inline jboolean NfcFCardEmulation::disableService(ref<android::app::Activity> activity) { return call_method<SCAPIX_META_STRING("disableService"), jboolean>(activity); }

} // namespace android::nfc::cardemulation
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NFC_CARDEMULATION_NFCFCARDEMULATION_H
