#pragma once
// IWYU pragma private; include "System\Data\Common\SqlBytesStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBytes_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBytesStorage)
namespace System::Collections {
class BitArray;
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
class SqlBytesStorage;
}
// Write type traits
MARK_REF_T(::System::Data::Common::SqlBytesStorage*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::SqlBytesStorage*, "System.Data.Common", "SqlBytesStorage");
// Dependencies System.Data.Common.DataStorage, System.Data.SqlTypes.SqlBytes
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlBytesStorage
class CORDL_TYPE SqlBytesStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlBytes*> _values;

  /// @brief Method Aggregate, addr 0x60b9828, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x60b9a18, size 0x8, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x60b9a20, size 0x8, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x60b9f38, size 0x260, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x60b9c6c, size 0x2cc, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x60b9a28, size 0x3c, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x60ba1e4, size 0x104, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x60b9a64, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x60ba198, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  /// @brief Method IsNull, addr 0x60b9a94, size 0x40, virtual true, abstract: false, final false
  inline bool IsNull(int32_t record);

  static inline ::System::Data::Common::SqlBytesStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x60b9ad4, size 0xe0, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x60b9bb4, size 0xb8, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x60ba2e8, size 0x90, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlBytes*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Data::SqlTypes::SqlBytes*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlBytes*> value);

  /// @brief Method .ctor, addr 0x60a6c40, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBytesStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlBytesStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlBytesStorage(SqlBytesStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlBytesStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlBytesStorage(SqlBytesStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13931 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::SqlTypes::SqlBytes*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlBytesStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::SqlBytesStorage) == 0x58, "Size mismatch!");

} // namespace System::Data::Common
