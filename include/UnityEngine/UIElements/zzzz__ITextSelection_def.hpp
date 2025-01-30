#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ITextSelection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ITextSelection)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextSelection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITextSelection);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ITextSelection
class CORDL_TYPE ITextSelection {
public:
  // Declarations
  __declspec(property(get = get_cursorColor, put = set_cursorColor)) ::UnityEngine::Color cursorColor;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  __declspec(property(get = get_cursorPosition)) ::UnityEngine::Vector2 cursorPosition;

  __declspec(property(get = get_cursorWidth)) float_t cursorWidth;

  __declspec(property(get = get_doubleClickSelectsWord)) bool doubleClickSelectsWord;

  __declspec(property(get = get_isSelectable, put = set_isSelectable)) bool isSelectable;

  __declspec(property(get = get_lineHeightAtCursorPosition)) float_t lineHeightAtCursorPosition;

  __declspec(property(get = get_selectAllOnFocus, put = set_selectAllOnFocus)) bool selectAllOnFocus;

  __declspec(property(get = get_selectAllOnMouseUp, put = set_selectAllOnMouseUp)) bool selectAllOnMouseUp;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(get = get_selectionColor, put = set_selectionColor)) ::UnityEngine::Color selectionColor;

  __declspec(property(get = get_tripleClickSelectsLine)) bool tripleClickSelectsLine;

  /// @brief Method HasSelection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasSelection();

  /// @brief Method SelectAll, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SelectNone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SelectNone();

  /// @brief Method get_cursorColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_cursorColor();

  /// @brief Method get_cursorIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_cursorPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_cursorPosition();

  /// @brief Method get_cursorWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_cursorWidth();

  /// @brief Method get_doubleClickSelectsWord, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_doubleClickSelectsWord();

  /// @brief Method get_isSelectable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isSelectable();

  /// @brief Method get_lineHeightAtCursorPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_lineHeightAtCursorPosition();

  /// @brief Method get_selectAllOnFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_selectAllOnFocus();

  /// @brief Method get_selectAllOnMouseUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_selectAllOnMouseUp();

  /// @brief Method get_selectIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_selectionColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_tripleClickSelectsLine, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_tripleClickSelectsLine();

  /// @brief Method set_cursorColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_cursorColor(::UnityEngine::Color value);

  /// @brief Method set_cursorIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_isSelectable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_isSelectable(bool value);

  /// @brief Method set_selectAllOnFocus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectAllOnFocus(bool value);

  /// @brief Method set_selectAllOnMouseUp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectAllOnMouseUp(bool value);

  /// @brief Method set_selectIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_selectionColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectionColor(::UnityEngine::Color value);

  // Ctor Parameters [CppParam { name: "", ty: "ITextSelection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextSelection(ITextSelection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6205 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITextSelection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextSelection*, "UnityEngine.UIElements", "ITextSelection");
