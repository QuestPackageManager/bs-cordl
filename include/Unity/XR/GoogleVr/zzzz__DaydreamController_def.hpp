#pragma once
// IWYU pragma private; include "Unity/XR/GoogleVr/DaydreamController.hpp"
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
// Dependencies UnityEngine.InputSystem.XR.XRController
namespace Unity::XR::GoogleVr {
// Is value type: false
// CS Name: Unity.XR.GoogleVr.DaydreamController
class CORDL_TYPE DaydreamController : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <app>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__app_k__BackingField, put = __cordl_internal_set__app_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _app_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceVelocity_k__BackingField;

  /// @brief Field <home>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__home_k__BackingField, put = __cordl_internal_set__home_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _home_k__BackingField;

  /// @brief Field <recentered>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__recentered_k__BackingField,
                      put = __cordl_internal_set__recentered_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _recentered_k__BackingField;

  /// @brief Field <recentering>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__recentering_k__BackingField,
                      put = __cordl_internal_set__recentering_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _recentering_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadClicked_k__BackingField,
                      put = __cordl_internal_set__touchpadClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadTouched_k__BackingField,
                      put = __cordl_internal_set__touchpadTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpad_k__BackingField,
                      put = __cordl_internal_set__touchpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <volumeDown>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeDown_k__BackingField,
                      put = __cordl_internal_set__volumeDown_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _volumeDown_k__BackingField;

  /// @brief Field <volumeUp>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeUp_k__BackingField,
                      put = __cordl_internal_set__volumeUp_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _volumeUp_k__BackingField;

  __declspec(property(get = get_app, put = set_app)) ::UnityEngine::InputSystem::Controls::ButtonControl* app;

  __declspec(property(get = get_deviceAcceleration, put = set_deviceAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAcceleration;

  __declspec(property(get = get_deviceVelocity, put = set_deviceVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceVelocity;

  __declspec(property(get = get_home, put = set_home)) ::UnityEngine::InputSystem::Controls::ButtonControl* home;

  __declspec(property(get = get_recentered, put = set_recentered)) ::UnityEngine::InputSystem::Controls::ButtonControl* recentered;

  __declspec(property(get = get_recentering, put = set_recentering)) ::UnityEngine::InputSystem::Controls::ButtonControl* recentering;

  __declspec(property(get = get_touchpad, put = set_touchpad)) ::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_touchpadClicked, put = set_touchpadClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClicked;

  __declspec(property(get = get_touchpadTouched, put = set_touchpadTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouched;

  __declspec(property(get = get_volumeDown, put = set_volumeDown)) ::UnityEngine::InputSystem::Controls::ButtonControl* volumeDown;

  __declspec(property(get = get_volumeUp, put = set_volumeUp)) ::UnityEngine::InputSystem::Controls::ButtonControl* volumeUp;

  /// @brief Method FinishSetup, addr 0x453c5cc, size 0x24c, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::GoogleVr::DaydreamController* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__app_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__app_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__home_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__home_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__recentered_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__recentered_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__recentering_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__recentering_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__touchpadClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadClicked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__touchpadTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__touchpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__touchpad_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__volumeDown_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__volumeDown_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__volumeUp_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__volumeUp_k__BackingField();

  constexpr void __cordl_internal_set__app_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__home_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__recentered_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__recentering_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__volumeDown_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__volumeUp_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x453c818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_app, addr 0x453c56c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_app();

  /// @brief Method get_deviceAcceleration, addr 0x453c5bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration();

  /// @brief Method get_deviceVelocity, addr 0x453c5ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceVelocity();

  /// @brief Method get_home, addr 0x453c57c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_home();

  /// @brief Method get_recentered, addr 0x453c53c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_recentered();

  /// @brief Method get_recentering, addr 0x453c55c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_recentering();

  /// @brief Method get_touchpad, addr 0x453c51c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method get_touchpadClicked, addr 0x453c58c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked();

  /// @brief Method get_touchpadTouched, addr 0x453c59c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched();

  /// @brief Method get_volumeDown, addr 0x453c54c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeDown();

  /// @brief Method get_volumeUp, addr 0x453c52c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_volumeUp();

  /// @brief Method set_app, addr 0x453c574, size 0x8, virtual false, abstract: false, final false
  inline void set_app(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_deviceAcceleration, addr 0x453c5c4, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceVelocity, addr 0x453c5b4, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_home, addr 0x453c584, size 0x8, virtual false, abstract: false, final false
  inline void set_home(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_recentered, addr 0x453c544, size 0x8, virtual false, abstract: false, final false
  inline void set_recentered(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_recentering, addr 0x453c564, size 0x8, virtual false, abstract: false, final false
  inline void set_recentering(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpad, addr 0x453c524, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_touchpadClicked, addr 0x453c594, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpadTouched, addr 0x453c5a4, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_volumeDown, addr 0x453c554, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeDown(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_volumeUp, addr 0x453c534, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeUp(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DaydreamController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DaydreamController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DaydreamController(DaydreamController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DaydreamController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DaydreamController(DaydreamController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6529 };

  /// @brief Field <touchpad>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  /// @brief Field <volumeUp>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____volumeUp_k__BackingField;

  /// @brief Field <recentered>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____recentered_k__BackingField;

  /// @brief Field <volumeDown>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____volumeDown_k__BackingField;

  /// @brief Field <recentering>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____recentering_k__BackingField;

  /// @brief Field <app>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____app_k__BackingField;

  /// @brief Field <home>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____home_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadTouched_k__BackingField;

  /// @brief Field <deviceVelocity>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAcceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____touchpad_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____volumeUp_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____recentered_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____volumeDown_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____recentering_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____app_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____home_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____touchpadClicked_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____touchpadTouched_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____deviceVelocity_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::GoogleVr::DaydreamController, ____deviceAcceleration_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::GoogleVr::DaydreamController, 0x1e8>, "Size mismatch!");

} // namespace Unity::XR::GoogleVr
NEED_NO_BOX(::Unity::XR::GoogleVr::DaydreamController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::GoogleVr::DaydreamController*, "Unity.XR.GoogleVr", "DaydreamController");
