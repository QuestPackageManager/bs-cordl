#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioMixerPlayable)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioMixerPlayable);
// Type: UnityEngine.Audio::AudioMixerPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10440))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15608))
// CS Name: ::UnityEngine.Audio::AudioMixerPlayable
struct CORDL_TYPE AudioMixerPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>*();

  /// @brief Method Create addr 0x2c9cfe0 size 0x3c virtual false final false
  static inline ::UnityEngine::Audio::AudioMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes);

  /// @brief Method CreateHandle addr 0x2c9d01c size 0xdc virtual false final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes);

  /// @brief Method .ctor addr 0x2c9d0f8 size 0xc0 virtual false final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Method GetHandle addr 0x2c9d20c size 0xc virtual true final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method op_Implicit addr 0x2c9d218 size 0x30 virtual false final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioMixerPlayable playable);

  /// @brief Method Equals addr 0x2c9d248 size 0x78 virtual true final true
  inline bool Equals(::UnityEngine::Audio::AudioMixerPlayable other);

  /// @brief Method CreateAudioMixerPlayableInternal addr 0x2c9d1b8 size 0x54 virtual false final false
  static inline bool CreateAudioMixerPlayableInternal(ByRef<::UnityEngine::Playables::PlayableGraph> graph, bool normalizeInputVolumes, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AudioMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerPlayable();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerPlayable, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");
