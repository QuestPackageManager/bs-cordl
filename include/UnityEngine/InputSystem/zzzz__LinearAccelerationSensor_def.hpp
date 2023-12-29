#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(LinearAccelerationSensor)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class LinearAccelerationSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LinearAccelerationSensor);
// Type: UnityEngine.InputSystem::LinearAccelerationSensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6360))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6365))
// CS Name: ::UnityEngine.InputSystem::LinearAccelerationSensor*
class CORDL_TYPE LinearAccelerationSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <acceleration>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__acceleration_k__BackingField, put = __set__acceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::LinearAccelerationSensor* _current_k__BackingField;

  __declspec(property(get = get_acceleration, put = set_acceleration))::UnityEngine::InputSystem::Controls::Vector3Control* acceleration;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__acceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__acceleration_k__BackingField() const;

  constexpr void __set__acceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::LinearAccelerationSensor* value);

  static inline ::UnityEngine::InputSystem::LinearAccelerationSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_acceleration addr 0x292967c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration();

  /// @brief Method set_acceleration addr 0x2929684 size 0x8 virtual false final false
  inline void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_current addr 0x292968c size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::LinearAccelerationSensor* get_current();

  /// @brief Method set_current addr 0x29296d4 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::LinearAccelerationSensor* value);

  /// @brief Method MakeCurrent addr 0x2929720 size 0x54 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x2929774 size 0x84 virtual true final false
  inline void OnRemoved();

  /// @brief Method FinishSetup addr 0x29297f8 size 0x78 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::LinearAccelerationSensor* New_ctor();

  /// @brief Method .ctor addr 0x2929870 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LinearAccelerationSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinearAccelerationSensor(LinearAccelerationSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinearAccelerationSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinearAccelerationSensor(LinearAccelerationSensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinearAccelerationSensor();

public:
  /// @brief Field <acceleration>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____acceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LinearAccelerationSensor, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LinearAccelerationSensor, ____acceleration_k__BackingField) == 0x158, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::LinearAccelerationSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LinearAccelerationSensor*, "UnityEngine.InputSystem", "LinearAccelerationSensor");
