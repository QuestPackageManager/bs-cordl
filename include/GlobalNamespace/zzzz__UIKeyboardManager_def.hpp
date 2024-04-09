#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIKeyboardManager)
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class ModalView;
}
namespace HMUI {
class UIKeyboard;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace VRUIControls {
class VRInputModule;
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
// CS Name: ::UIKeyboardManager*
class CORDL_TYPE UIKeyboardManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _keyboardContainerTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboardContainerTransform,
                      put = __cordl_internal_set__keyboardContainerTransform))::UnityW<::UnityEngine::RectTransform> _keyboardContainerTransform;

  /// @brief Field _keyboardModalView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboardModalView, put = __cordl_internal_set__keyboardModalView))::UnityW<::HMUI::ModalView> _keyboardModalView;

  /// @brief Field _parentContainerTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__parentContainerTransform, put = __cordl_internal_set__parentContainerTransform))::UnityW<::UnityEngine::Transform> _parentContainerTransform;

  /// @brief Field _selectedInput, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedInput, put = __cordl_internal_set__selectedInput))::UnityW<::HMUI::InputFieldView> _selectedInput;

  /// @brief Field _uiKeyboard, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboard, put = __cordl_internal_set__uiKeyboard))::UnityW<::HMUI::UIKeyboard> _uiKeyboard;

  /// @brief Field _vrInputModule, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__vrInputModule, put = __cordl_internal_set__vrInputModule))::UnityW<::VRUIControls::VRInputModule> _vrInputModule;

  __declspec(property(get = get_keyboard))::UnityW<::HMUI::UIKeyboard> keyboard;

  /// @brief Method CloseKeyboard, addr 0x26386bc, size 0x98, virtual false, abstract: false, final false
  inline void CloseKeyboard();

  /// @brief Method HandleKeyboardOkButton, addr 0x26389a8, size 0x160, virtual false, abstract: false, final false
  inline void HandleKeyboardOkButton();

  static inline ::GlobalNamespace::UIKeyboardManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x26383ec, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2638360, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26382d4, size 0x8c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OpenKeyboardFor, addr 0x26384bc, size 0x200, virtual false, abstract: false, final false
  inline void OpenKeyboardFor(::HMUI::InputFieldView* input);

  /// @brief Method ProcessMousePress, addr 0x2638840, size 0x168, virtual false, abstract: false, final false
  inline void ProcessMousePress(::UnityEngine::GameObject* currentOverGo);

  /// @brief Method ShouldCloseKeyboard, addr 0x26387e8, size 0x58, virtual false, abstract: false, final false
  inline bool ShouldCloseKeyboard(::UnityEngine::GameObject* root);

  /// @brief Method Start, addr 0x2638248, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransferKeyboardTo, addr 0x2638754, size 0x94, virtual false, abstract: false, final false
  inline void TransferKeyboardTo(::HMUI::InputFieldView* nextInput);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__keyboardContainerTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__keyboardContainerTransform();

  constexpr ::UnityW<::HMUI::ModalView> const& __cordl_internal_get__keyboardModalView() const;

  constexpr ::UnityW<::HMUI::ModalView>& __cordl_internal_get__keyboardModalView();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__parentContainerTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__parentContainerTransform();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__selectedInput() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__selectedInput();

  constexpr ::UnityW<::HMUI::UIKeyboard> const& __cordl_internal_get__uiKeyboard() const;

  constexpr ::UnityW<::HMUI::UIKeyboard>& __cordl_internal_get__uiKeyboard();

  constexpr ::UnityW<::VRUIControls::VRInputModule> const& __cordl_internal_get__vrInputModule() const;

  constexpr ::UnityW<::VRUIControls::VRInputModule>& __cordl_internal_get__vrInputModule();

  constexpr void __cordl_internal_set__keyboardContainerTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__keyboardModalView(::UnityW<::HMUI::ModalView> value);

  constexpr void __cordl_internal_set__parentContainerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__selectedInput(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__uiKeyboard(::UnityW<::HMUI::UIKeyboard> value);

  constexpr void __cordl_internal_set__vrInputModule(::UnityW<::VRUIControls::VRInputModule> value);

  /// @brief Method .ctor, addr 0x2638b08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_keyboard, addr 0x2638240, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::UIKeyboard> get_keyboard();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIKeyboardManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIKeyboardManager(UIKeyboardManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIKeyboardManager(UIKeyboardManager const&) = delete;

  /// @brief Field _uiKeyboard, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> ____uiKeyboard;

  /// @brief Field _keyboardModalView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalView> ____keyboardModalView;

  /// @brief Field _keyboardContainerTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____keyboardContainerTransform;

  /// @brief Field _parentContainerTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____parentContainerTransform;

  /// @brief Field _vrInputModule, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRInputModule> ____vrInputModule;

  /// @brief Field _selectedInput, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____selectedInput;

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
