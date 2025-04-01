#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/MagneticFieldSensor.hpp"
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
// Dependencies UnityEngine.InputSystem.Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.MagneticFieldSensor
class CORDL_TYPE MagneticFieldSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::MagneticFieldSensor* _current_k__BackingField;

  /// @brief Field <magneticField>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__magneticField_k__BackingField,
                      put = __cordl_internal_set__magneticField_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _magneticField_k__BackingField;

  __declspec(property(get = get_magneticField, put = set_magneticField)) ::UnityEngine::InputSystem::Controls::Vector3Control* magneticField;

  /// @brief Method FinishSetup, addr 0x45c3274, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x45c319c, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::MagneticFieldSensor* New_ctor();

  /// @brief Method OnRemoved, addr 0x45c31f0, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__magneticField_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__magneticField_k__BackingField();

  constexpr void __cordl_internal_set__magneticField_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method .ctor, addr 0x45c32ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::MagneticFieldSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_current, addr 0x45c3108, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::MagneticFieldSensor* get_current();

  /// @brief Method get_magneticField, addr 0x45c30f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_magneticField();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::MagneticFieldSensor* value);

  /// @brief Method set_current, addr 0x45c3150, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::MagneticFieldSensor* value);

  /// @brief Method set_magneticField, addr 0x45c3100, size 0x8, virtual false, abstract: false, final false
  inline void set_magneticField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MagneticFieldSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MagneticFieldSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MagneticFieldSensor(MagneticFieldSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MagneticFieldSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MagneticFieldSensor(MagneticFieldSensor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6688 };

  /// @brief Field <magneticField>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____magneticField_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::MagneticFieldSensor, ____magneticField_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::MagneticFieldSensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::MagneticFieldSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::MagneticFieldSensor*, "UnityEngine.InputSystem", "MagneticFieldSensor");
