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
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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
  /// @brief Method Invoke, addr 0x6c67704, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source);

  static inline ::UnityEngine::Video::VideoPlayer_EventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c67688, size 0x7c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22052 };

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
  /// @brief Method Invoke, addr 0x6c67798, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message);

  static inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c67718, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22053 };

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
  /// @brief Method Invoke, addr 0x6c6782c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  static inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c677ac, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22054 };

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
  /// @brief Method Invoke, addr 0x6c678c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  static inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c67840, size 0x80, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22055 };

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

  /// @brief Method EnableAudioTrack, addr 0x6c65e78, size 0x98, virtual false, abstract: false, final false
  inline void EnableAudioTrack(uint16_t trackIndex, bool enabled);

  /// @brief Method EnableAudioTrack_Injected, addr 0x6c65f10, size 0x54, virtual false, abstract: false, final false
  static inline void EnableAudioTrack_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, bool enabled);

  /// @brief Method GetAudioChannelCount, addr 0x6c65a38, size 0x90, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t trackIndex);

  /// @brief Method GetAudioChannelCount_Injected, addr 0x6c65ac8, size 0x44, virtual false, abstract: false, final false
  static inline uint16_t GetAudioChannelCount_Injected(::System::IntPtr _unity_self, uint16_t trackIndex);

  /// @brief Method GetAudioLanguageCode, addr 0x6c658a4, size 0x140, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguageCode(uint16_t trackIndex);

  /// @brief Method GetAudioLanguageCode_Injected, addr 0x6c659e4, size 0x54, virtual false, abstract: false, final false
  static inline void GetAudioLanguageCode_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method GetAudioSampleRate, addr 0x6c65b0c, size 0x90, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t trackIndex);

  /// @brief Method GetAudioSampleRate_Injected, addr 0x6c65b9c, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t GetAudioSampleRate_Injected(::System::IntPtr _unity_self, uint16_t trackIndex);

  /// @brief Method GetControlledAudioTrackCount, addr 0x6c65c0c, size 0x80, virtual false, abstract: false, final false
  inline uint16_t GetControlledAudioTrackCount();

  /// @brief Method GetControlledAudioTrackCount_Injected, addr 0x6c65df8, size 0x3c, virtual false, abstract: false, final false
  static inline uint16_t GetControlledAudioTrackCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetDirectAudioMute, addr 0x6c6644c, size 0x90, virtual false, abstract: false, final false
  inline bool GetDirectAudioMute(uint16_t trackIndex);

  /// @brief Method GetDirectAudioMute_Injected, addr 0x6c664dc, size 0x44, virtual false, abstract: false, final false
  static inline bool GetDirectAudioMute_Injected(::System::IntPtr _unity_self, uint16_t trackIndex);

  /// @brief Method GetDirectAudioVolume, addr 0x6c66284, size 0x90, virtual false, abstract: false, final false
  inline float_t GetDirectAudioVolume(uint16_t trackIndex);

  /// @brief Method GetDirectAudioVolume_Injected, addr 0x6c66314, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetDirectAudioVolume_Injected(::System::IntPtr _unity_self, uint16_t trackIndex);

  /// @brief Method GetTargetAudioSource, addr 0x6c6660c, size 0x158, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> GetTargetAudioSource(uint16_t trackIndex);

  /// @brief Method GetTargetAudioSource_Injected, addr 0x6c66764, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTargetAudioSource_Injected(::System::IntPtr _unity_self, uint16_t trackIndex);

  /// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x6c67658, size 0x2c, virtual false, abstract: false, final false
  static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  /// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x6c675f8, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr);

  /// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x6c675cc, size 0x2c, virtual false, abstract: false, final false
  static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameReadyCallback_Internal, addr 0x6c67540, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  /// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x6c67574, size 0x2c, virtual false, abstract: false, final false
  static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x6c67514, size 0x2c, virtual false, abstract: false, final false
  static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x6c6762c, size 0x2c, virtual false, abstract: false, final false
  static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeStartedCallback_Internal, addr 0x6c675a0, size 0x2c, virtual false, abstract: false, final false
  static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method IsAudioTrackEnabled, addr 0x6c65f64, size 0x90, virtual false, abstract: false, final false
  inline bool IsAudioTrackEnabled(uint16_t trackIndex);

  /// @brief Method IsAudioTrackEnabled_Injected, addr 0x6c65ff4, size 0x44, virtual false, abstract: false, final false
  static inline bool IsAudioTrackEnabled_Injected(::System::IntPtr _unity_self, uint16_t trackIndex);

  static inline ::UnityEngine::Video::VideoPlayer* New_ctor();

  /// @brief Method Pause, addr 0x6c63e18, size 0x80, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause_Injected, addr 0x6c63e98, size 0x3c, virtual false, abstract: false, final false
  static inline void Pause_Injected(::System::IntPtr _unity_self);

  /// @brief Method Play, addr 0x6c63d5c, size 0x80, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play_Injected, addr 0x6c63ddc, size 0x3c, virtual false, abstract: false, final false
  static inline void Play_Injected(::System::IntPtr _unity_self);

  /// @brief Method Prepare, addr 0x6c638c4, size 0x80, virtual false, abstract: false, final false
  inline void Prepare();

  /// @brief Method Prepare_Injected, addr 0x6c63944, size 0x3c, virtual false, abstract: false, final false
  static inline void Prepare_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetControlledAudioTrackCount, addr 0x6c65d68, size 0x90, virtual false, abstract: false, final false
  inline void SetControlledAudioTrackCount(uint16_t value);

  /// @brief Method SetControlledAudioTrackCount_Injected, addr 0x6c65e34, size 0x44, virtual false, abstract: false, final false
  static inline void SetControlledAudioTrackCount_Injected(::System::IntPtr _unity_self, uint16_t value);

  /// @brief Method SetDirectAudioMute, addr 0x6c66520, size 0x98, virtual false, abstract: false, final false
  inline void SetDirectAudioMute(uint16_t trackIndex, bool mute);

  /// @brief Method SetDirectAudioMute_Injected, addr 0x6c665b8, size 0x54, virtual false, abstract: false, final false
  static inline void SetDirectAudioMute_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, bool mute);

  /// @brief Method SetDirectAudioVolume, addr 0x6c66358, size 0xa0, virtual false, abstract: false, final false
  inline void SetDirectAudioVolume(uint16_t trackIndex, float_t volume);

  /// @brief Method SetDirectAudioVolume_Injected, addr 0x6c663f8, size 0x54, virtual false, abstract: false, final false
  static inline void SetDirectAudioVolume_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, float_t volume);

  /// @brief Method SetTargetAudioSource, addr 0x6c667a8, size 0xc8, virtual false, abstract: false, final false
  inline void SetTargetAudioSource(uint16_t trackIndex, ::UnityEngine::AudioSource* source);

  /// @brief Method SetTargetAudioSource_Injected, addr 0x6c66870, size 0x54, virtual false, abstract: false, final false
  static inline void SetTargetAudioSource_Injected(::System::IntPtr _unity_self, uint16_t trackIndex, ::System::IntPtr source);

  /// @brief Method StepForward, addr 0x6c64664, size 0x80, virtual false, abstract: false, final false
  inline void StepForward();

  /// @brief Method StepForward_Injected, addr 0x6c646e4, size 0x3c, virtual false, abstract: false, final false
  static inline void StepForward_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x6c63ed4, size 0x80, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method Stop_Injected, addr 0x6c63f54, size 0x3c, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self);

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

  /// @brief Method .ctor, addr 0x6c67684, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_clockResyncOccurred, addr 0x6c670d4, size 0xac, virtual false, abstract: false, final false
  inline void add_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value);

  /// @brief Method add_errorReceived, addr 0x6c66e24, size 0xac, virtual false, abstract: false, final false
  inline void add_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value);

  /// @brief Method add_frameDropped, addr 0x6c66ccc, size 0xac, virtual false, abstract: false, final false
  inline void add_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_frameReady, addr 0x6c673bc, size 0xac, virtual false, abstract: false, final false
  inline void add_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value);

  /// @brief Method add_loopPointReached, addr 0x6c66a1c, size 0xac, virtual false, abstract: false, final false
  inline void add_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_prepareCompleted, addr 0x6c668c4, size 0xac, virtual false, abstract: false, final false
  inline void add_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_seekCompleted, addr 0x6c66f7c, size 0xac, virtual false, abstract: false, final false
  inline void add_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method add_started, addr 0x6c66b74, size 0xac, virtual false, abstract: false, final false
  inline void add_started(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method get_aspectRatio, addr 0x6c63280, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAspectRatio get_aspectRatio();

  /// @brief Method get_aspectRatio_Injected, addr 0x6c63300, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoAspectRatio get_aspectRatio_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_audioOutputMode, addr 0x6c66038, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode();

  /// @brief Method get_audioOutputMode_Injected, addr 0x6c660b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_audioTrackCount, addr 0x6c657e8, size 0x80, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method get_audioTrackCount_Injected, addr 0x6c65868, size 0x3c, virtual false, abstract: false, final false
  static inline uint16_t get_audioTrackCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetDirectAudioVolume, addr 0x6c661c8, size 0x80, virtual false, abstract: false, final false
  inline bool get_canSetDirectAudioVolume();

  /// @brief Method get_canSetDirectAudioVolume_Injected, addr 0x6c66248, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetDirectAudioVolume_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetPlaybackSpeed, addr 0x6c64720, size 0x80, virtual false, abstract: false, final false
  inline bool get_canSetPlaybackSpeed();

  /// @brief Method get_canSetPlaybackSpeed_Injected, addr 0x6c647a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetPlaybackSpeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetSkipOnDrop, addr 0x6c65078, size 0x80, virtual false, abstract: false, final false
  inline bool get_canSetSkipOnDrop();

  /// @brief Method get_canSetSkipOnDrop_Injected, addr 0x6c650f8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetSkipOnDrop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetTime, addr 0x6c64108, size 0x80, virtual false, abstract: false, final false
  inline bool get_canSetTime();

  /// @brief Method get_canSetTimeSource, addr 0x6c64b04, size 0x80, virtual false, abstract: false, final false
  inline bool get_canSetTimeSource();

  /// @brief Method get_canSetTimeSource_Injected, addr 0x6c64b84, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetTimeSource_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetTimeUpdateMode, addr 0x6c626f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_canSetTimeUpdateMode();

  /// @brief Method get_canSetTimeUpdateMode_Injected, addr 0x6c62770, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetTimeUpdateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canSetTime_Injected, addr 0x6c64188, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canSetTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_canStep, addr 0x6c645a8, size 0x80, virtual false, abstract: false, final false
  inline bool get_canStep();

  /// @brief Method get_canStep_Injected, addr 0x6c64628, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_canStep_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clip, addr 0x6c622d0, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Video::VideoClip> get_clip();

  /// @brief Method get_clip_Injected, addr 0x6c62420, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_clip_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clockTime, addr 0x6c644ec, size 0x80, virtual false, abstract: false, final false
  inline double_t get_clockTime();

  /// @brief Method get_clockTime_Injected, addr 0x6c6456c, size 0x3c, virtual false, abstract: false, final false
  static inline double_t get_clockTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_controlledAudioTrackCount, addr 0x6c65c08, size 0x4, virtual false, abstract: false, final false
  inline uint16_t get_controlledAudioTrackCount();

  /// @brief Method get_controlledAudioTrackMaxCount, addr 0x6c65be0, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t get_controlledAudioTrackMaxCount();

  /// @brief Method get_externalReferenceTime, addr 0x6c64ee0, size 0x80, virtual false, abstract: false, final false
  inline double_t get_externalReferenceTime();

  /// @brief Method get_externalReferenceTime_Injected, addr 0x6c64f60, size 0x3c, virtual false, abstract: false, final false
  static inline double_t get_externalReferenceTime_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frame, addr 0x6c6435c, size 0x80, virtual false, abstract: false, final false
  inline int64_t get_frame();

  /// @brief Method get_frameCount, addr 0x6c652c4, size 0x80, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameCount_Injected, addr 0x6c65344, size 0x3c, virtual false, abstract: false, final false
  static inline uint64_t get_frameCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frameRate, addr 0x6c65380, size 0x80, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_frameRate_Injected, addr 0x6c65400, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_frameRate_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_frame_Injected, addr 0x6c643dc, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t get_frame_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_height, addr 0x6c655b4, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_height_Injected, addr 0x6c65634, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_height_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isLooping, addr 0x6c64974, size 0x80, virtual false, abstract: false, final false
  inline bool get_isLooping();

  /// @brief Method get_isLooping_Injected, addr 0x6c649f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isLooping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPaused, addr 0x6c6404c, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_isPaused_Injected, addr 0x6c640cc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPaused_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPlaying, addr 0x6c63f90, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPlaying_Injected, addr 0x6c64010, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPlaying_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isPrepared, addr 0x6c63980, size 0x80, virtual false, abstract: false, final false
  inline bool get_isPrepared();

  /// @brief Method get_isPrepared_Injected, addr 0x6c63a00, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isPrepared_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_length, addr 0x6c6543c, size 0x80, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_length_Injected, addr 0x6c654bc, size 0x3c, virtual false, abstract: false, final false
  static inline double_t get_length_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x6c6572c, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_pixelAspectRatioDenominator_Injected, addr 0x6c657ac, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_pixelAspectRatioDenominator_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x6c65670, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_pixelAspectRatioNumerator_Injected, addr 0x6c656f0, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_pixelAspectRatioNumerator_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playOnAwake, addr 0x6c63bcc, size 0x80, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method get_playOnAwake_Injected, addr 0x6c63c4c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_playOnAwake_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_playbackSpeed, addr 0x6c647dc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_playbackSpeed();

  /// @brief Method get_playbackSpeed_Injected, addr 0x6c6485c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_playbackSpeed_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderMode, addr 0x6c62560, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoRenderMode get_renderMode();

  /// @brief Method get_renderMode_Injected, addr 0x6c625e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoRenderMode get_renderMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sendFrameReadyEvents, addr 0x6c6722c, size 0x80, virtual false, abstract: false, final false
  inline bool get_sendFrameReadyEvents();

  /// @brief Method get_sendFrameReadyEvents_Injected, addr 0x6c672ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sendFrameReadyEvents_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skipOnDrop, addr 0x6c65134, size 0x80, virtual false, abstract: false, final false
  inline bool get_skipOnDrop();

  /// @brief Method get_skipOnDrop_Injected, addr 0x6c651b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_skipOnDrop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_source, addr 0x6c61c8c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoSource get_source();

  /// @brief Method get_source_Injected, addr 0x6c61d0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoSource get_source_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetCamera, addr 0x6c627ac, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_targetCamera();

  /// @brief Method get_targetCamera3DLayout, addr 0x6c635a8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout();

  /// @brief Method get_targetCamera3DLayout_Injected, addr 0x6c63628, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetCameraAlpha, addr 0x6c63410, size 0x80, virtual false, abstract: false, final false
  inline float_t get_targetCameraAlpha();

  /// @brief Method get_targetCameraAlpha_Injected, addr 0x6c63490, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_targetCameraAlpha_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetCamera_Injected, addr 0x6c628fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_targetCamera_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetMaterialProperty, addr 0x6c62f5c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_targetMaterialProperty();

  /// @brief Method get_targetMaterialProperty_Injected, addr 0x6c63090, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetMaterialProperty_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_targetMaterialRenderer, addr 0x6c62ccc, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_targetMaterialRenderer();

  /// @brief Method get_targetMaterialRenderer_Injected, addr 0x6c62e1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_targetMaterialRenderer_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetTexture, addr 0x6c62a3c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_targetTexture_Injected, addr 0x6c62b8c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_targetTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_texture, addr 0x6c63738, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method get_texture_Injected, addr 0x6c63888, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_texture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time, addr 0x6c641c4, size 0x80, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_timeReference, addr 0x6c64d50, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeReference get_timeReference();

  /// @brief Method get_timeReference_Injected, addr 0x6c64dd0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoTimeReference get_timeReference_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_timeSource, addr 0x6c64bc0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeSource get_timeSource();

  /// @brief Method get_timeSource_Injected, addr 0x6c64c40, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoTimeSource get_timeSource_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_timeUpdateMode, addr 0x6c61e1c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeUpdateMode get_timeUpdateMode();

  /// @brief Method get_timeUpdateMode_Injected, addr 0x6c61e9c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Video::VideoTimeUpdateMode get_timeUpdateMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_time_Injected, addr 0x6c64244, size 0x3c, virtual false, abstract: false, final false
  static inline double_t get_time_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_url, addr 0x6c61fac, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_url();

  /// @brief Method get_url_Injected, addr 0x6c620e0, size 0x44, virtual false, abstract: false, final false
  static inline void get_url_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_waitForFirstFrame, addr 0x6c63a3c, size 0x80, virtual false, abstract: false, final false
  inline bool get_waitForFirstFrame();

  /// @brief Method get_waitForFirstFrame_Injected, addr 0x6c63abc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_waitForFirstFrame_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_width, addr 0x6c654f8, size 0x80, virtual false, abstract: false, final false
  inline uint32_t get_width();

  /// @brief Method get_width_Injected, addr 0x6c65578, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t get_width_Injected(::System::IntPtr _unity_self);

  /// @brief Method remove_clockResyncOccurred, addr 0x6c67180, size 0xac, virtual false, abstract: false, final false
  inline void remove_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler* value);

  /// @brief Method remove_errorReceived, addr 0x6c66ed0, size 0xac, virtual false, abstract: false, final false
  inline void remove_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler* value);

  /// @brief Method remove_frameDropped, addr 0x6c66d78, size 0xac, virtual false, abstract: false, final false
  inline void remove_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_frameReady, addr 0x6c67468, size 0xac, virtual false, abstract: false, final false
  inline void remove_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* value);

  /// @brief Method remove_loopPointReached, addr 0x6c66ac8, size 0xac, virtual false, abstract: false, final false
  inline void remove_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_prepareCompleted, addr 0x6c66970, size 0xac, virtual false, abstract: false, final false
  inline void remove_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_seekCompleted, addr 0x6c67028, size 0xac, virtual false, abstract: false, final false
  inline void remove_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method remove_started, addr 0x6c66c20, size 0xac, virtual false, abstract: false, final false
  inline void remove_started(::UnityEngine::Video::VideoPlayer_EventHandler* value);

  /// @brief Method set_aspectRatio, addr 0x6c6333c, size 0x90, virtual false, abstract: false, final false
  inline void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value);

  /// @brief Method set_aspectRatio_Injected, addr 0x6c633cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_aspectRatio_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoAspectRatio value);

  /// @brief Method set_audioOutputMode, addr 0x6c660f4, size 0x90, virtual false, abstract: false, final false
  inline void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value);

  /// @brief Method set_audioOutputMode_Injected, addr 0x6c66184, size 0x44, virtual false, abstract: false, final false
  static inline void set_audioOutputMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoAudioOutputMode value);

  /// @brief Method set_clip, addr 0x6c6245c, size 0xc0, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::Video::VideoClip* value);

  /// @brief Method set_clip_Injected, addr 0x6c6251c, size 0x44, virtual false, abstract: false, final false
  static inline void set_clip_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_controlledAudioTrackCount, addr 0x6c65c8c, size 0xdc, virtual false, abstract: false, final false
  inline void set_controlledAudioTrackCount(uint16_t value);

  /// @brief Method set_externalReferenceTime, addr 0x6c64f9c, size 0x90, virtual false, abstract: false, final false
  inline void set_externalReferenceTime(double_t value);

  /// @brief Method set_externalReferenceTime_Injected, addr 0x6c6502c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_externalReferenceTime_Injected(::System::IntPtr _unity_self, double_t value);

  /// @brief Method set_frame, addr 0x6c64418, size 0x90, virtual false, abstract: false, final false
  inline void set_frame(int64_t value);

  /// @brief Method set_frame_Injected, addr 0x6c644a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_frame_Injected(::System::IntPtr _unity_self, int64_t value);

  /// @brief Method set_isLooping, addr 0x6c64a30, size 0x90, virtual false, abstract: false, final false
  inline void set_isLooping(bool value);

  /// @brief Method set_isLooping_Injected, addr 0x6c64ac0, size 0x44, virtual false, abstract: false, final false
  static inline void set_isLooping_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_playOnAwake, addr 0x6c63c88, size 0x90, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method set_playOnAwake_Injected, addr 0x6c63d18, size 0x44, virtual false, abstract: false, final false
  static inline void set_playOnAwake_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_playbackSpeed, addr 0x6c64898, size 0x90, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method set_playbackSpeed_Injected, addr 0x6c64928, size 0x4c, virtual false, abstract: false, final false
  static inline void set_playbackSpeed_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_renderMode, addr 0x6c6261c, size 0x90, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::Video::VideoRenderMode value);

  /// @brief Method set_renderMode_Injected, addr 0x6c626ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoRenderMode value);

  /// @brief Method set_sendFrameReadyEvents, addr 0x6c672e8, size 0x90, virtual false, abstract: false, final false
  inline void set_sendFrameReadyEvents(bool value);

  /// @brief Method set_sendFrameReadyEvents_Injected, addr 0x6c67378, size 0x44, virtual false, abstract: false, final false
  static inline void set_sendFrameReadyEvents_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_skipOnDrop, addr 0x6c651f0, size 0x90, virtual false, abstract: false, final false
  inline void set_skipOnDrop(bool value);

  /// @brief Method set_skipOnDrop_Injected, addr 0x6c65280, size 0x44, virtual false, abstract: false, final false
  static inline void set_skipOnDrop_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_source, addr 0x6c61d48, size 0x90, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Video::VideoSource value);

  /// @brief Method set_source_Injected, addr 0x6c61dd8, size 0x44, virtual false, abstract: false, final false
  static inline void set_source_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoSource value);

  /// @brief Method set_targetCamera, addr 0x6c62938, size 0xc0, virtual false, abstract: false, final false
  inline void set_targetCamera(::UnityEngine::Camera* value);

  /// @brief Method set_targetCamera3DLayout, addr 0x6c63664, size 0x90, virtual false, abstract: false, final false
  inline void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value);

  /// @brief Method set_targetCamera3DLayout_Injected, addr 0x6c636f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetCamera3DLayout_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::Video3DLayout value);

  /// @brief Method set_targetCameraAlpha, addr 0x6c634cc, size 0x90, virtual false, abstract: false, final false
  inline void set_targetCameraAlpha(float_t value);

  /// @brief Method set_targetCameraAlpha_Injected, addr 0x6c6355c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_targetCameraAlpha_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_targetCamera_Injected, addr 0x6c629f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetCamera_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_targetMaterialProperty, addr 0x6c630d4, size 0x168, virtual false, abstract: false, final false
  inline void set_targetMaterialProperty(::StringW value);

  /// @brief Method set_targetMaterialProperty_Injected, addr 0x6c6323c, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetMaterialProperty_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_targetMaterialRenderer, addr 0x6c62e58, size 0xc0, virtual false, abstract: false, final false
  inline void set_targetMaterialRenderer(::UnityEngine::Renderer* value);

  /// @brief Method set_targetMaterialRenderer_Injected, addr 0x6c62f18, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetMaterialRenderer_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_targetTexture, addr 0x6c62bc8, size 0xc0, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_targetTexture_Injected, addr 0x6c62c88, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_time, addr 0x6c64280, size 0x90, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method set_timeReference, addr 0x6c64e0c, size 0x90, virtual false, abstract: false, final false
  inline void set_timeReference(::UnityEngine::Video::VideoTimeReference value);

  /// @brief Method set_timeReference_Injected, addr 0x6c64e9c, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeReference_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeReference value);

  /// @brief Method set_timeSource, addr 0x6c64c7c, size 0x90, virtual false, abstract: false, final false
  inline void set_timeSource(::UnityEngine::Video::VideoTimeSource value);

  /// @brief Method set_timeSource_Injected, addr 0x6c64d0c, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeSource_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeSource value);

  /// @brief Method set_timeUpdateMode, addr 0x6c61ed8, size 0x90, virtual false, abstract: false, final false
  inline void set_timeUpdateMode(::UnityEngine::Video::VideoTimeUpdateMode value);

  /// @brief Method set_timeUpdateMode_Injected, addr 0x6c61f68, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Video::VideoTimeUpdateMode value);

  /// @brief Method set_time_Injected, addr 0x6c64310, size 0x4c, virtual false, abstract: false, final false
  static inline void set_time_Injected(::System::IntPtr _unity_self, double_t value);

  /// @brief Method set_url, addr 0x6c62124, size 0x168, virtual false, abstract: false, final false
  inline void set_url(::StringW value);

  /// @brief Method set_url_Injected, addr 0x6c6228c, size 0x44, virtual false, abstract: false, final false
  static inline void set_url_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_waitForFirstFrame, addr 0x6c63af8, size 0x90, virtual false, abstract: false, final false
  inline void set_waitForFirstFrame(bool value);

  /// @brief Method set_waitForFirstFrame_Injected, addr 0x6c63b88, size 0x44, virtual false, abstract: false, final false
  static inline void set_waitForFirstFrame_Injected(::System::IntPtr _unity_self, bool value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22056 };

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
