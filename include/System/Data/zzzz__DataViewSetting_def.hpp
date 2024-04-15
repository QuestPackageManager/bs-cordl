#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataViewSetting)
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewManager;
}
namespace System::Data {
struct DataViewRowState;
}
// Forward declare root types
namespace System::Data {
class DataViewSetting;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataViewSetting);
// Type: System.Data::DataViewSetting
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataViewSetting*
class CORDL_TYPE DataViewSetting : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ApplyDefaultSort)) bool ApplyDefaultSort;

  __declspec(property(get = get_RowFilter))::StringW RowFilter;

  __declspec(property(get = get_RowStateFilter))::System::Data::DataViewRowState RowStateFilter;

  __declspec(property(get = get_Sort))::StringW Sort;

  /// @brief Field _applyDefaultSort, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__applyDefaultSort, put = __cordl_internal_set__applyDefaultSort)) bool _applyDefaultSort;

  /// @brief Field _dataViewManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataViewManager, put = __cordl_internal_set__dataViewManager))::System::Data::DataViewManager* _dataViewManager;

  /// @brief Field _rowFilter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rowFilter, put = __cordl_internal_set__rowFilter))::StringW _rowFilter;

  /// @brief Field _rowStateFilter, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rowStateFilter, put = __cordl_internal_set__rowStateFilter))::System::Data::DataViewRowState _rowStateFilter;

  /// @brief Field _sort, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sort, put = __cordl_internal_set__sort))::StringW _sort;

  /// @brief Field _table, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Data::DataTable* _table;

  static inline ::System::Data::DataViewSetting* New_ctor();

  /// @brief Method SetDataTable, addr 0x2bc145c, size 0x14, virtual false, abstract: false, final false
  inline void SetDataTable(::System::Data::DataTable* table);

  /// @brief Method SetDataViewManager, addr 0x2bc1448, size 0x14, virtual false, abstract: false, final false
  inline void SetDataViewManager(::System::Data::DataViewManager* dataViewManager);

  constexpr bool const& __cordl_internal_get__applyDefaultSort() const;

  constexpr bool& __cordl_internal_get__applyDefaultSort();

  constexpr ::System::Data::DataViewManager*& __cordl_internal_get__dataViewManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataViewManager*> const& __cordl_internal_get__dataViewManager() const;

  constexpr ::StringW const& __cordl_internal_get__rowFilter() const;

  constexpr ::StringW& __cordl_internal_get__rowFilter();

  constexpr ::System::Data::DataViewRowState const& __cordl_internal_get__rowStateFilter() const;

  constexpr ::System::Data::DataViewRowState& __cordl_internal_get__rowStateFilter();

  constexpr ::StringW const& __cordl_internal_get__sort() const;

  constexpr ::StringW& __cordl_internal_get__sort();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__applyDefaultSort(bool value);

  constexpr void __cordl_internal_set__dataViewManager(::System::Data::DataViewManager* value);

  constexpr void __cordl_internal_set__rowFilter(::StringW value);

  constexpr void __cordl_internal_set__rowStateFilter(::System::Data::DataViewRowState value);

  constexpr void __cordl_internal_set__sort(::StringW value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2bc13e0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ApplyDefaultSort, addr 0x2bc1440, size 0x8, virtual false, abstract: false, final false
  inline bool get_ApplyDefaultSort();

  /// @brief Method get_RowFilter, addr 0x2bc1470, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RowFilter();

  /// @brief Method get_RowStateFilter, addr 0x2bc1478, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataViewRowState get_RowStateFilter();

  /// @brief Method get_Sort, addr 0x2bc1480, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Sort();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataViewSetting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataViewSetting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataViewSetting(DataViewSetting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataViewSetting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataViewSetting(DataViewSetting const&) = delete;

  /// @brief Field _dataViewManager, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataViewManager* ____dataViewManager;

  /// @brief Field _table, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _sort, offset: 0x20, size: 0x8, def value: None
  ::StringW ____sort;

  /// @brief Field _rowFilter, offset: 0x28, size: 0x8, def value: None
  ::StringW ____rowFilter;

  /// @brief Field _rowStateFilter, offset: 0x30, size: 0x4, def value: None
  ::System::Data::DataViewRowState ____rowStateFilter;

  /// @brief Field _applyDefaultSort, offset: 0x34, size: 0x1, def value: None
  bool ____applyDefaultSort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataViewSetting, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataViewSetting, ____dataViewManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSetting, ____table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSetting, ____sort) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSetting, ____rowFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSetting, ____rowStateFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataViewSetting, ____applyDefaultSort) == 0x34, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataViewSetting);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewSetting*, "System.Data", "DataViewSetting");
