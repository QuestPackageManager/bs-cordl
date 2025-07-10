#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HumiditySensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(HumiditySensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class HumiditySensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::HumiditySensor);
// Dependencies UnityEngine.InputSystem.Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HumiditySensor
class CORDL_TYPE HumiditySensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::HumiditySensor* _current_k__BackingField;

  /// @brief Field <relativeHumidity>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__relativeHumidity_k__BackingField,
                      put = __cordl_internal_set__relativeHumidity_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _relativeHumidity_k__BackingField;

  __declspec(property(get = get_relativeHumidity, put = set_relativeHumidity)) ::UnityEngine::InputSystem::Controls::AxisControl* relativeHumidity;

  /// @brief Method FinishSetup, addr 0x45c85f8, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x45c8520, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::HumiditySensor* New_ctor();

  /// @brief Method OnRemoved, addr 0x45c8574, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__relativeHumidity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__relativeHumidity_k__BackingField();

  constexpr void __cordl_internal_set__relativeHumidity_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x45c8670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::HumiditySensor* getStaticF__current_k__BackingField();

  /// @brief Method get_current, addr 0x45c848c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::HumiditySensor* get_current();

  /// @brief Method get_relativeHumidity, addr 0x45c847c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_relativeHumidity();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::HumiditySensor* value);

  /// @brief Method set_current, addr 0x45c84d4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::HumiditySensor* value);

  /// @brief Method set_relativeHumidity, addr 0x45c8484, size 0x8, virtual false, abstract: false, final false
  inline void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumiditySensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HumiditySensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumiditySensor(HumiditySensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumiditySensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumiditySensor(HumiditySensor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6692 };

  /// @brief Field <relativeHumidity>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____relativeHumidity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HumiditySensor, ____relativeHumidity_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HumiditySensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::HumiditySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HumiditySensor*, "UnityEngine.InputSystem", "HumiditySensor");
