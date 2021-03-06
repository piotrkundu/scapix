// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_H

namespace scapix::java_api {


namespace java::util::concurrent::atomic {

class AtomicMarkableReference : public object_base<SCAPIX_META_STRING("java/util/concurrent/atomic/AtomicMarkableReference"),
	java::lang::Object>
{
public:

	static ref<AtomicMarkableReference> new_object(ref<java::lang::Object> initialRef, jboolean initialMark);
	ref<java::lang::Object> getReference();
	jboolean isMarked();
	ref<java::lang::Object> get(ref<link::java::array<jboolean>> markHolder);
	jboolean weakCompareAndSet(ref<java::lang::Object> expectedReference, ref<java::lang::Object> newReference, jboolean expectedMark, jboolean newMark);
	jboolean compareAndSet(ref<java::lang::Object> expectedReference, ref<java::lang::Object> newReference, jboolean expectedMark, jboolean newMark);
	void set(ref<java::lang::Object> newReference, jboolean newMark);
	jboolean attemptMark(ref<java::lang::Object> expectedReference, jboolean newMark);

protected:

	AtomicMarkableReference(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api


namespace scapix::java_api {
namespace java::util::concurrent::atomic {

inline ref<AtomicMarkableReference> AtomicMarkableReference::new_object(ref<java::lang::Object> initialRef, jboolean initialMark) { return base_::new_object(initialRef, initialMark); }
inline ref<java::lang::Object> AtomicMarkableReference::getReference() { return call_method<SCAPIX_META_STRING("getReference"), ref<java::lang::Object>>(); }
inline jboolean AtomicMarkableReference::isMarked() { return call_method<SCAPIX_META_STRING("isMarked"), jboolean>(); }
inline ref<java::lang::Object> AtomicMarkableReference::get(ref<link::java::array<jboolean>> markHolder) { return call_method<SCAPIX_META_STRING("get"), ref<java::lang::Object>>(markHolder); }
inline jboolean AtomicMarkableReference::weakCompareAndSet(ref<java::lang::Object> expectedReference, ref<java::lang::Object> newReference, jboolean expectedMark, jboolean newMark) { return call_method<SCAPIX_META_STRING("weakCompareAndSet"), jboolean>(expectedReference, newReference, expectedMark, newMark); }
inline jboolean AtomicMarkableReference::compareAndSet(ref<java::lang::Object> expectedReference, ref<java::lang::Object> newReference, jboolean expectedMark, jboolean newMark) { return call_method<SCAPIX_META_STRING("compareAndSet"), jboolean>(expectedReference, newReference, expectedMark, newMark); }
inline void AtomicMarkableReference::set(ref<java::lang::Object> newReference, jboolean newMark) { return call_method<SCAPIX_META_STRING("set"), void>(newReference, newMark); }
inline jboolean AtomicMarkableReference::attemptMark(ref<java::lang::Object> expectedReference, jboolean newMark) { return call_method<SCAPIX_META_STRING("attemptMark"), jboolean>(expectedReference, newMark); }

} // namespace java::util::concurrent::atomic
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE_H
