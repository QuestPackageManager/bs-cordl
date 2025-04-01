#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGamepad.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
CORDL_MODULE_EXPORT(AndroidGamepad)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepad;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGamepad);
// Dependencies UnityEngine.InputSystem.Gamepad
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGamepad
class CORDL_TYPE AndroidGamepad : public ::UnityEngine::InputSystem::Gamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGamepad* New_ctor();

  /// @brief Method .ctor, addr 0x4600e74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGamepad();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGamepad(AndroidGamepad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGamepad(AndroidGamepad const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGamepad, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepad*, "UnityEngine.InputSystem.Android", "AndroidGamepad");
