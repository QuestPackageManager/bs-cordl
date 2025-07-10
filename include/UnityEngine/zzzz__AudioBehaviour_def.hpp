#pragma once
// IWYU pragma private; include "UnityEngine/AudioBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioBehaviour)
// Forward declare root types
namespace UnityEngine {
class AudioBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AudioBehaviour);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioBehaviour
class CORDL_TYPE AudioBehaviour : public ::UnityEngine::Behaviour {
public:
  // Declarations
  static inline ::UnityEngine::AudioBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x485978c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioBehaviour(AudioBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioBehaviour(AudioBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17924 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AudioBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioBehaviour*, "UnityEngine", "AudioBehaviour");
