#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__Bone_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
CORDL_MODULE_EXPORT(BoneControl)
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class BoneControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::BoneControl);
// Type: UnityEngine.InputSystem.XR::BoneControl
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3892 }), TypeDefinitionIndex(TypeDefinitionIndex(6337)),
// TypeDefinitionIndex(TypeDefinitionIndex(6216))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6339)) CS Name: ::UnityEngine.InputSystem.XR::BoneControl*
class CORDL_TYPE BoneControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Bone> {
public:
  // Declarations
  /// @brief Field <parentBoneIndex>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__parentBoneIndex_k__BackingField,
                      put = __set__parentBoneIndex_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _parentBoneIndex_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__position_k__BackingField, put = __set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__rotation_k__BackingField, put = __set__rotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField;

  __declspec(property(get = get_parentBoneIndex, put = set_parentBoneIndex))::UnityEngine::InputSystem::Controls::IntegerControl* parentBoneIndex;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector3Control* position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::InputSystem::Controls::QuaternionControl* rotation;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__parentBoneIndex_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__parentBoneIndex_k__BackingField() const;

  constexpr void __set__parentBoneIndex_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__position_k__BackingField() const;

  constexpr void __set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__rotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__rotation_k__BackingField() const;

  constexpr void __set__rotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_parentBoneIndex addr 0x2ac8410 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_parentBoneIndex();

  /// @brief Method set_parentBoneIndex addr 0x2ac8418 size 0x8 virtual false final false
  inline void set_parentBoneIndex(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_position addr 0x2ac8420 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_position();

  /// @brief Method set_position addr 0x2ac8428 size 0x8 virtual false final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_rotation addr 0x2ac8430 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation();

  /// @brief Method set_rotation addr 0x2ac8438 size 0x8 virtual false final false
  inline void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method FinishSetup addr 0x2ac8440 size 0x100 virtual true final false
  inline void FinishSetup();

  /// @brief Method ReadUnprocessedValueFromState addr 0x2ac8540 size 0xb4 virtual true final false
  inline ::UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState addr 0x2ac85f4 size 0x84 virtual true final false
  inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone value, ::cordl_internals::Ptr<void> statePtr);

  static inline ::UnityEngine::InputSystem::XR::BoneControl* New_ctor();

  /// @brief Method .ctor addr 0x2ac8678 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BoneControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoneControl(BoneControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoneControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoneControl(BoneControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoneControl();

public:
  /// @brief Field <parentBoneIndex>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____parentBoneIndex_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::BoneControl, 0x108>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::BoneControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::BoneControl*, "UnityEngine.InputSystem.XR", "BoneControl");
