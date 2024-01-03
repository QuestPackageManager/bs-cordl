#pragma once
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
struct __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleInputHandler;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8060))
// CS Name: ::OVRVirtualKeyboardSampleControls::OVRVirtualKeyboardBackup
struct CORDL_TYPE __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x279f9bc, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  /// @brief Method RestoreTo, addr 0x279f49c, size 0xc8, virtual false, abstract: false, final false
  inline void RestoreTo(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  // Ctor Parameters [CppParam { name: "_textCommitField", ty: "::UnityEngine::UI::InputField*", modifiers: "", def_value: None }, CppParam { name: "_position", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "_rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "_scale", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "_rightControllerDirectTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name:
  // "_rightControllerRootTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "_leftControllerDirectTransform", ty: "::UnityEngine::Transform*", modifiers:
  // "", def_value: None }, CppParam { name: "_leftControllerRootTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "_controllerRayInteraction", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "_controllerDirectInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_handLeft", ty:
  // "::GlobalNamespace::OVRHand*", modifiers: "", def_value: None }, CppParam { name: "_handRight", ty: "::GlobalNamespace::OVRHand*", modifiers: "", def_value: None }, CppParam { name:
  // "_handRayInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_handDirectInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_controllerRaycaster", ty: "::UnityEngine::EventSystems::OVRPhysicsRaycaster*", modifiers: "", def_value: None }, CppParam { name: "_handRaycaster", ty:
  // "::UnityEngine::EventSystems::OVRPhysicsRaycaster*", modifiers: "", def_value: None }]
  constexpr __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup(::UnityEngine::UI::InputField* _textCommitField, ::UnityEngine::Vector3 _position, ::UnityEngine::Quaternion _rotation,
                                                                         ::UnityEngine::Vector3 _scale, ::UnityEngine::Transform* _rightControllerDirectTransform,
                                                                         ::UnityEngine::Transform* _rightControllerRootTransform, ::UnityEngine::Transform* _leftControllerDirectTransform,
                                                                         ::UnityEngine::Transform* _leftControllerRootTransform, bool _controllerRayInteraction, bool _controllerDirectInteraction,
                                                                         ::GlobalNamespace::OVRHand* _handLeft, ::GlobalNamespace::OVRHand* _handRight, bool _handRayInteraction,
                                                                         bool _handDirectInteraction, ::UnityEngine::EventSystems::OVRPhysicsRaycaster* _controllerRaycaster,
                                                                         ::UnityEngine::EventSystems::OVRPhysicsRaycaster* _handRaycaster) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup();

  /// @brief Field _textCommitField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UI::InputField* _textCommitField;

  /// @brief Field _position, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 _position;

  /// @brief Field _rotation, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion _rotation;

  /// @brief Field _scale, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 _scale;

  /// @brief Field _rightControllerDirectTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* _rightControllerDirectTransform;

  /// @brief Field _rightControllerRootTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* _rightControllerRootTransform;

  /// @brief Field _leftControllerDirectTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* _leftControllerDirectTransform;

  /// @brief Field _leftControllerRootTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* _leftControllerRootTransform;

  /// @brief Field _controllerRayInteraction, offset: 0x50, size: 0x1, def value: None
  bool _controllerRayInteraction;

  /// @brief Field _controllerDirectInteraction, offset: 0x51, size: 0x1, def value: None
  bool _controllerDirectInteraction;

  /// @brief Field _handLeft, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* _handLeft;

  /// @brief Field _handRight, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* _handRight;

  /// @brief Field _handRayInteraction, offset: 0x68, size: 0x1, def value: None
  bool _handRayInteraction;

  /// @brief Field _handDirectInteraction, offset: 0x69, size: 0x1, def value: None
  bool _handDirectInteraction;

  /// @brief Field _controllerRaycaster, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::EventSystems::OVRPhysicsRaycaster* _controllerRaycaster;

  /// @brief Field _handRaycaster, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::EventSystems::OVRPhysicsRaycaster* _handRaycaster;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8060)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8061))
// CS Name: ::OVRVirtualKeyboardSampleControls*
class CORDL_TYPE OVRVirtualKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OVRVirtualKeyboardBackup = ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup;

  /// @brief Field ShowButton, offset 0x18, size 0x8
  __declspec(property(get = __get_ShowButton, put = __set_ShowButton))::UnityEngine::UI::Button* ShowButton;

  /// @brief Field MoveButton, offset 0x20, size 0x8
  __declspec(property(get = __get_MoveButton, put = __set_MoveButton))::UnityEngine::UI::Button* MoveButton;

  /// @brief Field HideButton, offset 0x28, size 0x8
  __declspec(property(get = __get_HideButton, put = __set_HideButton))::UnityEngine::UI::Button* HideButton;

  /// @brief Field MoveNearButton, offset 0x30, size 0x8
  __declspec(property(get = __get_MoveNearButton, put = __set_MoveNearButton))::UnityEngine::UI::Button* MoveNearButton;

  /// @brief Field MoveFarButton, offset 0x38, size 0x8
  __declspec(property(get = __get_MoveFarButton, put = __set_MoveFarButton))::UnityEngine::UI::Button* MoveFarButton;

  /// @brief Field DestroyKeyboardButton, offset 0x40, size 0x8
  __declspec(property(get = __get_DestroyKeyboardButton, put = __set_DestroyKeyboardButton))::UnityEngine::UI::Button* DestroyKeyboardButton;

  /// @brief Field keyboard, offset 0x48, size 0x8
  __declspec(property(get = __get_keyboard, put = __set_keyboard))::GlobalNamespace::OVRVirtualKeyboard* keyboard;

  /// @brief Field inputHandler, offset 0x50, size 0x8
  __declspec(property(get = __get_inputHandler, put = __set_inputHandler))::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* inputHandler;

  /// @brief Field isMovingKeyboard_, offset 0x58, size 0x1
  __declspec(property(get = __get_isMovingKeyboard_, put = __set_isMovingKeyboard_)) bool isMovingKeyboard_;

  /// @brief Field isMovingKeyboardFinished_, offset 0x59, size 0x1
  __declspec(property(get = __get_isMovingKeyboardFinished_, put = __set_isMovingKeyboardFinished_)) bool isMovingKeyboardFinished_;

  /// @brief Field keyboardMoveDistance_, offset 0x5c, size 0x4
  __declspec(property(get = __get_keyboardMoveDistance_, put = __set_keyboardMoveDistance_)) float_t keyboardMoveDistance_;

  /// @brief Field keyboardScale_, offset 0x60, size 0x4
  __declspec(property(get = __get_keyboardScale_, put = __set_keyboardScale_)) float_t keyboardScale_;

  /// @brief Field keyboardBackup, offset 0x68, size 0x80
  __declspec(property(get = __get_keyboardBackup, put = __set_keyboardBackup))::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup keyboardBackup;

  constexpr ::UnityEngine::UI::Button*& __get_ShowButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get_ShowButton() const;

  constexpr void __set_ShowButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get_MoveButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get_MoveButton() const;

  constexpr void __set_MoveButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get_HideButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get_HideButton() const;

  constexpr void __set_HideButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get_MoveNearButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get_MoveNearButton() const;

  constexpr void __set_MoveNearButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get_MoveFarButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get_MoveFarButton() const;

  constexpr void __set_MoveFarButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get_DestroyKeyboardButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get_DestroyKeyboardButton() const;

  constexpr void __set_DestroyKeyboardButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::OVRVirtualKeyboard*& __get_keyboard();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> const& __get_keyboard() const;

  constexpr void __set_keyboard(::GlobalNamespace::OVRVirtualKeyboard* value);

  constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*& __get_inputHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*> const& __get_inputHandler() const;

  constexpr void __set_inputHandler(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* value);

  constexpr bool& __get_isMovingKeyboard_();

  constexpr bool const& __get_isMovingKeyboard_() const;

  constexpr void __set_isMovingKeyboard_(bool value);

  constexpr bool& __get_isMovingKeyboardFinished_();

  constexpr bool const& __get_isMovingKeyboardFinished_() const;

  constexpr void __set_isMovingKeyboardFinished_(bool value);

  constexpr float_t& __get_keyboardMoveDistance_();

  constexpr float_t const& __get_keyboardMoveDistance_() const;

  constexpr void __set_keyboardMoveDistance_(float_t value);

  constexpr float_t& __get_keyboardScale_();

  constexpr float_t const& __get_keyboardScale_() const;

  constexpr void __set_keyboardScale_(float_t value);

  constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup& __get_keyboardBackup();

  constexpr ::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup const& __get_keyboardBackup() const;

  constexpr void __set_keyboardBackup(::GlobalNamespace::__OVRVirtualKeyboardSampleControls__OVRVirtualKeyboardBackup value);

  /// @brief Method Start, addr 0x279efe0, size 0x1cc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x279f2b0, size 0x1ec, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ShowKeyboard, addr 0x279f1ac, size 0x104, virtual false, abstract: false, final false
  inline void ShowKeyboard();

  /// @brief Method MoveKeyboard, addr 0x279f6bc, size 0x12c, virtual false, abstract: false, final false
  inline void MoveKeyboard();

  /// @brief Method MoveKeyboardNear, addr 0x279f80c, size 0x48, virtual false, abstract: false, final false
  inline void MoveKeyboardNear();

  /// @brief Method MoveKeyboardFar, addr 0x279f854, size 0x48, virtual false, abstract: false, final false
  inline void MoveKeyboardFar();

  /// @brief Method HideKeyboard, addr 0x279f89c, size 0x3c, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method DestroyKeyboard, addr 0x279f8d8, size 0xe4, virtual false, abstract: false, final false
  inline void DestroyKeyboard();

  /// @brief Method OnHideKeyboard, addr 0x279fa98, size 0x4, virtual false, abstract: false, final false
  inline void OnHideKeyboard();

  /// @brief Method UpdateButtonInteractable, addr 0x279f564, size 0x158, virtual false, abstract: false, final false
  inline void UpdateButtonInteractable();

  /// @brief Method Update, addr 0x279fa9c, size 0x274, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::OVRVirtualKeyboardSampleControls* New_ctor();

  /// @brief Method .ctor, addr 0x27a0030, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardSampleControls(OVRVirtualKeyboardSampleControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardSampleControls(OVRVirtualKeyboardSampleControls const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardSampleControls();

public:
  /// @brief Field ShowButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ___ShowButton;

  /// @brief Field MoveButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ___MoveButton;

  /// @brief Field HideButton, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ___HideButton;

  /// @brief Field MoveNearButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ___MoveNearButton;

  /// @brief Field MoveFarButton, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ___MoveFarButton;

  /// @brief Field DestroyKeyboardButton, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ___DestroyKeyboardButton;

  /// @brief Field keyboard, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard* ___keyboard;

  /// @brief Field inputHandler, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* ___inputHandler;

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
