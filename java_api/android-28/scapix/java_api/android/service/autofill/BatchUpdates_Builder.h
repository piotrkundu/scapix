// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_BUILDER_H
#define SCAPIX_ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_BUILDER_H

namespace scapix::java_api {

namespace android::service::autofill { class BatchUpdates; }
namespace android::service::autofill { class Transformation; }
namespace android::widget { class RemoteViews; }

namespace android::service::autofill {

class BatchUpdates_Builder : public object_base<SCAPIX_META_STRING("android/service/autofill/BatchUpdates$Builder"),
	java::lang::Object>
{
public:

	static ref<BatchUpdates_Builder> new_object();
	ref<android::service::autofill::BatchUpdates_Builder> updateTemplate(ref<android::widget::RemoteViews> updates);
	ref<android::service::autofill::BatchUpdates_Builder> transformChild(jint id, ref<android::service::autofill::Transformation> transformation);
	ref<android::service::autofill::BatchUpdates> build();

protected:

	BatchUpdates_Builder(handle_type h) : base_(h) {}

};

} // namespace android::service::autofill
} // namespace scapix::java_api

#include <scapix/java_api/android/service/autofill/BatchUpdates.h>
#include <scapix/java_api/android/service/autofill/Transformation.h>
#include <scapix/java_api/android/widget/RemoteViews.h>

namespace scapix::java_api {
namespace android::service::autofill {

inline ref<BatchUpdates_Builder> BatchUpdates_Builder::new_object() { return base_::new_object(); }
inline ref<android::service::autofill::BatchUpdates_Builder> BatchUpdates_Builder::updateTemplate(ref<android::widget::RemoteViews> updates) { return call_method<SCAPIX_META_STRING("updateTemplate"), ref<android::service::autofill::BatchUpdates_Builder>>(updates); }
inline ref<android::service::autofill::BatchUpdates_Builder> BatchUpdates_Builder::transformChild(jint id, ref<android::service::autofill::Transformation> transformation) { return call_method<SCAPIX_META_STRING("transformChild"), ref<android::service::autofill::BatchUpdates_Builder>>(id, transformation); }
inline ref<android::service::autofill::BatchUpdates> BatchUpdates_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::service::autofill::BatchUpdates>>(); }

} // namespace android::service::autofill
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_BUILDER_H
