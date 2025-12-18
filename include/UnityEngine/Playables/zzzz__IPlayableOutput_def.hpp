#pragma once
// IWYU pragma private; include "UnityEngine/Playables/IPlayableOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayableOutput)
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayableOutput;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::IPlayableOutput);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.IPlayableOutput
class CORDL_TYPE IPlayableOutput {
public:
  // Declarations
  /// @brief Method GetHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableOutputHandle GetHandle();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayableOutput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayableOutput(IPlayableOutput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10647 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::IPlayableOutput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::IPlayableOutput*, "UnityEngine.Playables", "IPlayableOutput");
