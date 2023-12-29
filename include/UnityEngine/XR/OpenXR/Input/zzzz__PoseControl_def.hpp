#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(PoseControl)
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Input {
struct Pose;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::PoseControl);
// Type: UnityEngine.XR.OpenXR.Input::PoseControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6302), inst: 3802 }), TypeDefinitionIndex(TypeDefinitionIndex(14437)),
// TypeDefinitionIndex(TypeDefinitionIndex(6302))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14438)) CS Name: ::UnityEngine.XR.OpenXR.Input::PoseControl*
class CORDL_TYPE PoseControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::XR::OpenXR::Input::Pose> {
public:
  // Declarations
  /// @brief Field <isTracked>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__position_k__BackingField, put = __set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __get__rotation_k__BackingField, put = __set__rotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _rotation_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __get__velocity_k__BackingField, put = __set__velocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _velocity_k__BackingField;

  /// @brief Field <angularVelocity>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __get__angularVelocity_k__BackingField,
                      put = __set__angularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector3Control* position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::InputSystem::Controls::QuaternionControl* rotation;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::InputSystem::Controls::Vector3Control* velocity;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* angularVelocity;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__isTracked_k__BackingField() const;

  constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__trackingState_k__BackingField() const;

  constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__position_k__BackingField() const;

  constexpr void __set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__rotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__rotation_k__BackingField() const;

  constexpr void __set__rotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__velocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__velocity_k__BackingField() const;

  constexpr void __set__velocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__angularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__angularVelocity_k__BackingField() const;

  constexpr void __set__angularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_isTracked addr 0x2b05684 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked addr 0x2b0568c size 0x8 virtual false final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState addr 0x2b05694 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState addr 0x2b0569c size 0x8 virtual false final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_position addr 0x2b056a4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_position();

  /// @brief Method set_position addr 0x2b056ac size 0x8 virtual false final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_rotation addr 0x2b056b4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rotation();

  /// @brief Method set_rotation addr 0x2b056bc size 0x8 virtual false final false
  inline void set_rotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_velocity addr 0x2b056c4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_velocity();

  /// @brief Method set_velocity addr 0x2b056cc size 0x8 virtual false final false
  inline void set_velocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_angularVelocity addr 0x2b056d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity();

  /// @brief Method set_angularVelocity addr 0x2b056dc size 0x8 virtual false final false
  inline void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  static inline ::UnityEngine::XR::OpenXR::Input::PoseControl* New_ctor();

  /// @brief Method .ctor addr 0x2b056e4 size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method FinishSetup addr 0x2b0572c size 0x194 virtual true final false
  inline void FinishSetup();

  /// @brief Method ReadUnprocessedValueFromState addr 0x2b058c0 size 0x174 virtual true final false
  inline ::UnityEngine::XR::OpenXR::Input::Pose ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState addr 0x2b05a34 size 0x124 virtual true final false
  inline void WriteValueIntoState(::UnityEngine::XR::OpenXR::Input::Pose value, ::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseControl(PoseControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseControl(PoseControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseControl();

public:
  /// @brief Field <isTracked>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rotation_k__BackingField;

  /// @brief Field <velocity>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____velocity_k__BackingField;

  /// @brief Field <angularVelocity>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____angularVelocity_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::PoseControl, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::PoseControl, ____isTracked_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::PoseControl, ____trackingState_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::PoseControl, ____position_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::PoseControl, ____rotation_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::PoseControl, ____velocity_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::PoseControl, ____angularVelocity_k__BackingField) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::PoseControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::PoseControl*, "UnityEngine.XR.OpenXR.Input", "PoseControl");
