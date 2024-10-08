#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoPlayer)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Video {
struct Video3DLayout;
}
namespace UnityEngine::Video {
struct VideoAspectRatio;
}
namespace UnityEngine::Video {
struct VideoAudioOutputMode;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::Video {
struct VideoRenderMode;
}
namespace UnityEngine::Video {
struct VideoSource;
}
namespace UnityEngine::Video {
struct VideoTimeReference;
}
namespace UnityEngine::Video {
struct VideoTimeSource;
}
namespace UnityEngine::Video {
struct VideoTimeUpdateMode;
}
namespace UnityEngine::Video {
class __VideoPlayer__ErrorEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__EventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__TimeEventHandler;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine::Video {
class __VideoPlayer__ErrorEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__EventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class __VideoPlayer__TimeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__EventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::__VideoPlayer__TimeEventHandler);
// Type: ::EventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// CS Name: ::VideoPlayer::EventHandler*
class CORDL_TYPE __VideoPlayer__EventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a6e950, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source);

  static inline ::UnityEngine::Video::__VideoPlayer__EventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a6e8b4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__EventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__EventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__EventHandler(__VideoPlayer__EventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__EventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__EventHandler(__VideoPlayer__EventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18412 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__EventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::ErrorEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// CS Name: ::VideoPlayer::ErrorEventHandler*
class CORDL_TYPE __VideoPlayer__ErrorEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a6ea04, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message);

  static inline ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a6e964, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__ErrorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__ErrorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__ErrorEventHandler(__VideoPlayer__ErrorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__ErrorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__ErrorEventHandler(__VideoPlayer__ErrorEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::FrameReadyEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// CS Name: ::VideoPlayer::FrameReadyEventHandler*
class CORDL_TYPE __VideoPlayer__FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a6eab8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  static inline ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a6ea18, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__FrameReadyEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__FrameReadyEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__FrameReadyEventHandler(__VideoPlayer__FrameReadyEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__FrameReadyEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__FrameReadyEventHandler(__VideoPlayer__FrameReadyEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::TimeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// CS Name: ::VideoPlayer::TimeEventHandler*
class CORDL_TYPE __VideoPlayer__TimeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4a6eb6c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  static inline ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4a6eacc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__TimeEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__TimeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__TimeEventHandler(__VideoPlayer__TimeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__TimeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__TimeEventHandler(__VideoPlayer__TimeEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__TimeEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: UnityEngine.Video::VideoPlayer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// CS Name: ::UnityEngine.Video::VideoPlayer*
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using ErrorEventHandler = ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler;

  using EventHandler = ::UnityEngine::Video::__VideoPlayer__EventHandler;

  using FrameReadyEventHandler = ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler;

  using TimeEventHandler = ::UnityEngine::Video::__VideoPlayer__TimeEventHandler;

  __declspec(property(get = get_aspectRatio, put = set_aspectRatio)) ::UnityEngine::Video::VideoAspectRatio aspectRatio;

  __declspec(property(get = get_audioOutputMode, put = set_audioOutputMode)) ::UnityEngine::Video::VideoAudioOutputMode audioOutputMode;

  __declspec(property(get = get_audioTrackCount)) uint16_t audioTrackCount;

  __declspec(property(get = get_canSetDirectAudioVolume)) bool canSetDirectAudioVolume;

  __declspec(property(get = get_canSetPlaybackSpeed)) bool canSetPlaybackSpeed;

  __declspec(property(get = get_canSetSkipOnDrop)) bool canSetSkipOnDrop;

  __declspec(property(get = get_canSetTime)) bool canSetTime;

  __declspec(property(get = get_canSetTimeSource)) bool canSetTimeSource;

  __declspec(property(get = get_canSetTimeUpdateMode)) bool canSetTimeUpdateMode;

  __declspec(property(get = get_canStep)) bool canStep;

  __declspec(property(get = get_clip, put = set_clip)) ::UnityW<::UnityEngine::Video::VideoClip> clip;

  /// @brief Field clockResyncOccurred, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_clockResyncOccurred, put = __cordl_internal_set_clockResyncOccurred)) ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* clockResyncOccurred;

  __declspec(property(get = get_clockTime)) double_t clockTime;

  __declspec(property(get = get_controlledAudioTrackCount, put = set_controlledAudioTrackCount)) uint16_t controlledAudioTrackCount;

  /// @brief Field errorReceived, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_errorReceived, put = __cordl_internal_set_errorReceived)) ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* errorReceived;

  __declspec(property(get = get_externalReferenceTime, put = set_externalReferenceTime)) double_t externalReferenceTime;

  __declspec(property(get = get_frame, put = set_frame)) int64_t frame;

  __declspec(property(get = get_frameCount)) uint64_t frameCount;

  /// @brief Field frameDropped, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_frameDropped, put = __cordl_internal_set_frameDropped)) ::UnityEngine::Video::__VideoPlayer__EventHandler* frameDropped;

  __declspec(property(get = get_frameRate)) float_t frameRate;

  /// @brief Field frameReady, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_frameReady, put = __cordl_internal_set_frameReady)) ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* frameReady;

  __declspec(property(get = get_height)) uint32_t height;

  __declspec(property(get = get_isLooping, put = set_isLooping)) bool isLooping;

  __declspec(property(get = get_isPaused)) bool isPaused;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isPrepared)) bool isPrepared;

  __declspec(property(get = get_length)) double_t length;

  /// @brief Field loopPointReached, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_loopPointReached, put = __cordl_internal_set_loopPointReached)) ::UnityEngine::Video::__VideoPlayer__EventHandler* loopPointReached;

  __declspec(property(get = get_pixelAspectRatioDenominator)) uint32_t pixelAspectRatioDenominator;

  __declspec(property(get = get_pixelAspectRatioNumerator)) uint32_t pixelAspectRatioNumerator;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_playbackSpeed, put = set_playbackSpeed)) float_t playbackSpeed;

  /// @brief Field prepareCompleted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prepareCompleted, put = __cordl_internal_set_prepareCompleted)) ::UnityEngine::Video::__VideoPlayer__EventHandler* prepareCompleted;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::Video::VideoRenderMode renderMode;

  /// @brief Field seekCompleted, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_seekCompleted, put = __cordl_internal_set_seekCompleted)) ::UnityEngine::Video::__VideoPlayer__EventHandler* seekCompleted;

  __declspec(property(get = get_sendFrameReadyEvents, put = set_sendFrameReadyEvents)) bool sendFrameReadyEvents;

  __declspec(property(get = get_skipOnDrop, put = set_skipOnDrop)) bool skipOnDrop;

  __declspec(property(get = get_source, put = set_source)) ::UnityEngine::Video::VideoSource source;

  /// @brief Field started, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) ::UnityEngine::Video::__VideoPlayer__EventHandler* started;

  __declspec(property(get = get_targetCamera, put = set_targetCamera)) ::UnityW<::UnityEngine::Camera> targetCamera;

  __declspec(property(get = get_targetCamera3DLayout, put = set_targetCamera3DLayout)) ::UnityEngine::Video::Video3DLayout targetCamera3DLayout;

  __declspec(property(get = get_targetCameraAlpha, put = set_targetCameraAlpha)) float_t targetCameraAlpha;

  __declspec(property(get = get_targetMaterialProperty, put = set_targetMaterialProperty)) ::StringW targetMaterialProperty;

  __declspec(property(get = get_targetMaterialRenderer, put = set_targetMaterialRenderer)) ::UnityW<::UnityEngine::Renderer> targetMaterialRenderer;

  __declspec(property(get = get_targetTexture, put = set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture> texture;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_timeReference, put = set_timeReference)) ::UnityEngine::Video::VideoTimeReference timeReference;

  __declspec(property(get = get_timeSource, put = set_timeSource)) ::UnityEngine::Video::VideoTimeSource timeSource;

  __declspec(property(get = get_timeUpdateMode, put = set_timeUpdateMode)) ::UnityEngine::Video::VideoTimeUpdateMode timeUpdateMode;

  __declspec(property(get = get_url, put = set_url)) ::StringW url;

  __declspec(property(get = get_waitForFirstFrame, put = set_waitForFirstFrame)) bool waitForFirstFrame;

  __declspec(property(get = get_width)) uint32_t width;

  /// @brief Method EnableAudioTrack, addr 0x4a6d9a8, size 0x54, virtual false, abstract: false, final false
  inline void EnableAudioTrack(uint16_t trackIndex, bool enabled);

  /// @brief Method GetAudioChannelCount, addr 0x4a6d73c, size 0x44, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t trackIndex);

  /// @brief Method GetAudioLanguageCode, addr 0x4a6d6f8, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguageCode(uint16_t trackIndex);

  /// @brief Method GetAudioSampleRate, addr 0x4a6d780, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t trackIndex);

  /// @brief Method GetControlledAudioTrackCount, addr 0x4a6d828, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t GetControlledAudioTrackCount();

  /// @brief Method GetDirectAudioMute, addr 0x4a6db94, size 0x44, virtual false, abstract: false, final false
  inline bool GetDirectAudioMute(uint16_t trackIndex);

  /// @brief Method GetDirectAudioVolume, addr 0x4a6dafc, size 0x44, virtual false, abstract: false, final false
  inline float_t GetDirectAudioVolume(uint16_t trackIndex);

  /// @brief Method GetTargetAudioSource, addr 0x4a6dc2c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> GetTargetAudioSource(uint16_t trackIndex);

  /// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x4a6e878, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  /// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x4a6e80c, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr);

  /// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x4a6e7d8, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameReadyCallback_Internal, addr 0x4a6e738, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  /// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x4a6e770, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x4a6e704, size 0x34, virtual false, abstract: false, final false
  static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x4a6e844, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeStartedCallback_Internal, addr 0x4a6e7a4, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method IsAudioTrackEnabled, addr 0x4a6d9fc, size 0x44, virtual false, abstract: false, final false
  inline bool IsAudioTrackEnabled(uint16_t trackIndex);

  static inline ::UnityEngine::Video::VideoPlayer* New_ctor();

  /// @brief Method Pause, addr 0x4a6ce6c, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Play, addr 0x4a6ce30, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Prepare, addr 0x4a6ccb8, size 0x3c, virtual false, abstract: false, final false
  inline void Prepare();

  /// @brief Method SetControlledAudioTrackCount, addr 0x4a6d964, size 0x44, virtual false, abstract: false, final false
  inline void SetControlledAudioTrackCount(uint16_t value);

  /// @brief Method SetDirectAudioMute, addr 0x4a6dbd8, size 0x54, virtual false, abstract: false, final false
  inline void SetDirectAudioMute(uint16_t trackIndex, bool mute);

  /// @brief Method SetDirectAudioVolume, addr 0x4a6db40, size 0x54, virtual false, abstract: false, final false
  inline void SetDirectAudioVolume(uint16_t trackIndex, float_t volume);

  /// @brief Method SetTargetAudioSource, addr 0x4a6dc70, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetAudioSource(uint16_t trackIndex, ::UnityEngine::AudioSource* source);

  /// @brief Method StepForward, addr 0x4a6d118, size 0x3c, virtual false, abstract: false, final false
  inline void StepForward();

  /// @brief Method Stop, addr 0x4a6cea8, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  constexpr ::UnityEngine::Video::__VideoPlayer__TimeEventHandler*& __cordl_internal_get_clockResyncOccurred();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*> const& __cordl_internal_get_clockResyncOccurred() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*& __cordl_internal_get_errorReceived();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*> const& __cordl_internal_get_errorReceived() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_frameDropped();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_frameDropped() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*& __cordl_internal_get_frameReady();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*> const& __cordl_internal_get_frameReady() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_loopPointReached();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_loopPointReached() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_prepareCompleted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_prepareCompleted() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_seekCompleted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_seekCompleted() const;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_started();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_started() const;

  constexpr void __cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  constexpr void __cordl_internal_set_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  constexpr void __cordl_internal_set_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr void __cordl_internal_set_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  constexpr void __cordl_internal_set_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr void __cordl_internal_set_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr void __cordl_internal_set_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr void __cordl_internal_set_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method .ctor, addr 0x4a6e8ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_clockResyncOccurred, addr 0x4a6e414, size 0x9c, virtual false, abstract: false, final false
  inline void add_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  /// @brief Method add_errorReceived, addr 0x4a6e1a4, size 0x9c, virtual false, abstract: false, final false
  inline void add_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  /// @brief Method add_frameDropped, addr 0x4a6e06c, size 0x9c, virtual false, abstract: false, final false
  inline void add_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_frameReady, addr 0x4a6e5cc, size 0x9c, virtual false, abstract: false, final false
  inline void add_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  /// @brief Method add_loopPointReached, addr 0x4a6ddfc, size 0x9c, virtual false, abstract: false, final false
  inline void add_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_prepareCompleted, addr 0x4a6dcc4, size 0x9c, virtual false, abstract: false, final false
  inline void add_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_seekCompleted, addr 0x4a6e2dc, size 0x9c, virtual false, abstract: false, final false
  inline void add_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_started, addr 0x4a6df34, size 0x9c, virtual false, abstract: false, final false
  inline void add_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method get_aspectRatio, addr 0x4a6caf4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAspectRatio get_aspectRatio();

  /// @brief Method get_audioOutputMode, addr 0x4a6da40, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode();

  /// @brief Method get_audioTrackCount, addr 0x4a6d6bc, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method get_canSetDirectAudioVolume, addr 0x4a6dac0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetDirectAudioVolume();

  /// @brief Method get_canSetPlaybackSpeed, addr 0x4a6d154, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetPlaybackSpeed();

  /// @brief Method get_canSetSkipOnDrop, addr 0x4a6d45c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetSkipOnDrop();

  /// @brief Method get_canSetTime, addr 0x4a6cf5c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTime();

  /// @brief Method get_canSetTimeSource, addr 0x4a6d298, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTimeSource();

  /// @brief Method get_canSetTimeUpdateMode, addr 0x4a6c8b8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTimeUpdateMode();

  /// @brief Method get_canStep, addr 0x4a6d0dc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canStep();

  /// @brief Method get_clip, addr 0x4a6c7b8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Video::VideoClip> get_clip();

  /// @brief Method get_clockTime, addr 0x4a6d0a0, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_clockTime();

  /// @brief Method get_controlledAudioTrackCount, addr 0x4a6d7ec, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_controlledAudioTrackCount();

  /// @brief Method get_controlledAudioTrackMaxCount, addr 0x4a6d7c4, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t get_controlledAudioTrackMaxCount();

  /// @brief Method get_externalReferenceTime, addr 0x4a6d3d4, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_externalReferenceTime();

  /// @brief Method get_frame, addr 0x4a6d020, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_frame();

  /// @brief Method get_frameCount, addr 0x4a6d518, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameRate, addr 0x4a6d554, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_height, addr 0x4a6d608, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_isLooping, addr 0x4a6d218, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isLooping();

  /// @brief Method get_isPaused, addr 0x4a6cf20, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_isPlaying, addr 0x4a6cee4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPrepared, addr 0x4a6ccf4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPrepared();

  /// @brief Method get_length, addr 0x4a6d590, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x4a6d680, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x4a6d644, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_playOnAwake, addr 0x4a6cdb0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playbackSpeed, addr 0x4a6d190, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_playbackSpeed();

  /// @brief Method get_renderMode, addr 0x4a6c838, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoRenderMode get_renderMode();

  /// @brief Method get_sendFrameReadyEvents, addr 0x4a6e54c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_sendFrameReadyEvents();

  /// @brief Method get_skipOnDrop, addr 0x4a6d498, size 0x3c, virtual false, abstract: false, final false
  inline bool get_skipOnDrop();

  /// @brief Method get_source, addr 0x4a6c638, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoSource get_source();

  /// @brief Method get_targetCamera, addr 0x4a6c8f4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_targetCamera();

  /// @brief Method get_targetCamera3DLayout, addr 0x4a6cbfc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout();

  /// @brief Method get_targetCameraAlpha, addr 0x4a6cb74, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_targetCameraAlpha();

  /// @brief Method get_targetMaterialProperty, addr 0x4a6ca74, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_targetMaterialProperty();

  /// @brief Method get_targetMaterialRenderer, addr 0x4a6c9f4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_targetMaterialRenderer();

  /// @brief Method get_targetTexture, addr 0x4a6c974, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_texture, addr 0x4a6cc7c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method get_time, addr 0x4a6cf98, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_timeReference, addr 0x4a6d354, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeReference get_timeReference();

  /// @brief Method get_timeSource, addr 0x4a6d2d4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeSource get_timeSource();

  /// @brief Method get_timeUpdateMode, addr 0x4a6c6b8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeUpdateMode get_timeUpdateMode();

  /// @brief Method get_url, addr 0x4a6c738, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_url();

  /// @brief Method get_waitForFirstFrame, addr 0x4a6cd30, size 0x3c, virtual false, abstract: false, final false
  inline bool get_waitForFirstFrame();

  /// @brief Method get_width, addr 0x4a6d5cc, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_width();

  /// @brief Method remove_clockResyncOccurred, addr 0x4a6e4b0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  /// @brief Method remove_errorReceived, addr 0x4a6e240, size 0x9c, virtual false, abstract: false, final false
  inline void remove_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  /// @brief Method remove_frameDropped, addr 0x4a6e108, size 0x9c, virtual false, abstract: false, final false
  inline void remove_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_frameReady, addr 0x4a6e668, size 0x9c, virtual false, abstract: false, final false
  inline void remove_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  /// @brief Method remove_loopPointReached, addr 0x4a6de98, size 0x9c, virtual false, abstract: false, final false
  inline void remove_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_prepareCompleted, addr 0x4a6dd60, size 0x9c, virtual false, abstract: false, final false
  inline void remove_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_seekCompleted, addr 0x4a6e378, size 0x9c, virtual false, abstract: false, final false
  inline void remove_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_started, addr 0x4a6dfd0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method set_aspectRatio, addr 0x4a6cb30, size 0x44, virtual false, abstract: false, final false
  inline void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value);

  /// @brief Method set_audioOutputMode, addr 0x4a6da7c, size 0x44, virtual false, abstract: false, final false
  inline void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value);

  /// @brief Method set_clip, addr 0x4a6c7f4, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::Video::VideoClip* value);

  /// @brief Method set_controlledAudioTrackCount, addr 0x4a6d864, size 0x100, virtual false, abstract: false, final false
  inline void set_controlledAudioTrackCount(uint16_t value);

  /// @brief Method set_externalReferenceTime, addr 0x4a6d410, size 0x4c, virtual false, abstract: false, final false
  inline void set_externalReferenceTime(double_t value);

  /// @brief Method set_frame, addr 0x4a6d05c, size 0x44, virtual false, abstract: false, final false
  inline void set_frame(int64_t value);

  /// @brief Method set_isLooping, addr 0x4a6d254, size 0x44, virtual false, abstract: false, final false
  inline void set_isLooping(bool value);

  /// @brief Method set_playOnAwake, addr 0x4a6cdec, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playbackSpeed, addr 0x4a6d1cc, size 0x4c, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method set_renderMode, addr 0x4a6c874, size 0x44, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::Video::VideoRenderMode value);

  /// @brief Method set_sendFrameReadyEvents, addr 0x4a6e588, size 0x44, virtual false, abstract: false, final false
  inline void set_sendFrameReadyEvents(bool value);

  /// @brief Method set_skipOnDrop, addr 0x4a6d4d4, size 0x44, virtual false, abstract: false, final false
  inline void set_skipOnDrop(bool value);

  /// @brief Method set_source, addr 0x4a6c674, size 0x44, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Video::VideoSource value);

  /// @brief Method set_targetCamera, addr 0x4a6c930, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera(::UnityEngine::Camera* value);

  /// @brief Method set_targetCamera3DLayout, addr 0x4a6cc38, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value);

  /// @brief Method set_targetCameraAlpha, addr 0x4a6cbb0, size 0x4c, virtual false, abstract: false, final false
  inline void set_targetCameraAlpha(float_t value);

  /// @brief Method set_targetMaterialProperty, addr 0x4a6cab0, size 0x44, virtual false, abstract: false, final false
  inline void set_targetMaterialProperty(::StringW value);

  /// @brief Method set_targetMaterialRenderer, addr 0x4a6ca30, size 0x44, virtual false, abstract: false, final false
  inline void set_targetMaterialRenderer(::UnityEngine::Renderer* value);

  /// @brief Method set_targetTexture, addr 0x4a6c9b0, size 0x44, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_time, addr 0x4a6cfd4, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method set_timeReference, addr 0x4a6d390, size 0x44, virtual false, abstract: false, final false
  inline void set_timeReference(::UnityEngine::Video::VideoTimeReference value);

  /// @brief Method set_timeSource, addr 0x4a6d310, size 0x44, virtual false, abstract: false, final false
  inline void set_timeSource(::UnityEngine::Video::VideoTimeSource value);

  /// @brief Method set_timeUpdateMode, addr 0x4a6c6f4, size 0x44, virtual false, abstract: false, final false
  inline void set_timeUpdateMode(::UnityEngine::Video::VideoTimeUpdateMode value);

  /// @brief Method set_url, addr 0x4a6c774, size 0x44, virtual false, abstract: false, final false
  inline void set_url(::StringW value);

  /// @brief Method set_waitForFirstFrame, addr 0x4a6cd6c, size 0x44, virtual false, abstract: false, final false
  inline void set_waitForFirstFrame(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer(VideoPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer(VideoPlayer const&) = delete;

  /// @brief Field prepareCompleted, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___prepareCompleted;

  /// @brief Field loopPointReached, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___loopPointReached;

  /// @brief Field started, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___started;

  /// @brief Field frameDropped, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___frameDropped;

  /// @brief Field errorReceived, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* ___errorReceived;

  /// @brief Field seekCompleted, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__EventHandler* ___seekCompleted;

  /// @brief Field clockResyncOccurred, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* ___clockResyncOccurred;

  /// @brief Field frameReady, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* ___frameReady;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___prepareCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___loopPointReached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___errorReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___seekCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___clockResyncOccurred) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameReady) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
NEED_NO_BOX(::UnityEngine::Video::__VideoPlayer__TimeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::__VideoPlayer__TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
