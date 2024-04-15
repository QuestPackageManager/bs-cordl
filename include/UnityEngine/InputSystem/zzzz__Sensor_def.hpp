#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Sensor)
// Forward declare root types
namespace UnityEngine::InputSystem {
class Sensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Sensor);
// Type: UnityEngine.InputSystem::Sensor
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 344, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::Sensor*
class CORDL_TYPE Sensor : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  __declspec(property(get = get_samplingFrequency, put = set_samplingFrequency)) float_t samplingFrequency;

  static inline ::UnityEngine::InputSystem::Sensor* New_ctor();

  /// @brief Method .ctor, addr 0x2fdc4f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_samplingFrequency, addr 0x2fdc35c, size 0xf4, virtual false, abstract: false, final false
  inline float_t get_samplingFrequency();

  /// @brief Method set_samplingFrequency, addr 0x2fdc450, size 0xa0, virtual false, abstract: false, final false
  inline void set_samplingFrequency(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sensor(Sensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sensor(Sensor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Sensor, 0x158>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Sensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Sensor*, "UnityEngine.InputSystem", "Sensor");
