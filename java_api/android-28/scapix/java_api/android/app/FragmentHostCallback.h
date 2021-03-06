// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/app/FragmentContainer.h>

#ifndef SCAPIX_ANDROID_APP_FRAGMENTHOSTCALLBACK_H
#define SCAPIX_ANDROID_APP_FRAGMENTHOSTCALLBACK_H

namespace scapix::java_api {

namespace android::app { class Fragment; }
namespace android::content { class Context; }
namespace android::content { class Intent; }
namespace android::content { class IntentSender; }
namespace android::os { class Bundle; }
namespace android::os { class Handler; }
namespace android::view { class LayoutInflater; }
namespace android::view { class View; }
namespace java::io { class FileDescriptor; }
namespace java::io { class PrintWriter; }
namespace java::lang { class Object; }
namespace java::lang { class String; }

namespace android::app {

class FragmentHostCallback : public object_base<SCAPIX_META_STRING("android/app/FragmentHostCallback"),
	android::app::FragmentContainer>
{
public:

	static ref<FragmentHostCallback> new_object(ref<android::content::Context> context, ref<android::os::Handler> handler, jint windowAnimations);
	void onDump(ref<java::lang::String> prefix, ref<java::io::FileDescriptor> fd, ref<java::io::PrintWriter> writer, ref<link::java::array<java::lang::String>> args);
	jboolean onShouldSaveFragmentState(ref<android::app::Fragment> fragment);
	ref<android::view::LayoutInflater> onGetLayoutInflater();
	jboolean onUseFragmentManagerInflaterFactory();
	ref<java::lang::Object> onGetHost();
	void onInvalidateOptionsMenu();
	void onStartActivityFromFragment(ref<android::app::Fragment> fragment, ref<android::content::Intent> intent, jint requestCode, ref<android::os::Bundle> options);
	void onStartIntentSenderFromFragment(ref<android::app::Fragment> fragment, ref<android::content::IntentSender> intent, jint requestCode, ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags, ref<android::os::Bundle> options);
	void onRequestPermissionsFromFragment(ref<android::app::Fragment> fragment, ref<link::java::array<java::lang::String>> permissions, jint requestCode);
	jboolean onHasWindowAnimations();
	jint onGetWindowAnimations();
	void onAttachFragment(ref<android::app::Fragment> fragment);
	ref<android::view::View> onFindViewById(jint id);
	jboolean onHasView();

protected:

	FragmentHostCallback(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Fragment.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/view/LayoutInflater.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<FragmentHostCallback> FragmentHostCallback::new_object(ref<android::content::Context> context, ref<android::os::Handler> handler, jint windowAnimations) { return base_::new_object(context, handler, windowAnimations); }
inline void FragmentHostCallback::onDump(ref<java::lang::String> prefix, ref<java::io::FileDescriptor> fd, ref<java::io::PrintWriter> writer, ref<link::java::array<java::lang::String>> args) { return call_method<SCAPIX_META_STRING("onDump"), void>(prefix, fd, writer, args); }
inline jboolean FragmentHostCallback::onShouldSaveFragmentState(ref<android::app::Fragment> fragment) { return call_method<SCAPIX_META_STRING("onShouldSaveFragmentState"), jboolean>(fragment); }
inline ref<android::view::LayoutInflater> FragmentHostCallback::onGetLayoutInflater() { return call_method<SCAPIX_META_STRING("onGetLayoutInflater"), ref<android::view::LayoutInflater>>(); }
inline jboolean FragmentHostCallback::onUseFragmentManagerInflaterFactory() { return call_method<SCAPIX_META_STRING("onUseFragmentManagerInflaterFactory"), jboolean>(); }
inline ref<java::lang::Object> FragmentHostCallback::onGetHost() { return call_method<SCAPIX_META_STRING("onGetHost"), ref<java::lang::Object>>(); }
inline void FragmentHostCallback::onInvalidateOptionsMenu() { return call_method<SCAPIX_META_STRING("onInvalidateOptionsMenu"), void>(); }
inline void FragmentHostCallback::onStartActivityFromFragment(ref<android::app::Fragment> fragment, ref<android::content::Intent> intent, jint requestCode, ref<android::os::Bundle> options) { return call_method<SCAPIX_META_STRING("onStartActivityFromFragment"), void>(fragment, intent, requestCode, options); }
inline void FragmentHostCallback::onStartIntentSenderFromFragment(ref<android::app::Fragment> fragment, ref<android::content::IntentSender> intent, jint requestCode, ref<android::content::Intent> fillInIntent, jint flagsMask, jint flagsValues, jint extraFlags, ref<android::os::Bundle> options) { return call_method<SCAPIX_META_STRING("onStartIntentSenderFromFragment"), void>(fragment, intent, requestCode, fillInIntent, flagsMask, flagsValues, extraFlags, options); }
inline void FragmentHostCallback::onRequestPermissionsFromFragment(ref<android::app::Fragment> fragment, ref<link::java::array<java::lang::String>> permissions, jint requestCode) { return call_method<SCAPIX_META_STRING("onRequestPermissionsFromFragment"), void>(fragment, permissions, requestCode); }
inline jboolean FragmentHostCallback::onHasWindowAnimations() { return call_method<SCAPIX_META_STRING("onHasWindowAnimations"), jboolean>(); }
inline jint FragmentHostCallback::onGetWindowAnimations() { return call_method<SCAPIX_META_STRING("onGetWindowAnimations"), jint>(); }
inline void FragmentHostCallback::onAttachFragment(ref<android::app::Fragment> fragment) { return call_method<SCAPIX_META_STRING("onAttachFragment"), void>(fragment); }
inline ref<android::view::View> FragmentHostCallback::onFindViewById(jint id) { return call_method<SCAPIX_META_STRING("onFindViewById"), ref<android::view::View>>(id); }
inline jboolean FragmentHostCallback::onHasView() { return call_method<SCAPIX_META_STRING("onHasView"), jboolean>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_FRAGMENTHOSTCALLBACK_H
