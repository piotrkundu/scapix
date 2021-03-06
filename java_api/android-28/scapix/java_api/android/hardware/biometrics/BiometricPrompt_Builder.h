// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_BUILDER_H
#define SCAPIX_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_BUILDER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content { class DialogInterface_OnClickListener; }
namespace android::hardware::biometrics { class BiometricPrompt; }
namespace java::lang { class CharSequence; }
namespace java::util::concurrent { class Executor; }

namespace android::hardware::biometrics {

class BiometricPrompt_Builder : public object_base<SCAPIX_META_STRING("android/hardware/biometrics/BiometricPrompt$Builder"),
	java::lang::Object>
{
public:

	static ref<BiometricPrompt_Builder> new_object(ref<android::content::Context> context);
	ref<android::hardware::biometrics::BiometricPrompt_Builder> setTitle(ref<java::lang::CharSequence> title);
	ref<android::hardware::biometrics::BiometricPrompt_Builder> setSubtitle(ref<java::lang::CharSequence> subtitle);
	ref<android::hardware::biometrics::BiometricPrompt_Builder> setDescription(ref<java::lang::CharSequence> description);
	ref<android::hardware::biometrics::BiometricPrompt_Builder> setNegativeButton(ref<java::lang::CharSequence> text, ref<java::util::concurrent::Executor> executor, ref<android::content::DialogInterface_OnClickListener> listener);
	ref<android::hardware::biometrics::BiometricPrompt> build();

protected:

	BiometricPrompt_Builder(handle_type h) : base_(h) {}

};

} // namespace android::hardware::biometrics
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/DialogInterface_OnClickListener.h>
#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>

namespace scapix::java_api {
namespace android::hardware::biometrics {

inline ref<BiometricPrompt_Builder> BiometricPrompt_Builder::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<android::hardware::biometrics::BiometricPrompt_Builder> BiometricPrompt_Builder::setTitle(ref<java::lang::CharSequence> title) { return call_method<SCAPIX_META_STRING("setTitle"), ref<android::hardware::biometrics::BiometricPrompt_Builder>>(title); }
inline ref<android::hardware::biometrics::BiometricPrompt_Builder> BiometricPrompt_Builder::setSubtitle(ref<java::lang::CharSequence> subtitle) { return call_method<SCAPIX_META_STRING("setSubtitle"), ref<android::hardware::biometrics::BiometricPrompt_Builder>>(subtitle); }
inline ref<android::hardware::biometrics::BiometricPrompt_Builder> BiometricPrompt_Builder::setDescription(ref<java::lang::CharSequence> description) { return call_method<SCAPIX_META_STRING("setDescription"), ref<android::hardware::biometrics::BiometricPrompt_Builder>>(description); }
inline ref<android::hardware::biometrics::BiometricPrompt_Builder> BiometricPrompt_Builder::setNegativeButton(ref<java::lang::CharSequence> text, ref<java::util::concurrent::Executor> executor, ref<android::content::DialogInterface_OnClickListener> listener) { return call_method<SCAPIX_META_STRING("setNegativeButton"), ref<android::hardware::biometrics::BiometricPrompt_Builder>>(text, executor, listener); }
inline ref<android::hardware::biometrics::BiometricPrompt> BiometricPrompt_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::hardware::biometrics::BiometricPrompt>>(); }

} // namespace android::hardware::biometrics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_BUILDER_H
