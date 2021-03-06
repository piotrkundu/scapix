// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER_H
#define SCAPIX_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER_H

namespace scapix::java_api {

namespace android::media::midi { class MidiDevice; }

namespace android::media::midi {

class MidiManager_OnDeviceOpenedListener : public object_base<SCAPIX_META_STRING("android/media/midi/MidiManager$OnDeviceOpenedListener"),
	java::lang::Object>
{
public:

	void onDeviceOpened(ref<android::media::midi::MidiDevice> p1);

protected:

	MidiManager_OnDeviceOpenedListener(handle_type h) : base_(h) {}

};

} // namespace android::media::midi
} // namespace scapix::java_api

#include <scapix/java_api/android/media/midi/MidiDevice.h>

namespace scapix::java_api {
namespace android::media::midi {

inline void MidiManager_OnDeviceOpenedListener::onDeviceOpened(ref<android::media::midi::MidiDevice> p1) { return call_method<SCAPIX_META_STRING("onDeviceOpened"), void>(p1); }

} // namespace android::media::midi
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_MEDIA_MIDI_MIDIMANAGER_ONDEVICEOPENEDLISTENER_H
