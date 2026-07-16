#pragma once
// IWYU pragma private; include "System/Data/Common/SqlStringStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlString_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Data::Common::SqlStringStorage*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::SqlStringStorage*, "System.Data.Common", "SqlStringStorage");
// Dependencies System.Data.Common.DataStorage, System.Data.SqlTypes.SqlString
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlStringStorage
class CORDL_TYPE SqlStringStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlString> _values;

  /// @brief Method Aggregate, addr 0x60c2ba8, size 0x3f4, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t> recordNos, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x60c2f9c, size 0x68, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method Compare, addr 0x60c3004, size 0x120, virtual false, abstract: false, final false
  inline int32_t Compare(::System::Data::SqlTypes::SqlString valueNo1, ::System::Data::SqlTypes::SqlString valueNo2);

  /// @brief Method CompareValueTo, addr 0x60c3124, size 0xc4, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x60c3864, size 0x260, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x60c31e8, size 0x80, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x60c35b0, size 0x2b4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x60c3268, size 0x4c, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x60c3b10, size 0x114, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x60c32b4, size 0x90, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x60c3ac4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method GetStringLength, addr 0x60c3344, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetStringLength(int32_t record);

  /// @brief Method IsNull, addr 0x60c340c, size 0x90, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlStringStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x60c349c, size 0x5c, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x60c34f8, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x60c3c24, size 0x90, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlString> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlString>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlString> value);

  /// @brief Method .ctor, addr 0x60c2a78, size 0x130, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13915 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::SqlTypes::SqlString> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlStringStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::SqlStringStorage) == 0x58, "Size mismatch!");

} // namespace System::Data::Common
