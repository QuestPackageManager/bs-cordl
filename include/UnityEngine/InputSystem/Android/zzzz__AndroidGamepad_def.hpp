#pragma once
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
// Type: UnityEngine.InputSystem.Android::AndroidGamepad
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6237))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6426))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidGamepad*
class CORDL_TYPE AndroidGamepad : public ::UnityEngine::InputSystem::Gamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGamepad* New_ctor();

  /// @brief Method .ctor addr 0x2ae5998 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepad", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGamepad(AndroidGamepad&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepad", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGamepad(AndroidGamepad const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGamepad();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGamepad, 0x1d8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepad*, "UnityEngine.InputSystem.Android", "AndroidGamepad");
