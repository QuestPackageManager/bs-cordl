#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(ViveTracker)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveTracker;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::ViveTracker);
// Type: Unity.XR.OpenVR::ViveTracker
// SizeInfo { instance_size: 392, native_size: -1, calculated_instance_size: 392, calculated_native_size: 392, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6289))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6119))
// CS Name: ::Unity.XR.OpenVR::ViveTracker*
class CORDL_TYPE ViveTracker : public ::UnityEngine::InputSystem::TrackedDevice {
public:
  // Declarations
  /// @brief Field <deviceVelocity>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__deviceVelocity_k__BackingField, put = __set__deviceVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__deviceAngularVelocity_k__BackingField,
                      put = __set__deviceAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceVelocity_k__BackingField() const;

  constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAngularVelocity_k__BackingField() const;

  constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceVelocity addr 0x2a345c4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method set_deviceVelocity addr 0x2a345cc size 0x8 virtual false final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAngularVelocity addr 0x2a345d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method set_deviceAngularVelocity addr 0x2a345dc size 0x8 virtual false final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method FinishSetup addr 0x2a345e4 size 0xa4 virtual true final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::ViveTracker* New_ctor();

  /// @brief Method .ctor addr 0x2a34688 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ViveTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ViveTracker(ViveTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ViveTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ViveTracker(ViveTracker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ViveTracker();

public:
  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::ViveTracker, 0x188>, "Size mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::ViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::ViveTracker*, "Unity.XR.OpenVR", "ViveTracker");
