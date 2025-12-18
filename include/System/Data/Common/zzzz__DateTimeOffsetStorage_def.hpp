#pragma once
// IWYU pragma private; include "System/Data/Common/DateTimeOffsetStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeOffsetStorage)
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
struct DateTimeOffset;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class DateTimeOffsetStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::DateTimeOffsetStorage);
// Dependencies System.Data.Common.DataStorage, System.DateTimeOffset
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.DateTimeOffsetStorage
class CORDL_TYPE DateTimeOffsetStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::DateTimeOffset, ::Array<::System::DateTimeOffset>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue)) ::System::DateTimeOffset s_defaultValue;

  /// @brief Method Aggregate, addr 0x5ef3c24, size 0x4dc, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x5ef4100, size 0x1a4, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x5ef42a4, size 0x180, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x5ef48b0, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x5ef4424, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x5ef481c, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x5ef44d4, size 0x54, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x5ef4998, size 0x108, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x5ef4528, size 0x110, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x5ef494c, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::DateTimeOffsetStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x5ef4638, size 0x124, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x5ef475c, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x5ef4aa0, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::DateTimeOffset, ::Array<::System::DateTimeOffset>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::DateTimeOffset, ::Array<::System::DateTimeOffset>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::DateTimeOffset, ::Array<::System::DateTimeOffset>*> value);

  /// @brief Method .ctor, addr 0x5ef1d64, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  static inline ::System::DateTimeOffset getStaticF_s_defaultValue();

  static inline void setStaticF_s_defaultValue(::System::DateTimeOffset value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeOffsetStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeOffsetStorage(DateTimeOffsetStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeOffsetStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeOffsetStorage(DateTimeOffsetStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13893 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::DateTimeOffset, ::Array<::System::DateTimeOffset>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::DateTimeOffsetStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::DateTimeOffsetStorage, 0x58>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::DateTimeOffsetStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::DateTimeOffsetStorage*, "System.Data.Common", "DateTimeOffsetStorage");
