#pragma once
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
// Type: UnityEngine.InputSystem::HumiditySensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6284))
// CS Name: ::UnityEngine.InputSystem::HumiditySensor*
class CORDL_TYPE HumiditySensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <relativeHumidity>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__relativeHumidity_k__BackingField,
                      put = __set__relativeHumidity_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _relativeHumidity_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::HumiditySensor* _current_k__BackingField;

  __declspec(property(get = get_relativeHumidity, put = set_relativeHumidity))::UnityEngine::InputSystem::Controls::AxisControl* relativeHumidity;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__relativeHumidity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__relativeHumidity_k__BackingField() const;

  constexpr void __set__relativeHumidity_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::HumiditySensor* value);

  static inline ::UnityEngine::InputSystem::HumiditySensor* getStaticF__current_k__BackingField();

  /// @brief Method get_relativeHumidity addr 0x2aa8db0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_relativeHumidity();

  /// @brief Method set_relativeHumidity addr 0x2aa8db8 size 0x8 virtual false final false
  inline void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_current addr 0x2aa8dc0 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::HumiditySensor* get_current();

  /// @brief Method set_current addr 0x2aa8e08 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::HumiditySensor* value);

  /// @brief Method MakeCurrent addr 0x2aa8e54 size 0x54 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x2aa8ea8 size 0x84 virtual true final false
  inline void OnRemoved();

  /// @brief Method FinishSetup addr 0x2aa8f2c size 0x78 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::HumiditySensor* New_ctor();

  /// @brief Method .ctor addr 0x2aa8fa4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HumiditySensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HumiditySensor(HumiditySensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HumiditySensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HumiditySensor(HumiditySensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumiditySensor();

public:
  /// @brief Field <relativeHumidity>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____relativeHumidity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HumiditySensor, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::HumiditySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HumiditySensor*, "UnityEngine.InputSystem", "HumiditySensor");
