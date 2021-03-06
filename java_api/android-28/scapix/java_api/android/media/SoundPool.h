// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_SOUNDPOOL_H
#define SCAPIX_ANDROID_MEDIA_SOUNDPOOL_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::content::res { class AssetFileDescriptor; }
namespace android::media { class SoundPool_OnLoadCompleteListener; }
namespace java::io { class FileDescriptor; }
namespace java::lang { class String; }
namespace android::media { class SoundPool_Builder; }

namespace android::media {

class SoundPool : public object_base<SCAPIX_META_STRING("android/media/SoundPool"),
	java::lang::Object>
{
public:

	using OnLoadCompleteListener = SoundPool_OnLoadCompleteListener;
	using Builder = SoundPool_Builder;

	static ref<SoundPool> new_object(jint maxStreams, jint streamType, jint srcQuality);
	void release();
	jint load(ref<java::lang::String> path, jint priority);
	jint load(ref<android::content::Context> context, jint resId, jint priority);
	jint load(ref<android::content::res::AssetFileDescriptor> afd, jint priority);
	jint load(ref<java::io::FileDescriptor> fd, jlong offset, jlong p3, jint length);
	jboolean unload(jint p1);
	jint play(jint soundID, jfloat leftVolume, jfloat rightVolume, jint priority, jint loop, jfloat rate);
	void pause(jint p1);
	void resume(jint p1);
	void autoPause();
	void autoResume();
	void stop(jint p1);
	void setVolume(jint streamID, jfloat leftVolume, jfloat rightVolume);
	void setPriority(jint p1, jint p2);
	void setLoop(jint p1, jint p2);
	void setRate(jint p1, jfloat p2);
	void setOnLoadCompleteListener(ref<android::media::SoundPool_OnLoadCompleteListener> listener);

protected:

	SoundPool(handle_type h) : base_(h) {}

};

} // namespace android::media
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/media/SoundPool_OnLoadCompleteListener.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::media {

inline ref<SoundPool> SoundPool::new_object(jint maxStreams, jint streamType, jint srcQuality) { return base_::new_object(maxStreams, streamType, srcQuality); }
inline void SoundPool::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }
inline jint SoundPool::load(ref<java::lang::String> path, jint priority) { return call_method<SCAPIX_META_STRING("load"), jint>(path, priority); }
inline jint SoundPool::load(ref<android::content::Context> context, jint resId, jint priority) { return call_method<SCAPIX_META_STRING("load"), jint>(context, resId, priority); }
inline jint SoundPool::load(ref<android::content::res::AssetFileDescriptor> afd, jint priority) { return call_method<SCAPIX_META_STRING("load"), jint>(afd, priority); }
inline jint SoundPool::load(ref<java::io::FileDescriptor> fd, jlong offset, jlong p3, jint length) { return call_method<SCAPIX_META_STRING("load"), jint>(fd, offset, p3, length); }
inline jboolean SoundPool::unload(jint p1) { return call_method<SCAPIX_META_STRING("unload"), jboolean>(p1); }
inline jint SoundPool::play(jint soundID, jfloat leftVolume, jfloat rightVolume, jint priority, jint loop, jfloat rate) { return call_method<SCAPIX_META_STRING("play"), jint>(soundID, leftVolume, rightVolume, priority, loop, rate); }
inline void SoundPool::pause(jint p1) { return call_method<SCAPIX_META_STRING("pause"), void>(p1); }
inline void SoundPool::resume(jint p1) { return call_method<SCAPIX_META_STRING("resume"), void>(p1); }
inline void SoundPool::autoPause() { return call_method<SCAPIX_META_STRING("autoPause"), void>(); }
inline void SoundPool::autoResume() { return call_method<SCAPIX_META_STRING("autoResume"), void>(); }
inline void SoundPool::stop(jint p1) { return call_method<SCAPIX_META_STRING("stop"), void>(p1); }
inline void SoundPool::setVolume(jint streamID, jfloat leftVolume, jfloat rightVolume) { return call_method<SCAPIX_META_STRING("setVolume"), void>(streamID, leftVolume, rightVolume); }
inline void SoundPool::setPriority(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setPriority"), void>(p1, p2); }
inline void SoundPool::setLoop(jint p1, jint p2) { return call_method<SCAPIX_META_STRING("setLoop"), void>(p1, p2); }
inline void SoundPool::setRate(jint p1, jfloat p2) { return call_method<SCAPIX_META_STRING("setRate"), void>(p1, p2); }
inline void SoundPool::setOnLoadCompleteListener(ref<android::media::SoundPool_OnLoadCompleteListener> listener) { return call_method<SCAPIX_META_STRING("setOnLoadCompleteListener"), void>(listener); }

} // namespace android::media
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_SOUNDPOOL_H
