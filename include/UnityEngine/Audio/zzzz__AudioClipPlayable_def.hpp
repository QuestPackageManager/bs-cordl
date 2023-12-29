#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioClipPlayable)
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
namespace System {
template <typename T> class IEquatable_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10362))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15627))
// CS Name: ::UnityEngine.Audio::AudioClipPlayable
struct CORDL_TYPE AudioClipPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*();

  /// @brief Method Create addr 0x2b37974 size 0x124 virtual false final false
  static inline ::UnityEngine::Audio::AudioClipPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping);

  /// @brief Method CreateHandle addr 0x2b37a98 size 0xd0 virtual false final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping);

  /// @brief Method .ctor addr 0x2b37b68 size 0xc0 virtual false final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Method GetHandle addr 0x2b37c84 size 0xc virtual true final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method op_Implicit addr 0x2b37c90 size 0x30 virtual false final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable playable);

  /// @brief Method op_Explicit addr 0x2b37cc0 size 0x44 virtual false final false
  static inline ::UnityEngine::Audio::AudioClipPlayable op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable playable);

  /// @brief Method Equals addr 0x2b37d04 size 0x78 virtual true final true
  inline bool Equals(::UnityEngine::Audio::AudioClipPlayable other);

  /// @brief Method SetVolume addr 0x2b37d7c size 0xd8 virtual false final false
  inline void SetVolume(float_t value);

  /// @brief Method SetStereoPan addr 0x2b37ea0 size 0xdc virtual false final false
  inline void SetStereoPan(float_t value);

  /// @brief Method SetSpatialBlend addr 0x2b37fc8 size 0xd8 virtual false final false
  inline void SetSpatialBlend(float_t value);

  /// @brief Method Seek addr 0x2b380ec size 0x134 virtual false final false
  inline void Seek(double_t startTime, double_t startDelay, double_t duration);

  /// @brief Method SetVolumeInternal addr 0x2b37e54 size 0x4c virtual false final false
  static inline void SetVolumeInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, float_t volume);

  /// @brief Method SetStereoPanInternal addr 0x2b37f7c size 0x4c virtual false final false
  static inline void SetStereoPanInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, float_t stereoPan);

  /// @brief Method SetSpatialBlendInternal addr 0x2b380a0 size 0x4c virtual false final false
  static inline void SetSpatialBlendInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, float_t spatialBlend);

  /// @brief Method SetStartDelayInternal addr 0x2b38220 size 0x4c virtual false final false
  static inline void SetStartDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay);

  /// @brief Method SetPauseDelayInternal addr 0x2b3826c size 0x4c virtual false final false
  static inline void SetPauseDelayInternal(ByRef<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay);

  /// @brief Method InternalCreateAudioClipPlayable addr 0x2b37c28 size 0x5c virtual false final false
  static inline bool InternalCreateAudioClipPlayable(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AudioClip* clip, bool looping,
                                                     ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AudioClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipPlayable();

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
