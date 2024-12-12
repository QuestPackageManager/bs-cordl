#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSchemeDropdown)
namespace GlobalNamespace {
class ColorSchemeTableCell;
}
namespace GlobalNamespace {
class ColorSchemeView;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView_IDataSource;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeDropdown);
// Dependencies HMUI.DropdownWithTableView, HMUI.TableView::IDataSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeDropdown
class CORDL_TYPE ColorSchemeDropdown : public ::HMUI::DropdownWithTableView {
public:
  // Declarations
  /// @brief Field _cellPrefab, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::ColorSchemeTableCell> _cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__cellReuseIdentifier, put = __cordl_internal_set__cellReuseIdentifier)) ::StringW _cellReuseIdentifier;

  /// @brief Field _cellSize, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__cellSize, put = __cordl_internal_set__cellSize)) float_t _cellSize;

  /// @brief Field _colorSchemeView, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeView, put = __cordl_internal_set__colorSchemeView)) ::UnityW<::GlobalNamespace::ColorSchemeView> _colorSchemeView;

  /// @brief Field _colorSchemes, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemes,
                      put = __cordl_internal_set__colorSchemes)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* _colorSchemes;

  /// @brief Field _initialized, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _text, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x3bf58bc, size 0x29c, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x3bf5808, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method HandleDidSelectCellWithIdx, addr 0x3bf5cdc, size 0x138, virtual false, abstract: false, final false
  inline void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method Init, addr 0x3bf5580, size 0x38, virtual false, abstract: false, final false
  inline void Init(::HMUI::TableView_IDataSource* initTableViewDataSource);

  /// @brief Method LazyInit, addr 0x3bf5448, size 0xa8, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::GlobalNamespace::ColorSchemeDropdown* New_ctor();

  /// @brief Method NumberOfCells, addr 0x3bf5810, size 0xac, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x3bf54f0, size 0x90, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshUI, addr 0x3bf5710, size 0xf8, virtual false, abstract: false, final false
  inline void RefreshUI(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method SelectCellWithIdx, addr 0x3bf5c18, size 0xc4, virtual true, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method SetData, addr 0x3bf55b8, size 0x158, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* colorSchemes);

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeTableCell>& __cordl_internal_get__cellPrefab();

  constexpr ::StringW const& __cordl_internal_get__cellReuseIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__cellReuseIdentifier();

  constexpr float_t const& __cordl_internal_get__cellSize() const;

  constexpr float_t& __cordl_internal_get__cellSize();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeView> const& __cordl_internal_get__colorSchemeView() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeView>& __cordl_internal_get__colorSchemeView();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get__colorSchemes() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*& __cordl_internal_get__colorSchemes();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::ColorSchemeTableCell> value);

  constexpr void __cordl_internal_set__cellReuseIdentifier(::StringW value);

  constexpr void __cordl_internal_set__cellSize(float_t value);

  constexpr void __cordl_internal_set__colorSchemeView(::UnityW<::GlobalNamespace::ColorSchemeView> value);

  constexpr void __cordl_internal_set__colorSchemes(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3bf5e14, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeDropdown(ColorSchemeDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeDropdown(ColorSchemeDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4737 };

  /// @brief Field _text, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _colorSchemeView, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeView> ____colorSchemeView;

  /// @brief Field _cellPrefab, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeTableCell> ____cellPrefab;

  /// @brief Field _cellReuseIdentifier, offset: 0x70, size: 0x8, def value: None
  ::StringW ____cellReuseIdentifier;

  /// @brief Field _cellSize, offset: 0x78, size: 0x4, def value: None
  float_t ____cellSize;

  /// @brief Field _colorSchemes, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* ____colorSchemes;

  /// @brief Field _initialized, offset: 0x88, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____text) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____colorSchemeView) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____cellPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____cellReuseIdentifier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____cellSize) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____colorSchemes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeDropdown, ____initialized) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeDropdown, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeDropdown*, "", "ColorSchemeDropdown");
