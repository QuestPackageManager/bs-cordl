#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioClipPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioClipPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioClipPlayable);
// Type: UnityEngine.Audio::AudioClipPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: ::UnityEngine.Audio::AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x2de3340, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping);

  /// @brief Method CreateHandle, addr 0x2de3464, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping);

  /// @brief Method Equals, addr 0x2de36d0, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Audio::AudioClipPlayable other);

  /// @brief Method GetClip, addr 0x2de3748, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> GetClip();

  /// @brief Method GetClipInternal, addr 0x2de3784, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> GetClipInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetHandle, addr 0x2de3650, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method GetIsChannelPlayingInternal, addr 0x2de3e98, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetIsChannelPlayingInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetLooped, addr 0x2de3848, size 0x3c, virtual false, abstract: false, final false
  inline bool GetLooped();

  /// @brief Method GetLoopedInternal, addr 0x2de3884, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetLoopedInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetPauseDelay, addr 0x2de3fe4, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetPauseDelay();

  /// @brief Method GetPauseDelay, addr 0x2de405c, size 0x134, virtual false, abstract: false, final false
  inline void GetPauseDelay(double_t value);

  /// @brief Method GetPauseDelayInternal, addr 0x2de4020, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetPauseDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetSpatialBlend, addr 0x2de3c84, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetSpatialBlend();

  /// @brief Method GetSpatialBlendInternal, addr 0x2de3cc0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetSpatialBlendInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetStartDelay, addr 0x2de3ed4, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetStartDelay();

  /// @brief Method GetStartDelayInternal, addr 0x2de3f10, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetStartDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetStereoPan, addr 0x2de3ae4, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetStereoPan();

  /// @brief Method GetStereoPanInternal, addr 0x2de3b20, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetStereoPanInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetVolume, addr 0x2de3948, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetVolume();

  /// @brief Method GetVolumeInternal, addr 0x2de3984, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetVolumeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method InternalCreateAudioClipPlayable, addr 0x2de35f4, size 0x5c, virtual false, abstract: false, final false
  static inline bool InternalCreateAudioClipPlayable(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AudioClip* clip, bool looping,
                                                     ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method IsChannelPlaying, addr 0x2de3e5c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsChannelPlaying();

  /// @brief Method IsPlaying, addr 0x2de3e20, size 0x3c, virtual false, abstract: false, final false
  inline bool IsPlaying();

  /// @brief Method Seek, addr 0x2de41dc, size 0x8, virtual false, abstract: false, final false
  inline void Seek(double_t startTime, double_t startDelay);

  /// @brief Method Seek, addr 0x2de41e4, size 0x134, virtual false, abstract: false, final false
  inline void Seek(double_t startTime, double_t startDelay, double_t duration);

  /// @brief Method SetClip, addr 0x2de37c0, size 0x44, virtual false, abstract: false, final false
  inline void SetClip(::UnityEngine::AudioClip* value);

  /// @brief Method SetClipInternal, addr 0x2de3804, size 0x44, virtual false, abstract: false, final false
  static inline void SetClipInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, ::UnityEngine::AudioClip* clip);

  /// @brief Method SetLooped, addr 0x2de38c0, size 0x44, virtual false, abstract: false, final false
  inline void SetLooped(bool value);

  /// @brief Method SetLoopedInternal, addr 0x2de3904, size 0x44, virtual false, abstract: false, final false
  static inline void SetLoopedInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, bool looped);

  /// @brief Method SetPauseDelayInternal, addr 0x2de4190, size 0x4c, virtual false, abstract: false, final false
  static inline void SetPauseDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay);

  /// @brief Method SetSpatialBlend, addr 0x2de3cfc, size 0xd8, virtual false, abstract: false, final false
  inline void SetSpatialBlend(float_t value);

  /// @brief Method SetSpatialBlendInternal, addr 0x2de3dd4, size 0x4c, virtual false, abstract: false, final false
  static inline void SetSpatialBlendInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, float_t spatialBlend);

  /// @brief Method SetStartDelay, addr 0x2de3f4c, size 0x4c, virtual false, abstract: false, final false
  inline void SetStartDelay(double_t value);

  /// @brief Method SetStartDelayInternal, addr 0x2de3f98, size 0x4c, virtual false, abstract: false, final false
  static inline void SetStartDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay);

  /// @brief Method SetStereoPan, addr 0x2de3b5c, size 0xdc, virtual false, abstract: false, final false
  inline void SetStereoPan(float_t value);

  /// @brief Method SetStereoPanInternal, addr 0x2de3c38, size 0x4c, virtual false, abstract: false, final false
  static inline void SetStereoPanInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, float_t stereoPan);

  /// @brief Method SetVolume, addr 0x2de39c0, size 0xd8, virtual false, abstract: false, final false
  inline void SetVolume(float_t value);

  /// @brief Method SetVolumeInternal, addr 0x2de3a98, size 0x4c, virtual false, abstract: false, final false
  static inline void SetVolumeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, float_t volume);

  /// @brief Method ValidateType, addr 0x2de4318, size 0x3c, virtual false, abstract: false, final false
  static inline bool ValidateType(ByRef<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method .ctor, addr 0x2de3534, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Explicit, addr 0x2de368c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioClipPlayable op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable playable);

  /// @brief Method op_Implicit, addr 0x2de365c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable playable);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AudioClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioClipPlayable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AudioClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
