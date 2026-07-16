#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidLightSensor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__LightSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidLightSensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidLightSensor;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidLightSensor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidLightSensor*, "UnityEngine.InputSystem.Android", "AndroidLightSensor");
// Dependencies UnityEngine.InputSystem.LightSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidLightSensor
class CORDL_TYPE AndroidLightSensor : public ::UnityEngine::InputSystem::LightSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidLightSensor* New_ctor();

  /// @brief Method .ctor, addr 0x65a6338, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidLightSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidLightSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidLightSensor(AndroidLightSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidLightSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidLightSensor(AndroidLightSensor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8899 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidLightSensor) == 0x190, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
