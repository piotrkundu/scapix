// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractQueue.h>
#include <scapix/java_api/java/util/concurrent/BlockingQueue.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_H
#define SCAPIX_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::util { class Collection; }
namespace java::util { class Iterator; }
namespace java::util { class Spliterator; }
namespace java::util::concurrent { class TimeUnit; }

namespace java::util::concurrent {

class ArrayBlockingQueue : public object_base<SCAPIX_META_STRING("java/util/concurrent/ArrayBlockingQueue"),
	java::util::AbstractQueue,
	java::util::concurrent::BlockingQueue,
	java::io::Serializable>
{
public:

	static ref<ArrayBlockingQueue> new_object(jint capacity);
	static ref<ArrayBlockingQueue> new_object(jint capacity, jboolean fair);
	static ref<ArrayBlockingQueue> new_object(jint capacity, jboolean fair, ref<java::util::Collection> c);
	jboolean add(ref<java::lang::Object> e);
	jboolean offer(ref<java::lang::Object> e);
	void put(ref<java::lang::Object> e);
	jboolean offer(ref<java::lang::Object> e, jlong timeout, ref<java::util::concurrent::TimeUnit> p3);
	ref<java::lang::Object> poll();
	ref<java::lang::Object> take();
	ref<java::lang::Object> poll(jlong timeout, ref<java::util::concurrent::TimeUnit> p2);
	ref<java::lang::Object> peek();
	jint size();
	jint remainingCapacity();
	jboolean remove(ref<java::lang::Object> o);
	jboolean contains(ref<java::lang::Object> o);
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> a);
	ref<java::lang::String> toString();
	void clear();
	jint drainTo(ref<java::util::Collection> c);
	jint drainTo(ref<java::util::Collection> c, jint maxElements);
	ref<java::util::Iterator> iterator();
	ref<java::util::Spliterator> spliterator();

protected:

	ArrayBlockingQueue(handle_type h) : base_(h) {}

};

} // namespace java::util::concurrent
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>

namespace scapix::java_api {
namespace java::util::concurrent {

inline ref<ArrayBlockingQueue> ArrayBlockingQueue::new_object(jint capacity) { return base_::new_object(capacity); }
inline ref<ArrayBlockingQueue> ArrayBlockingQueue::new_object(jint capacity, jboolean fair) { return base_::new_object(capacity, fair); }
inline ref<ArrayBlockingQueue> ArrayBlockingQueue::new_object(jint capacity, jboolean fair, ref<java::util::Collection> c) { return base_::new_object(capacity, fair, c); }
inline jboolean ArrayBlockingQueue::add(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("add"), jboolean>(e); }
inline jboolean ArrayBlockingQueue::offer(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("offer"), jboolean>(e); }
inline void ArrayBlockingQueue::put(ref<java::lang::Object> e) { return call_method<SCAPIX_META_STRING("put"), void>(e); }
inline jboolean ArrayBlockingQueue::offer(ref<java::lang::Object> e, jlong timeout, ref<java::util::concurrent::TimeUnit> p3) { return call_method<SCAPIX_META_STRING("offer"), jboolean>(e, timeout, p3); }
inline ref<java::lang::Object> ArrayBlockingQueue::poll() { return call_method<SCAPIX_META_STRING("poll"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ArrayBlockingQueue::take() { return call_method<SCAPIX_META_STRING("take"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> ArrayBlockingQueue::poll(jlong timeout, ref<java::util::concurrent::TimeUnit> p2) { return call_method<SCAPIX_META_STRING("poll"), ref<java::lang::Object>>(timeout, p2); }
inline ref<java::lang::Object> ArrayBlockingQueue::peek() { return call_method<SCAPIX_META_STRING("peek"), ref<java::lang::Object>>(); }
inline jint ArrayBlockingQueue::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jint ArrayBlockingQueue::remainingCapacity() { return call_method<SCAPIX_META_STRING("remainingCapacity"), jint>(); }
inline jboolean ArrayBlockingQueue::remove(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(o); }
inline jboolean ArrayBlockingQueue::contains(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(o); }
inline ref<link::java::array<java::lang::Object>> ArrayBlockingQueue::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> ArrayBlockingQueue::toArray(ref<link::java::array<java::lang::Object>> a) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(a); }
inline ref<java::lang::String> ArrayBlockingQueue::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline void ArrayBlockingQueue::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jint ArrayBlockingQueue::drainTo(ref<java::util::Collection> c) { return call_method<SCAPIX_META_STRING("drainTo"), jint>(c); }
inline jint ArrayBlockingQueue::drainTo(ref<java::util::Collection> c, jint maxElements) { return call_method<SCAPIX_META_STRING("drainTo"), jint>(c, maxElements); }
inline ref<java::util::Iterator> ArrayBlockingQueue::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<java::util::Spliterator> ArrayBlockingQueue::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }

} // namespace java::util::concurrent
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_CONCURRENT_ARRAYBLOCKINGQUEUE_H
