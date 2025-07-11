#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/OpenVRHMD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(OpenVRHMD)
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class OpenVRHMD;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::OpenVRHMD);
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace Unity::XR::OpenVR {
// Is value type: false
// CS Name: Unity.XR.OpenVR.OpenVRHMD
class CORDL_TYPE OpenVRHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__centerEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField;

  /// @brief Field <centerEyeVelocity>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeVelocity_k__BackingField,
                      put = __cordl_internal_set__centerEyeVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__leftEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <leftEyeVelocity>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeVelocity_k__BackingField,
                      put = __cordl_internal_set__leftEyeVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeVelocity_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__rightEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyeVelocity>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeVelocity_k__BackingField,
                      put = __cordl_internal_set__rightEyeVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeVelocity_k__BackingField;

  __declspec(property(get = get_centerEyeAngularVelocity, put = set_centerEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularVelocity;

  __declspec(property(get = get_centerEyeVelocity, put = set_centerEyeVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeVelocity;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_leftEyeAngularVelocity, put = set_leftEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularVelocity;

  __declspec(property(get = get_leftEyeVelocity, put = set_leftEyeVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeVelocity;

  __declspec(property(get = get_rightEyeAngularVelocity, put = set_rightEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularVelocity;

  __declspec(property(get = get_rightEyeVelocity, put = set_rightEyeVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeVelocity;

  /// @brief Method FinishSetup, addr 0x453b7ec, size 0x1ac, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::OpenVRHMD* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeVelocity_k__BackingField();

  constexpr void __cordl_internal_set__centerEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method .ctor, addr 0x453b998, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_centerEyeAngularVelocity, addr 0x453b7dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity();

  /// @brief Method get_centerEyeVelocity, addr 0x453b7cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeVelocity();

  /// @brief Method get_deviceAngularVelocity, addr 0x453b77c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method get_deviceVelocity, addr 0x453b76c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method get_leftEyeAngularVelocity, addr 0x453b79c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity();

  /// @brief Method get_leftEyeVelocity, addr 0x453b78c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeVelocity();

  /// @brief Method get_rightEyeAngularVelocity, addr 0x453b7bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity();

  /// @brief Method get_rightEyeVelocity, addr 0x453b7ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeVelocity();

  /// @brief Method set_centerEyeAngularVelocity, addr 0x453b7e4, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_centerEyeVelocity, addr 0x453b7d4, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceAngularVelocity, addr 0x453b784, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceVelocity, addr 0x453b774, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeAngularVelocity, addr 0x453b7a4, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeVelocity, addr 0x453b794, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeAngularVelocity, addr 0x453b7c4, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeVelocity, addr 0x453b7b4, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenVRHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenVRHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenVRHMD(OpenVRHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenVRHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenVRHMD(OpenVRHMD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6521 };

  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <leftEyeVelocity>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeVelocity_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyeVelocity>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeVelocity_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <centerEyeVelocity>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeVelocity_k__BackingField;

  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____deviceVelocity_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____deviceAngularVelocity_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____leftEyeVelocity_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____leftEyeAngularVelocity_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____rightEyeVelocity_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____rightEyeAngularVelocity_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____centerEyeVelocity_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::OpenVRHMD, ____centerEyeAngularVelocity_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::OpenVRHMD, 0x200>, "Size mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::OpenVRHMD);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::OpenVRHMD*, "Unity.XR.OpenVR", "OpenVRHMD");
