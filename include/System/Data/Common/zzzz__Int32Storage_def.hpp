#pragma once
// IWYU pragma private; include "System\Data\Common\Int32Storage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Int32Storage)
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
class Int32Storage;
}
// Write type traits
MARK_REF_T(::System::Data::Common::Int32Storage*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::Int32Storage*, "System.Data.Common", "Int32Storage");
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.Int32Storage
class CORDL_TYPE Int32Storage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<int32_t> _values;

  /// @brief Method Aggregate, addr 0x60ae304, size 0x814, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x60aeb18, size 0x6c, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x60aeb84, size 0xa0, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x60af0e8, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x60aec24, size 0x144, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x60af058, size 0x90, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x60aed68, size 0x54, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x60af1e0, size 0x100, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x60aedbc, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x60af194, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::Int32Storage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x60aee0c, size 0x18c, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x60aef98, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x60af2e0, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<int32_t> value);

  /// @brief Method .ctor, addr 0x60a643c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Int32Storage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Int32Storage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Int32Storage(Int32Storage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Int32Storage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Int32Storage(Int32Storage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13925 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::Int32Storage, ____values) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::Int32Storage) == 0x58, "Size mismatch!");

} // namespace System::Data::Common
