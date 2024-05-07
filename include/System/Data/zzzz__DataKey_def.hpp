#pragma once
// IWYU pragma private; include "System/Data/DataKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataKey)
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System::Data {
struct IndexField;
}
namespace System::Data {
class Index;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
struct DataKey;
}
// Write type traits
MARK_VAL_T(::System::Data::DataKey);
// Type: System.Data::DataKey
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::System.Data::DataKey
struct CORDL_TYPE DataKey {
public:
  // Declarations
  __declspec(property(get = get_ColumnsReference))::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ColumnsReference;

  __declspec(property(get = get_HasValue)) bool HasValue;

  __declspec(property(get = get_Table))::System::Data::DataTable* Table;

  /// @brief Method CheckState, addr 0x2c86a84, size 0x90, virtual false, abstract: false, final false
  inline void CheckState();

  /// @brief Method ColumnsEqual, addr 0x2c86b34, size 0x100, virtual false, abstract: false, final false
  static inline bool ColumnsEqual(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> column1,
                                  ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> column2);

  /// @brief Method ColumnsEqual, addr 0x2c86b2c, size 0x8, virtual false, abstract: false, final false
  inline bool ColumnsEqual(::System::Data::DataKey key);

  /// @brief Method ContainsColumn, addr 0x2c7d6cc, size 0x5c, virtual false, abstract: false, final false
  inline bool ContainsColumn(::System::Data::DataColumn* column);

  /// @brief Method Equals, addr 0x2c86d10, size 0xb0, virtual false, abstract: false, final false
  inline bool Equals(::System::Data::DataKey value);

  /// @brief Method Equals, addr 0x2c86c98, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetColumnNames, addr 0x2c86dc0, size 0xe0, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetColumnNames();

  /// @brief Method GetHashCode, addr 0x2c86c34, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIndexDesc, addr 0x2c86ea0, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> GetIndexDesc();

  /// @brief Method GetKeyValues, addr 0x2c86f78, size 0x104, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetKeyValues(int32_t record);

  /// @brief Method GetSortIndex, addr 0x2c8707c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::Index* GetSortIndex();

  /// @brief Method GetSortIndex, addr 0x2c87084, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::Index* GetSortIndex(::System::Data::DataViewRowState recordStates);

  /// @brief Method RecordsEqual, addr 0x2c870dc, size 0x94, virtual false, abstract: false, final false
  inline bool RecordsEqual(int32_t record1, int32_t record2);

  /// @brief Method ToArray, addr 0x2c87170, size 0xd8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ToArray();

  /// @brief Method .ctor, addr 0x2c86894, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, bool copyColumns);

  /// @brief Method get_ColumnsReference, addr 0x2c86b14, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ColumnsReference();

  /// @brief Method get_HasValue, addr 0x2c86b1c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasValue();

  /// @brief Method get_Table, addr 0x2c768c0, size 0x30, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DataKey();

  // Ctor Parameters [CppParam { name: "_columns", ty: "::ArrayW<::System::Data::DataColumn*,::Array<::System::Data::DataColumn*>*>", modifiers: "", def_value: None }]
  constexpr DataKey(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> _columns) noexcept;

  /// @brief Field _columns, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> _columns;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataKey, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataKey, _columns) == 0x0, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataKey, "System.Data", "DataKey");
