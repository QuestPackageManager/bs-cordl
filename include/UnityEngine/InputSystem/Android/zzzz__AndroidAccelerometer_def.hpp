#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidAccelerometer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Accelerometer_def.hpp"
CORDL_MODULE_EXPORT(AndroidAccelerometer)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidAccelerometer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidAccelerometer);
// Type: UnityEngine.InputSystem.Android::AndroidAccelerometer
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidAccelerometer*
class CORDL_TYPE AndroidAccelerometer : public ::UnityEngine::InputSystem::Accelerometer {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidAccelerometer* New_ctor();

  /// @brief Method .ctor, addr 0x3155078, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidAccelerometer, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidAccelerometer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidAccelerometer*, "UnityEngine.InputSystem.Android", "AndroidAccelerometer");
