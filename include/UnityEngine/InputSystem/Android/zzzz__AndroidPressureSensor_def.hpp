#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidPressureSensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__PressureSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidPressureSensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidPressureSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidPressureSensor);
// Type: UnityEngine.InputSystem.Android::AndroidPressureSensor
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidPressureSensor*
class CORDL_TYPE AndroidPressureSensor : public ::UnityEngine::InputSystem::PressureSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidPressureSensor* New_ctor();

  /// @brief Method .ctor, addr 0x318b9f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidPressureSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidPressureSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidPressureSensor(AndroidPressureSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidPressureSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidPressureSensor(AndroidPressureSensor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidPressureSensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidPressureSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidPressureSensor*, "UnityEngine.InputSystem.Android", "AndroidPressureSensor");
