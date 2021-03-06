// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_STYLE_H
#define SCAPIX_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_STYLE_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::graphics {

class PathDashPathEffect_Style : public object_base<SCAPIX_META_STRING("android/graphics/PathDashPathEffect$Style"),
	java::lang::Enum>
{
public:

	static ref<android::graphics::PathDashPathEffect_Style> TRANSLATE_();
	static ref<android::graphics::PathDashPathEffect_Style> ROTATE_();
	static ref<android::graphics::PathDashPathEffect_Style> MORPH_();

	static ref<link::java::array<android::graphics::PathDashPathEffect_Style>> values();
	static ref<android::graphics::PathDashPathEffect_Style> valueOf(ref<java::lang::String> name);

protected:

	PathDashPathEffect_Style(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<android::graphics::PathDashPathEffect_Style> PathDashPathEffect_Style::TRANSLATE_() { return get_static_field<SCAPIX_META_STRING("TRANSLATE"), ref<android::graphics::PathDashPathEffect_Style>>(); }
inline ref<android::graphics::PathDashPathEffect_Style> PathDashPathEffect_Style::ROTATE_() { return get_static_field<SCAPIX_META_STRING("ROTATE"), ref<android::graphics::PathDashPathEffect_Style>>(); }
inline ref<android::graphics::PathDashPathEffect_Style> PathDashPathEffect_Style::MORPH_() { return get_static_field<SCAPIX_META_STRING("MORPH"), ref<android::graphics::PathDashPathEffect_Style>>(); }
inline ref<link::java::array<android::graphics::PathDashPathEffect_Style>> PathDashPathEffect_Style::values() { return call_static_method<SCAPIX_META_STRING("values"), ref<link::java::array<android::graphics::PathDashPathEffect_Style>>>(); }
inline ref<android::graphics::PathDashPathEffect_Style> PathDashPathEffect_Style::valueOf(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::PathDashPathEffect_Style>>(name); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_STYLE_H
