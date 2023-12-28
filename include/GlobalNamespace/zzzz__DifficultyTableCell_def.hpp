#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DifficultyTableCell)
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class FillIndicator;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5417))
// CS Name: ::DifficultyTableCell*
class CORDL_TYPE DifficultyTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _difficultyText, offset 0x58, size 0x8
  __declspec(property(get = __get__difficultyText, put = __set__difficultyText))::TMPro::TextMeshProUGUI* _difficultyText;

  /// @brief Field _bgImage, offset 0x60, size 0x8
  __declspec(property(get = __get__bgImage, put = __set__bgImage))::UnityEngine::UI::Image* _bgImage;

  /// @brief Field _highlightImage, offset 0x68, size 0x8
  __declspec(property(get = __get__highlightImage, put = __set__highlightImage))::UnityEngine::UI::Image* _highlightImage;

  /// @brief Field _fillIndicator, offset 0x70, size 0x8
  __declspec(property(get = __get__fillIndicator, put = __set__fillIndicator))::GlobalNamespace::FillIndicator* _fillIndicator;

  __declspec(property(get = get_difficultyText, put = set_difficultyText))::StringW difficultyText;

  __declspec(property(put = set_difficultyValue)) int32_t difficultyValue;

  constexpr ::TMPro::TextMeshProUGUI*& __get__difficultyText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__difficultyText() const;

  constexpr void __set__difficultyText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__bgImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__bgImage() const;

  constexpr void __set__bgImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Image*& __get__highlightImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__highlightImage() const;

  constexpr void __set__highlightImage(::UnityEngine::UI::Image* value);

  constexpr ::GlobalNamespace::FillIndicator*& __get__fillIndicator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FillIndicator*> const& __get__fillIndicator() const;

  constexpr void __set__fillIndicator(::GlobalNamespace::FillIndicator* value);

  /// @brief Method set_difficultyText addr 0x22788c8 size 0x24 virtual false final false
  inline void set_difficultyText(::StringW value);

  /// @brief Method get_difficultyText addr 0x22788ec size 0x24 virtual false final false
  inline ::StringW get_difficultyText();

  /// @brief Method set_difficultyValue addr 0x2278910 size 0x38 virtual false final false
  inline void set_difficultyValue(int32_t value);

  /// @brief Method SelectionDidChange addr 0x227898c size 0xa4 virtual true final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HighlightDidChange addr 0x2278a30 size 0x40 virtual true final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::DifficultyTableCell* New_ctor();

  /// @brief Method .ctor addr 0x2278a70 size 0x8 virtual false final false
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
  ::TMPro::TextMeshProUGUI* ____difficultyText;

  /// @brief Field _bgImage, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____bgImage;

  /// @brief Field _highlightImage, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____highlightImage;

  /// @brief Field _fillIndicator, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::FillIndicator* ____fillIndicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyTableCell, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableCell*, "", "DifficultyTableCell");
