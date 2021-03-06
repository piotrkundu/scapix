// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_IO_EXTERNALIZABLE_H
#define SCAPIX_JAVA_IO_EXTERNALIZABLE_H

namespace scapix::java_api {

namespace java::io { class ObjectInput; }
namespace java::io { class ObjectOutput; }

namespace java::io {

class Externalizable : public object_base<SCAPIX_META_STRING("java/io/Externalizable"),
	java::lang::Object,
	java::io::Serializable>
{
public:

	void writeExternal(ref<java::io::ObjectOutput> p1);
	void readExternal(ref<java::io::ObjectInput> p1);

protected:

	Externalizable(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/ObjectInput.h>
#include <scapix/java_api/java/io/ObjectOutput.h>

namespace scapix::java_api {
namespace java::io {

inline void Externalizable::writeExternal(ref<java::io::ObjectOutput> p1) { return call_method<SCAPIX_META_STRING("writeExternal"), void>(p1); }
inline void Externalizable::readExternal(ref<java::io::ObjectInput> p1) { return call_method<SCAPIX_META_STRING("readExternal"), void>(p1); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_EXTERNALIZABLE_H
