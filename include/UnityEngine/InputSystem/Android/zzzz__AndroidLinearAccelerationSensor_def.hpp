#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidLinearAccelerationSensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__LinearAccelerationSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidLinearAccelerationSensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidLinearAccelerationSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor);
// Dependencies UnityEngine.InputSystem.LinearAccelerationSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidLinearAccelerationSensor
class CORDL_TYPE AndroidLinearAccelerationSensor : public ::UnityEngine::InputSystem::LinearAccelerationSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor* New_ctor();

  /// @brief Method .ctor, addr 0x638d81c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidLinearAccelerationSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidLinearAccelerationSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidLinearAccelerationSensor(AndroidLinearAccelerationSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidLinearAccelerationSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidLinearAccelerationSensor(AndroidLinearAccelerationSensor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor, 0x190>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor*, "UnityEngine.InputSystem.Android", "AndroidLinearAccelerationSensor");
