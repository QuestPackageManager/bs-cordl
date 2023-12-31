#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(Gyroscope)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Gyroscope;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Gyroscope);
// Type: UnityEngine.InputSystem::Gyroscope
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6276))
// CS Name: ::UnityEngine.InputSystem::Gyroscope*
class CORDL_TYPE Gyroscope : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <angularVelocity>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __get__angularVelocity_k__BackingField,
                      put = __set__angularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Gyroscope* _current_k__BackingField;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* angularVelocity;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__angularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__angularVelocity_k__BackingField() const;

  constexpr void __set__angularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Gyroscope* value);

  static inline ::UnityEngine::InputSystem::Gyroscope* getStaticF__current_k__BackingField();

  /// @brief Method get_angularVelocity, addr 0x2aa7dd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity();

  /// @brief Method set_angularVelocity, addr 0x2aa7dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_current, addr 0x2aa7de0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Gyroscope* get_current();

  /// @brief Method set_current, addr 0x2aa7e28, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Gyroscope* value);

  /// @brief Method MakeCurrent, addr 0x2aa7e74, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved, addr 0x2aa7ec8, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  /// @brief Method FinishSetup, addr 0x2aa7f4c, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Gyroscope* New_ctor();

  /// @brief Method .ctor, addr 0x2aa7fc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gyroscope(Gyroscope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gyroscope(Gyroscope const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gyroscope();

public:
  /// @brief Field <angularVelocity>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____angularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Gyroscope, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Gyroscope, ____angularVelocity_k__BackingField) == 0x158, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Gyroscope);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Gyroscope*, "UnityEngine.InputSystem", "Gyroscope");
