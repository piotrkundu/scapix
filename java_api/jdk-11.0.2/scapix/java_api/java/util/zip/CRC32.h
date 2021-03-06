// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/zip/Checksum.h>

#ifndef SCAPIX_JAVA_UTIL_ZIP_CRC32_H
#define SCAPIX_JAVA_UTIL_ZIP_CRC32_H

namespace scapix::java_api {

namespace java::nio { class ByteBuffer; }

namespace java::util::zip {

class CRC32 : public object_base<SCAPIX_META_STRING("java/util/zip/CRC32"),
	java::lang::Object,
	java::util::zip::Checksum>
{
public:

	static ref<CRC32> new_object();
	void update(jint b);
	void update(ref<link::java::array<jbyte>> b, jint off, jint len);
	void update(ref<java::nio::ByteBuffer> buffer);
	void reset();
	jlong getValue();

protected:

	CRC32(handle_type h) : base_(h) {}

};

} // namespace java::util::zip
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteBuffer.h>

namespace scapix::java_api {
namespace java::util::zip {

inline ref<CRC32> CRC32::new_object() { return base_::new_object(); }
inline void CRC32::update(jint b) { return call_method<SCAPIX_META_STRING("update"), void>(b); }
inline void CRC32::update(ref<link::java::array<jbyte>> b, jint off, jint len) { return call_method<SCAPIX_META_STRING("update"), void>(b, off, len); }
inline void CRC32::update(ref<java::nio::ByteBuffer> buffer) { return call_method<SCAPIX_META_STRING("update"), void>(buffer); }
inline void CRC32::reset() { return call_method<SCAPIX_META_STRING("reset"), void>(); }
inline jlong CRC32::getValue() { return call_method<SCAPIX_META_STRING("getValue"), jlong>(); }

} // namespace java::util::zip
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_ZIP_CRC32_H
