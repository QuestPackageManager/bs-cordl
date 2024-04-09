#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
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
namespace HMUI {
class __TableView__IDataSource;
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
// Type: HMUI::SimpleTextDropdown
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::SimpleTextDropdown*
class CORDL_TYPE SimpleTextDropdown : public ::HMUI::DropdownWithTableView {
public:
  // Declarations
  /// @brief Field _cellPrefab, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::SimpleTextTableCell> _cellPrefab;

  /// @brief Field _cellSize, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__cellSize, put = __cordl_internal_set__cellSize)) float_t _cellSize;

  /// @brief Field _initialized, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _text, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _texts, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__texts, put = __cordl_internal_set__texts))::System::Collections::Generic::IReadOnlyList_1<::StringW>* _texts;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x24278e8, size 0x1bc, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x2427834, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method HandleDidSelectCellWithIdx, addr 0x2427b90, size 0x14c, virtual false, abstract: false, final false
  inline void HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method Init, addr 0x2427468, size 0x40, virtual false, abstract: false, final false
  inline void Init(::HMUI::__TableView__IDataSource* initTableViewDataSource);

  /// @brief Method LazyInit, addr 0x2427328, size 0xb0, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::HMUI::SimpleTextDropdown* New_ctor();

  /// @brief Method NumberOfCells, addr 0x242783c, size 0xac, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x24273d8, size 0x90, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithIdx, addr 0x2427648, size 0x1ec, virtual true, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx);

  /// @brief Method SetTexts, addr 0x24274a8, size 0x1a0, virtual false, abstract: false, final false
  inline void SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts);

  constexpr ::UnityW<::GlobalNamespace::SimpleTextTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleTextTableCell>& __cordl_internal_get__cellPrefab();

  constexpr float_t const& __cordl_internal_get__cellSize() const;

  constexpr float_t& __cordl_internal_get__cellSize();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& __cordl_internal_get__texts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> const& __cordl_internal_get__texts() const;

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::SimpleTextTableCell> value);

  constexpr void __cordl_internal_set__cellSize(float_t value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x2427cdc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

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

  /// @brief Field _text, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _cellPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleTextTableCell> ____cellPrefab;

  /// @brief Field _cellSize, offset: 0x58, size: 0x4, def value: None
  float_t ____cellSize;

  /// @brief Field _texts, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* ____texts;

  /// @brief Field _initialized, offset: 0x68, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field kCellReuseIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellReuseIdentifier{ u"Cell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SimpleTextDropdown, 0x70>, "Size mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____text) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____cellPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____cellSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____texts) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::SimpleTextDropdown, ____initialized) == 0x68, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SimpleTextDropdown);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SimpleTextDropdown*, "HMUI", "SimpleTextDropdown");
