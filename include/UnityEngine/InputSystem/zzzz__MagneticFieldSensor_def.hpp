#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(MagneticFieldSensor)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class MagneticFieldSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::MagneticFieldSensor);
// Type: UnityEngine.InputSystem::MagneticFieldSensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6280))
// CS Name: ::UnityEngine.InputSystem::MagneticFieldSensor*
class CORDL_TYPE MagneticFieldSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <magneticField>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__magneticField_k__BackingField, put = __set__magneticField_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _magneticField_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::MagneticFieldSensor* _current_k__BackingField;

  __declspec(property(get = get_magneticField, put = set_magneticField))::UnityEngine::InputSystem::Controls::Vector3Control* magneticField;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__magneticField_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__magneticField_k__BackingField() const;

  constexpr void __set__magneticField_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::MagneticFieldSensor* value);

  static inline ::UnityEngine::InputSystem::MagneticFieldSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_magneticField, addr 0x2aa85c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_magneticField();

  /// @brief Method set_magneticField, addr 0x2aa85c8, size 0x8, virtual false, abstract: false, final false
  inline void set_magneticField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_current, addr 0x2aa85d0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::MagneticFieldSensor* get_current();

  /// @brief Method set_current, addr 0x2aa8618, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::MagneticFieldSensor* value);

  /// @brief Method MakeCurrent, addr 0x2aa8664, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved, addr 0x2aa86b8, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method FinishSetup, addr 0x2aa873c, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::MagneticFieldSensor* New_ctor();

  /// @brief Method .ctor, addr 0x2aa87b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MagneticFieldSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MagneticFieldSensor(MagneticFieldSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MagneticFieldSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MagneticFieldSensor(MagneticFieldSensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MagneticFieldSensor();

public:
  /// @brief Field <magneticField>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____magneticField_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::MagneticFieldSensor, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::MagneticFieldSensor, ____magneticField_k__BackingField) == 0x158, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::MagneticFieldSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::MagneticFieldSensor*, "UnityEngine.InputSystem", "MagneticFieldSensor");
