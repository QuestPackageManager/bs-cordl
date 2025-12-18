#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/KHRSimpleControllerProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KHRSimpleControllerProfile)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class KHRSimpleControllerProfile_KHRSimpleController;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class KHRSimpleControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class KHRSimpleControllerProfile_KHRSimpleController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController);
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.KHRSimpleControllerProfile/KHRSimpleController
class CORDL_TYPE KHRSimpleControllerProfile_KHRSimpleController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <devicePose>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePose_k__BackingField,
                      put = __cordl_internal_set__devicePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__haptic_k__BackingField, put = __cordl_internal_set__haptic_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPosition_k__BackingField,
                      put = __cordl_internal_set__pointerPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerRotation_k__BackingField,
                      put = __cordl_internal_set__pointerRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__pointer_k__BackingField,
                      put = __cordl_internal_set__pointer_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <select>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__select_k__BackingField,
                      put = __cordl_internal_set__select_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _select_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  __declspec(property(get = get_devicePose, put = set_devicePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_haptic, put = set_haptic)) ::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_menu, put = set_menu)) ::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_pointer, put = set_pointer)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_select, put = set_select)) ::UnityEngine::InputSystem::Controls::ButtonControl* select;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  /// @brief Method FinishSetup, addr 0x6837cb8, size 0x2ac, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController* New_ctor();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__devicePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__devicePose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& __cordl_internal_get__haptic_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& __cordl_internal_get__haptic_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pointerPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pointerPosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pointerRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pointerRotation_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pointer_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pointer_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__select_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__select_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr void __cordl_internal_set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__select_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method .ctor, addr 0x6837f64, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePose, addr 0x6837c28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method get_devicePosition, addr 0x6837c68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x6837c78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_haptic, addr 0x6837ca8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method get_isTracked, addr 0x6837c48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_menu, addr 0x6837c18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_pointer, addr 0x6837c38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method get_pointerPosition, addr 0x6837c88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method get_pointerRotation, addr 0x6837c98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method get_select, addr 0x6837c08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_select();

  /// @brief Method get_trackingState, addr 0x6837c58, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_devicePose, addr 0x6837c30, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_devicePosition, addr 0x6837c70, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x6837c80, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_haptic, addr 0x6837cb0, size 0x8, virtual false, abstract: false, final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method set_isTracked, addr 0x6837c50, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_menu, addr 0x6837c20, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointer, addr 0x6837c40, size 0x8, virtual false, abstract: false, final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pointerPosition, addr 0x6837c90, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pointerRotation, addr 0x6837ca0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_select, addr 0x6837c10, size 0x8, virtual false, abstract: false, final false
  inline void set_select(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackingState, addr 0x6837c60, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KHRSimpleControllerProfile_KHRSimpleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile_KHRSimpleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KHRSimpleControllerProfile_KHRSimpleController(KHRSimpleControllerProfile_KHRSimpleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile_KHRSimpleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KHRSimpleControllerProfile_KHRSimpleController(KHRSimpleControllerProfile_KHRSimpleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18547 };

  /// @brief Field <select>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____select_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____select_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____menu_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____devicePose_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____pointer_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____isTracked_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____trackingState_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____devicePosition_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____deviceRotation_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____pointerPosition_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____pointerRotation_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, ____haptic_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController, 0x200>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.KHRSimpleControllerProfile
class CORDL_TYPE KHRSimpleControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using KHRSimpleController = ::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController;

  /// @brief Method GetDeviceLayoutName, addr 0x6836e58, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile* New_ctor();

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x6836e9c, size 0xd10, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6836c60, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6836da8, size 0xb0, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x6837bac, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KHRSimpleControllerProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KHRSimpleControllerProfile(KHRSimpleControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KHRSimpleControllerProfile(KHRSimpleControllerProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18548 };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.khrsimpleprofile" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"KHR Simple Controller OpenXR" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/khr/simple_controller" };

  /// @brief Field select offset 0xffffffff size 0x8
  static constexpr ::ConstString select{ u"/input/select/click" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "KHRSimpleControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile_KHRSimpleController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "KHRSimpleControllerProfile/KHRSimpleController");
