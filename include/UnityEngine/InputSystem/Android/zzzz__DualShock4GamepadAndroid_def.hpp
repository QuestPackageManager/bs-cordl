#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/DualShock4GamepadAndroid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockGamepad_def.hpp"
CORDL_MODULE_EXPORT(DualShock4GamepadAndroid)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class DualShock4GamepadAndroid;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid);
// Dependencies UnityEngine.InputSystem.DualShock.DualShockGamepad
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.DualShock4GamepadAndroid
class CORDL_TYPE DualShock4GamepadAndroid : public ::UnityEngine::InputSystem::DualShock::DualShockGamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid* New_ctor();

  /// @brief Method .ctor, addr 0x63f5288, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DualShock4GamepadAndroid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DualShock4GamepadAndroid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DualShock4GamepadAndroid(DualShock4GamepadAndroid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DualShock4GamepadAndroid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DualShock4GamepadAndroid(DualShock4GamepadAndroid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8901 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid, 0x280>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::DualShock4GamepadAndroid*, "UnityEngine.InputSystem.Android", "DualShock4GamepadAndroid");
