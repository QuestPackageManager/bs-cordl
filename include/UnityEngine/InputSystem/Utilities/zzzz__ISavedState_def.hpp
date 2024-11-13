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
// Type: UnityEngine.InputSystem.Utilities::ISavedState
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::ISavedState*
class CORDL_TYPE ISavedState {
public:
  // Declarations
  /// @brief Method RestoreSavedState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RestoreSavedState();

  /// @brief Method StaticDisposeCurrentState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StaticDisposeCurrentState();

  // Ctor Parameters [CppParam { name: "", ty: "ISavedState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISavedState(ISavedState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISavedState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISavedState(ISavedState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7083 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::ISavedState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::ISavedState*, "UnityEngine.InputSystem.Utilities", "ISavedState");
