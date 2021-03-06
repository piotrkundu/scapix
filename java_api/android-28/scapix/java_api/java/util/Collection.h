// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Iterable.h>

#ifndef SCAPIX_JAVA_UTIL_COLLECTION_H
#define SCAPIX_JAVA_UTIL_COLLECTION_H

namespace scapix::java_api {

namespace java::util { class Iterator; }
namespace java::util { class Spliterator; }
namespace java::util::function { class Predicate; }
namespace java::util::stream { class Stream; }

namespace java::util {

class Collection : public object_base<SCAPIX_META_STRING("java/util/Collection"),
	java::lang::Object,
	java::lang::Iterable>
{
public:

	jint size();
	jboolean isEmpty();
	jboolean contains(ref<java::lang::Object> p1);
	ref<java::util::Iterator> iterator();
	ref<link::java::array<java::lang::Object>> toArray();
	ref<link::java::array<java::lang::Object>> toArray(ref<link::java::array<java::lang::Object>> p1);
	jboolean add(ref<java::lang::Object> p1);
	jboolean remove(ref<java::lang::Object> p1);
	jboolean containsAll(ref<java::util::Collection> p1);
	jboolean addAll(ref<java::util::Collection> p1);
	jboolean removeAll(ref<java::util::Collection> p1);
	jboolean removeIf(ref<java::util::function::Predicate> filter);
	jboolean retainAll(ref<java::util::Collection> p1);
	void clear();
	jboolean equals(ref<java::lang::Object> p1);
	jint hashCode();
	ref<java::util::Spliterator> spliterator();
	ref<java::util::stream::Stream> stream();
	ref<java::util::stream::Stream> parallelStream();

protected:

	Collection(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/java/util/stream/Stream.h>

namespace scapix::java_api {
namespace java::util {

inline jint Collection::size() { return call_method<SCAPIX_META_STRING("size"), jint>(); }
inline jboolean Collection::isEmpty() { return call_method<SCAPIX_META_STRING("isEmpty"), jboolean>(); }
inline jboolean Collection::contains(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("contains"), jboolean>(p1); }
inline ref<java::util::Iterator> Collection::iterator() { return call_method<SCAPIX_META_STRING("iterator"), ref<java::util::Iterator>>(); }
inline ref<link::java::array<java::lang::Object>> Collection::toArray() { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(); }
inline ref<link::java::array<java::lang::Object>> Collection::toArray(ref<link::java::array<java::lang::Object>> p1) { return call_method<SCAPIX_META_STRING("toArray"), ref<link::java::array<java::lang::Object>>>(p1); }
inline jboolean Collection::add(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("add"), jboolean>(p1); }
inline jboolean Collection::remove(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("remove"), jboolean>(p1); }
inline jboolean Collection::containsAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("containsAll"), jboolean>(p1); }
inline jboolean Collection::addAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("addAll"), jboolean>(p1); }
inline jboolean Collection::removeAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("removeAll"), jboolean>(p1); }
inline jboolean Collection::removeIf(ref<java::util::function::Predicate> filter) { return call_method<SCAPIX_META_STRING("removeIf"), jboolean>(filter); }
inline jboolean Collection::retainAll(ref<java::util::Collection> p1) { return call_method<SCAPIX_META_STRING("retainAll"), jboolean>(p1); }
inline void Collection::clear() { return call_method<SCAPIX_META_STRING("clear"), void>(); }
inline jboolean Collection::equals(ref<java::lang::Object> p1) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(p1); }
inline jint Collection::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::util::Spliterator> Collection::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }
inline ref<java::util::stream::Stream> Collection::stream() { return call_method<SCAPIX_META_STRING("stream"), ref<java::util::stream::Stream>>(); }
inline ref<java::util::stream::Stream> Collection::parallelStream() { return call_method<SCAPIX_META_STRING("parallelStream"), ref<java::util::stream::Stream>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_COLLECTION_H
