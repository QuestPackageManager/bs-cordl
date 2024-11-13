#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGamepadWithDpadAxes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
CORDL_MODULE_EXPORT(AndroidGamepadWithDpadAxes)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepadWithDpadAxes;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes);
// Type: UnityEngine.InputSystem.Android::AndroidGamepadWithDpadAxes
// SizeInfo { instance_size: 496, native_size: -1, calculated_instance_size: 496, calculated_native_size: 496, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidGamepadWithDpadAxes*
class CORDL_TYPE AndroidGamepadWithDpadAxes : public ::UnityEngine::InputSystem::Android::AndroidGamepad {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes* New_ctor();

  /// @brief Method .ctor, addr 0x45a309c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGamepadWithDpadAxes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadAxes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGamepadWithDpadAxes(AndroidGamepadWithDpadAxes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadAxes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGamepadWithDpadAxes(AndroidGamepadWithDpadAxes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes, 0x1f0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes*, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadAxes");
