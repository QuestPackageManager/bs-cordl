#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardSampleControls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleControls_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleControls)
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleInputHandler;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleControls;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardSampleControls);
MARK_VAL_T(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup);
// Type: ::OVRVirtualKeyboardBackup
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup
struct CORDL_TYPE __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup {
public:
  // Declarations
  /// @brief Method RestoreTo, addr 0x2b7446c, size 0xc8, virtual false, abstract: false, final false
  inline void RestoreTo(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  /// @brief Method .ctor, addr 0x2b7498c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup();

  // Ctor Parameters [CppParam { name: "_textCommitField", ty: "::UnityW<::UnityEngine::UI::InputField>", modifiers: "", def_value: None }, CppParam { name: "_position", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "_rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_scale", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "_rightControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name:
  // "_rightControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "_leftControllerDirectTransform", ty:
  // "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "_leftControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None
  // }, CppParam { name: "_controllerRayInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_controllerDirectInteraction", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "_handLeft", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value: None }, CppParam { name: "_handRight", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers:
  // "", def_value: None }, CppParam { name: "_handRayInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_handDirectInteraction", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "_controllerRaycaster", ty: "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: None }, CppParam { name: "_handRaycaster", ty:
  // "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup(
      ::UnityW<::UnityEngine::UI::InputField> _textCommitField, ::UnityEngine::Vector3 _position, ::UnityEngine::Quaternion _rotation, ::UnityEngine::Vector3 _scale,
      ::UnityW<::UnityEngine::Transform> _rightControllerDirectTransform, ::UnityW<::UnityEngine::Transform> _rightControllerRootTransform,
      ::UnityW<::UnityEngine::Transform> _leftControllerDirectTransform, ::UnityW<::UnityEngine::Transform> _leftControllerRootTransform, bool _controllerRayInteraction,
      bool _controllerDirectInteraction, ::UnityW<::GlobalNamespace::OVRHand> _handLeft, ::UnityW<::GlobalNamespace::OVRHand> _handRight, bool _handRayInteraction, bool _handDirectInteraction,
      ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> _controllerRaycaster, ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> _handRaycaster) noexcept;

  /// @brief Field _textCommitField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> _textCommitField;

  /// @brief Field _position, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 _position;

  /// @brief Field _rotation, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion _rotation;

  /// @brief Field _scale, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 _scale;

  /// @brief Field _rightControllerDirectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _rightControllerDirectTransform;

  /// @brief Field _rightControllerRootTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _rightControllerRootTransform;

  /// @brief Field _leftControllerDirectTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _leftControllerDirectTransform;

  /// @brief Field _leftControllerRootTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> _leftControllerRootTransform;

  /// @brief Field _controllerRayInteraction, offset: 0x50, size: 0x1, def value: None
  bool _controllerRayInteraction;

  /// @brief Field _controllerDirectInteraction, offset: 0x51, size: 0x1, def value: None
  bool _controllerDirectInteraction;

  /// @brief Field _handLeft, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> _handLeft;

  /// @brief Field _handRight, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> _handRight;

  /// @brief Field _handRayInteraction, offset: 0x68, size: 0x1, def value: None
  bool _handRayInteraction;

  /// @brief Field _handDirectInteraction, offset: 0x69, size: 0x1, def value: None
  bool _handDirectInteraction;

  /// @brief Field _controllerRaycaster, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> _controllerRaycaster;

  /// @brief Field _handRaycaster, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> _handRaycaster;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _textCommitField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _scale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _rightControllerDirectTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _rightControllerRootTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _leftControllerDirectTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _leftControllerRootTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _controllerRayInteraction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _controllerDirectInteraction) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _handLeft) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _handRight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _handRayInteraction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _handDirectInteraction) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _controllerRaycaster) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, _handRaycaster) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRVirtualKeyboardSampleControls
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRVirtualKeyboardSampleControls*
class CORDL_TYPE OVRVirtualKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OVRVirtualKeyboardBackup = ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;

  /// @brief Field DestroyKeyboardButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_DestroyKeyboardButton, put = __cordl_internal_set_DestroyKeyboardButton))::UnityW<::UnityEngine::UI::Button> DestroyKeyboardButton;

  /// @brief Field HideButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_HideButton, put = __cordl_internal_set_HideButton))::UnityW<::UnityEngine::UI::Button> HideButton;

  /// @brief Field MoveButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_MoveButton, put = __cordl_internal_set_MoveButton))::UnityW<::UnityEngine::UI::Button> MoveButton;

  /// @brief Field MoveFarButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_MoveFarButton, put = __cordl_internal_set_MoveFarButton))::UnityW<::UnityEngine::UI::Button> MoveFarButton;

  /// @brief Field MoveNearButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_MoveNearButton, put = __cordl_internal_set_MoveNearButton))::UnityW<::UnityEngine::UI::Button> MoveNearButton;

  /// @brief Field ShowButton, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ShowButton, put = __cordl_internal_set_ShowButton))::UnityW<::UnityEngine::UI::Button> ShowButton;

  /// @brief Field inputHandler, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inputHandler, put = __cordl_internal_set_inputHandler))::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler> inputHandler;

  /// @brief Field isMovingKeyboardFinished_, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isMovingKeyboardFinished_, put = __cordl_internal_set_isMovingKeyboardFinished_)) bool isMovingKeyboardFinished_;

  /// @brief Field isMovingKeyboard_, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isMovingKeyboard_, put = __cordl_internal_set_isMovingKeyboard_)) bool isMovingKeyboard_;

  /// @brief Field keyboard, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboard, put = __cordl_internal_set_keyboard))::UnityW<::GlobalNamespace::OVRVirtualKeyboard> keyboard;

