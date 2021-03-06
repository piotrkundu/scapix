// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX_H
#define SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX_H

namespace scapix::java_api {

namespace android::renderscript { class Allocation; }
namespace android::renderscript { class Element; }
namespace android::renderscript { class Float4; }
namespace android::renderscript { class Matrix3f; }
namespace android::renderscript { class Matrix4f; }
namespace android::renderscript { class RenderScript; }
namespace android::renderscript { class Script_KernelID; }
namespace android::renderscript { class Script_LaunchOptions; }

namespace android::renderscript {

class ScriptIntrinsicColorMatrix : public object_base<SCAPIX_META_STRING("android/renderscript/ScriptIntrinsicColorMatrix"),
	android::renderscript::ScriptIntrinsic>
{
public:

	static ref<android::renderscript::ScriptIntrinsicColorMatrix> create(ref<android::renderscript::RenderScript> rs, ref<android::renderscript::Element> e);
	static ref<android::renderscript::ScriptIntrinsicColorMatrix> create(ref<android::renderscript::RenderScript> rs);
	void setColorMatrix(ref<android::renderscript::Matrix4f> m);
	void setColorMatrix(ref<android::renderscript::Matrix3f> m);
	void setAdd(ref<android::renderscript::Float4> f);
	void setAdd(jfloat r, jfloat g, jfloat b, jfloat a);
	void setGreyscale();
	void setYUVtoRGB();
	void setRGBtoYUV();
	void forEach(ref<android::renderscript::Allocation> ain, ref<android::renderscript::Allocation> aout);
	void forEach(ref<android::renderscript::Allocation> ain, ref<android::renderscript::Allocation> aout, ref<android::renderscript::Script_LaunchOptions> opt);
	ref<android::renderscript::Script_KernelID> getKernelID();

protected:

	ScriptIntrinsicColorMatrix(handle_type h) : base_(h) {}

};

} // namespace android::renderscript
} // namespace scapix::java_api

#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/Float4.h>
#include <scapix/java_api/android/renderscript/Matrix3f.h>
#include <scapix/java_api/android/renderscript/Matrix4f.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>

namespace scapix::java_api {
namespace android::renderscript {

inline ref<android::renderscript::ScriptIntrinsicColorMatrix> ScriptIntrinsicColorMatrix::create(ref<android::renderscript::RenderScript> rs, ref<android::renderscript::Element> e) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::ScriptIntrinsicColorMatrix>>(rs, e); }
inline ref<android::renderscript::ScriptIntrinsicColorMatrix> ScriptIntrinsicColorMatrix::create(ref<android::renderscript::RenderScript> rs) { return call_static_method<SCAPIX_META_STRING("create"), ref<android::renderscript::ScriptIntrinsicColorMatrix>>(rs); }
inline void ScriptIntrinsicColorMatrix::setColorMatrix(ref<android::renderscript::Matrix4f> m) { return call_method<SCAPIX_META_STRING("setColorMatrix"), void>(m); }
inline void ScriptIntrinsicColorMatrix::setColorMatrix(ref<android::renderscript::Matrix3f> m) { return call_method<SCAPIX_META_STRING("setColorMatrix"), void>(m); }
inline void ScriptIntrinsicColorMatrix::setAdd(ref<android::renderscript::Float4> f) { return call_method<SCAPIX_META_STRING("setAdd"), void>(f); }
inline void ScriptIntrinsicColorMatrix::setAdd(jfloat r, jfloat g, jfloat b, jfloat a) { return call_method<SCAPIX_META_STRING("setAdd"), void>(r, g, b, a); }
inline void ScriptIntrinsicColorMatrix::setGreyscale() { return call_method<SCAPIX_META_STRING("setGreyscale"), void>(); }
inline void ScriptIntrinsicColorMatrix::setYUVtoRGB() { return call_method<SCAPIX_META_STRING("setYUVtoRGB"), void>(); }
inline void ScriptIntrinsicColorMatrix::setRGBtoYUV() { return call_method<SCAPIX_META_STRING("setRGBtoYUV"), void>(); }
inline void ScriptIntrinsicColorMatrix::forEach(ref<android::renderscript::Allocation> ain, ref<android::renderscript::Allocation> aout) { return call_method<SCAPIX_META_STRING("forEach"), void>(ain, aout); }
inline void ScriptIntrinsicColorMatrix::forEach(ref<android::renderscript::Allocation> ain, ref<android::renderscript::Allocation> aout, ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<SCAPIX_META_STRING("forEach"), void>(ain, aout, opt); }
inline ref<android::renderscript::Script_KernelID> ScriptIntrinsicColorMatrix::getKernelID() { return call_method<SCAPIX_META_STRING("getKernelID"), ref<android::renderscript::Script_KernelID>>(); }

} // namespace android::renderscript
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX_H
