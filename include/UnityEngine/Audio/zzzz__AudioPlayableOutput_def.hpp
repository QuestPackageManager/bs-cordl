#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioPlayableOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioPlayableOutput)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioPlayableOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioPlayableOutput);
// Dependencies UnityEngine.Playables.IPlayableOutput, UnityEngine.Playables.PlayableOutputHandle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioPlayableOutput
struct CORDL_TYPE AudioPlayableOutput {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
  constexpr operator ::UnityEngine::Playables::IPlayableOutput*();

  /// @brief Method Create, addr 0x485ccc0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioPlayableOutput Create(::UnityEngine::Playables::PlayableGraph graph, ::StringW name, ::UnityEngine::AudioSource* target);

  /// @brief Method GetEvaluateOnSeek, addr 0x485d0e8, size 0x3c, virtual false, abstract: false, final false
  inline bool GetEvaluateOnSeek();

  /// @brief Method GetHandle, addr 0x485cf9c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  /// @brief Method GetTarget, addr 0x485d02c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> GetTarget();

  /// @brief Method InternalGetEvaluateOnSeek, addr 0x485d124, size 0x3c, virtual false, abstract: false, final false
  static inline bool InternalGetEvaluateOnSeek(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> output);

  /// @brief Method InternalGetTarget, addr 0x485d068, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::AudioSource> InternalGetTarget(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> output);

  /// @brief Method InternalSetEvaluateOnSeek, addr 0x485d1a4, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetEvaluateOnSeek(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> output, bool value);

  /// @brief Method InternalSetTarget, addr 0x485d0a4, size 0x44, virtual false, abstract: false, final false
  static inline void InternalSetTarget(::ByRef<::UnityEngine::Playables::PlayableOutputHandle> output, ::UnityEngine::AudioSource* target);

  /// @brief Method SetEvaluateOnSeek, addr 0x485d160, size 0x44, virtual false, abstract: false, final false
  inline void SetEvaluateOnSeek(bool value);

  /// @brief Method SetTarget, addr 0x485cf58, size 0x44, virtual false, abstract: false, final false
  inline void SetTarget(::UnityEngine::AudioSource* value);

  /// @brief Method .ctor, addr 0x485ce68, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle handle);

  /// @brief Method get_Null, addr 0x485cdec, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioPlayableOutput get_Null();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
  constexpr ::UnityEngine::Playables::IPlayableOutput* i___UnityEngine__Playables__IPlayableOutput();

  /// @brief Method op_Explicit, addr 0x485cfa8, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioPlayableOutput op_Explicit___UnityEngine__Audio__AudioPlayableOutput(::UnityEngine::Playables::PlayableOutput output);

  /// @brief Method op_Implicit, addr 0x485cd68, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Audio::AudioPlayableOutput output);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayableOutput();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
  constexpr AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17878 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableOutputHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioPlayableOutput, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
