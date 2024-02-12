#pragma once
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
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15994))
// CS Name: ::VideoPlayer::EventHandler*
class CORDL_TYPE __VideoPlayer__EventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__EventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ecc8e0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2ecc9b4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__EventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__EventHandler(__VideoPlayer__EventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__EventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__EventHandler(__VideoPlayer__EventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__EventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__EventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::ErrorEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15995))
// CS Name: ::VideoPlayer::ErrorEventHandler*
class CORDL_TYPE __VideoPlayer__ErrorEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2ecc9c8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eccaa0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, ::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__ErrorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__ErrorEventHandler(__VideoPlayer__ErrorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__ErrorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__ErrorEventHandler(__VideoPlayer__ErrorEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__ErrorEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::FrameReadyEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15996))
// CS Name: ::VideoPlayer::FrameReadyEventHandler*
class CORDL_TYPE __VideoPlayer__FrameReadyEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2eccab4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eccb8c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__FrameReadyEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__FrameReadyEventHandler(__VideoPlayer__FrameReadyEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__FrameReadyEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__FrameReadyEventHandler(__VideoPlayer__FrameReadyEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__FrameReadyEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: ::TimeEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15997))
// CS Name: ::VideoPlayer::TimeEventHandler*
class CORDL_TYPE __VideoPlayer__TimeEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::Video::__VideoPlayer__TimeEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2eccba0, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2eccc78, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__TimeEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoPlayer__TimeEventHandler(__VideoPlayer__TimeEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoPlayer__TimeEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoPlayer__TimeEventHandler(__VideoPlayer__TimeEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoPlayer__TimeEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Video::__VideoPlayer__TimeEventHandler, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Video
// Type: UnityEngine.Video::VideoPlayer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Video {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15998))
// CS Name: ::UnityEngine.Video::VideoPlayer*
class CORDL_TYPE VideoPlayer : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using TimeEventHandler = ::UnityEngine::Video::__VideoPlayer__TimeEventHandler;

  using FrameReadyEventHandler = ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler;

  using ErrorEventHandler = ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler;

  using EventHandler = ::UnityEngine::Video::__VideoPlayer__EventHandler;

  /// @brief Field prepareCompleted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prepareCompleted, put = __cordl_internal_set_prepareCompleted))::UnityEngine::Video::__VideoPlayer__EventHandler* prepareCompleted;

  /// @brief Field loopPointReached, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_loopPointReached, put = __cordl_internal_set_loopPointReached))::UnityEngine::Video::__VideoPlayer__EventHandler* loopPointReached;

  /// @brief Field started, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started))::UnityEngine::Video::__VideoPlayer__EventHandler* started;

  /// @brief Field frameDropped, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_frameDropped, put = __cordl_internal_set_frameDropped))::UnityEngine::Video::__VideoPlayer__EventHandler* frameDropped;

  /// @brief Field errorReceived, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_errorReceived, put = __cordl_internal_set_errorReceived))::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* errorReceived;

  /// @brief Field seekCompleted, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_seekCompleted, put = __cordl_internal_set_seekCompleted))::UnityEngine::Video::__VideoPlayer__EventHandler* seekCompleted;

  /// @brief Field clockResyncOccurred, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_clockResyncOccurred, put = __cordl_internal_set_clockResyncOccurred))::UnityEngine::Video::__VideoPlayer__TimeEventHandler* clockResyncOccurred;

  /// @brief Field frameReady, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_frameReady, put = __cordl_internal_set_frameReady))::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* frameReady;

  __declspec(property(get = get_source, put = set_source))::UnityEngine::Video::VideoSource source;

  __declspec(property(get = get_url, put = set_url))::StringW url;

  __declspec(property(get = get_clip, put = set_clip))::UnityW<::UnityEngine::Video::VideoClip> clip;

  __declspec(property(get = get_renderMode, put = set_renderMode))::UnityEngine::Video::VideoRenderMode renderMode;

  __declspec(property(get = get_targetCamera, put = set_targetCamera))::UnityW<::UnityEngine::Camera> targetCamera;

  __declspec(property(get = get_targetTexture, put = set_targetTexture))::UnityW<::UnityEngine::RenderTexture> targetTexture;

  __declspec(property(get = get_targetMaterialRenderer, put = set_targetMaterialRenderer))::UnityW<::UnityEngine::Renderer> targetMaterialRenderer;

  __declspec(property(get = get_targetMaterialProperty, put = set_targetMaterialProperty))::StringW targetMaterialProperty;

  __declspec(property(get = get_aspectRatio, put = set_aspectRatio))::UnityEngine::Video::VideoAspectRatio aspectRatio;

  __declspec(property(get = get_targetCameraAlpha, put = set_targetCameraAlpha)) float_t targetCameraAlpha;

  __declspec(property(get = get_targetCamera3DLayout, put = set_targetCamera3DLayout))::UnityEngine::Video::Video3DLayout targetCamera3DLayout;

  __declspec(property(get = get_texture))::UnityW<::UnityEngine::Texture> texture;

  __declspec(property(get = get_isPrepared)) bool isPrepared;

  __declspec(property(get = get_waitForFirstFrame, put = set_waitForFirstFrame)) bool waitForFirstFrame;

  __declspec(property(get = get_playOnAwake, put = set_playOnAwake)) bool playOnAwake;

  __declspec(property(get = get_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isPaused)) bool isPaused;

  __declspec(property(get = get_canSetTime)) bool canSetTime;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_frame, put = set_frame)) int64_t frame;

  __declspec(property(get = get_clockTime)) double_t clockTime;

  __declspec(property(get = get_canStep)) bool canStep;

  __declspec(property(get = get_canSetPlaybackSpeed)) bool canSetPlaybackSpeed;

  __declspec(property(get = get_playbackSpeed, put = set_playbackSpeed)) float_t playbackSpeed;

  __declspec(property(get = get_isLooping, put = set_isLooping)) bool isLooping;

  __declspec(property(get = get_canSetTimeSource)) bool canSetTimeSource;

  __declspec(property(get = get_timeSource, put = set_timeSource))::UnityEngine::Video::VideoTimeSource timeSource;

  __declspec(property(get = get_timeReference, put = set_timeReference))::UnityEngine::Video::VideoTimeReference timeReference;

  __declspec(property(get = get_externalReferenceTime, put = set_externalReferenceTime)) double_t externalReferenceTime;

  __declspec(property(get = get_canSetSkipOnDrop)) bool canSetSkipOnDrop;

  __declspec(property(get = get_skipOnDrop, put = set_skipOnDrop)) bool skipOnDrop;

  __declspec(property(get = get_frameCount)) uint64_t frameCount;

  __declspec(property(get = get_frameRate)) float_t frameRate;

  __declspec(property(get = get_length)) double_t length;

  __declspec(property(get = get_width)) uint32_t width;

  __declspec(property(get = get_height)) uint32_t height;

  __declspec(property(get = get_pixelAspectRatioNumerator)) uint32_t pixelAspectRatioNumerator;

  __declspec(property(get = get_pixelAspectRatioDenominator)) uint32_t pixelAspectRatioDenominator;

  __declspec(property(get = get_audioTrackCount)) uint16_t audioTrackCount;

  __declspec(property(get = get_controlledAudioTrackCount, put = set_controlledAudioTrackCount)) uint16_t controlledAudioTrackCount;

  __declspec(property(get = get_audioOutputMode, put = set_audioOutputMode))::UnityEngine::Video::VideoAudioOutputMode audioOutputMode;

  __declspec(property(get = get_canSetDirectAudioVolume)) bool canSetDirectAudioVolume;

  __declspec(property(get = get_sendFrameReadyEvents, put = set_sendFrameReadyEvents)) bool sendFrameReadyEvents;

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_prepareCompleted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_prepareCompleted() const;

  constexpr void __cordl_internal_set_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_loopPointReached();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_loopPointReached() const;

  constexpr void __cordl_internal_set_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_started();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_started() const;

  constexpr void __cordl_internal_set_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_frameDropped();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_frameDropped() const;

  constexpr void __cordl_internal_set_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*& __cordl_internal_get_errorReceived();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__ErrorEventHandler*> const& __cordl_internal_get_errorReceived() const;

  constexpr void __cordl_internal_set_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__EventHandler*& __cordl_internal_get_seekCompleted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__EventHandler*> const& __cordl_internal_get_seekCompleted() const;

  constexpr void __cordl_internal_set_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__TimeEventHandler*& __cordl_internal_get_clockResyncOccurred();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__TimeEventHandler*> const& __cordl_internal_get_clockResyncOccurred() const;

  constexpr void __cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  constexpr ::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*& __cordl_internal_get_frameReady();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler*> const& __cordl_internal_get_frameReady() const;

  constexpr void __cordl_internal_set_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  /// @brief Method get_source, addr 0x2eca71c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoSource get_source();

  /// @brief Method set_source, addr 0x2eca758, size 0x44, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Video::VideoSource value);

  /// @brief Method get_url, addr 0x2eca79c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_url();

  /// @brief Method set_url, addr 0x2eca7d8, size 0x44, virtual false, abstract: false, final false
  inline void set_url(::StringW value);

  /// @brief Method get_clip, addr 0x2eca81c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Video::VideoClip> get_clip();

  /// @brief Method set_clip, addr 0x2eca858, size 0x44, virtual false, abstract: false, final false
  inline void set_clip(::UnityEngine::Video::VideoClip* value);

  /// @brief Method get_renderMode, addr 0x2eca89c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoRenderMode get_renderMode();

  /// @brief Method set_renderMode, addr 0x2eca8d8, size 0x44, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::Video::VideoRenderMode value);

  /// @brief Method get_targetCamera, addr 0x2eca91c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_targetCamera();

  /// @brief Method set_targetCamera, addr 0x2eca958, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera(::UnityEngine::Camera* value);

  /// @brief Method get_targetTexture, addr 0x2eca99c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method set_targetTexture, addr 0x2eca9d8, size 0x44, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method get_targetMaterialRenderer, addr 0x2ecaa1c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_targetMaterialRenderer();

  /// @brief Method set_targetMaterialRenderer, addr 0x2ecaa58, size 0x44, virtual false, abstract: false, final false
  inline void set_targetMaterialRenderer(::UnityEngine::Renderer* value);

  /// @brief Method get_targetMaterialProperty, addr 0x2ecaa9c, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_targetMaterialProperty();

  /// @brief Method set_targetMaterialProperty, addr 0x2ecaad8, size 0x44, virtual false, abstract: false, final false
  inline void set_targetMaterialProperty(::StringW value);

  /// @brief Method get_aspectRatio, addr 0x2ecab1c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAspectRatio get_aspectRatio();

  /// @brief Method set_aspectRatio, addr 0x2ecab58, size 0x44, virtual false, abstract: false, final false
  inline void set_aspectRatio(::UnityEngine::Video::VideoAspectRatio value);

  /// @brief Method get_targetCameraAlpha, addr 0x2ecab9c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_targetCameraAlpha();

  /// @brief Method set_targetCameraAlpha, addr 0x2ecabd8, size 0x4c, virtual false, abstract: false, final false
  inline void set_targetCameraAlpha(float_t value);

  /// @brief Method get_targetCamera3DLayout, addr 0x2ecac24, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::Video3DLayout get_targetCamera3DLayout();

  /// @brief Method set_targetCamera3DLayout, addr 0x2ecac60, size 0x44, virtual false, abstract: false, final false
  inline void set_targetCamera3DLayout(::UnityEngine::Video::Video3DLayout value);

  /// @brief Method get_texture, addr 0x2ecaca4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method Prepare, addr 0x2ecace0, size 0x3c, virtual false, abstract: false, final false
  inline void Prepare();

  /// @brief Method get_isPrepared, addr 0x2ecad1c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPrepared();

  /// @brief Method get_waitForFirstFrame, addr 0x2ecad58, size 0x3c, virtual false, abstract: false, final false
  inline bool get_waitForFirstFrame();

  /// @brief Method set_waitForFirstFrame, addr 0x2ecad94, size 0x44, virtual false, abstract: false, final false
  inline void set_waitForFirstFrame(bool value);

  /// @brief Method get_playOnAwake, addr 0x2ecadd8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_playOnAwake();

  /// @brief Method set_playOnAwake, addr 0x2ecae14, size 0x44, virtual false, abstract: false, final false
  inline void set_playOnAwake(bool value);

  /// @brief Method Play, addr 0x2ecae58, size 0x3c, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Pause, addr 0x2ecae94, size 0x3c, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Stop, addr 0x2ecaed0, size 0x3c, virtual false, abstract: false, final false
  inline void Stop();

  /// @brief Method get_isPlaying, addr 0x2ecaf0c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isPaused, addr 0x2ecaf48, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method get_canSetTime, addr 0x2ecaf84, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTime();

  /// @brief Method get_time, addr 0x2ecafc0, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method set_time, addr 0x2ecaffc, size 0x4c, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method get_frame, addr 0x2ecb048, size 0x3c, virtual false, abstract: false, final false
  inline int64_t get_frame();

  /// @brief Method set_frame, addr 0x2ecb084, size 0x44, virtual false, abstract: false, final false
  inline void set_frame(int64_t value);

  /// @brief Method get_clockTime, addr 0x2ecb0c8, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_clockTime();

  /// @brief Method get_canStep, addr 0x2ecb104, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canStep();

  /// @brief Method StepForward, addr 0x2ecb140, size 0x3c, virtual false, abstract: false, final false
  inline void StepForward();

  /// @brief Method get_canSetPlaybackSpeed, addr 0x2ecb17c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetPlaybackSpeed();

  /// @brief Method get_playbackSpeed, addr 0x2ecb1b8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_playbackSpeed();

  /// @brief Method set_playbackSpeed, addr 0x2ecb1f4, size 0x4c, virtual false, abstract: false, final false
  inline void set_playbackSpeed(float_t value);

  /// @brief Method get_isLooping, addr 0x2ecb240, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isLooping();

  /// @brief Method set_isLooping, addr 0x2ecb27c, size 0x44, virtual false, abstract: false, final false
  inline void set_isLooping(bool value);

  /// @brief Method get_canSetTimeSource, addr 0x2ecb2c0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetTimeSource();

  /// @brief Method get_timeSource, addr 0x2ecb2fc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeSource get_timeSource();

  /// @brief Method set_timeSource, addr 0x2ecb338, size 0x44, virtual false, abstract: false, final false
  inline void set_timeSource(::UnityEngine::Video::VideoTimeSource value);

  /// @brief Method get_timeReference, addr 0x2ecb37c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoTimeReference get_timeReference();

  /// @brief Method set_timeReference, addr 0x2ecb3b8, size 0x44, virtual false, abstract: false, final false
  inline void set_timeReference(::UnityEngine::Video::VideoTimeReference value);

  /// @brief Method get_externalReferenceTime, addr 0x2ecb3fc, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_externalReferenceTime();

  /// @brief Method set_externalReferenceTime, addr 0x2ecb438, size 0x4c, virtual false, abstract: false, final false
  inline void set_externalReferenceTime(double_t value);

  /// @brief Method get_canSetSkipOnDrop, addr 0x2ecb484, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetSkipOnDrop();

  /// @brief Method get_skipOnDrop, addr 0x2ecb4c0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_skipOnDrop();

  /// @brief Method set_skipOnDrop, addr 0x2ecb4fc, size 0x44, virtual false, abstract: false, final false
  inline void set_skipOnDrop(bool value);

  /// @brief Method get_frameCount, addr 0x2ecb540, size 0x3c, virtual false, abstract: false, final false
  inline uint64_t get_frameCount();

  /// @brief Method get_frameRate, addr 0x2ecb57c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_frameRate();

  /// @brief Method get_length, addr 0x2ecb5b8, size 0x3c, virtual false, abstract: false, final false
  inline double_t get_length();

  /// @brief Method get_width, addr 0x2ecb5f4, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_width();

  /// @brief Method get_height, addr 0x2ecb630, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_height();

  /// @brief Method get_pixelAspectRatioNumerator, addr 0x2ecb66c, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioNumerator();

  /// @brief Method get_pixelAspectRatioDenominator, addr 0x2ecb6a8, size 0x3c, virtual false, abstract: false, final false
  inline uint32_t get_pixelAspectRatioDenominator();

  /// @brief Method get_audioTrackCount, addr 0x2ecb6e4, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_audioTrackCount();

  /// @brief Method GetAudioLanguageCode, addr 0x2ecb720, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetAudioLanguageCode(uint16_t trackIndex);

  /// @brief Method GetAudioChannelCount, addr 0x2ecb764, size 0x44, virtual false, abstract: false, final false
  inline uint16_t GetAudioChannelCount(uint16_t trackIndex);

  /// @brief Method GetAudioSampleRate, addr 0x2ecb7a8, size 0x44, virtual false, abstract: false, final false
  inline uint32_t GetAudioSampleRate(uint16_t trackIndex);

  /// @brief Method get_controlledAudioTrackMaxCount, addr 0x2ecb7ec, size 0x28, virtual false, abstract: false, final false
  static inline uint16_t get_controlledAudioTrackMaxCount();

  /// @brief Method get_controlledAudioTrackCount, addr 0x2ecb814, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t get_controlledAudioTrackCount();

  /// @brief Method set_controlledAudioTrackCount, addr 0x2ecb88c, size 0x104, virtual false, abstract: false, final false
  inline void set_controlledAudioTrackCount(uint16_t value);

  /// @brief Method GetControlledAudioTrackCount, addr 0x2ecb850, size 0x3c, virtual false, abstract: false, final false
  inline uint16_t GetControlledAudioTrackCount();

  /// @brief Method SetControlledAudioTrackCount, addr 0x2ecb990, size 0x44, virtual false, abstract: false, final false
  inline void SetControlledAudioTrackCount(uint16_t value);

  /// @brief Method EnableAudioTrack, addr 0x2ecb9d4, size 0x54, virtual false, abstract: false, final false
  inline void EnableAudioTrack(uint16_t trackIndex, bool enabled);

  /// @brief Method IsAudioTrackEnabled, addr 0x2ecba28, size 0x44, virtual false, abstract: false, final false
  inline bool IsAudioTrackEnabled(uint16_t trackIndex);

  /// @brief Method get_audioOutputMode, addr 0x2ecba6c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Video::VideoAudioOutputMode get_audioOutputMode();

  /// @brief Method set_audioOutputMode, addr 0x2ecbaa8, size 0x44, virtual false, abstract: false, final false
  inline void set_audioOutputMode(::UnityEngine::Video::VideoAudioOutputMode value);

  /// @brief Method get_canSetDirectAudioVolume, addr 0x2ecbaec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_canSetDirectAudioVolume();

  /// @brief Method GetDirectAudioVolume, addr 0x2ecbb28, size 0x44, virtual false, abstract: false, final false
  inline float_t GetDirectAudioVolume(uint16_t trackIndex);

  /// @brief Method SetDirectAudioVolume, addr 0x2ecbb6c, size 0x54, virtual false, abstract: false, final false
  inline void SetDirectAudioVolume(uint16_t trackIndex, float_t volume);

  /// @brief Method GetDirectAudioMute, addr 0x2ecbbc0, size 0x44, virtual false, abstract: false, final false
  inline bool GetDirectAudioMute(uint16_t trackIndex);

  /// @brief Method SetDirectAudioMute, addr 0x2ecbc04, size 0x54, virtual false, abstract: false, final false
  inline void SetDirectAudioMute(uint16_t trackIndex, bool mute);

  /// @brief Method GetTargetAudioSource, addr 0x2ecbc58, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> GetTargetAudioSource(uint16_t trackIndex);

  /// @brief Method SetTargetAudioSource, addr 0x2ecbc9c, size 0x54, virtual false, abstract: false, final false
  inline void SetTargetAudioSource(uint16_t trackIndex, ::UnityEngine::AudioSource* source);

  /// @brief Method add_prepareCompleted, addr 0x2ecbcf0, size 0x9c, virtual false, abstract: false, final false
  inline void add_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_prepareCompleted, addr 0x2ecbd8c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_prepareCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_loopPointReached, addr 0x2ecbe28, size 0x9c, virtual false, abstract: false, final false
  inline void add_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_loopPointReached, addr 0x2ecbec4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_loopPointReached(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_started, addr 0x2ecbf60, size 0x9c, virtual false, abstract: false, final false
  inline void add_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_started, addr 0x2ecbffc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_started(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_frameDropped, addr 0x2ecc098, size 0x9c, virtual false, abstract: false, final false
  inline void add_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_frameDropped, addr 0x2ecc134, size 0x9c, virtual false, abstract: false, final false
  inline void remove_frameDropped(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_errorReceived, addr 0x2ecc1d0, size 0x9c, virtual false, abstract: false, final false
  inline void add_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  /// @brief Method remove_errorReceived, addr 0x2ecc26c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_errorReceived(::UnityEngine::Video::__VideoPlayer__ErrorEventHandler* value);

  /// @brief Method add_seekCompleted, addr 0x2ecc308, size 0x9c, virtual false, abstract: false, final false
  inline void add_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method remove_seekCompleted, addr 0x2ecc3a4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_seekCompleted(::UnityEngine::Video::__VideoPlayer__EventHandler* value);

  /// @brief Method add_clockResyncOccurred, addr 0x2ecc440, size 0x9c, virtual false, abstract: false, final false
  inline void add_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  /// @brief Method remove_clockResyncOccurred, addr 0x2ecc4dc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_clockResyncOccurred(::UnityEngine::Video::__VideoPlayer__TimeEventHandler* value);

  /// @brief Method get_sendFrameReadyEvents, addr 0x2ecc578, size 0x3c, virtual false, abstract: false, final false
  inline bool get_sendFrameReadyEvents();

  /// @brief Method set_sendFrameReadyEvents, addr 0x2ecc5b4, size 0x44, virtual false, abstract: false, final false
  inline void set_sendFrameReadyEvents(bool value);

  /// @brief Method add_frameReady, addr 0x2ecc5f8, size 0x9c, virtual false, abstract: false, final false
  inline void add_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  /// @brief Method remove_frameReady, addr 0x2ecc694, size 0x9c, virtual false, abstract: false, final false
  inline void remove_frameReady(::UnityEngine::Video::__VideoPlayer__FrameReadyEventHandler* value);

  /// @brief Method InvokePrepareCompletedCallback_Internal, addr 0x2ecc730, size 0x34, virtual false, abstract: false, final false
  static inline void InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameReadyCallback_Internal, addr 0x2ecc764, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);

  /// @brief Method InvokeLoopPointReachedCallback_Internal, addr 0x2ecc79c, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeStartedCallback_Internal, addr 0x2ecc7d0, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeFrameDroppedCallback_Internal, addr 0x2ecc804, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeErrorReceivedCallback_Internal, addr 0x2ecc838, size 0x38, virtual false, abstract: false, final false
  static inline void InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer* source, ::StringW errorStr);

  /// @brief Method InvokeSeekCompletedCallback_Internal, addr 0x2ecc870, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer* source);

  /// @brief Method InvokeClockResyncOccurredCallback_Internal, addr 0x2ecc8a4, size 0x34, virtual false, abstract: false, final false
  static inline void InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer* source, double_t seconds);

  static inline ::UnityEngine::Video::VideoPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x2ecc8d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoPlayer(VideoPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoPlayer(VideoPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoPlayer();

public:
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
