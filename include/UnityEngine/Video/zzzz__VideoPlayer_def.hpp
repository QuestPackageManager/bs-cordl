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
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
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
class VideoPlayer_ErrorEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_EventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_FrameReadyEventHandler;
}
namespace UnityEngine::Video {
class VideoPlayer_TimeEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_ErrorEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_EventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler);
MARK_REF_PTR_T(::UnityEngine::Video::VideoPlayer_TimeEventHandler);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/EventHandler
class CORDL_TYPE VideoPlayer_EventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4ae4444, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source);

  static inline ::UnityEngine::Video::VideoPlayer_EventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ae43a8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer_EventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer_EventHandler(VideoPlayer_EventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_EventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer_EventHandler(VideoPlayer_EventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18538 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_EventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/ErrorEventHandler
class CORDL_TYPE VideoPlayer_ErrorEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4ae44f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message);

  static inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ae4458, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer_ErrorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_ErrorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer_ErrorEventHandler(VideoPlayer_ErrorEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_ErrorEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
class CORDL_TYPE VideoPlayer_FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4ae45ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  static inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ae450c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer_FrameReadyEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_FrameReadyEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer_FrameReadyEventHandler(VideoPlayer_FrameReadyEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Dependencies System.MulticastDelegate
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer/TimeEventHandler
class CORDL_TYPE VideoPlayer_TimeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4ae4660, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  static inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4ae45c0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer_TimeEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer_TimeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer_TimeEventHandler(VideoPlayer_TimeEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer_TimeEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Video {
// Is value type: false
// CS Name: UnityEngine.Video.VideoPlayer
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using ErrorEventHandler = ::UnityEngine::Video::VideoPlayer_ErrorEventHandler;

  using EventHandler = ::UnityEngine::Video::VideoPlayer_EventHandler;

  using FrameReadyEventHandler = ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler;

  using TimeEventHandler = ::UnityEngine::Video::VideoPlayer_TimeEventHandler;

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
  __declspec(property(get = __cordl_internal_get_clockResyncOccurred, put = __cordl_internal_set_clockResyncOccurred)) ::UnityEngine::Video::VideoPlayer_TimeEventHandler* clockResyncOccurred;

  __declspec(property(get = get_clockTime)) double_t clockTime;

  __declspec(property(get = get_controlledAudioTrackCount, put = set_controlledAudioTrackCount)) uint16_t controlledAudioTrackCount;

  /// @brief Field errorReceived, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_errorReceived, put = __cordl_internal_set_errorReceived)) ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* errorReceived;

  __declspec(property(get = get_externalReferenceTime, put = set_externalReferenceTime)) double_t externalReferenceTime;

  __declspec(property(get = get_frame, put = set_frame)) int64_t frame;

  __declspec(property(get = get_frameCount)) uint64_t frameCount;

  /// @brief Field frameDropped, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_frameDropped, put = __cordl_internal_set_frameDropped)) ::UnityEngine::Video::VideoPlayer_EventHandler* frameDropped;

  __declspec(property(get = get_frameRate)) float_t frameRate;

  /// @brief Field frameReady, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_frameReady, put = __cordl_internal_set_frameReady)) ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* frameReady;

  __declspec(property(get = get_height)) uint32_t height;

  __declspec(property(get = get_isLooping, put = set_isLooping)) bool isLooping;

  __declspec(property(get = get_isPaused)) bool isPaused;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isPrepared)) bool isPrepared;

  __declspec(property(get = get_length)) double_t length;

  /// @brief Field loopPointReached, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_loopPointReached, put = __cordl_internal_set_loopPointReached)) ::UnityEngine::Video::VideoPlayer_EventHandler* loopPointReached;

  __declspec(property(get = get_pixelAspectRatioDenominator)) uint32_t pixelAspectRatioDenominator;

  __declspec(property(get = get_pixelAspectRatioNumerator)) uint32_t pixelAspectRatioNumerator;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_playbackSpeed, put = set_playbackSpeed)) float_t playbackSpeed;

  /// @brief Field prepareCompleted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prepareCompleted, put = __cordl_internal_set_prepareCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler* prepareCompleted;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::Video::VideoRenderMode renderMode;

  /// @brief Field seekCompleted, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_seekCompleted, put = __cordl_internal_set_seekCompleted)) ::UnityEngine::Video::VideoPlayer_EventHandler* seekCompleted;

  __declspec(property(get = get_sendFrameReadyEvents, put = set_sendFrameReadyEvents)) bool sendFrameReadyEvents;

  __declspec(property(get = get_skipOnDrop, put = set_skipOnDrop)) bool skipOnDrop;

  __declspec(property(get = get_source, put = set_source)) ::UnityEngine::Video::VideoSource source;

  /// @brief Field started, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) ::UnityEngine::Video::VideoPlayer_EventHandler* started;

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

  /// @brief Method EnableAudioTrack, addr 0x4ae349c, size 0x54, virtual false, abstract: false, final false
  inline void EnableAudioTrack(uint16_t trackIndex, bool enabled);

  /// @brief Method GetAudioChannelCount, addr 0x4ae3230, size 0x44, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t trackIndex);

  /// @brief Method GetAudioLanguageCode, addr 0x4ae31ec, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguageCode(uint16_t trackIndex);

  /// @brief Method GetAudioSampleRate, addr 0x4ae3274, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t trackIndex);

  /// @brief Method GetControlledAudioTrackCount, addr 0x4ae331c, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t GetControlledAudioTrackCount();

  /// @brief Method GetDirectAudioMute, addr 0x4ae3688, size 0x44, virtual false, abstract: false, final false
  inline bool GetDirectAudioMute(uint16_t trackIndex);

  /// @brief Method GetDirectAudioVolume, addr 0x4ae35f0, size 0x44, virtual false, abstract: false, final false
  inline float_t GetDirectAudioVolume(uint16_t trackIndex);

  /// @brief Method GetTargetAudioSource, addr 0x4ae3720, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> GetTargetAudioSource(uint16_t trackIndex);

  /// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x4ae436c, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  /// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x4ae4300, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr);

  /// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x4ae42cc, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameReadyCallback_Internal, addr 0x4ae422c, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  /// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x4ae4264, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x4ae41f8, size 0x34, virtual false, abstract: false, final false
  static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x4ae4338, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeStartedCallback_Internal, addr 0x4ae4298, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method IsAudioTrackEnabled, addr 0x4ae34f0, size 0x44, virtual false, abstract: false, final false
  inline bool IsAudioTrackEnabled(uint16_t trackIndex);

  static inline ::UnityEngine::Video::VideoPlayer* New_ctor();

  /// @brief Method Pause, addr 0x4ae2960, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Play, addr 0x4ae2924, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Prepare, addr 0x4ae27ac, size 0x3c, virtual false, abstract: false, final false
  inline void Prepare();

  /// @brief Method SetControlledAudioTrackCount, addr 0x4ae3458, size 0x44, virtual false, abstract: false, final false
  inline void SetControlledAudioTrackCount(uint16_t value);

  /// @brief Method SetDirectAudioMute, addr 0x4ae36cc, size 0x54, virtual false, abstract: false, final false
  inline void SetDirectAudioMute(uint16_t trackIndex, bool mute);

  /// @brief Method SetDirectAudioVolume, addr 0x4ae3634, size 0x54, virtual false, abstract: false, final false
  inline void SetDirectAudioVolume(uint16_t trackIndex, float_t volume);

  /// @brief Method SetTargetAudioSource, addr 0x4ae3764, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetAudioSource(uint16_t trackIndex, ::UnityEngine::AudioSource* source);

  /// @brief Method StepForward, addr 0x4ae2c0c, size 0x3c, virtual false, abstract: false, final false
  inline void StepForward();

  /// @brief Method Stop, addr 0x4ae299c, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler* const& __cordl_internal_get_clockResyncOccurred() const;

  constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler*& __cordl_internal_get_clockResyncOccurred();

  constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* const& __cordl_internal_get_errorReceived() const;

  constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*& __cordl_internal_get_errorReceived();

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_frameDropped() const;

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_frameDropped();

  constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* const& __cordl_internal_get_frameReady() const;

  constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*& __cordl_internal_get_frameReady();

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_loopPointReached() const;

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_loopPointReached();

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_prepareCompleted() const;

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_prepareCompleted();

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_seekCompleted() const;

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_seekCompleted();

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& __cordl_internal_get_started() const;

  constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& __cordl_internal_get_started();

  constexpr void __cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value);

  constexpr void __cordl_internal_set_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value);

  constexpr void __cordl_internal_set_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  constexpr void __cordl_internal_set_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value);

  constexpr void __cordl_internal_set_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  constexpr void __cordl_internal_set_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  constexpr void __cordl_internal_set_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  constexpr void __cordl_internal_set_started(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method .ctor, addr 0x4ae43a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_clockResyncOccurred, addr 0x4ae3f08, size 0x9c, virtual false, abstract: false, final false
  inline void add_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value);

  /// @brief Method add_errorReceived, addr 0x4ae3c98, size 0x9c, virtual false, abstract: false, final false
  inline void add_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value);

  /// @brief Method add_frameDropped, addr 0x4ae3b60, size 0x9c, virtual false, abstract: false, final false
  inline void add_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_frameReady, addr 0x4ae40c0, size 0x9c, virtual false, abstract: false, final false
  inline void add_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value);

  /// @brief Method add_loopPointReached, addr 0x4ae38f0, size 0x9c, virtual false, abstract: false, final false
  inline void add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_prepareCompleted, addr 0x4ae37b8, size 0x9c, virtual false, abstract: false, final false
  inline void add_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_seekCompleted, addr 0x4ae3dd0, size 0x9c, virtual false, abstract: false, final false
  inline void add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_started, addr 0x4ae3a28, size 0x9c, virtual false, abstract: false, final false
  inline void add_started(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method get_aspectRatio, addr 0x4ae25e8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAspectRatio get_aspectRatio();

  /// @brief Method get_audioOutputMode, addr 0x4ae3534, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode();

  /// @brief Method get_audioTrackCount, addr 0x4ae31b0, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method get_canSetDirectAudioVolume, addr 0x4ae35b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetDirectAudioVolume();

  /// @brief Method get_canSetPlaybackSpeed, addr 0x4ae2c48, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetPlaybackSpeed();

  /// @brief Method get_canSetSkipOnDrop, addr 0x4ae2f50, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetSkipOnDrop();

  /// @brief Method get_canSetTime, addr 0x4ae2a50, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTime();

  /// @brief Method get_canSetTimeSource, addr 0x4ae2d8c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTimeSource();

  /// @brief Method get_canSetTimeUpdateMode, addr 0x4ae23ac, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTimeUpdateMode();

  /// @brief Method get_canStep, addr 0x4ae2bd0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canStep();

  /// @brief Method get_clip, addr 0x4ae22ac, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Video::VideoClip> get_clip();

  /// @brief Method get_clockTime, addr 0x4ae2b94, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_clockTime();

  /// @brief Method get_controlledAudioTrackCount, addr 0x4ae32e0, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_controlledAudioTrackCount();

  /// @brief Method get_controlledAudioTrackMaxCount, addr 0x4ae32b8, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t get_controlledAudioTrackMaxCount();

  /// @brief Method get_externalReferenceTime, addr 0x4ae2ec8, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_externalReferenceTime();

  /// @brief Method get_frame, addr 0x4ae2b14, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_frame();

  /// @brief Method get_frameCount, addr 0x4ae300c, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameRate, addr 0x4ae3048, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_height, addr 0x4ae30fc, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_isLooping, addr 0x4ae2d0c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isLooping();

  /// @brief Method get_isPaused, addr 0x4ae2a14, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_isPlaying, addr 0x4ae29d8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPrepared, addr 0x4ae27e8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPrepared();

  /// @brief Method get_length, addr 0x4ae3084, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x4ae3174, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x4ae3138, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_playOnAwake, addr 0x4ae28a4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playbackSpeed, addr 0x4ae2c84, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_playbackSpeed();

  /// @brief Method get_renderMode, addr 0x4ae232c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoRenderMode get_renderMode();

  /// @brief Method get_sendFrameReadyEvents, addr 0x4ae4040, size 0x3c, virtual false, abstract: false, final false
  inline bool get_sendFrameReadyEvents();

  /// @brief Method get_skipOnDrop, addr 0x4ae2f8c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_skipOnDrop();

  /// @brief Method get_source, addr 0x4ae212c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoSource get_source();

  /// @brief Method get_targetCamera, addr 0x4ae23e8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_targetCamera();

  /// @brief Method get_targetCamera3DLayout, addr 0x4ae26f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout();

  /// @brief Method get_targetCameraAlpha, addr 0x4ae2668, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_targetCameraAlpha();

  /// @brief Method get_targetMaterialProperty, addr 0x4ae2568, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_targetMaterialProperty();

  /// @brief Method get_targetMaterialRenderer, addr 0x4ae24e8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_targetMaterialRenderer();

  /// @brief Method get_targetTexture, addr 0x4ae2468, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_texture, addr 0x4ae2770, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method get_time, addr 0x4ae2a8c, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_timeReference, addr 0x4ae2e48, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeReference get_timeReference();

  /// @brief Method get_timeSource, addr 0x4ae2dc8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeSource get_timeSource();

  /// @brief Method get_timeUpdateMode, addr 0x4ae21ac, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeUpdateMode get_timeUpdateMode();

  /// @brief Method get_url, addr 0x4ae222c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_url();

  /// @brief Method get_waitForFirstFrame, addr 0x4ae2824, size 0x3c, virtual false, abstract: false, final false
  inline bool get_waitForFirstFrame();

  /// @brief Method get_width, addr 0x4ae30c0, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_width();

  /// @brief Method remove_clockResyncOccurred, addr 0x4ae3fa4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value);

  /// @brief Method remove_errorReceived, addr 0x4ae3d34, size 0x9c, virtual false, abstract: false, final false
  inline void remove_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value);

  /// @brief Method remove_frameDropped, addr 0x4ae3bfc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_frameReady, addr 0x4ae415c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value);

  /// @brief Method remove_loopPointReached, addr 0x4ae398c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_prepareCompleted, addr 0x4ae3854, size 0x9c, virtual false, abstract: false, final false
  inline void remove_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_seekCompleted, addr 0x4ae3e6c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_started, addr 0x4ae3ac4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_started(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method set_aspectRatio, addr 0x4ae2624, size 0x44, virtual false, abstract: false, final false
  inline void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value);

  /// @brief Method set_audioOutputMode, addr 0x4ae3570, size 0x44, virtual false, abstract: false, final false
  inline void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value);

  /// @brief Method set_clip, addr 0x4ae22e8, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::Video::VideoClip* value);

  /// @brief Method set_controlledAudioTrackCount, addr 0x4ae3358, size 0x100, virtual false, abstract: false, final false
  inline void set_controlledAudioTrackCount(uint16_t value);

  /// @brief Method set_externalReferenceTime, addr 0x4ae2f04, size 0x4c, virtual false, abstract: false, final false
  inline void set_externalReferenceTime(double_t value);

  /// @brief Method set_frame, addr 0x4ae2b50, size 0x44, virtual false, abstract: false, final false
  inline void set_frame(int64_t value);

  /// @brief Method set_isLooping, addr 0x4ae2d48, size 0x44, virtual false, abstract: false, final false
  inline void set_isLooping(bool value);

  /// @brief Method set_playOnAwake, addr 0x4ae28e0, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playbackSpeed, addr 0x4ae2cc0, size 0x4c, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method set_renderMode, addr 0x4ae2368, size 0x44, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::Video::VideoRenderMode value);

  /// @brief Method set_sendFrameReadyEvents, addr 0x4ae407c, size 0x44, virtual false, abstract: false, final false
  inline void set_sendFrameReadyEvents(bool value);

  /// @brief Method set_skipOnDrop, addr 0x4ae2fc8, size 0x44, virtual false, abstract: false, final false
  inline void set_skipOnDrop(bool value);

  /// @brief Method set_source, addr 0x4ae2168, size 0x44, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Video::VideoSource value);

  /// @brief Method set_targetCamera, addr 0x4ae2424, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera(::UnityEngine::Camera* value);

  /// @brief Method set_targetCamera3DLayout, addr 0x4ae272c, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value);

  /// @brief Method set_targetCameraAlpha, addr 0x4ae26a4, size 0x4c, virtual false, abstract: false, final false
  inline void set_targetCameraAlpha(float_t value);

  /// @brief Method set_targetMaterialProperty, addr 0x4ae25a4, size 0x44, virtual false, abstract: false, final false
  inline void set_targetMaterialProperty(::StringW value);

  /// @brief Method set_targetMaterialRenderer, addr 0x4ae2524, size 0x44, virtual false, abstract: false, final false
  inline void set_targetMaterialRenderer(::UnityEngine::Renderer* value);

  /// @brief Method set_targetTexture, addr 0x4ae24a4, size 0x44, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_time, addr 0x4ae2ac8, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method set_timeReference, addr 0x4ae2e84, size 0x44, virtual false, abstract: false, final false
  inline void set_timeReference(::UnityEngine::Video::VideoTimeReference value);

  /// @brief Method set_timeSource, addr 0x4ae2e04, size 0x44, virtual false, abstract: false, final false
  inline void set_timeSource(::UnityEngine::Video::VideoTimeSource value);

  /// @brief Method set_timeUpdateMode, addr 0x4ae21e8, size 0x44, virtual false, abstract: false, final false
  inline void set_timeUpdateMode(::UnityEngine::Video::VideoTimeUpdateMode value);

  /// @brief Method set_url, addr 0x4ae2268, size 0x44, virtual false, abstract: false, final false
  inline void set_url(::StringW value);

  /// @brief Method set_waitForFirstFrame, addr 0x4ae2860, size 0x44, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18542 };

  /// @brief Field prepareCompleted, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_EventHandler* ___prepareCompleted;

  /// @brief Field loopPointReached, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_EventHandler* ___loopPointReached;

  /// @brief Field started, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_EventHandler* ___started;

  /// @brief Field frameDropped, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_EventHandler* ___frameDropped;

  /// @brief Field errorReceived, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* ___errorReceived;

  /// @brief Field seekCompleted, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_EventHandler* ___seekCompleted;

  /// @brief Field clockResyncOccurred, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_TimeEventHandler* ___clockResyncOccurred;

  /// @brief Field frameReady, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* ___frameReady;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___prepareCompleted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___loopPointReached) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___started) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameDropped) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___errorReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___seekCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___clockResyncOccurred) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Video::VideoPlayer, ___frameReady) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::VideoPlayer, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Video
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer*, "UnityEngine.Video", "VideoPlayer");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_ErrorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*, "UnityEngine.Video", "VideoPlayer/ErrorEventHandler");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_EventHandler*, "UnityEngine.Video", "VideoPlayer/EventHandler");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*, "UnityEngine.Video", "VideoPlayer/FrameReadyEventHandler");
NEED_NO_BOX(::UnityEngine::Video::VideoPlayer_TimeEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoPlayer_TimeEventHandler*, "UnityEngine.Video", "VideoPlayer/TimeEventHandler");
