#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::InputSystem::InputExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputExtensions*, "UnityEngine.InputSystem", "InputExtensions");
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputExtensions
class CORDL_TYPE InputExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsActive, addr 0x6563228, size 0x14, virtual false, abstract: false, final false
  static inline bool IsActive(::UnityEngine::InputSystem::TouchPhase phase);

  /// @brief Method IsEndedOrCanceled, addr 0x6563a50, size 0x10, virtual false, abstract: false, final false
  static inline bool IsEndedOrCanceled(::UnityEngine::InputSystem::TouchPhase phase);

  /// @brief Method IsInProgress, addr 0x6563a40, size 0x10, virtual false, abstract: false, final false
  static inline bool IsInProgress(::UnityEngine::InputSystem::InputActionPhase phase);

  /// @brief Method IsModifierKey, addr 0x6563a60, size 0x10, virtual false, abstract: false, final false
  static inline bool IsModifierKey(::UnityEngine::InputSystem::Key key);

  /// @brief Method IsTextInputKey, addr 0x6563a70, size 0x24, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem
