#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGamepadWithDpadButtons.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
CORDL_MODULE_EXPORT(AndroidGamepadWithDpadButtons)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepadWithDpadButtons;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
// Dependencies UnityEngine.InputSystem.Android.AndroidGamepad
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGamepadWithDpadButtons
class CORDL_TYPE AndroidGamepadWithDpadButtons : public ::UnityEngine::InputSystem::Android::AndroidGamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons* New_ctor();

  /// @brief Method .ctor, addr 0x4605d80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGamepadWithDpadButtons();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons*, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadButtons");
