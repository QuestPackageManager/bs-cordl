#pragma once
// IWYU pragma private; include "System/Data/Common/SqlSingleStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlSingleStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlSingle;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class SqlSingleStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlSingleStorage);
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlSingleStorage
class CORDL_TYPE SqlSingleStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> _values;

  /// @brief Method Aggregate, addr 0x4202c48, size 0xdf4, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x4203a3c, size 0xa0, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x4203adc, size 0xbc, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x4204130, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x4203b98, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x4203e48, size 0x2e8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x4203c10, size 0x3c, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x4204418, size 0x100, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x4203c4c, size 0x80, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x42043d0, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method IsNull, addr 0x4203ccc, size 0x7c, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlSingleStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x4203d48, size 0x48, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x4203d90, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x4204518, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> value);

  /// @brief Method .ctor, addr 0x4202b08, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlSingleStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlSingleStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlSingleStorage(SqlSingleStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlSingleStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlSingleStorage(SqlSingleStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11552 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlSingleStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlSingleStorage, 0x58>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlSingleStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlSingleStorage*, "System.Data.Common", "SqlSingleStorage");
