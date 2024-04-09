#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Data.Common::SqlSingleStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::SqlSingleStorage*
class CORDL_TYPE SqlSingleStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> _values;

  /// @brief Method Aggregate, addr 0x2c571ec, size 0xd28, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x2c57f14, size 0x44, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x2c57f58, size 0xac, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x2c5854c, size 0x29c, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x2c58004, size 0x78, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x2c5826c, size 0x2e0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x2c5807c, size 0x3c, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x2c58830, size 0x100, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x2c580b8, size 0x80, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x2c587e8, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method IsNull, addr 0x2c58138, size 0x34, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlSingleStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x2c5816c, size 0x48, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x2c581b4, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x2c58930, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> value);

  /// @brief Method .ctor, addr 0x2c570ac, size 0x140, virtual false, abstract: false, final false
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

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::SqlTypes::SqlSingle, ::Array<::System::Data::SqlTypes::SqlSingle>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlSingleStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::SqlSingleStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlSingleStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlSingleStorage*, "System.Data.Common", "SqlSingleStorage");
