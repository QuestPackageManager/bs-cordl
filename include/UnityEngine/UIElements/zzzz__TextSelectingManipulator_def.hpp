#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextSelectingManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectingManipulator)
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class TextSelectingUtilities;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextSelectingManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextSelectingManipulator);
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextSelectingManipulator
class CORDL_TYPE TextSelectingManipulator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  __declspec(property(get = get_isClicking, put = set_isClicking)) bool isClicking;

  /// @brief Field m_ClickStartPosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClickStartPosition, put = __cordl_internal_set_m_ClickStartPosition)) ::UnityEngine::Vector2 m_ClickStartPosition;

  /// @brief Field m_ConsecutiveMouseDownCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConsecutiveMouseDownCount, put = __cordl_internal_set_m_ConsecutiveMouseDownCount)) int32_t m_ConsecutiveMouseDownCount;

  /// @brief Field m_Dragged, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Dragged, put = __cordl_internal_set_m_Dragged)) bool m_Dragged;

  /// @brief Field m_ImguiEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImguiEvent, put = __cordl_internal_set_m_ImguiEvent)) ::UnityEngine::Event* m_ImguiEvent;

  /// @brief Field m_IsClicking, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsClicking, put = __cordl_internal_set_m_IsClicking)) bool m_IsClicking;

  /// @brief Field m_LastMouseDownTimeStamp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMouseDownTimeStamp, put = __cordl_internal_set_m_LastMouseDownTimeStamp)) int64_t m_LastMouseDownTimeStamp;

  /// @brief Field m_SelectingUtilities, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectingUtilities, put = __cordl_internal_set_m_SelectingUtilities)) ::UnityEngine::TextSelectingUtilities* m_SelectingUtilities;

  /// @brief Field m_TextElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Field selectAllOnMouseUp, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_selectAllOnMouseUp, put = __cordl_internal_set_selectAllOnMouseUp)) bool selectAllOnMouseUp;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x4a92cf0, size 0x24c, virtual false, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HasFocus, addr 0x4a92c9c, size 0x18, virtual false, abstract: false, final false
  inline bool HasFocus();

  /// @brief Method HasSelection, addr 0x4a92b1c, size 0x1c, virtual false, abstract: false, final false
  inline bool HasSelection();

  /// @brief Method MoveDistanceQualifiesForDrag, addr 0x4a93bd0, size 0x24, virtual false, abstract: false, final false
  inline bool MoveDistanceQualifiesForDrag(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 current);

  static inline ::UnityEngine::UIElements::TextSelectingManipulator* New_ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method OnBlurEvent, addr 0x4a93170, size 0xb0, virtual false, abstract: false, final false
  inline void OnBlurEvent(::UnityEngine::UIElements::BlurEvent* evt);

  /// @brief Method OnCursorIndexChange, addr 0x4a92b38, size 0x148, virtual false, abstract: false, final false
  inline void OnCursorIndexChange();

  /// @brief Method OnExecuteCommandEvent, addr 0x4a93ab4, size 0x118, virtual false, abstract: false, final false
  inline void OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt);

  /// @brief Method OnFocusEvent, addr 0x4a92f3c, size 0x234, virtual false, abstract: false, final false
  inline void OnFocusEvent(::UnityEngine::UIElements::FocusEvent* evt);

  /// @brief Method OnKeyDown, addr 0x4a935fc, size 0x70, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x4a93220, size 0x3dc, virtual false, abstract: false, final false
  inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x4a9366c, size 0x20c, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUpEvent, addr 0x4a93878, size 0xbc, virtual false, abstract: false, final false
  inline void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnRevealCursor, addr 0x4a929b4, size 0x20, virtual false, abstract: false, final false
  inline void OnRevealCursor();

  /// @brief Method OnSelectIndexChange, addr 0x4a929d4, size 0x148, virtual false, abstract: false, final false
  inline void OnSelectIndexChange();

  /// @brief Method OnValidateCommandEvent, addr 0x4a93934, size 0x180, virtual false, abstract: false, final false
  inline void OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt);

  /// @brief Method RevealCursor, addr 0x4a92c80, size 0x1c, virtual false, abstract: false, final false
  inline bool RevealCursor();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ClickStartPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ClickStartPosition();

  constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMouseDownCount() const;

  constexpr int32_t& __cordl_internal_get_m_ConsecutiveMouseDownCount();

  constexpr bool const& __cordl_internal_get_m_Dragged() const;

  constexpr bool& __cordl_internal_get_m_Dragged();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_ImguiEvent() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ImguiEvent();

  constexpr bool const& __cordl_internal_get_m_IsClicking() const;

  constexpr bool& __cordl_internal_get_m_IsClicking();

  constexpr int64_t const& __cordl_internal_get_m_LastMouseDownTimeStamp() const;

  constexpr int64_t& __cordl_internal_get_m_LastMouseDownTimeStamp();

  constexpr ::UnityEngine::TextSelectingUtilities* const& __cordl_internal_get_m_SelectingUtilities() const;

  constexpr ::UnityEngine::TextSelectingUtilities*& __cordl_internal_get_m_SelectingUtilities();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr bool const& __cordl_internal_get_selectAllOnMouseUp() const;

  constexpr bool& __cordl_internal_get_selectAllOnMouseUp();

  constexpr void __cordl_internal_set_m_ClickStartPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ConsecutiveMouseDownCount(int32_t value);

  constexpr void __cordl_internal_set_m_Dragged(bool value);

  constexpr void __cordl_internal_set_m_ImguiEvent(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_IsClicking(bool value);

  constexpr void __cordl_internal_set_m_LastMouseDownTimeStamp(int64_t value);

  constexpr void __cordl_internal_set_m_SelectingUtilities(::UnityEngine::TextSelectingUtilities* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  constexpr void __cordl_internal_set_selectAllOnMouseUp(bool value);

  /// @brief Method .ctor, addr 0x4a92720, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method get_cursorIndex, addr 0x4a9294c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_isClicking, addr 0x4a92700, size 0x8, virtual false, abstract: false, final false
  inline bool get_isClicking();

  /// @brief Method get_selectIndex, addr 0x4a92980, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method set_cursorIndex, addr 0x4a92964, size 0x1c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_isClicking, addr 0x4a92708, size 0x18, virtual false, abstract: false, final false
  inline void set_isClicking(bool value);

  /// @brief Method set_selectIndex, addr 0x4a92998, size 0x1c, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSelectingManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextSelectingManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSelectingManipulator(TextSelectingManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSelectingManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSelectingManipulator(TextSelectingManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6200 };

  /// @brief Field k_DragThresholdSqr offset 0xffffffff size 0x4
  static constexpr int32_t k_DragThresholdSqr{ static_cast<int32_t>(0x10) };

  /// @brief Field m_SelectingUtilities, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextSelectingUtilities* ___m_SelectingUtilities;

  /// @brief Field selectAllOnMouseUp, offset: 0x18, size: 0x1, def value: None
  bool ___selectAllOnMouseUp;

  /// @brief Field m_TextElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_ClickStartPosition, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ClickStartPosition;

  /// @brief Field m_Dragged, offset: 0x30, size: 0x1, def value: None
  bool ___m_Dragged;

  /// @brief Field m_IsClicking, offset: 0x31, size: 0x1, def value: None
  bool ___m_IsClicking;

  /// @brief Field m_ConsecutiveMouseDownCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_ConsecutiveMouseDownCount;

  /// @brief Field m_LastMouseDownTimeStamp, offset: 0x38, size: 0x8, def value: None
  int64_t ___m_LastMouseDownTimeStamp;

  /// @brief Field m_ImguiEvent, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ImguiEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_SelectingUtilities) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___selectAllOnMouseUp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_TextElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_ClickStartPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_Dragged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_IsClicking) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_ConsecutiveMouseDownCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_LastMouseDownTimeStamp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextSelectingManipulator, ___m_ImguiEvent) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextSelectingManipulator, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextSelectingManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextSelectingManipulator*, "UnityEngine.UIElements", "TextSelectingManipulator");
