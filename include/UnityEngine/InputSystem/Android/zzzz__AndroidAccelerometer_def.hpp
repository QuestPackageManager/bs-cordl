#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidAccelerometer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Accelerometer_def.hpp"
CORDL_MODULE_EXPORT(AndroidAccelerometer)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidAccelerometer;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidAccelerometer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidAccelerometer*, "UnityEngine.InputSystem.Android", "AndroidAccelerometer");
// Dependencies UnityEngine.InputSystem.Accelerometer
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidAccelerometer
class CORDL_TYPE AndroidAccelerometer : public ::UnityEngine::InputSystem::Accelerometer {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidAccelerometer* New_ctor();

  /// @brief Method .ctor, addr 0x65abaf0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAccelerometer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidAccelerometer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidAccelerometer(AndroidAccelerometer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidAccelerometer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidAccelerometer(AndroidAccelerometer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidAccelerometer) == 0x190, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
