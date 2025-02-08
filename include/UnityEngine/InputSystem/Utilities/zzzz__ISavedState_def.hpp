#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ISavedState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISavedState)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::ISavedState);
// Dependencies
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.ISavedState
class CORDL_TYPE ISavedState {
public:
  // Declarations
  /// @brief Method RestoreSavedState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RestoreSavedState();

  /// @brief Method StaticDisposeCurrentState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void StaticDisposeCurrentState();

  // Ctor Parameters [CppParam { name: "", ty: "ISavedState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISavedState(ISavedState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7112 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ISavedState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ISavedState*, "UnityEngine.InputSystem.Utilities", "ISavedState");
