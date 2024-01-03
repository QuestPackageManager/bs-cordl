#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
CORDL_MODULE_EXPORT(DaydreamController)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::GoogleVr {
class DaydreamController;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::GoogleVr::DaydreamController);
// Type: Unity.XR.GoogleVr::DaydreamController
// SizeInfo { instance_size: 464, native_size: -1, calculated_instance_size: 464, calculated_native_size: 464, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::GoogleVr {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6123))
// CS Name: ::Unity.XR.GoogleVr::DaydreamController*
class CORDL_TYPE DaydreamController : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <touchpad>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__touchpad_k__BackingField, put = __set__touchpad_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <volumeUp>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__volumeUp_k__BackingField, put = __set__volumeUp_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _volumeUp_k__BackingField;

  /// @brief Field <recentered>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__recentered_k__BackingField, put = __set__recentered_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _recentered_k__BackingField;

  /// @brief Field <volumeDown>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__volumeDown_k__BackingField, put = __set__volumeDown_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _volumeDown_k__BackingField;

  /// @brief Field <recentering>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__recentering_k__BackingField, put = __set__recentering_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _recentering_k__BackingField;

  /// @brief Field <app>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__app_k__BackingField, put = __set__app_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _app_k__BackingField;

  /// @brief Field <home>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__home_k__BackingField, put = __set__home_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _home_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__touchpadClicked_k__BackingField, put = __set__touchpadClicked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__touchpadTouched_k__BackingField, put = __set__touchpadTouched_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__deviceVelocity_k__BackingField, put = __set__deviceVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__deviceAcceleration_k__BackingField,
                      put = __set__deviceAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField;

  __declspec(property(get = get_touchpad, put = set_touchpad))::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_volumeUp, put = set_volumeUp))::UnityEngine::InputSystem::Controls::ButtonControl* volumeUp;

  __declspec(property(get = get_recentered, put = set_recentered))::UnityEngine::InputSystem::Controls::ButtonControl* recentered;

  __declspec(property(get = get_volumeDown, put = set_volumeDown))::UnityEngine::InputSystem::Controls::ButtonControl* volumeDown;

  __declspec(property(get = get_recentering, put = set_recentering))::UnityEngine::InputSystem::Controls::ButtonControl* recentering;

  __declspec(property(get = get_app, put = set_app))::UnityEngine::InputSystem::Controls::ButtonControl* app;

  __declspec(property(get = get_home, put = set_home))::UnityEngine::InputSystem::Controls::ButtonControl* home;

  __declspec(property(get = get_touchpadClicked, put = set_touchpadClicked))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClicked;

  __declspec(property(get = get_touchpadTouched, put = set_touchpadTouched))::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouched;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_deviceAcceleration, put = set_deviceAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAcceleration;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__touchpad_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__touchpad_k__BackingField() const;

  constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__volumeUp_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__volumeUp_k__BackingField() const;

  constexpr void __set__volumeUp_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__recentered_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__recentered_k__BackingField() const;

  constexpr void __set__recentered_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__volumeDown_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__volumeDown_k__BackingField() const;

  constexpr void __set__volumeDown_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__recentering_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__recentering_k__BackingField() const;

  constexpr void __set__recentering_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__app_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__app_k__BackingField() const;

  constexpr void __set__app_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__home_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__home_k__BackingField() const;

  constexpr void __set__home_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__touchpadClicked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__touchpadClicked_k__BackingField() const;

  constexpr void __set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__touchpadTouched_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__touchpadTouched_k__BackingField() const;

  constexpr void __set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceVelocity_k__BackingField() const;

  constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAcceleration_k__BackingField() const;

  constexpr void __set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_touchpad, addr 0x2a34b40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method set_touchpad, addr 0x2a34b48, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_volumeUp, addr 0x2a34b50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeUp();

  /// @brief Method set_volumeUp, addr 0x2a34b58, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeUp(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_recentered, addr 0x2a34b60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_recentered();

  /// @brief Method set_recentered, addr 0x2a34b68, size 0x8, virtual false, abstract: false, final false
  inline void set_recentered(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_volumeDown, addr 0x2a34b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeDown();

  /// @brief Method set_volumeDown, addr 0x2a34b78, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeDown(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_recentering, addr 0x2a34b80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_recentering();

  /// @brief Method set_recentering, addr 0x2a34b88, size 0x8, virtual false, abstract: false, final false
  inline void set_recentering(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_app, addr 0x2a34b90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_app();

  /// @brief Method set_app, addr 0x2a34b98, size 0x8, virtual false, abstract: false, final false
  inline void set_app(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_home, addr 0x2a34ba0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_home();

  /// @brief Method set_home, addr 0x2a34ba8, size 0x8, virtual false, abstract: false, final false
  inline void set_home(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadClicked, addr 0x2a34bb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked();

  /// @brief Method set_touchpadClicked, addr 0x2a34bb8, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_touchpadTouched, addr 0x2a34bc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched();

  /// @brief Method set_touchpadTouched, addr 0x2a34bc8, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_deviceVelocity, addr 0x2a34bd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method set_deviceVelocity, addr 0x2a34bd8, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAcceleration, addr 0x2a34be0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration();

  /// @brief Method set_deviceAcceleration, addr 0x2a34be8, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method FinishSetup, addr 0x2a34bf0, size 0x24c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::GoogleVr::DaydreamController* New_ctor();

  /// @brief Method .ctor, addr 0x2a34e3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DaydreamController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DaydreamController(DaydreamController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DaydreamController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DaydreamController(DaydreamController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DaydreamController();

public:
  /// @brief Field <touchpad>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  /// @brief Field <volumeUp>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____volumeUp_k__BackingField;

  /// @brief Field <recentered>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____recentered_k__BackingField;

  /// @brief Field <volumeDown>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____volumeDown_k__BackingField;

  /// @brief Field <recentering>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____recentering_k__BackingField;

  /// @brief Field <app>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____app_k__BackingField;

  /// @brief Field <home>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____home_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadTouched_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAcceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::GoogleVr::DaydreamController, 0x1d0>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____touchpad_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____volumeUp_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____recentered_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____volumeDown_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____recentering_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____app_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____home_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____touchpadClicked_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____touchpadTouched_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____deviceVelocity_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____deviceAcceleration_k__BackingField) == 0x1c8, "Offset mismatch!");

} // namespace Unity::XR::GoogleVr
NEED_NO_BOX(::Unity::XR::GoogleVr::DaydreamController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::GoogleVr::DaydreamController*, "Unity.XR.GoogleVr", "DaydreamController");
