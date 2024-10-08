#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/AttitudeSensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(AttitudeSensor)
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class AttitudeSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::AttitudeSensor);
// Type: UnityEngine.InputSystem::AttitudeSensor
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::AttitudeSensor*
class CORDL_TYPE AttitudeSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <attitude>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__attitude_k__BackingField,
                      put = __cordl_internal_set__attitude_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _attitude_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::AttitudeSensor* _current_k__BackingField;

  __declspec(property(get = get_attitude, put = set_attitude)) ::UnityEngine::InputSystem::Controls::QuaternionControl* attitude;

  /// @brief Method FinishSetup, addr 0x4550984, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x45508ac, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::AttitudeSensor* New_ctor();

  /// @brief Method OnRemoved, addr 0x4550900, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__attitude_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__attitude_k__BackingField() const;

  constexpr void __cordl_internal_set__attitude_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method .ctor, addr 0x45509fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::AttitudeSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_attitude, addr 0x4550808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_attitude();

  /// @brief Method get_current, addr 0x4550818, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::AttitudeSensor* get_current();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::AttitudeSensor* value);

  /// @brief Method set_attitude, addr 0x4550810, size 0x8, virtual false, abstract: false, final false
  inline void set_attitude(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_current, addr 0x4550860, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::AttitudeSensor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttitudeSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttitudeSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttitudeSensor(AttitudeSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttitudeSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttitudeSensor(AttitudeSensor const&) = delete;

  /// @brief Field <attitude>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____attitude_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::AttitudeSensor, 0x178>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::AttitudeSensor, ____attitude_k__BackingField) == 0x170, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::AttitudeSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::AttitudeSensor*, "UnityEngine.InputSystem", "AttitudeSensor");
