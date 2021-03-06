// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/CallSite.h>

#ifndef SCAPIX_JAVA_LANG_INVOKE_MUTABLECALLSITE_H
#define SCAPIX_JAVA_LANG_INVOKE_MUTABLECALLSITE_H

namespace scapix::java_api {

namespace java::lang::invoke { class MethodHandle; }
namespace java::lang::invoke { class MethodType; }

namespace java::lang::invoke {

class MutableCallSite : public object_base<SCAPIX_META_STRING("java/lang/invoke/MutableCallSite"),
	java::lang::invoke::CallSite>
{
public:

	static ref<MutableCallSite> new_object(ref<java::lang::invoke::MethodType> type);
	static ref<MutableCallSite> new_object(ref<java::lang::invoke::MethodHandle> target);
	ref<java::lang::invoke::MethodHandle> getTarget();
	void setTarget(ref<java::lang::invoke::MethodHandle> newTarget);
	ref<java::lang::invoke::MethodHandle> dynamicInvoker();
	static void syncAll(ref<link::java::array<java::lang::invoke::MutableCallSite>> sites);

protected:

	MutableCallSite(handle_type h) : base_(h) {}

};

} // namespace java::lang::invoke
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>

namespace scapix::java_api {
namespace java::lang::invoke {

inline ref<MutableCallSite> MutableCallSite::new_object(ref<java::lang::invoke::MethodType> type) { return base_::new_object(type); }
inline ref<MutableCallSite> MutableCallSite::new_object(ref<java::lang::invoke::MethodHandle> target) { return base_::new_object(target); }
inline ref<java::lang::invoke::MethodHandle> MutableCallSite::getTarget() { return call_method<SCAPIX_META_STRING("getTarget"), ref<java::lang::invoke::MethodHandle>>(); }
inline void MutableCallSite::setTarget(ref<java::lang::invoke::MethodHandle> newTarget) { return call_method<SCAPIX_META_STRING("setTarget"), void>(newTarget); }
inline ref<java::lang::invoke::MethodHandle> MutableCallSite::dynamicInvoker() { return call_method<SCAPIX_META_STRING("dynamicInvoker"), ref<java::lang::invoke::MethodHandle>>(); }
inline void MutableCallSite::syncAll(ref<link::java::array<java::lang::invoke::MutableCallSite>> sites) { return call_static_method<SCAPIX_META_STRING("syncAll"), void>(sites); }

} // namespace java::lang::invoke
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_INVOKE_MUTABLECALLSITE_H
