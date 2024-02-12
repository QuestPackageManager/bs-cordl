#pragma once
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
struct __SelectableCell__TransitionType;
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
// Type: ::DifficultyTableCell
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13617))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4720))
// CS Name: ::DifficultyTableCell*
class CORDL_TYPE DifficultyTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _difficultyText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyText, put = __cordl_internal_set__difficultyText))::UnityW<::TMPro::TextMeshProUGUI> _difficultyText;

  /// @brief Field _bgImage, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage))::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _highlightImage, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage))::UnityW<::UnityEngine::UI::Image> _highlightImage;

  /// @brief Field _fillIndicator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__fillIndicator, put = __cordl_internal_set__fillIndicator))::UnityW<::GlobalNamespace::FillIndicator> _fillIndicator;

  __declspec(property(get = get_difficultyText, put = set_difficultyText))::StringW difficultyText;

  __declspec(property(put = set_difficultyValue)) int32_t difficultyValue;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__difficultyText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__difficultyText() const;

  constexpr void __cordl_internal_set__difficultyText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__highlightImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__highlightImage() const;

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr ::UnityW<::GlobalNamespace::FillIndicator>& __cordl_internal_get__fillIndicator();

  constexpr ::UnityW<::GlobalNamespace::FillIndicator> const& __cordl_internal_get__fillIndicator() const;

  constexpr void __cordl_internal_set__fillIndicator(::UnityW<::GlobalNamespace::FillIndicator> value);

  /// @brief Method set_difficultyText, addr 0x23d44c4, size 0x24, virtual false, abstract: false, final false
  inline void set_difficultyText(::StringW value);

  /// @brief Method get_difficultyText, addr 0x23d44e8, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_difficultyText();

  /// @brief Method set_difficultyValue, addr 0x23d450c, size 0x38, virtual false, abstract: false, final false
  inline void set_difficultyValue(int32_t value);

  /// @brief Method SelectionDidChange, addr 0x23d4588, size 0xa4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HighlightDidChange, addr 0x23d462c, size 0x40, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::DifficultyTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x23d466c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyTableCell(DifficultyTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyTableCell(DifficultyTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyTableCell();

public:
  /// @brief Field _difficultyText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____difficultyText;

  /// @brief Field _bgImage, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _highlightImage, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____highlightImage;

  /// @brief Field _fillIndicator, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FillIndicator> ____fillIndicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyTableCell, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____difficultyText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____bgImage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____highlightImage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableCell, ____fillIndicator) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableCell*, "", "DifficultyTableCell");
