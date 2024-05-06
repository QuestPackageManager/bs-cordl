#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeStorage)
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
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class DateTimeStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::DateTimeStorage);
// Type: System.Data.Common::DateTimeStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::DateTimeStorage*
class CORDL_TYPE DateTimeStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values))::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue))::System::DateTime s_defaultValue;

  /// @brief Method Aggregate, addr 0x2d35970, size 0x4b8, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x2d35e28, size 0x178, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x2d35fa0, size 0x164, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x2d3681c, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x2d36104, size 0x150, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x2d36764, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x2d36254, size 0x54, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x2d36918, size 0x138, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x2d362a8, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x2d368d0, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::DateTimeStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x2d363a0, size 0x304, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x2d366a4, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x2d36a50, size 0x1e0, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> value);

  /// @brief Method .ctor, addr 0x2d32998, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  static inline ::System::DateTime getStaticF_s_defaultValue();

  static inline void setStaticF_s_defaultValue(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeStorage(DateTimeStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeStorage(DateTimeStorage const&) = delete;

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::DateTimeStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::DateTimeStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::DateTimeStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::DateTimeStorage*, "System.Data.Common", "DateTimeStorage");
