#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
CORDL_MODULE_EXPORT(KHRSimpleControllerProfile)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __KHRSimpleControllerProfile__KHRSimpleController;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class KHRSimpleControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __KHRSimpleControllerProfile__KHRSimpleController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController);
// Type: ::KHRSimpleController
// SizeInfo { instance_size: 464, native_size: -1, calculated_instance_size: 464, calculated_native_size: 464, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6412))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14454))
// CS Name: ::KHRSimpleControllerProfile::KHRSimpleController*
class CORDL_TYPE __KHRSimpleControllerProfile__KHRSimpleController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <select>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__select_k__BackingField, put = __set__select_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _select_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__menu_k__BackingField, put = __set__menu_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__devicePose_k__BackingField, put = __set__devicePose_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__pointer_k__BackingField, put = __set__pointer_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__devicePosition_k__BackingField, put = __set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__deviceRotation_k__BackingField,
                      put = __set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__pointerPosition_k__BackingField,
                      put = __set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__pointerRotation_k__BackingField,
                      put = __set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__haptic_k__BackingField, put = __set__haptic_k__BackingField))::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  __declspec(property(get = get_select, put = set_select))::UnityEngine::InputSystem::Controls::ButtonControl* select;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_devicePose, put = set_devicePose))::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_pointer, put = set_pointer))::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_haptic, put = set_haptic))::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__select_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__select_k__BackingField() const;

  constexpr void __set__select_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__menu_k__BackingField() const;

  constexpr void __set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__devicePose_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__devicePose_k__BackingField() const;

  constexpr void __set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__pointer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__pointer_k__BackingField() const;

  constexpr void __set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__isTracked_k__BackingField() const;

  constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__trackingState_k__BackingField() const;

  constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__devicePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__devicePosition_k__BackingField() const;

  constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__deviceRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__deviceRotation_k__BackingField() const;

  constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__pointerPosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__pointerPosition_k__BackingField() const;

  constexpr void __set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__pointerRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__pointerRotation_k__BackingField() const;

  constexpr void __set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& __get__haptic_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::HapticControl*> const& __get__haptic_k__BackingField() const;

  constexpr void __set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method get_select addr 0x2b0a21c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_select();

  /// @brief Method set_select addr 0x2b0a224 size 0x8 virtual false final false
  inline void set_select(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_menu addr 0x2b0a22c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method set_menu addr 0x2b0a234 size 0x8 virtual false final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_devicePose addr 0x2b0a23c size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method set_devicePose addr 0x2b0a244 size 0x8 virtual false final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_pointer addr 0x2b0a24c size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method set_pointer addr 0x2b0a254 size 0x8 virtual false final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_isTracked addr 0x2b0a25c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked addr 0x2b0a264 size 0x8 virtual false final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState addr 0x2b0a26c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState addr 0x2b0a274 size 0x8 virtual false final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_devicePosition addr 0x2b0a27c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition addr 0x2b0a284 size 0x8 virtual false final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation addr 0x2b0a28c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation addr 0x2b0a294 size 0x8 virtual false final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_pointerPosition addr 0x2b0a29c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method set_pointerPosition addr 0x2b0a2a4 size 0x8 virtual false final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerRotation addr 0x2b0a2ac size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method set_pointerRotation addr 0x2b0a2b4 size 0x8 virtual false final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_haptic addr 0x2b0a2bc size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method set_haptic addr 0x2b0a2c4 size 0x8 virtual false final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method FinishSetup addr 0x2b0a2cc size 0x288 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController* New_ctor();

  /// @brief Method .ctor addr 0x2b0a554 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__KHRSimpleControllerProfile__KHRSimpleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KHRSimpleControllerProfile__KHRSimpleController(__KHRSimpleControllerProfile__KHRSimpleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KHRSimpleControllerProfile__KHRSimpleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KHRSimpleControllerProfile__KHRSimpleController(__KHRSimpleControllerProfile__KHRSimpleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KHRSimpleControllerProfile__KHRSimpleController();

public:
  /// @brief Field <select>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____select_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, 0x1d0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____select_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____menu_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____devicePose_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____pointer_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____isTracked_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____trackingState_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____devicePosition_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____deviceRotation_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____pointerPosition_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____pointerRotation_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController, ____haptic_k__BackingField) == 0x1c8, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::KHRSimpleControllerProfile
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14455))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Interactions::KHRSimpleControllerProfile*
class CORDL_TYPE KHRSimpleControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using KHRSimpleController = ::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController;

  /// @brief Method RegisterDeviceLayout addr 0x2b09258 size 0x140 virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b09398 size 0xb8 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b09450 size 0xdc4 virtual true final false
  inline void RegisterActionMapsWithRuntime();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile* New_ctor();

  /// @brief Method .ctor addr 0x2b0a214 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KHRSimpleControllerProfile(KHRSimpleControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KHRSimpleControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KHRSimpleControllerProfile(KHRSimpleControllerProfile const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KHRSimpleControllerProfile();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.khrsimpleprofile" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/khr/simple_controller" };

  /// @brief Field select offset 0xffffffff size 0x8
  static constexpr ::ConstString select{ u"/input/select/click" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"KHR Simple Controller OpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::KHRSimpleControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "KHRSimpleControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::__KHRSimpleControllerProfile__KHRSimpleController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "KHRSimpleControllerProfile/KHRSimpleController");