  /// @brief Field keyboardBackup, offset 0x68, size 0x80
  __declspec(property(get = __cordl_internal_get_keyboardBackup,
                      put = __cordl_internal_set_keyboardBackup))::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup keyboardBackup;

  /// @brief Field keyboardMoveDistance_, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardMoveDistance_, put = __cordl_internal_set_keyboardMoveDistance_)) float_t keyboardMoveDistance_;

  /// @brief Field keyboardScale_, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardScale_, put = __cordl_internal_set_keyboardScale_)) float_t keyboardScale_;

  /// @brief Method DestroyKeyboard, addr 0x2b748a8, size 0xe4, virtual false, abstract: false, final false
  inline void DestroyKeyboard();

  /// @brief Method HideKeyboard, addr 0x2b7486c, size 0x3c, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method MoveKeyboard, addr 0x2b7468c, size 0x12c, virtual false, abstract: false, final false
  inline void MoveKeyboard();

  /// @brief Method MoveKeyboardFar, addr 0x2b74824, size 0x48, virtual false, abstract: false, final false
  inline void MoveKeyboardFar();

  /// @brief Method MoveKeyboardNear, addr 0x2b747dc, size 0x48, virtual false, abstract: false, final false
  inline void MoveKeyboardNear();

  static inline ::GlobalNamespace::OVRVirtualKeyboardSampleControls* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b74280, size 0x1ec, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnHideKeyboard, addr 0x2b74a68, size 0x4, virtual false, abstract: false, final false
  inline void OnHideKeyboard();

  /// @brief Method ShowKeyboard, addr 0x2b7417c, size 0x104, virtual false, abstract: false, final false
  inline void ShowKeyboard();

  /// @brief Method Start, addr 0x2b73fb0, size 0x1cc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2b74a6c, size 0x274, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateButtonInteractable, addr 0x2b74534, size 0x158, virtual false, abstract: false, final false
  inline void UpdateButtonInteractable();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_DestroyKeyboardButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_DestroyKeyboardButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_HideButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_HideButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_MoveButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_MoveButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_MoveFarButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_MoveFarButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_MoveNearButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_MoveNearButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_ShowButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_ShowButton();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler> const& __cordl_internal_get_inputHandler() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler>& __cordl_internal_get_inputHandler();

  constexpr bool const& __cordl_internal_get_isMovingKeyboardFinished_() const;

  constexpr bool& __cordl_internal_get_isMovingKeyboardFinished_();

  constexpr bool const& __cordl_internal_get_isMovingKeyboard_() const;

  constexpr bool& __cordl_internal_get_isMovingKeyboard_();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get_keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get_keyboard();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup const& __cordl_internal_get_keyboardBackup() const;

  constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup& __cordl_internal_get_keyboardBackup();

  constexpr float_t const& __cordl_internal_get_keyboardMoveDistance_() const;

  constexpr float_t& __cordl_internal_get_keyboardMoveDistance_();

  constexpr float_t const& __cordl_internal_get_keyboardScale_() const;

  constexpr float_t& __cordl_internal_get_keyboardScale_();

  constexpr void __cordl_internal_set_DestroyKeyboardButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_HideButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_MoveButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_MoveFarButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_MoveNearButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_ShowButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_inputHandler(::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler> value);

  constexpr void __cordl_internal_set_isMovingKeyboardFinished_(bool value);

  constexpr void __cordl_internal_set_isMovingKeyboard_(bool value);

  constexpr void __cordl_internal_set_keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set_keyboardBackup(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup value);

  constexpr void __cordl_internal_set_keyboardMoveDistance_(float_t value);

  constexpr void __cordl_internal_set_keyboardScale_(float_t value);

  /// @brief Method .ctor, addr 0x2b75000, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardSampleControls();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardSampleControls(OVRVirtualKeyboardSampleControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardSampleControls(OVRVirtualKeyboardSampleControls const&) = delete;

  /// @brief Field ShowButton, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___ShowButton;

  /// @brief Field MoveButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___MoveButton;

  /// @brief Field HideButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___HideButton;

  /// @brief Field MoveNearButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___MoveNearButton;

  /// @brief Field MoveFarButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___MoveFarButton;

  /// @brief Field DestroyKeyboardButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ___DestroyKeyboardButton;

  /// @brief Field keyboard, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ___keyboard;

  /// @brief Field inputHandler, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler> ___inputHandler;

  /// @brief Field isMovingKeyboard_, offset: 0x58, size: 0x1, def value: None
  bool ___isMovingKeyboard_;

  /// @brief Field isMovingKeyboardFinished_, offset: 0x59, size: 0x1, def value: None
  bool ___isMovingKeyboardFinished_;

  /// @brief Field keyboardMoveDistance_, offset: 0x5c, size: 0x4, def value: None
  float_t ___keyboardMoveDistance_;

  /// @brief Field keyboardScale_, offset: 0x60, size: 0x4, def value: None
  float_t ___keyboardScale_;

  /// @brief Field keyboardBackup, offset: 0x68, size: 0x80, def value: None
  ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup ___keyboardBackup;

  /// @brief Field THUMBSTICK_DEADZONE offset 0xffffffff size 0x4
  static constexpr float_t THUMBSTICK_DEADZONE{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardSampleControls, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___ShowButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___MoveButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___HideButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___MoveNearButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___MoveFarButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___DestroyKeyboardButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___keyboard) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___inputHandler) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___isMovingKeyboard_) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___isMovingKeyboardFinished_) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___keyboardMoveDistance_) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___keyboardScale_) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboardSampleControls, ___keyboardBackup) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleControls*, "", "OVRVirtualKeyboardSampleControls");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup, "", "OVRVirtualKeyboardSampleControls/OVRVirtualKeyboardBackup");
