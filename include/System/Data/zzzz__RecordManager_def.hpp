#pragma once
// IWYU pragma private; include "System/Data/RecordManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RecordManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class RecordManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::RecordManager);
// Type: System.Data::RecordManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::RecordManager*
class CORDL_TYPE RecordManager : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::System::Data::DataRow* Item[];

  __declspec(property(get = get_LastFreeRecord)) int32_t LastFreeRecord;

  __declspec(property(get = get_MinimumCapacity, put = set_MinimumCapacity)) int32_t MinimumCapacity;

  __declspec(property(get = get_RecordCapacity, put = set_RecordCapacity)) int32_t RecordCapacity;

  /// @brief Field _freeRecordList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__freeRecordList, put = __cordl_internal_set__freeRecordList))::System::Collections::Generic::List_1<int32_t>* _freeRecordList;

  /// @brief Field _lastFreeRecord, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFreeRecord, put = __cordl_internal_set__lastFreeRecord)) int32_t _lastFreeRecord;

  /// @brief Field _minimumCapacity, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumCapacity, put = __cordl_internal_set__minimumCapacity)) int32_t _minimumCapacity;

  /// @brief Field _recordCapacity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__recordCapacity, put = __cordl_internal_set__recordCapacity)) int32_t _recordCapacity;

  /// @brief Field _rows, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rows, put = __cordl_internal_set__rows))::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> _rows;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Data::DataTable* _table;

  /// @brief Method Clear, addr 0x2d0f2b4, size 0x1f0, virtual false, abstract: false, final false
  inline void Clear(bool clearAll);

  /// @brief Method CopyRecord, addr 0x2d0f4dc, size 0x314, virtual false, abstract: false, final false
  inline int32_t CopyRecord(::System::Data::DataTable* src, int32_t record, int32_t copy);

  /// @brief Method FreeRecord, addr 0x2d0f0fc, size 0x154, virtual false, abstract: false, final false
  inline void FreeRecord(ByRef<int32_t> record);

  /// @brief Method GrowRecordCapacity, addr 0x2d0edbc, size 0x13c, virtual false, abstract: false, final false
  inline void GrowRecordCapacity();

  /// @brief Method ImportRecord, addr 0x2d0f4d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t ImportRecord(::System::Data::DataTable* src, int32_t record);

  /// @brief Method NewCapacity, addr 0x2d0eef8, size 0x14, virtual false, abstract: false, final false
  static inline int32_t NewCapacity(int32_t capacity);

  /// @brief Method NewRecordBase, addr 0x2d0f030, size 0xcc, virtual false, abstract: false, final false
  inline int32_t NewRecordBase();

  static inline ::System::Data::RecordManager* New_ctor(::System::Data::DataTable* table);

  /// @brief Method NormalizedMinimumCapacity, addr 0x2d0ef0c, size 0x38, virtual false, abstract: false, final false
  inline int32_t NormalizedMinimumCapacity(int32_t capacity);

  /// @brief Method SetRowCache, addr 0x2d0f7f0, size 0x24, virtual false, abstract: false, final false
  inline void SetRowCache(::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> newRows);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__freeRecordList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get__freeRecordList() const;

  constexpr int32_t const& __cordl_internal_get__lastFreeRecord() const;

  constexpr int32_t& __cordl_internal_get__lastFreeRecord();

  constexpr int32_t const& __cordl_internal_get__minimumCapacity() const;

  constexpr int32_t& __cordl_internal_get__minimumCapacity();

  constexpr int32_t const& __cordl_internal_get__recordCapacity() const;

  constexpr int32_t& __cordl_internal_get__recordCapacity();

  constexpr ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> const& __cordl_internal_get__rows() const;

  constexpr ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*>& __cordl_internal_get__rows();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__freeRecordList(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__lastFreeRecord(int32_t value);

  constexpr void __cordl_internal_set__minimumCapacity(int32_t value);

  constexpr void __cordl_internal_set__recordCapacity(int32_t value);

  constexpr void __cordl_internal_set__rows(::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2d0ecf0, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table);

  /// @brief Method get_Item, addr 0x2d0f4a4, size 0x30, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* get_Item(int32_t record);

  /// @brief Method get_LastFreeRecord, addr 0x2d0efd4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LastFreeRecord();

  /// @brief Method get_MinimumCapacity, addr 0x2d0efdc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MinimumCapacity();

  /// @brief Method get_RecordCapacity, addr 0x2d0f028, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RecordCapacity();

  /// @brief Method set_Item, addr 0x2d0f250, size 0x64, virtual false, abstract: false, final false
  inline void set_Item(int32_t record, ::System::Data::DataRow* value);

  /// @brief Method set_MinimumCapacity, addr 0x2d0efe4, size 0x44, virtual false, abstract: false, final false
  inline void set_MinimumCapacity(int32_t value);

  /// @brief Method set_RecordCapacity, addr 0x2d0ef44, size 0x90, virtual false, abstract: false, final false
  inline void set_RecordCapacity(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordManager(RecordManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordManager(RecordManager const&) = delete;

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _lastFreeRecord, offset: 0x18, size: 0x4, def value: None
  int32_t ____lastFreeRecord;

  /// @brief Field _minimumCapacity, offset: 0x1c, size: 0x4, def value: None
  int32_t ____minimumCapacity;

  /// @brief Field _recordCapacity, offset: 0x20, size: 0x4, def value: None
  int32_t ____recordCapacity;

  /// @brief Field _freeRecordList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____freeRecordList;

  /// @brief Field _rows, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> ____rows;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::RecordManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Data::RecordManager, ____table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::RecordManager, ____lastFreeRecord) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::RecordManager, ____minimumCapacity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Data::RecordManager, ____recordCapacity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::RecordManager, ____freeRecordList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::RecordManager, ____rows) == 0x30, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::RecordManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::RecordManager*, "System.Data", "RecordManager");
