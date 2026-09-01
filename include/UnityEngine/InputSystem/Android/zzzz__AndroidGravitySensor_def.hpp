#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidGravitySensor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__GravitySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidGravitySensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGravitySensor;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidGravitySensor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidGravitySensor*, "UnityEngine.InputSystem.Android", "AndroidGravitySensor");
// Dependencies UnityEngine.InputSystem.GravitySensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidGravitySensor
class CORDL_TYPE AndroidGravitySensor : public ::UnityEngine::InputSystem::GravitySensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidGravitySensor* New_ctor();

  /// @brief Method .ctor, addr 0x65abbb0, size 0x20, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidGravitySensor) == 0x190, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
