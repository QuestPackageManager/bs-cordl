#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LightSensor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(LightSensor)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class LightSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::LightSensor);
// Type: UnityEngine.InputSystem::LightSensor
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::LightSensor*
class CORDL_TYPE LightSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::LightSensor* _current_k__BackingField;

  /// @brief Field <lightLevel>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__lightLevel_k__BackingField,
                      put = __cordl_internal_set__lightLevel_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _lightLevel_k__BackingField;

  __declspec(property(get = get_lightLevel, put = set_lightLevel))::UnityEngine::InputSystem::Controls::AxisControl* lightLevel;

  /// @brief Method FinishSetup, addr 0x314c5f8, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x314c520, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::LightSensor* New_ctor();

  /// @brief Method OnRemoved, addr 0x314c574, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__lightLevel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__lightLevel_k__BackingField() const;

  constexpr void __cordl_internal_set__lightLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x314c670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::LightSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_current, addr 0x314c48c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LightSensor* get_current();

  /// @brief Method get_lightLevel, addr 0x314c47c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::LightSensor* value);

  /// @brief Method set_current, addr 0x314c4d4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::LightSensor* value);

  /// @brief Method set_lightLevel, addr 0x314c484, size 0x8, virtual false, abstract: false, final false
  inline void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightSensor(LightSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightSensor(LightSensor const&) = delete;

  /// @brief Field <lightLevel>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____lightLevel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LightSensor, 0x178>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LightSensor, ____lightLevel_k__BackingField) == 0x170, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::LightSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LightSensor*, "UnityEngine.InputSystem", "LightSensor");
