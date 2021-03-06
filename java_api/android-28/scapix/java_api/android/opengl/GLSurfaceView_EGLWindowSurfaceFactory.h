// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_OPENGL_GLSURFACEVIEW_EGLWINDOWSURFACEFACTORY_H
#define SCAPIX_ANDROID_OPENGL_GLSURFACEVIEW_EGLWINDOWSURFACEFACTORY_H

namespace scapix::java_api {

namespace javax::microedition::khronos::egl { class EGL10; }
namespace javax::microedition::khronos::egl { class EGLConfig; }
namespace javax::microedition::khronos::egl { class EGLDisplay; }
namespace javax::microedition::khronos::egl { class EGLSurface; }

namespace android::opengl {

class GLSurfaceView_EGLWindowSurfaceFactory : public object_base<SCAPIX_META_STRING("android/opengl/GLSurfaceView$EGLWindowSurfaceFactory"),
	java::lang::Object>
{
public:

	ref<javax::microedition::khronos::egl::EGLSurface> createWindowSurface(ref<javax::microedition::khronos::egl::EGL10> p1, ref<javax::microedition::khronos::egl::EGLDisplay> p2, ref<javax::microedition::khronos::egl::EGLConfig> p3, ref<java::lang::Object> p4);
	void destroySurface(ref<javax::microedition::khronos::egl::EGL10> p1, ref<javax::microedition::khronos::egl::EGLDisplay> p2, ref<javax::microedition::khronos::egl::EGLSurface> p3);

protected:

	GLSurfaceView_EGLWindowSurfaceFactory(handle_type h) : base_(h) {}

};

} // namespace android::opengl
} // namespace scapix::java_api

#include <scapix/java_api/javax/microedition/khronos/egl/EGL10.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLConfig.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLDisplay.h>
#include <scapix/java_api/javax/microedition/khronos/egl/EGLSurface.h>

namespace scapix::java_api {
namespace android::opengl {

inline ref<javax::microedition::khronos::egl::EGLSurface> GLSurfaceView_EGLWindowSurfaceFactory::createWindowSurface(ref<javax::microedition::khronos::egl::EGL10> p1, ref<javax::microedition::khronos::egl::EGLDisplay> p2, ref<javax::microedition::khronos::egl::EGLConfig> p3, ref<java::lang::Object> p4) { return call_method<SCAPIX_META_STRING("createWindowSurface"), ref<javax::microedition::khronos::egl::EGLSurface>>(p1, p2, p3, p4); }
inline void GLSurfaceView_EGLWindowSurfaceFactory::destroySurface(ref<javax::microedition::khronos::egl::EGL10> p1, ref<javax::microedition::khronos::egl::EGLDisplay> p2, ref<javax::microedition::khronos::egl::EGLSurface> p3) { return call_method<SCAPIX_META_STRING("destroySurface"), void>(p1, p2, p3); }

} // namespace android::opengl
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_OPENGL_GLSURFACEVIEW_EGLWINDOWSURFACEFACTORY_H
