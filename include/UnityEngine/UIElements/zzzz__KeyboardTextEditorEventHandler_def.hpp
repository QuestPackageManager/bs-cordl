#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyboardTextEditorEventHandler)
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardTextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyboardTextEditorEventHandler);
// Type: UnityEngine.UIElements::KeyboardTextEditorEventHandler
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(7180))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7127))
// CS Name: ::UnityEngine.UIElements::KeyboardTextEditorEventHandler*
class CORDL_TYPE KeyboardTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
  // Declarations
  /// @brief Field m_Changed, offset 0x20, size 0x1
  __declspec(property(get = __get_m_Changed, put = __set_m_Changed)) bool m_Changed;

  /// @brief Field m_Dragged, offset 0x21, size 0x1
  __declspec(property(get = __get_m_Dragged, put = __set_m_Dragged)) bool m_Dragged;

  /// @brief Field m_DragToPosition, offset 0x22, size 0x1
  __declspec(property(get = __get_m_DragToPosition, put = __set_m_DragToPosition)) bool m_DragToPosition;

  /// @brief Field m_SelectAllOnMouseUp, offset 0x23, size 0x1
  __declspec(property(get = __get_m_SelectAllOnMouseUp, put = __set_m_SelectAllOnMouseUp)) bool m_SelectAllOnMouseUp;

  /// @brief Field m_PreDrawCursorText, offset 0x28, size 0x8
  __declspec(property(get = __get_m_PreDrawCursorText, put = __set_m_PreDrawCursorText))::StringW m_PreDrawCursorText;

  /// @brief Field m_IsClicking, offset 0x30, size 0x1
  __declspec(property(get = __get_m_IsClicking, put = __set_m_IsClicking)) bool m_IsClicking;

  /// @brief Field m_ClickStartPosition, offset 0x34, size 0x8
  __declspec(property(get = __get_m_ClickStartPosition, put = __set_m_ClickStartPosition))::UnityEngine::Vector2 m_ClickStartPosition;

  /// @brief Field m_ImguiEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_m_ImguiEvent, put = __set_m_ImguiEvent))::UnityEngine::Event* m_ImguiEvent;

  __declspec(property(get = get_isClicking, put = set_isClicking)) bool isClicking;

  constexpr bool& __get_m_Changed();

  constexpr bool const& __get_m_Changed() const;

  constexpr void __set_m_Changed(bool value);

  constexpr bool& __get_m_Dragged();

  constexpr bool const& __get_m_Dragged() const;

  constexpr void __set_m_Dragged(bool value);

  constexpr bool& __get_m_DragToPosition();

  constexpr bool const& __get_m_DragToPosition() const;

  constexpr void __set_m_DragToPosition(bool value);

  constexpr bool& __get_m_SelectAllOnMouseUp();

  constexpr bool const& __get_m_SelectAllOnMouseUp() const;

  constexpr void __set_m_SelectAllOnMouseUp(bool value);

  constexpr ::StringW& __get_m_PreDrawCursorText();

  constexpr ::StringW const& __get_m_PreDrawCursorText() const;

  constexpr void __set_m_PreDrawCursorText(::StringW value);

  constexpr bool& __get_m_IsClicking();

  constexpr bool const& __get_m_IsClicking() const;

  constexpr void __set_m_IsClicking(bool value);

  constexpr ::UnityEngine::Vector2& __get_m_ClickStartPosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_ClickStartPosition() const;

  constexpr void __set_m_ClickStartPosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Event*& __get_m_ImguiEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& __get_m_ImguiEvent() const;

  constexpr void __set_m_ImguiEvent(::UnityEngine::Event* value);

  /// @brief Method get_isClicking addr 0x2cb81f8 size 0x8 virtual false final false
  inline bool get_isClicking();

  /// @brief Method set_isClicking addr 0x2cb8200 size 0x34 virtual false final false
  inline void set_isClicking(bool value);

  static inline ::UnityEngine::UIElements::KeyboardTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine,
                                                                                    ::UnityEngine::UIElements::ITextInputField* textInputField);

  /// @brief Method .ctor addr 0x2cb8234 size 0x80 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine, ::UnityEngine::UIElements::ITextInputField* textInputField);

  /// @brief Method ExecuteDefaultActionAtTarget addr 0x2cb82b4 size 0x5bc virtual true final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method OnFocus addr 0x2cb8870 size 0x190 virtual false final false
  inline void OnFocus(::UnityEngine::UIElements::FocusEvent* _);

  /// @brief Method OnBlur addr 0x2cb8a00 size 0xc virtual false final false
  inline void OnBlur(::UnityEngine::UIElements::BlurEvent* _);

  /// @brief Method OnMouseDown addr 0x2cb8a0c size 0x3f4 virtual false final false
  inline void OnMouseDown(::UnityEngine::UIElements::MouseDownEvent* evt);

  /// @brief Method OnMouseUp addr 0x2cb8e00 size 0x168 virtual false final false
  inline void OnMouseUp(::UnityEngine::UIElements::MouseUpEvent* evt);

  /// @brief Method OnMouseMove addr 0x2cb8f68 size 0x148 virtual false final false
  inline void OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent* evt);

  /// @brief Method ProcessDragMove addr 0x2cba038 size 0x134 virtual false final false
  inline void ProcessDragMove(::UnityEngine::UIElements::MouseMoveEvent* evt);

  /// @brief Method MoveDistanceQualifiesForDrag addr 0x2cba014 size 0x24 virtual false final false
  inline bool MoveDistanceQualifiesForDrag(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 current);

  /// @brief Method OnKeyDown addr 0x2cb90b0 size 0x608 virtual false final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnValidateCommandEvent addr 0x2cb96b8 size 0x364 virtual false final false
  inline void OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt);

  /// @brief Method OnExecuteCommandEvent addr 0x2cb9a1c size 0x5f8 virtual false final false
  inline void OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt);

  /// @brief Method PreDrawCursor addr 0x2cba16c size 0x340 virtual false final false
  inline void PreDrawCursor(::StringW newText);

  /// @brief Method PostDrawCursor addr 0x2cba4ac size 0x24 virtual false final false
  inline void PostDrawCursor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardTextEditorEventHandler();

public:
  /// @brief Field m_Changed, offset: 0x20, size: 0x1, def value: None
  bool ___m_Changed;

  /// @brief Field m_Dragged, offset: 0x21, size: 0x1, def value: None
  bool ___m_Dragged;

  /// @brief Field m_DragToPosition, offset: 0x22, size: 0x1, def value: None
  bool ___m_DragToPosition;

  /// @brief Field m_SelectAllOnMouseUp, offset: 0x23, size: 0x1, def value: None
  bool ___m_SelectAllOnMouseUp;

  /// @brief Field m_PreDrawCursorText, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_PreDrawCursorText;

  /// @brief Field m_IsClicking, offset: 0x30, size: 0x1, def value: None
  bool ___m_IsClicking;

  /// @brief Field m_ClickStartPosition, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ClickStartPosition;

  /// @brief Field m_ImguiEvent, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ImguiEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardTextEditorEventHandler, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_Changed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_Dragged) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_DragToPosition) == 0x22, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_SelectAllOnMouseUp) == 0x23, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_PreDrawCursorText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_IsClicking) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_ClickStartPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_ImguiEvent) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardTextEditorEventHandler*, "UnityEngine.UIElements", "KeyboardTextEditorEventHandler");
