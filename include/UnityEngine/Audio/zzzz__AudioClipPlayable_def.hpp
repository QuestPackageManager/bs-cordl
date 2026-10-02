#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioClipPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioClipPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioClipPlayable, "UnityEngine.Audio", "AudioClipPlayable");
// [NativeHeader("Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.h")]
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// [RequiredByNativeCode]
// [StaticAccessor("AudioClipPlayableBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Modules/Audio/Public/Director/AudioClipPlayable.h")]
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x6ea4778, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping);

  /// @brief Method CreateHandle, addr 0x6ea4884, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping);

  /// @brief Method Equals, addr 0x6ea4b80, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Audio::AudioClipPlayable other);

  /// @brief Method GetClip, addr 0x6ea4bfc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioClip> GetClip();

  /// [NativeThrows]
  /// @brief Method GetClipInternal, addr 0x6ea4c00, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioClip> GetClipInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetClipInternal_Injected, addr 0x6ea5a7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetClipInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetClipPositionSec, addr 0x6ea5048, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetClipPositionSec();

  /// [NativeThrows]
  /// @brief Method GetClipPositionSecInternal, addr 0x6ea5084, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetClipPositionSecInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetHandle, addr 0x6ea4af0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// [NativeThrows]
  /// @brief Method GetIsChannelPlayingInternal, addr 0x6ea5460, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetIsChannelPlayingInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetLooped, addr 0x6ea4db4, size 0x3c, virtual false, abstract: false, final false
  inline bool GetLooped();

  /// [NativeThrows]
  /// @brief Method GetLoopedInternal, addr 0x6ea4df0, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetLoopedInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetPauseDelay, addr 0x6ea55ac, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetPauseDelay();

  /// @brief Method GetPauseDelay, addr 0x6ea5624, size 0x18c, virtual false, abstract: false, final false
  inline void GetPauseDelay(double_t value);

  /// [NativeThrows]
  /// @brief Method GetPauseDelayInternal, addr 0x6ea55e8, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetPauseDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetSpatialBlend, addr 0x6ea5254, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetSpatialBlend();

  /// [NativeThrows]
  /// @brief Method GetSpatialBlendInternal, addr 0x6ea5290, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetSpatialBlendInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetStartDelay, addr 0x6ea549c, size 0x3c, virtual false, abstract: false, final false
  inline double_t GetStartDelay();

  /// [NativeThrows]
  /// @brief Method GetStartDelayInternal, addr 0x6ea54d8, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetStartDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetStereoPan, addr 0x6ea50c0, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetStereoPan();

  /// [NativeThrows]
  /// @brief Method GetStereoPanInternal, addr 0x6ea50fc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetStereoPanInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method GetVolume, addr 0x6ea4eb4, size 0x3c, virtual false, abstract: false, final false
  inline float_t GetVolume();

  /// [NativeThrows]
  /// @brief Method GetVolumeInternal, addr 0x6ea4ef0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetVolumeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// [NativeThrows]
  /// @brief Method InternalCreateAudioClipPlayable, addr 0x6ea4a48, size 0xa8, virtual false, abstract: false, final false
  static inline bool InternalCreateAudioClipPlayable(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AudioClip* clip, bool looping,
                                                     ::by_ref<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method InternalCreateAudioClipPlayable_Injected, addr 0x6ea5afc, size 0x5c, virtual false, abstract: false, final false
  static inline bool InternalCreateAudioClipPlayable_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::System::IntPtr clip, bool looping,
                                                              ::by_ref<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method IsChannelPlaying, addr 0x6ea5424, size 0x3c, virtual false, abstract: false, final false
  inline bool IsChannelPlaying();

  /// [Obsolete("IsPlaying() has been deprecated. Use IsChannelPlaying() instead (UnityUpgradable) -> IsChannelPlaying()", true)]
  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief Method IsPlaying, addr 0x6ea53e8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsPlaying();

  /// @brief Method Seek, addr 0x6ea57fc, size 0x8, virtual false, abstract: false, final false
  inline void Seek(double_t startTime, double_t startDelay);

  /// @brief Method Seek, addr 0x6ea5804, size 0x278, virtual false, abstract: false, final false
  inline void Seek(double_t startTime, double_t startDelay, /* [DefaultValue("0")] */ double_t duration);

  /// @brief Method SetClip, addr 0x6ea4d20, size 0x4, virtual false, abstract: false, final false
  inline void SetClip(::UnityEngine::AudioClip* value);

  /// [NativeThrows]
  /// @brief Method SetClipInternal, addr 0x6ea4d24, size 0x90, virtual false, abstract: false, final false
  static inline void SetClipInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, ::UnityEngine::AudioClip* clip);

  /// @brief Method SetClipInternal_Injected, addr 0x6ea5ab8, size 0x44, virtual false, abstract: false, final false
  static inline void SetClipInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, ::System::IntPtr clip);

  /// @brief Method SetLooped, addr 0x6ea4e2c, size 0x44, virtual false, abstract: false, final false
  inline void SetLooped(bool value);

  /// [NativeThrows]
  /// @brief Method SetLoopedInternal, addr 0x6ea4e70, size 0x44, virtual false, abstract: false, final false
  static inline void SetLoopedInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, bool looped);

  /// [NativeThrows]
  /// @brief Method SetPauseDelayInternal, addr 0x6ea57b0, size 0x4c, virtual false, abstract: false, final false
  static inline void SetPauseDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay);

  /// @brief Method SetSpatialBlend, addr 0x6ea52cc, size 0xd0, virtual false, abstract: false, final false
  inline void SetSpatialBlend(float_t value);

  /// [NativeThrows]
  /// @brief Method SetSpatialBlendInternal, addr 0x6ea539c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetSpatialBlendInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, float_t spatialBlend);

  /// @brief Method SetStartDelay, addr 0x6ea5514, size 0x4c, virtual false, abstract: false, final false
  inline void SetStartDelay(double_t value);

  /// [NativeThrows]
  /// @brief Method SetStartDelayInternal, addr 0x6ea5560, size 0x4c, virtual false, abstract: false, final false
  static inline void SetStartDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay);

  /// @brief Method SetStereoPan, addr 0x6ea5138, size 0xd0, virtual false, abstract: false, final false
  inline void SetStereoPan(float_t value);

  /// [NativeThrows]
  /// @brief Method SetStereoPanInternal, addr 0x6ea5208, size 0x4c, virtual false, abstract: false, final false
  static inline void SetStereoPanInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, float_t stereoPan);

  /// @brief Method SetVolume, addr 0x6ea4f2c, size 0xd0, virtual false, abstract: false, final false
  inline void SetVolume(float_t value);

  /// [NativeThrows]
  /// @brief Method SetVolumeInternal, addr 0x6ea4ffc, size 0x4c, virtual false, abstract: false, final false
  static inline void SetVolumeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, float_t volume);

  /// [NativeThrows]
  /// @brief Method ValidateType, addr 0x6ea5b58, size 0x3c, virtual false, abstract: false, final false
  static inline bool ValidateType(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl);

  /// @brief Method .ctor, addr 0x6ea4934, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Explicit, addr 0x6ea4b00, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioClipPlayable op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable playable);

  /// @brief Method op_Implicit, addr 0x6ea4afc, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable playable);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None, comment: None }]
  constexpr AudioClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20318 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioClipPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioClipPlayable) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
