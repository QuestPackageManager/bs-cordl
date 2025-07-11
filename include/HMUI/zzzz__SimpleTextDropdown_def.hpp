#pragma once
// IWYU pragma private; include "HMUI/SimpleTextDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTextDropdown)
namespace GlobalNamespace {
class SimpleTextTableCell;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class TableCell;
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
namespace HMUI {
class SimpleTextDropdown;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SimpleTextDropdown);
// Dependencies HMUI.DropdownWithTableView, HMUI.TableView::IDataSource
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SimpleTextDropdown
class CORDL_TYPE SimpleTextDropdown : public ::HMUI::DropdownWithTableView {
public:
  // Declarations
  /// @brief Field _cellPrefab, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::SimpleTextTableCell> _cellPrefab;

  /// @brief Field _cellSize, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__cellSize, put = __cordl_internal_set__cellSize)) float_t _cellSize;

  /// @brief Field _initialized, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _text, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _texts, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__texts, put = __cordl_internal_set__texts)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>* _texts;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x39fd3d4, size 0x1bc, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x39fd320, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method HandleDidSelectCellWithIdx, addr 0x39fd67c, size 0x14c, virtual false, abstract: false, final false
  inline void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method LazyInit, addr 0x39fce60, size 0xa8, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::HMUI::SimpleTextDropdown* New_ctor();

  /// @brief Method NumberOfCells, addr 0x39fd328, size 0xac, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x39fcf08, size 0x90, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithIdx, addr 0x39fd134, size 0x1ec, virtual true, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method SetTexts, addr 0x39fcf98, size 0x19c, virtual false, abstract: false, final false
  inline void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts);

  constexpr ::UnityW<::GlobalNamespace::SimpleTextTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleTextTableCell>& __cordl_internal_get__cellPrefab();

  constexpr float_t const& __cordl_internal_get__cellSize() const;

  constexpr float_t& __cordl_internal_get__cellSize();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& __cordl_internal_get__texts() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __cordl_internal_get__texts();

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::SimpleTextTableCell> value);

  constexpr void __cordl_internal_set__cellSize(float_t value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x39fd7c8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextDropdown(SimpleTextDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextDropdown(SimpleTextDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16111 };

  /// @brief Field kCellReuseIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellReuseIdentifier{ u"Cell" };

  /// @brief Field _text, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _cellPrefab, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleTextTableCell> ____cellPrefab;

  /// @brief Field _cellSize, offset: 0x68, size: 0x4, def value: None
  float_t ____cellSize;

  /// @brief Field _texts, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ____texts;

  /// @brief Field _initialized, offset: 0x78, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SimpleTextDropdown, ____text) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____cellPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____cellSize) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____texts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____initialized) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SimpleTextDropdown, 0x80>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SimpleTextDropdown);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SimpleTextDropdown*, "HMUI", "SimpleTextDropdown");
