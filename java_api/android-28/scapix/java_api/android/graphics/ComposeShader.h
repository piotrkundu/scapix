// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/Shader.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_COMPOSESHADER_H
#define SCAPIX_ANDROID_GRAPHICS_COMPOSESHADER_H

namespace scapix::java_api {

namespace android::graphics { class PorterDuff_Mode; }
namespace android::graphics { class Xfermode; }

namespace android::graphics {

class ComposeShader : public object_base<SCAPIX_META_STRING("android/graphics/ComposeShader"),
	android::graphics::Shader>
{
public:

	static ref<ComposeShader> new_object(ref<android::graphics::Shader> shaderA, ref<android::graphics::Shader> shaderB, ref<android::graphics::Xfermode> mode);
	static ref<ComposeShader> new_object(ref<android::graphics::Shader> shaderA, ref<android::graphics::Shader> shaderB, ref<android::graphics::PorterDuff_Mode> mode);

protected:

	ComposeShader(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>
#include <scapix/java_api/android/graphics/Xfermode.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<ComposeShader> ComposeShader::new_object(ref<android::graphics::Shader> shaderA, ref<android::graphics::Shader> shaderB, ref<android::graphics::Xfermode> mode) { return base_::new_object(shaderA, shaderB, mode); }
inline ref<ComposeShader> ComposeShader::new_object(ref<android::graphics::Shader> shaderA, ref<android::graphics::Shader> shaderB, ref<android::graphics::PorterDuff_Mode> mode) { return base_::new_object(shaderA, shaderB, mode); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_COMPOSESHADER_H
