#pragma once
// IWYU pragma private; include "UnityEngine/Playables/IPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlayable)
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
class IPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::IPlayable);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.IPlayable
class CORDL_TYPE IPlayable {
public:
  // Declarations
  /// @brief Method GetHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayable(IPlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11266 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::IPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::IPlayable*, "UnityEngine.Playables", "IPlayable");
