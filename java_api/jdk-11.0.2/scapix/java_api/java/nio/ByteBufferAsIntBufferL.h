// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/IntBuffer.h>

#ifndef SCAPIX_JAVA_NIO_BYTEBUFFERASINTBUFFERL_H
#define SCAPIX_JAVA_NIO_BYTEBUFFERASINTBUFFERL_H

namespace scapix::java_api {

namespace java::nio { class ByteOrder; }

namespace java::nio {

// private
class ByteBufferAsIntBufferL : public object_base<SCAPIX_META_STRING("java/nio/ByteBufferAsIntBufferL"),
	java::nio::IntBuffer>
{
public:

	ref<java::nio::IntBuffer> slice();
	ref<java::nio::IntBuffer> duplicate();
	ref<java::nio::IntBuffer> asReadOnlyBuffer();
	jint get();
	jint get(jint i);
	ref<java::nio::IntBuffer> put(jint x);
	ref<java::nio::IntBuffer> put(jint i, jint x);
	ref<java::nio::IntBuffer> compact();
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::ByteOrder> order();

protected:

	ByteBufferAsIntBufferL(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferL::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferL::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferL::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::IntBuffer>>(); }
inline jint ByteBufferAsIntBufferL::get() { return call_method<SCAPIX_META_STRING("get"), jint>(); }
inline jint ByteBufferAsIntBufferL::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jint>(i); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferL::put(jint x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(x); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferL::put(jint i, jint x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(i, x); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferL::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::IntBuffer>>(); }
inline jboolean ByteBufferAsIntBufferL::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean ByteBufferAsIntBufferL::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::ByteOrder> ByteBufferAsIntBufferL::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_BYTEBUFFERASINTBUFFERL_H
