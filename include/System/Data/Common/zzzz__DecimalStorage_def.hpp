#pragma once
// IWYU pragma private; include "System/Data/Common/DecimalStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecimalStorage)
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
struct Decimal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class DecimalStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::DecimalStorage);
// Dependencies System.Data.Common.DataStorage, System.Decimal
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.DecimalStorage
class CORDL_TYPE DecimalStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue)) ::System::Decimal s_defaultValue;

  /// @brief Method Aggregate, addr 0x41f2dac, size 0xa1c, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x41f37c8, size 0x17c, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x41f3944, size 0x16c, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x41f405c, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x41f3ab0, size 0x178, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x41f3fa8, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x41f3c28, size 0x54, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x41f4140, size 0x104, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x41f3c7c, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x41f40f8, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::DecimalStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x41f3d40, size 0x1a8, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x41f3ee8, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x41f4244, size 0x94, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> value);

  /// @brief Method .ctor, addr 0x41ee874, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  static inline ::System::Decimal getStaticF_s_defaultValue();

  static inline void setStaticF_s_defaultValue(::System::Decimal value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecimalStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecimalStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecimalStorage(DecimalStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecimalStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecimalStorage(DecimalStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11533 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Decimal, ::Array<::System::Decimal>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::DecimalStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::DecimalStorage, 0x58>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::DecimalStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::DecimalStorage*, "System.Data.Common", "DecimalStorage");
