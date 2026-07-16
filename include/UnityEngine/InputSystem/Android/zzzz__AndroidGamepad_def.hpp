#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGamepad.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
CORDL_MODULE_EXPORT(AndroidGamepad)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepad;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidGamepad*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidGamepad*, "UnityEngine.InputSystem.Android", "AndroidGamepad");
// Dependencies UnityEngine.InputSystem.Gamepad
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGamepad
class CORDL_TYPE AndroidGamepad : public ::UnityEngine::InputSystem::Gamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGamepad* New_ctor();

  /// @brief Method .ctor, addr 0x65a6218, size 0x20, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidGamepad) == 0x208, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
