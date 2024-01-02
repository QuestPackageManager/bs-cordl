#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
CORDL_MODULE_EXPORT(TouchScreenTextEditorEventHandler)
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TouchScreenTextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
// Type: UnityEngine.UIElements::TouchScreenTextEditorEventHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7094))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7132))
// CS Name: ::UnityEngine.UIElements::TouchScreenTextEditorEventHandler*
class CORDL_TYPE TouchScreenTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
  // Declarations
  /// @brief Field m_TouchKeyboardPoller, offset 0x20, size 0x8
  __declspec(property(get = __get_m_TouchKeyboardPoller, put = __set_m_TouchKeyboardPoller))::UnityEngine::UIElements::IVisualElementScheduledItem* m_TouchKeyboardPoller;

  /// @brief Field m_LastPointerDownTarget, offset 0x28, size 0x8
  __declspec(property(get = __get_m_LastPointerDownTarget, put = __set_m_LastPointerDownTarget))::UnityEngine::UIElements::VisualElement* m_LastPointerDownTarget;

  /// @brief Field s_KeyboardOnScreen, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_KeyboardOnScreen, put = setStaticF_s_KeyboardOnScreen))::UnityEngine::TouchScreenKeyboard* s_KeyboardOnScreen;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __get_m_TouchKeyboardPoller();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __get_m_TouchKeyboardPoller() const;

  constexpr void __set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get_m_LastPointerDownTarget();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get_m_LastPointerDownTarget() const;

  constexpr void __set_m_LastPointerDownTarget(::UnityEngine::UIElements::VisualElement* value);

  static inline void setStaticF_s_KeyboardOnScreen(::UnityEngine::TouchScreenKeyboard* value);

  static inline ::UnityEngine::TouchScreenKeyboard* getStaticF_s_KeyboardOnScreen();

  static inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine,
                                                                                       ::UnityEngine::UIElements::ITextInputField* textInputField);

  /// @brief Method .ctor, addr 0x2e3ab1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine, ::UnityEngine::UIElements::ITextInputField* textInputField);

  /// @brief Method PollTouchScreenKeyboard, addr 0x2e3ab24, size 0x25c, virtual false, abstract: false, final false
  inline void PollTouchScreenKeyboard();

  /// @brief Method DoPollTouchScreenKeyboard, addr 0x2e3ad80, size 0x728, virtual false, abstract: false, final false
  inline void DoPollTouchScreenKeyboard();

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x2e3b4a8, size 0x550, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenTextEditorEventHandler();

public:
  /// @brief Field m_TouchKeyboardPoller, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_TouchKeyboardPoller;

  /// @brief Field m_LastPointerDownTarget, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_LastPointerDownTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_TouchKeyboardPoller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_LastPointerDownTarget) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*, "UnityEngine.UIElements", "TouchScreenTextEditorEventHandler");
