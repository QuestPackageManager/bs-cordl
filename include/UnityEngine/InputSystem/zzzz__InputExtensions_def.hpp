#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputExtensions)
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
struct Key;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputExtensions);
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputExtensions
class CORDL_TYPE InputExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsActive, addr 0x63b23c4, size 0x14, virtual false, abstract: false, final false
  static inline bool IsActive(::UnityEngine::InputSystem::TouchPhase phase);

  /// @brief Method IsEndedOrCanceled, addr 0x63b2bec, size 0x10, virtual false, abstract: false, final false
  static inline bool IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase phase);

  /// @brief Method IsInProgress, addr 0x63b2bdc, size 0x10, virtual false, abstract: false, final false
  static inline bool IsInProgress(::UnityEngine::InputSystem::InputActionPhase phase);

  /// @brief Method IsModifierKey, addr 0x63b2bfc, size 0x10, virtual false, abstract: false, final false
  static inline bool IsModifierKey(::UnityEngine::InputSystem::Key key);

  /// @brief Method IsTextInputKey, addr 0x63b2c0c, size 0x24, virtual false, abstract: false, final false
  static inline bool IsTextInputKey(::UnityEngine::InputSystem::Key key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputExtensions(InputExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputExtensions(InputExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputExtensions*, "UnityEngine.InputSystem", "InputExtensions");
