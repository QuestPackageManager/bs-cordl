#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(PressureSensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PressureSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::PressureSensor);
// Type: UnityEngine.InputSystem::PressureSensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::PressureSensor*
class CORDL_TYPE PressureSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <atmosphericPressure>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__atmosphericPressure_k__BackingField,
                      put = __cordl_internal_set__atmosphericPressure_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _atmosphericPressure_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::PressureSensor* _current_k__BackingField;

  __declspec(property(get = get_atmosphericPressure, put = set_atmosphericPressure))::UnityEngine::InputSystem::Controls::AxisControl* atmosphericPressure;

  /// @brief Method FinishSetup, addr 0x31191e4, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x311910c, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::PressureSensor* New_ctor();

  /// @brief Method OnRemoved, addr 0x3119160, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__atmosphericPressure_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__atmosphericPressure_k__BackingField() const;

  constexpr void __cordl_internal_set__atmosphericPressure_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x311925c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::PressureSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_atmosphericPressure, addr 0x3119068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_atmosphericPressure();

  /// @brief Method get_current, addr 0x3119078, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::PressureSensor* get_current();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::PressureSensor* value);

  /// @brief Method set_atmosphericPressure, addr 0x3119070, size 0x8, virtual false, abstract: false, final false
  inline void set_atmosphericPressure(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_current, addr 0x31190c0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::PressureSensor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PressureSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PressureSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PressureSensor(PressureSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PressureSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PressureSensor(PressureSensor const&) = delete;

  /// @brief Field <atmosphericPressure>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____atmosphericPressure_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PressureSensor, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PressureSensor, ____atmosphericPressure_k__BackingField) == 0x158, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::PressureSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PressureSensor*, "UnityEngine.InputSystem", "PressureSensor");
