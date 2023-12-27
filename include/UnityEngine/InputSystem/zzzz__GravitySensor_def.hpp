#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(GravitySensor)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class GravitySensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::GravitySensor);
// Type: UnityEngine.InputSystem::GravitySensor
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6277))
// CS Name: ::UnityEngine.InputSystem::GravitySensor*
class CORDL_TYPE GravitySensor : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <gravity>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__gravity_k__BackingField, put = __set__gravity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _gravity_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::GravitySensor* _current_k__BackingField;

  __declspec(property(get = get_gravity, put = set_gravity))::UnityEngine::InputSystem::Controls::Vector3Control* gravity;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__gravity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__gravity_k__BackingField() const;

  constexpr void __set__gravity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::GravitySensor* value);

  static inline ::UnityEngine::InputSystem::GravitySensor* getStaticF__current_k__BackingField();

  /// @brief Method get_gravity addr 0x2aa7fcc size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_gravity();

  /// @brief Method set_gravity addr 0x2aa7fd4 size 0x8 virtual false final false
  inline void set_gravity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_current addr 0x2aa7fdc size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::GravitySensor* get_current();

  /// @brief Method set_current addr 0x2aa8024 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::GravitySensor* value);

  /// @brief Method FinishSetup addr 0x2aa8070 size 0x78 virtual true final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent addr 0x2aa80e8 size 0x54 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x2aa813c size 0x84 virtual true final false
  inline void OnRemoved();

  static inline ::UnityEngine::InputSystem::GravitySensor* New_ctor();

  /// @brief Method .ctor addr 0x2aa81c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GravitySensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GravitySensor(GravitySensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GravitySensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GravitySensor(GravitySensor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GravitySensor();

public:
  /// @brief Field <gravity>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____gravity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::GravitySensor, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::GravitySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::GravitySensor*, "UnityEngine.InputSystem", "GravitySensor");
