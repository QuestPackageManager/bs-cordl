#pragma once
// IWYU pragma private; include "System/Data/Common/TimeSpanStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanStorage)
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
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Data::Common {
class TimeSpanStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::TimeSpanStorage);
// Dependencies System.Data.Common.DataStorage, System.TimeSpan
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.TimeSpanStorage
class CORDL_TYPE TimeSpanStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue)) ::System::TimeSpan s_defaultValue;

  /// @brief Method Aggregate, addr 0x5f18c34, size 0xb30, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x5f19764, size 0x154, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x5f198b8, size 0x164, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x5f19fe0, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertToTimeSpan, addr 0x5f19a1c, size 0x180, virtual false, abstract: false, final false
  static inline ::System::TimeSpan ConvertToTimeSpan(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x5f19b9c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x5f19f4c, size 0x94, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x5f19c50, size 0x58, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x5f1a0f0, size 0x104, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x5f19ca8, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x5f1a0a4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::TimeSpanStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x5f19da4, size 0xe4, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x5f19e88, size 0xc4, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x5f1a1f4, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> value);

  /// @brief Method .ctor, addr 0x5f18b14, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  static inline ::System::TimeSpan getStaticF_s_defaultValue();

  static inline void setStaticF_s_defaultValue(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanStorage(TimeSpanStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanStorage(TimeSpanStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13921 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::TimeSpan, ::Array<::System::TimeSpan>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::TimeSpanStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::TimeSpanStorage, 0x58>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::TimeSpanStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::TimeSpanStorage*, "System.Data.Common", "TimeSpanStorage");
