// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/graphics/Xfermode.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_PORTERDUFFXFERMODE_H
#define SCAPIX_ANDROID_GRAPHICS_PORTERDUFFXFERMODE_H

namespace scapix::java_api {

namespace android::graphics { class PorterDuff_Mode; }

namespace android::graphics {

class PorterDuffXfermode : public object_base<SCAPIX_META_STRING("android/graphics/PorterDuffXfermode"),
	android::graphics::Xfermode>
{
public:

	static ref<PorterDuffXfermode> new_object(ref<android::graphics::PorterDuff_Mode> mode);

protected:

	PorterDuffXfermode(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/PorterDuff_Mode.h>

namespace scapix::java_api {
namespace android::graphics {

inline ref<PorterDuffXfermode> PorterDuffXfermode::new_object(ref<android::graphics::PorterDuff_Mode> mode) { return base_::new_object(mode); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_PORTERDUFFXFERMODE_H
