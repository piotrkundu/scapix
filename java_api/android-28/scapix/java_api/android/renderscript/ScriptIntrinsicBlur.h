// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR_H
#define SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR_H

namespace scapix::java_api {

namespace android::renderscript { class Allocation; }
namespace android::renderscript { class Element; }
namespace android::renderscript { class RenderScript; }
namespace android::renderscript { class Script_FieldID; }
namespace android::renderscript { class Script_KernelID; }
namespace android::renderscript { class Script_LaunchOptions; }

namespace android::renderscript {

class ScriptIntrinsicBlur : public object_base<SCAPIX_META_STRING("android/renderscript/ScriptIntrinsicBlur"),
	android::renderscript::ScriptIntrinsic>
{
public:

	static ref<android::renderscript::ScriptIntrinsicBlur> create(ref<android::renderscript::RenderScript> rs, ref<android::renderscript::Element> e);
	void setInput(ref<android::renderscript::Allocation> ain);
	void setRadius(jfloat radius);
	void forEach(ref<android::renderscript::Allocation> aout);
	void forEach(ref<android::renderscript::Allocation> aout, ref<android::renderscript::Script_LaunchOptions> opt);
	ref<android::renderscript::Script_KernelID> getKernelID();
	ref<android::renderscript::Script_FieldID> getFieldID_Input();

protected:

	ScriptIntrinsicBlur(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api

#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_FieldID.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>

namespace scapix::java_api {
namespace android::renderscript {

inline ref<android::renderscript::ScriptIntrinsicBlur> ScriptIntrinsicBlur::create(ref<android::renderscript::RenderScript> rs, ref<android::renderscript::Element> e) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::ScriptIntrinsicBlur>>(rs, e); }
inline void ScriptIntrinsicBlur::setInput(ref<android::renderscript::Allocation> ain) { return call_method<SCAPIX_META_STRING("setInput"), void>(ain); }
inline void ScriptIntrinsicBlur::setRadius(jfloat radius) { return call_method<SCAPIX_META_STRING("setRadius"), void>(radius); }
inline void ScriptIntrinsicBlur::forEach(ref<android::renderscript::Allocation> aout) { return call_method<SCAPIX_META_STRING("forEach"), void>(aout); }
inline void ScriptIntrinsicBlur::forEach(ref<android::renderscript::Allocation> aout, ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<SCAPIX_META_STRING("forEach"), void>(aout, opt); }
inline ref<android::renderscript::Script_KernelID> ScriptIntrinsicBlur::getKernelID() { return call_method<SCAPIX_META_STRING("getKernelID"), ref<android::renderscript::Script_KernelID>>(); }
inline ref<android::renderscript::Script_FieldID> ScriptIntrinsicBlur::getFieldID_Input() { return call_method<SCAPIX_META_STRING("getFieldID_Input"), ref<android::renderscript::Script_FieldID>>(); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR_H
