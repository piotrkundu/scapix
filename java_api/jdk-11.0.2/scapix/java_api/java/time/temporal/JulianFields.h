// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_TIME_TEMPORAL_JULIANFIELDS_H
#define SCAPIX_JAVA_TIME_TEMPORAL_JULIANFIELDS_H

namespace scapix::java_api {

namespace java::time::temporal { class TemporalField; }

namespace java::time::temporal {

class JulianFields : public object_base<SCAPIX_META_STRING("java/time/temporal/JulianFields"),
	java::lang::Object>
{
public:

	static ref<java::time::temporal::TemporalField> JULIAN_DAY_();
	static ref<java::time::temporal::TemporalField> MODIFIED_JULIAN_DAY_();
	static ref<java::time::temporal::TemporalField> RATA_DIE_();


protected:

	JulianFields(handle_type h) : base_(h) {}

};

} // namespace java::time::temporal
} // namespace scapix::java_api

#include <scapix/java_api/java/time/temporal/TemporalField.h>

namespace scapix::java_api {
namespace java::time::temporal {

inline ref<java::time::temporal::TemporalField> JulianFields::JULIAN_DAY_() { return get_static_field<SCAPIX_META_STRING("JULIAN_DAY"), ref<java::time::temporal::TemporalField>>(); }
inline ref<java::time::temporal::TemporalField> JulianFields::MODIFIED_JULIAN_DAY_() { return get_static_field<SCAPIX_META_STRING("MODIFIED_JULIAN_DAY"), ref<java::time::temporal::TemporalField>>(); }
inline ref<java::time::temporal::TemporalField> JulianFields::RATA_DIE_() { return get_static_field<SCAPIX_META_STRING("RATA_DIE"), ref<java::time::temporal::TemporalField>>(); }

} // namespace java::time::temporal
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_TEMPORAL_JULIANFIELDS_H
