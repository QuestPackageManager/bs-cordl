#pragma once
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
// Type: UnityEngine.InputSystem::AmbientTemperatureSensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6285))
// CS Name: ::UnityEngine.InputSystem::AmbientTemperatureSensor*
class CORDL_TYPE AmbientTemperatureSensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <ambientTemperature>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__ambientTemperature_k__BackingField,
                      put = __set__ambientTemperature_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _ambientTemperature_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::AmbientTemperatureSensor* _current_k__BackingField;

  __declspec(property(get = get_ambientTemperature, put = set_ambientTemperature))::UnityEngine::InputSystem::Controls::AxisControl* ambientTemperature;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__ambientTemperature_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__ambientTemperature_k__BackingField() const;

  constexpr void __set__ambientTemperature_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::AmbientTemperatureSensor* value);

  static inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* getStaticF__current_k__BackingField();

  /// @brief Method get_ambientTemperature addr 0x2aa8fac size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_ambientTemperature();

  /// @brief Method set_ambientTemperature addr 0x2aa8fb4 size 0x8 virtual false final false
  inline void set_ambientTemperature(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_current addr 0x2aa8fbc size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* get_current();

  /// @brief Method set_current addr 0x2aa9004 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::AmbientTemperatureSensor* value);

  /// @brief Method MakeCurrent addr 0x2aa9050 size 0x54 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x2aa90a4 size 0x84 virtual true final false
  inline void OnRemoved();

  /// @brief Method FinishSetup addr 0x2aa9128 size 0x78 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::AmbientTemperatureSensor* New_ctor();

  /// @brief Method .ctor addr 0x2aa91a0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AmbientTemperatureSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AmbientTemperatureSensor(AmbientTemperatureSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AmbientTemperatureSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AmbientTemperatureSensor(AmbientTemperatureSensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AmbientTemperatureSensor();

public:
  /// @brief Field <ambientTemperature>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____ambientTemperature_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::AmbientTemperatureSensor, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::AmbientTemperatureSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::AmbientTemperatureSensor*, "UnityEngine.InputSystem", "AmbientTemperatureSensor");
