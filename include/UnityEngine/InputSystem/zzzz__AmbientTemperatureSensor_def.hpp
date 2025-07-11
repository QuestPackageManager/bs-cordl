#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/AmbientTemperatureSensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(AmbientTemperatureSensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class AmbientTemperatureSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::AmbientTemperatureSensor);
// Dependencies UnityEngine.InputSystem.Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.AmbientTemperatureSensor
class CORDL_TYPE AmbientTemperatureSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <ambientTemperature>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__ambientTemperature_k__BackingField,
                      put = __cordl_internal_set__ambientTemperature_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _ambientTemperature_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::AmbientTemperatureSensor* _current_k__BackingField;

  __declspec(property(get = get_ambientTemperature, put = set_ambientTemperature)) ::UnityEngine::InputSystem::Controls::AxisControl* ambientTemperature;

  /// @brief Method FinishSetup, addr 0x45c87f4, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x45c871c, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* New_ctor();

  /// @brief Method OnRemoved, addr 0x45c8770, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__ambientTemperature_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__ambientTemperature_k__BackingField();

  constexpr void __cordl_internal_set__ambientTemperature_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x45c886c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_ambientTemperature, addr 0x45c8678, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_ambientTemperature();

  /// @brief Method get_current, addr 0x45c8688, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* get_current();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::AmbientTemperatureSensor* value);

  /// @brief Method set_ambientTemperature, addr 0x45c8680, size 0x8, virtual false, abstract: false, final false
  inline void set_ambientTemperature(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_current, addr 0x45c86d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::AmbientTemperatureSensor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientTemperatureSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AmbientTemperatureSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbientTemperatureSensor(AmbientTemperatureSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbientTemperatureSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbientTemperatureSensor(AmbientTemperatureSensor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6693 };

  /// @brief Field <ambientTemperature>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____ambientTemperature_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::AmbientTemperatureSensor, ____ambientTemperature_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::AmbientTemperatureSensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::AmbientTemperatureSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::AmbientTemperatureSensor*, "UnityEngine.InputSystem", "AmbientTemperatureSensor");
