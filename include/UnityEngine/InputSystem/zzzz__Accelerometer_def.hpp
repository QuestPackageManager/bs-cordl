#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Accelerometer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(Accelerometer)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Accelerometer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Accelerometer);
// Dependencies UnityEngine.InputSystem.Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Accelerometer
class CORDL_TYPE Accelerometer : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <acceleration>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__acceleration_k__BackingField,
                      put = __cordl_internal_set__acceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::Accelerometer* _current_k__BackingField;

  __declspec(property(get = get_acceleration, put = set_acceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* acceleration;

  /// @brief Method FinishSetup, addr 0x45c741c, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x45c7344, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::Accelerometer* New_ctor();

  /// @brief Method OnRemoved, addr 0x45c7398, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__acceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__acceleration_k__BackingField();

  constexpr void __cordl_internal_set__acceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method .ctor, addr 0x45c7494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Accelerometer* getStaticF__current_k__BackingField();

  /// @brief Method get_acceleration, addr 0x45c72a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration();

  /// @brief Method get_current, addr 0x45c72b0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Accelerometer* get_current();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Accelerometer* value);

  /// @brief Method set_acceleration, addr 0x45c72a8, size 0x8, virtual false, abstract: false, final false
  inline void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_current, addr 0x45c72f8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Accelerometer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Accelerometer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Accelerometer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Accelerometer(Accelerometer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Accelerometer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Accelerometer(Accelerometer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6683 };

  /// @brief Field <acceleration>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____acceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Accelerometer, ____acceleration_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Accelerometer, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Accelerometer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Accelerometer*, "UnityEngine.InputSystem", "Accelerometer");
