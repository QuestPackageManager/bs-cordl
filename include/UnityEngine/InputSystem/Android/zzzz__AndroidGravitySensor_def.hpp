#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidGravitySensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__GravitySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidGravitySensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGravitySensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidGravitySensor);
// Dependencies UnityEngine.InputSystem.GravitySensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGravitySensor
class CORDL_TYPE AndroidGravitySensor : public ::UnityEngine::InputSystem::GravitySensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGravitySensor* New_ctor();

  /// @brief Method .ctor, addr 0x4605a68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGravitySensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGravitySensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGravitySensor(AndroidGravitySensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGravitySensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGravitySensor(AndroidGravitySensor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidGravitySensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGravitySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGravitySensor*, "UnityEngine.InputSystem.Android", "AndroidGravitySensor");
