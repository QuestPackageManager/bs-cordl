#pragma once
// IWYU pragma private; include "Unity/XR/OpenVR/HandedViveTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/OpenVR/zzzz__ViveTracker_def.hpp"
CORDL_MODULE_EXPORT(HandedViveTracker)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class HandedViveTracker;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::HandedViveTracker);
// Dependencies Unity.XR.OpenVR.ViveTracker
namespace Unity::XR::OpenVR {
// Is value type: false
// CS Name: Unity.XR.OpenVR.HandedViveTracker
class CORDL_TYPE HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker {
public:
  // Declarations
  /// @brief Field <gripPressed>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__primary_k__BackingField,
                      put = __cordl_internal_set__primary_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadPressed_k__BackingField,
                      put = __cordl_internal_set__trackpadPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  __declspec(property(get = get_grip, put = set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_primary, put = set_primary)) ::UnityEngine::InputSystem::Controls::ButtonControl* primary;

  __declspec(property(get = get_trackpadPressed, put = set_trackpadPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadPressed;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  /// @brief Method FinishSetup, addr 0x453c0bc, size 0x138, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::HandedViveTracker* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primary_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primary_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x453c1f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_grip, addr 0x453c06c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method get_gripPressed, addr 0x453c07c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method get_primary, addr 0x453c08c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary();

  /// @brief Method get_trackpadPressed, addr 0x453c09c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed();

  /// @brief Method get_triggerPressed, addr 0x453c0ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_grip, addr 0x453c074, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_gripPressed, addr 0x453c084, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_primary, addr 0x453c094, size 0x8, virtual false, abstract: false, final false
  inline void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadPressed, addr 0x453c0a4, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_triggerPressed, addr 0x453c0b4, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandedViveTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandedViveTracker(HandedViveTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandedViveTracker(HandedViveTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6526 };

  /// @brief Field <grip>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadPressed_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____grip_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____gripPressed_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____primary_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____trackpadPressed_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____triggerPressed_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::HandedViveTracker, 0x1c8>, "Size mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::HandedViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::HandedViveTracker*, "Unity.XR.OpenVR", "HandedViveTracker");
