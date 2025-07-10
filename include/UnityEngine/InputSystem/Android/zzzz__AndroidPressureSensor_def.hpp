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
// Dependencies UnityEngine.InputSystem.PressureSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidPressureSensor
class CORDL_TYPE AndroidPressureSensor : public ::UnityEngine::InputSystem::PressureSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidPressureSensor* New_ctor();

  /// @brief Method .ctor, addr 0x4605a58, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6846 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidPressureSensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidPressureSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidPressureSensor*, "UnityEngine.InputSystem.Android", "AndroidPressureSensor");
