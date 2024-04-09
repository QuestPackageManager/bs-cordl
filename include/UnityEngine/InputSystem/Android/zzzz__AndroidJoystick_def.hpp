#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Joystick_def.hpp"
CORDL_MODULE_EXPORT(AndroidJoystick)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidJoystick;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidJoystick);
// Type: UnityEngine.InputSystem.Android::AndroidJoystick
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidJoystick*
class CORDL_TYPE AndroidJoystick : public ::UnityEngine::InputSystem::Joystick {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidJoystick* New_ctor();

  /// @brief Method .ctor, addr 0x30142d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJoystick();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJoystick", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJoystick(AndroidJoystick&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJoystick", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJoystick(AndroidJoystick const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidJoystick, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidJoystick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidJoystick*, "UnityEngine.InputSystem.Android", "AndroidJoystick");
