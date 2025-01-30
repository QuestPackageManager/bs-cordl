#pragma once
// IWYU pragma private; include "GlobalNamespace/PackLevelListHeaderTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackLevelListHeaderTableCell)
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class PackLevelListHeaderTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackLevelListHeaderTableCell);
// Dependencies HMUI.TableCell, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackLevelListHeaderTableCell
class CORDL_TYPE PackLevelListHeaderTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _arrowImage, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__arrowImage, put = __cordl_internal_set__arrowImage)) ::UnityW<::UnityEngine::UI::Image> _arrowImage;

  /// @brief Field _bgImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage)) ::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _cancellationTokenSource, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _highlightImage, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage)) ::UnityW<::UnityEngine::UI::Image> _highlightImage;

  /// @brief Field _selectedHighlightElementsColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedHighlightElementsColor, put = __cordl_internal_set__selectedHighlightElementsColor)) ::UnityEngine::Color _selectedHighlightElementsColor;

  /// @brief Field _text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method HighlightDidChange, addr 0x3c01b78, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  static inline ::GlobalNamespace::PackLevelListHeaderTableCell* New_ctor();

  /// @brief Method RefreshVisuals, addr 0x3c01af0, size 0x88, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SelectionDidChange, addr 0x3c01aec, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__arrowImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__arrowImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__highlightImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__highlightImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedHighlightElementsColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedHighlightElementsColor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__arrowImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__selectedHighlightElementsColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c01b7c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_text, addr 0x3c01ac8, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x3c01aa4, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackLevelListHeaderTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackLevelListHeaderTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackLevelListHeaderTableCell(PackLevelListHeaderTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackLevelListHeaderTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackLevelListHeaderTableCell(PackLevelListHeaderTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4763 };

  /// @brief Field _selectedHighlightElementsColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedHighlightElementsColor;

  /// @brief Field _text, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _bgImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _highlightImage, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____highlightImage;

  /// @brief Field _arrowImage, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____arrowImage;

  /// @brief Field _cancellationTokenSource, offset: 0x98, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackLevelListHeaderTableCell, ____selectedHighlightElementsColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackLevelListHeaderTableCell, ____text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackLevelListHeaderTableCell, ____bgImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackLevelListHeaderTableCell, ____highlightImage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackLevelListHeaderTableCell, ____arrowImage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackLevelListHeaderTableCell, ____cancellationTokenSource) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackLevelListHeaderTableCell, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackLevelListHeaderTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackLevelListHeaderTableCell*, "", "PackLevelListHeaderTableCell");
