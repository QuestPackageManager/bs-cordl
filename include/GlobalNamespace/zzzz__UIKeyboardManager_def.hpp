#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIKeyboardManager)
namespace VRUIControls {
class VRInputModule;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
class ModalView;
}
namespace HMUI {
class UIKeyboard;
}
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboardManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboardManager);
// Type: ::UIKeyboardManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5467))
// CS Name: ::UIKeyboardManager*
class CORDL_TYPE UIKeyboardManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _uiKeyboard, offset 0x18, size 0x8
  __declspec(property(get = __get__uiKeyboard, put = __set__uiKeyboard))::HMUI::UIKeyboard* _uiKeyboard;

  /// @brief Field _keyboardModalView, offset 0x20, size 0x8
  __declspec(property(get = __get__keyboardModalView, put = __set__keyboardModalView))::HMUI::ModalView* _keyboardModalView;

  /// @brief Field _keyboardContainerTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__keyboardContainerTransform, put = __set__keyboardContainerTransform))::UnityEngine::RectTransform* _keyboardContainerTransform;

  /// @brief Field _parentContainerTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__parentContainerTransform, put = __set__parentContainerTransform))::UnityEngine::Transform* _parentContainerTransform;

  /// @brief Field _vrInputModule, offset 0x38, size 0x8
  __declspec(property(get = __get__vrInputModule, put = __set__vrInputModule))::VRUIControls::VRInputModule* _vrInputModule;

  /// @brief Field _selectedInput, offset 0x40, size 0x8
  __declspec(property(get = __get__selectedInput, put = __set__selectedInput))::HMUI::InputFieldView* _selectedInput;

  __declspec(property(get = get_keyboard))::HMUI::UIKeyboard* keyboard;

  constexpr ::HMUI::UIKeyboard*& __get__uiKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> const& __get__uiKeyboard() const;

  constexpr void __set__uiKeyboard(::HMUI::UIKeyboard* value);

  constexpr ::HMUI::ModalView*& __get__keyboardModalView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> const& __get__keyboardModalView() const;

  constexpr void __set__keyboardModalView(::HMUI::ModalView* value);

  constexpr ::UnityEngine::RectTransform*& __get__keyboardContainerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__keyboardContainerTransform() const;

  constexpr void __set__keyboardContainerTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::Transform*& __get__parentContainerTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__parentContainerTransform() const;

  constexpr void __set__parentContainerTransform(::UnityEngine::Transform* value);

  constexpr ::VRUIControls::VRInputModule*& __get__vrInputModule();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRInputModule*> const& __get__vrInputModule() const;

  constexpr void __set__vrInputModule(::VRUIControls::VRInputModule* value);

  constexpr ::HMUI::InputFieldView*& __get__selectedInput();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& __get__selectedInput() const;

  constexpr void __set__selectedInput(::HMUI::InputFieldView* value);

  /// @brief Method get_keyboard, addr 0x2281570, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::UIKeyboard* get_keyboard();

  /// @brief Method Start, addr 0x2281578, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnEnable, addr 0x2281604, size 0x8c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2281690, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x228171c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OpenKeyboardFor, addr 0x22817ec, size 0x200, virtual false, abstract: false, final false
  inline void OpenKeyboardFor(::HMUI::InputFieldView* input);

  /// @brief Method CloseKeyboard, addr 0x22819ec, size 0x98, virtual false, abstract: false, final false
  inline void CloseKeyboard();

  /// @brief Method TransferKeyboardTo, addr 0x2281a84, size 0x94, virtual false, abstract: false, final false
  inline void TransferKeyboardTo(::HMUI::InputFieldView* nextInput);

  /// @brief Method ShouldCloseKeyboard, addr 0x2281b18, size 0x58, virtual false, abstract: false, final false
  inline bool ShouldCloseKeyboard(::UnityEngine::GameObject* root);

  /// @brief Method ProcessMousePress, addr 0x2281b70, size 0x168, virtual false, abstract: false, final false
  inline void ProcessMousePress(::UnityEngine::GameObject* currentOverGo);

  /// @brief Method HandleKeyboardOkButton, addr 0x2281cd8, size 0x160, virtual false, abstract: false, final false
  inline void HandleKeyboardOkButton();

  static inline ::GlobalNamespace::UIKeyboardManager* New_ctor();

  /// @brief Method .ctor, addr 0x2281e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboardManager(UIKeyboardManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboardManager(UIKeyboardManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboardManager();

public:
  /// @brief Field _uiKeyboard, offset: 0x18, size: 0x8, def value: None
  ::HMUI::UIKeyboard* ____uiKeyboard;

  /// @brief Field _keyboardModalView, offset: 0x20, size: 0x8, def value: None
  ::HMUI::ModalView* ____keyboardModalView;

  /// @brief Field _keyboardContainerTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____keyboardContainerTransform;

  /// @brief Field _parentContainerTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____parentContainerTransform;

  /// @brief Field _vrInputModule, offset: 0x38, size: 0x8, def value: None
  ::VRUIControls::VRInputModule* ____vrInputModule;

  /// @brief Field _selectedInput, offset: 0x40, size: 0x8, def value: None
  ::HMUI::InputFieldView* ____selectedInput;

  /// @brief Field kKeyboardTopOffset offset 0xffffffff size 0x4
  static constexpr float_t kKeyboardTopOffset{ 5.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboardManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____uiKeyboard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____keyboardModalView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____keyboardContainerTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____parentContainerTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____vrInputModule) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____selectedInput) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIKeyboardManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboardManager*, "", "UIKeyboardManager");
