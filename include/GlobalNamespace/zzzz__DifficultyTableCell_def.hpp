#pragma once
// IWYU pragma private; include "GlobalNamespace/DifficultyTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DifficultyTableCell)
namespace GlobalNamespace {
class FillIndicator;
}
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DifficultyTableCell);
// Dependencies HMUI.TableCell
namespace GlobalNamespace {
// Is value type: false
// CS Name: DifficultyTableCell
class CORDL_TYPE DifficultyTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage)) ::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _difficultyText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyText, put = __cordl_internal_set__difficultyText)) ::UnityW<::TMPro::TextMeshProUGUI> _difficultyText;

  /// @brief Field _fillIndicator, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fillIndicator, put = __cordl_internal_set__fillIndicator)) ::UnityW<::GlobalNamespace::FillIndicator> _fillIndicator;

  /// @brief Field _highlightImage, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage)) ::UnityW<::UnityEngine::UI::Image> _highlightImage;

  __declspec(property(get = get_difficultyText, put = set_difficultyText)) ::StringW difficultyText;

  __declspec(property(put = set_difficultyValue)) int32_t difficultyValue;

  /// @brief Method HighlightDidChange, addr 0x3bfc764, size 0x40, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  static inline ::GlobalNamespace::DifficultyTableCell* New_ctor();

  /// @brief Method SelectionDidChange, addr 0x3bfc6cc, size 0x98, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__difficultyText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__difficultyText();

  constexpr ::UnityW<::GlobalNamespace::FillIndicator> const& __cordl_internal_get__fillIndicator() const;

  constexpr ::UnityW<::GlobalNamespace::FillIndicator>& __cordl_internal_get__fillIndicator();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__highlightImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__highlightImage();

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__difficultyText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__fillIndicator(::UnityW<::GlobalNamespace::FillIndicator> value);

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x3bfc7a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_difficultyText, addr 0x3bfc62c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_difficultyText();

  /// @brief Method set_difficultyText, addr 0x3bfc608, size 0x24, virtual false, abstract: false, final false
  inline void set_difficultyText(::StringW value);

  /// @brief Method set_difficultyValue, addr 0x3bfc650, size 0x38, virtual false, abstract: false, final false
  inline void set_difficultyValue(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DifficultyTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyTableCell(DifficultyTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyTableCell(DifficultyTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4748 };

  /// @brief Field _difficultyText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____difficultyText;

  /// @brief Field _bgImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _highlightImage, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____highlightImage;

  /// @brief Field _fillIndicator, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FillIndicator> ____fillIndicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____difficultyText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____bgImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____highlightImage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____fillIndicator) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyTableCell, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableCell*, "", "DifficultyTableCell");
