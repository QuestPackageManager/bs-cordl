#pragma once
// IWYU pragma private; include "System/Data/Common/SqlStringStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlStringStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlString;
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
class SqlStringStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlStringStorage);
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlStringStorage
class CORDL_TYPE SqlStringStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlString, ::Array<::System::Data::SqlTypes::SqlString>*> _values;

  /// @brief Method Aggregate, addr 0x4206314, size 0x41c, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> recordNos, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x4206730, size 0x70, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method Compare, addr 0x42067a0, size 0x13c, virtual false, abstract: false, final false
  inline int32_t Compare(::System::Data::SqlTypes::SqlString valueNo1, ::System::Data::SqlTypes::SqlString valueNo2);

  /// @brief Method CompareValueTo, addr 0x42068dc, size 0xc4, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x4207058, size 0x2a0, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x42069a0, size 0x80, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x4206d6c, size 0x2ec, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x4206a20, size 0x58, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x4207340, size 0x118, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x4206a78, size 0x84, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x42072f8, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method GetStringLength, addr 0x4206afc, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetStringLength(int32_t record);

  /// @brief Method IsNull, addr 0x4206bc8, size 0x80, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlStringStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x4206c48, size 0x6c, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x4206cb4, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x4207458, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlString, ::Array<::System::Data::SqlTypes::SqlString>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlString, ::Array<::System::Data::SqlTypes::SqlString>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlString, ::Array<::System::Data::SqlTypes::SqlString>*> value);

  /// @brief Method .ctor, addr 0x42061d4, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlStringStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlStringStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlStringStorage(SqlStringStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlStringStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlStringStorage(SqlStringStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11551 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::SqlTypes::SqlString, ::Array<::System::Data::SqlTypes::SqlString>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlStringStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlStringStorage, 0x58>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlStringStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlStringStorage*, "System.Data.Common", "SqlStringStorage");
