#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/BoneControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__Bone_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
CORDL_MODULE_EXPORT(BoneControl)
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class BoneControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::BoneControl);
// Type: UnityEngine.InputSystem.XR::BoneControl
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 344, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::BoneControl*
class CORDL_TYPE BoneControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Bone> {
public:
  // Declarations
  /// @brief Field <parentBoneIndex>k__BackingField, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__parentBoneIndex_k__BackingField,
                      put = __cordl_internal_set__parentBoneIndex_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _parentBoneIndex_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__position_k__BackingField,
                      put = __cordl_internal_set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField,
                      put = __cordl_internal_set__rotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField;

  __declspec(property(get = get_parentBoneIndex, put = set_parentBoneIndex))::UnityEngine::InputSystem::Controls::IntegerControl* parentBoneIndex;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector3Control* position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::InputSystem::Controls::QuaternionControl* rotation;

  /// @brief Method FinishSetup, addr 0x315af08, size 0x114, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XR::BoneControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x315b01c, size 0xf0, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x315b10c, size 0x84, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__parentBoneIndex_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __cordl_internal_get__parentBoneIndex_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__rotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr void __cordl_internal_set__parentBoneIndex_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method .ctor, addr 0x315b190, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_parentBoneIndex, addr 0x315aed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_parentBoneIndex();

  /// @brief Method get_position, addr 0x315aee8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_position();

  /// @brief Method get_rotation, addr 0x315aef8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation();

  /// @brief Method set_parentBoneIndex, addr 0x315aee0, size 0x8, virtual false, abstract: false, final false
  inline void set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_position, addr 0x315aef0, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rotation, addr 0x315af00, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoneControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoneControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoneControl(BoneControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoneControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoneControl(BoneControl const&) = delete;

  /// @brief Field <parentBoneIndex>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____parentBoneIndex_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::BoneControl, 0x158>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::BoneControl, ____parentBoneIndex_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::BoneControl, ____position_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::BoneControl, ____rotation_k__BackingField) == 0x150, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::BoneControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::BoneControl*, "UnityEngine.InputSystem.XR", "BoneControl");
