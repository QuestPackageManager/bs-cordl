#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__Eyes_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
CORDL_MODULE_EXPORT(EyesControl)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class EyesControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::EyesControl);
// Type: UnityEngine.InputSystem.XR::EyesControl
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::EyesControl*
class CORDL_TYPE EyesControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Eyes> {
public:
  // Declarations
  /// @brief Field <fixationPoint>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__fixationPoint_k__BackingField,
                      put = __cordl_internal_set__fixationPoint_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _fixationPoint_k__BackingField;

  /// @brief Field <leftEyeOpenAmount>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeOpenAmount_k__BackingField,
                      put = __cordl_internal_set__leftEyeOpenAmount_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _leftEyeOpenAmount_k__BackingField;

  /// @brief Field <leftEyePosition>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyePosition_k__BackingField,
                      put = __cordl_internal_set__leftEyePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeRotation_k__BackingField,
                      put = __cordl_internal_set__leftEyeRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField;

  /// @brief Field <rightEyeOpenAmount>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeOpenAmount_k__BackingField,
                      put = __cordl_internal_set__rightEyeOpenAmount_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _rightEyeOpenAmount_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyePosition_k__BackingField,
                      put = __cordl_internal_set__rightEyePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeRotation_k__BackingField,
                      put = __cordl_internal_set__rightEyeRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField;

  __declspec(property(get = get_fixationPoint, put = set_fixationPoint))::UnityEngine::InputSystem::Controls::Vector3Control* fixationPoint;

  __declspec(property(get = get_leftEyeOpenAmount, put = set_leftEyeOpenAmount))::UnityEngine::InputSystem::Controls::AxisControl* leftEyeOpenAmount;

  __declspec(property(get = get_leftEyePosition, put = set_leftEyePosition))::UnityEngine::InputSystem::Controls::Vector3Control* leftEyePosition;

  __declspec(property(get = get_leftEyeRotation, put = set_leftEyeRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* leftEyeRotation;

  __declspec(property(get = get_rightEyeOpenAmount, put = set_rightEyeOpenAmount))::UnityEngine::InputSystem::Controls::AxisControl* rightEyeOpenAmount;

  __declspec(property(get = get_rightEyePosition, put = set_rightEyePosition))::UnityEngine::InputSystem::Controls::Vector3Control* rightEyePosition;

  __declspec(property(get = get_rightEyeRotation, put = set_rightEyeRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* rightEyeRotation;

  /// @brief Method FinishSetup, addr 0x3138de0, size 0x1a8, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XR::EyesControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x3138f88, size 0x1b8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x3139140, size 0x114, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::Eyes value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__fixationPoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__fixationPoint_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__leftEyeOpenAmount_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__leftEyeOpenAmount_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__leftEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__leftEyeRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__leftEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__rightEyeOpenAmount_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__rightEyeOpenAmount_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__rightEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__rightEyeRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__rightEyeRotation_k__BackingField() const;

  constexpr void __cordl_internal_set__fixationPoint_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeOpenAmount_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__leftEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__rightEyeOpenAmount_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__rightEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method .ctor, addr 0x3139254, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_fixationPoint, addr 0x3138db0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_fixationPoint();

  /// @brief Method get_leftEyeOpenAmount, addr 0x3138dc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_leftEyeOpenAmount();

  /// @brief Method get_leftEyePosition, addr 0x3138d70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition();

  /// @brief Method get_leftEyeRotation, addr 0x3138d80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation();

  /// @brief Method get_rightEyeOpenAmount, addr 0x3138dd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_rightEyeOpenAmount();

  /// @brief Method get_rightEyePosition, addr 0x3138d90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition();

  /// @brief Method get_rightEyeRotation, addr 0x3138da0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation();

  /// @brief Method set_fixationPoint, addr 0x3138db8, size 0x8, virtual false, abstract: false, final false
  inline void set_fixationPoint(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeOpenAmount, addr 0x3138dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_leftEyePosition, addr 0x3138d78, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeRotation, addr 0x3138d88, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_rightEyeOpenAmount, addr 0x3138dd8, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeOpenAmount(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_rightEyePosition, addr 0x3138d98, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeRotation, addr 0x3138da8, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EyesControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EyesControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EyesControl(EyesControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EyesControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EyesControl(EyesControl const&) = delete;

  /// @brief Field <leftEyePosition>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____leftEyeRotation_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rightEyeRotation_k__BackingField;

  /// @brief Field <fixationPoint>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____fixationPoint_k__BackingField;

  /// @brief Field <leftEyeOpenAmount>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____leftEyeOpenAmount_k__BackingField;

  /// @brief Field <rightEyeOpenAmount>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____rightEyeOpenAmount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::EyesControl, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____leftEyePosition_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____leftEyeRotation_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____rightEyePosition_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____rightEyeRotation_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____fixationPoint_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____leftEyeOpenAmount_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::EyesControl, ____rightEyeOpenAmount_k__BackingField) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::EyesControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::EyesControl*, "UnityEngine.InputSystem.XR", "EyesControl");
