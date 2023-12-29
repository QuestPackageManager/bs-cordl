#pragma once
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
// Type: Unity.XR.OpenVR::HandedViveTracker
// SizeInfo { instance_size: 432, native_size: -1, calculated_instance_size: 432, calculated_native_size: 432, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6205))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6206))
// CS Name: ::Unity.XR.OpenVR::HandedViveTracker*
class CORDL_TYPE HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker {
public:
  // Declarations
  /// @brief Field <grip>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__grip_k__BackingField, put = __set__grip_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__gripPressed_k__BackingField, put = __set__gripPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__primary_k__BackingField, put = __set__primary_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__trackpadPressed_k__BackingField, put = __set__trackpadPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadPressed_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__triggerPressed_k__BackingField, put = __set__triggerPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  __declspec(property(get = get_grip, put = set_grip))::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed))::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_primary, put = set_primary))::UnityEngine::InputSystem::Controls::ButtonControl* primary;

  __declspec(property(get = get_trackpadPressed, put = set_trackpadPressed))::UnityEngine::InputSystem::Controls::ButtonControl* trackpadPressed;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed))::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__grip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__grip_k__BackingField() const;

  constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__gripPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__gripPressed_k__BackingField() const;

  constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__primary_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__primary_k__BackingField() const;

  constexpr void __set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__trackpadPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__trackpadPressed_k__BackingField() const;

  constexpr void __set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__triggerPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__triggerPressed_k__BackingField() const;

  constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_grip addr 0x28b5948 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method set_grip addr 0x28b5950 size 0x8 virtual false final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_gripPressed addr 0x28b5958 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method set_gripPressed addr 0x28b5960 size 0x8 virtual false final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_primary addr 0x28b5968 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primary();

  /// @brief Method set_primary addr 0x28b5970 size 0x8 virtual false final false
  inline void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackpadPressed addr 0x28b5978 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadPressed();

  /// @brief Method set_trackpadPressed addr 0x28b5980 size 0x8 virtual false final false
  inline void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_triggerPressed addr 0x28b5988 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_triggerPressed addr 0x28b5990 size 0x8 virtual false final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method FinishSetup addr 0x28b5998 size 0x138 virtual true final false
  inline void FinishSetup();

  static inline ::Unity::XR::OpenVR::HandedViveTracker* New_ctor();

  /// @brief Method .ctor addr 0x28b5ad0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandedViveTracker(HandedViveTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandedViveTracker(HandedViveTracker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandedViveTracker();

public:
  /// @brief Field <grip>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <primary>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primary_k__BackingField;

  /// @brief Field <trackpadPressed>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadPressed_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::HandedViveTracker, 0x1b0>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____grip_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____gripPressed_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____primary_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____trackpadPressed_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::OpenVR::HandedViveTracker, ____triggerPressed_k__BackingField) == 0x1a8, "Offset mismatch!");

} // namespace Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::HandedViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::HandedViveTracker*, "Unity.XR.OpenVR", "HandedViveTracker");
