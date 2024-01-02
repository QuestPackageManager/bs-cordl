#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioPlayableOutput)
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioPlayableOutput);
// Type: UnityEngine.Audio::AudioPlayableOutput
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10415))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15600))
// CS Name: ::UnityEngine.Audio::AudioPlayableOutput
struct CORDL_TYPE AudioPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Create, addr 0x2c9c06c, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name, ::UnityEngine::AudioSource* target);

  /// @brief Method .ctor, addr 0x2c9c1e4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Method get_Null, addr 0x2c9c168, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioPlayableOutput get_Null();

  /// @brief Method GetHandle, addr 0x2c9c2e8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method op_Implicit, addr 0x2c9c2f4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Audio::AudioPlayableOutput output);

  /// @brief Method op_Explicit, addr 0x2c9c324, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioPlayableOutput op_Explicit___UnityEngine__Audio__AudioPlayableOutput(::UnityEngine::Playables::PlayableOutput output);

  /// @brief Method SetTarget, addr 0x2c9c2a4, size 0x44, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AudioSource* value);

  /// @brief Method SetEvaluateOnSeek, addr 0x2c9c3ac, size 0x44, virtual false, abstract: false, final false
  inline void SetEvaluateOnSeek(bool value);

  /// @brief Method InternalSetTarget, addr 0x2c9c368, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetTarget(ByRef<::UnityEngine::Playables::PlayableOutputHandle> output, ::UnityEngine::AudioSource* target);

  /// @brief Method InternalSetEvaluateOnSeek, addr 0x2c9c3f0, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetEvaluateOnSeek(ByRef<::UnityEngine::Playables::PlayableOutputHandle> output, bool value);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayableOutput();

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableOutput, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AudioPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
