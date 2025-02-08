#pragma once
// IWYU pragma private; include "GlobalNamespace/UIKeyboardManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIKeyboardManager)
namespace GlobalNamespace {
class IVRInputModule;
}
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
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboardManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UIKeyboardManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UIKeyboardManager
class CORDL_TYPE UIKeyboardManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _keyboardContainerTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboardContainerTransform, put = __cordl_internal_set__keyboardContainerTransform)) ::UnityW<::UnityEngine::RectTransform>
      _keyboardContainerTransform;

  /// @brief Field _keyboardModalView, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboardModalView, put = __cordl_internal_set__keyboardModalView)) ::UnityW<::HMUI::ModalView> _keyboardModalView;

  /// @brief Field _parentContainerTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parentContainerTransform, put = __cordl_internal_set__parentContainerTransform)) ::UnityW<::UnityEngine::Transform> _parentContainerTransform;

  /// @brief Field _selectedInput, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedInput, put = __cordl_internal_set__selectedInput)) ::UnityW<::HMUI::InputFieldView> _selectedInput;

  /// @brief Field _uiKeyboard, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboard, put = __cordl_internal_set__uiKeyboard)) ::UnityW<::HMUI::UIKeyboard> _uiKeyboard;

  /// @brief Field _vrInputModule, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__vrInputModule, put = __cordl_internal_set__vrInputModule)) ::GlobalNamespace::IVRInputModule* _vrInputModule;

  __declspec(property(get = get_keyboard)) ::UnityW<::HMUI::UIKeyboard> keyboard;

  /// @brief Method CloseKeyboard, addr 0x3c0626c, size 0x9c, virtual false, abstract: false, final false
  inline void CloseKeyboard();

  /// @brief Method HandleKeyboardOkButton, addr 0x3c0655c, size 0x160, virtual false, abstract: false, final false
  inline void HandleKeyboardOkButton();

  static inline ::GlobalNamespace::UIKeyboardManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c05fa4, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3c05f14, size 0x90, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3c05e84, size 0x90, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OpenKeyboardFor, addr 0x3c060a4, size 0x1c8, virtual false, abstract: false, final false
  inline void OpenKeyboardFor(::HMUI::InputFieldView* input);

  /// @brief Method ProcessMousePress, addr 0x3c063f4, size 0x168, virtual false, abstract: false, final false
  inline void ProcessMousePress(::UnityEngine::GameObject* currentOverGo);

  /// @brief Method ShouldCloseKeyboard, addr 0x3c0639c, size 0x58, virtual false, abstract: false, final false
  inline bool ShouldCloseKeyboard(::UnityEngine::GameObject* root);

  /// @brief Method Start, addr 0x3c05d94, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TransferKeyboardTo, addr 0x3c06308, size 0x94, virtual false, abstract: false, final false
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

  constexpr ::GlobalNamespace::IVRInputModule* const& __cordl_internal_get__vrInputModule() const;

  constexpr ::GlobalNamespace::IVRInputModule*& __cordl_internal_get__vrInputModule();

  constexpr void __cordl_internal_set__keyboardContainerTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__keyboardModalView(::UnityW<::HMUI::ModalView> value);

  constexpr void __cordl_internal_set__parentContainerTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__selectedInput(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__uiKeyboard(::UnityW<::HMUI::UIKeyboard> value);

  constexpr void __cordl_internal_set__vrInputModule(::GlobalNamespace::IVRInputModule* value);

  /// @brief Method .ctor, addr 0x3c066bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_keyboard, addr 0x3c05d8c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4774 };

  /// @brief Field kKeyboardTopOffset offset 0xffffffff size 0x4
  static constexpr float_t kKeyboardTopOffset{ static_cast<float_t>(5.0f) };

  /// @brief Field _uiKeyboard, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> ____uiKeyboard;

  /// @brief Field _keyboardModalView, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalView> ____keyboardModalView;

  /// @brief Field _keyboardContainerTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____keyboardContainerTransform;

  /// @brief Field _parentContainerTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____parentContainerTransform;

  /// @brief Field _vrInputModule, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IVRInputModule* ____vrInputModule;

  /// @brief Field _selectedInput, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____selectedInput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____uiKeyboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____keyboardModalView) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____keyboardContainerTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____parentContainerTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____vrInputModule) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UIKeyboardManager, ____selectedInput) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UIKeyboardManager, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UIKeyboardManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UIKeyboardManager*, "", "UIKeyboardManager");
