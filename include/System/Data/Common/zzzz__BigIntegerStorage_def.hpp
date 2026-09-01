#pragma once
// IWYU pragma private; include "System\Data\Common\BigIntegerStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data::Common {
class BigIntegerStorage;
}
// Write type traits
MARK_REF_T(::System::Data::Common::BigIntegerStorage*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::BigIntegerStorage*, "System.Data.Common", "BigIntegerStorage");
// Dependencies System.Data.Common.DataStorage, System.Numerics.BigInteger
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.BigIntegerStorage
class CORDL_TYPE BigIntegerStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Numerics::BigInteger> _values;

  /// @brief Method Aggregate, addr 0x60a1628, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x60a1658, size 0x110, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x60a17cc, size 0x124, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertFromBigInteger, addr 0x60a1efc, size 0x648, virtual false, abstract: false, final false
  static inline ::System::Object* ConvertFromBigInteger(::System::Numerics::BigInteger value, ::System::Type* type, ::System::IFormatProvider* formatProvider);

  /// @brief Method ConvertObjectToXml, addr 0x60a2afc, size 0xf8, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertToBigInteger, addr 0x60a1918, size 0x5e4, virtual false, abstract: false, final false
  static inline ::System::Numerics::BigInteger ConvertToBigInteger(::System::Object* value, ::System::IFormatProvider* formatProvider);

  /// @brief Method ConvertValue, addr 0x60a2544, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x60a2a44, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x60a2608, size 0x54, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x60a2c40, size 0x108, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x60a26a0, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x60a2bf4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::BigIntegerStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x60a27a0, size 0x13c, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x60a28f8, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x60a2d48, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Numerics::BigInteger> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Numerics::BigInteger>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Numerics::BigInteger> value);

  /// @brief Method .ctor, addr 0x60a1448, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigIntegerStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigIntegerStorage(BigIntegerStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigIntegerStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigIntegerStorage(BigIntegerStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13914 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Numerics::BigInteger> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::BigIntegerStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::BigIntegerStorage) == 0x58, "Size mismatch!");

} // namespace System::Data::Common
