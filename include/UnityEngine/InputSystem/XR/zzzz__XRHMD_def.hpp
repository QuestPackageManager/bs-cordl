#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRHMD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(XRHMD)
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRHMD;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRHMD);
// Dependencies UnityEngine.InputSystem.TrackedDevice
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XR.XRHMD
class CORDL_TYPE XRHMD : public ::UnityEngine::InputSystem::TrackedDevice {
public:
  // Declarations
  /// @brief Field <centerEyePosition>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyePosition_k__BackingField,
                      put = __cordl_internal_set__centerEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyePosition_k__BackingField;

  /// @brief Field <centerEyeRotation>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeRotation_k__BackingField,
                      put = __cordl_internal_set__centerEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _centerEyeRotation_k__BackingField;

  /// @brief Field <leftEyePosition>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyePosition_k__BackingField,
                      put = __cordl_internal_set__leftEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeRotation_k__BackingField,
                      put = __cordl_internal_set__leftEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyePosition_k__BackingField,
                      put = __cordl_internal_set__rightEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeRotation_k__BackingField,
                      put = __cordl_internal_set__rightEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField;

  __declspec(property(get = get_centerEyePosition, put = set_centerEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyePosition;

  __declspec(property(get = get_centerEyeRotation, put = set_centerEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* centerEyeRotation;

  __declspec(property(get = get_leftEyePosition, put = set_leftEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyePosition;

  __declspec(property(get = get_leftEyeRotation, put = set_leftEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* leftEyeRotation;

  __declspec(property(get = get_rightEyePosition, put = set_rightEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyePosition;

  __declspec(property(get = get_rightEyeRotation, put = set_rightEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* rightEyeRotation;

  /// @brief Method FinishSetup, addr 0x45e4870, size 0x170, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::XR::XRHMD* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__centerEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__centerEyeRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__leftEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__leftEyeRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__rightEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__rightEyeRotation_k__BackingField();

  constexpr void __cordl_internal_set__centerEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__leftEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__rightEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method .ctor, addr 0x45e49e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_centerEyePosition, addr 0x45e4850, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition();

  /// @brief Method get_centerEyeRotation, addr 0x45e4860, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation();

  /// @brief Method get_leftEyePosition, addr 0x45e4810, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition();

  /// @brief Method get_leftEyeRotation, addr 0x45e4820, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation();

  /// @brief Method get_rightEyePosition, addr 0x45e4830, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition();

  /// @brief Method get_rightEyeRotation, addr 0x45e4840, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation();

  /// @brief Method set_centerEyePosition, addr 0x45e4858, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_centerEyeRotation, addr 0x45e4868, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_leftEyePosition, addr 0x45e4818, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeRotation, addr 0x45e4828, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_rightEyePosition, addr 0x45e4838, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeRotation, addr 0x45e4848, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRHMD(XRHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRHMD(XRHMD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6732 };

  /// @brief Field <leftEyePosition>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____leftEyeRotation_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rightEyeRotation_k__BackingField;

  /// @brief Field <centerEyePosition>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyePosition_k__BackingField;

  /// @brief Field <centerEyeRotation>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____centerEyeRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::XRHMD, ____leftEyePosition_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRHMD, ____leftEyeRotation_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRHMD, ____rightEyePosition_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRHMD, ____rightEyeRotation_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRHMD, ____centerEyePosition_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRHMD, ____centerEyeRotation_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRHMD, 0x1c0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRHMD);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRHMD*, "UnityEngine.InputSystem.XR", "XRHMD");
