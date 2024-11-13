#pragma once
// IWYU pragma private; include "System/Data/Common/DoubleStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleStorage)
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
class DoubleStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::DoubleStorage);
// Type: System.Data.Common::DoubleStorage
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::Common {
// Is value type: false
// CS Name: ::System.Data.Common::DoubleStorage*
class CORDL_TYPE DoubleStorage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<double_t, ::Array<double_t>*> _values;

  /// @brief Method Aggregate, addr 0x41840d8, size 0x738, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x4184810, size 0x80, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x4184890, size 0x108, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x4184ea4, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x4184998, size 0x14c, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x4184e1c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x4184ae4, size 0x54, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x4184f84, size 0x100, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x4184b38, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x4184f3c, size 0x48, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::DoubleStorage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x4184bd8, size 0x184, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x4184d5c, size 0xc0, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x4185084, size 0x94, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<double_t, ::Array<double_t>*> value);

  /// @brief Method .ctor, addr 0x417e580, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoubleStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoubleStorage(DoubleStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoubleStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoubleStorage(DoubleStorage const&) = delete;

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<double_t, ::Array<double_t>*> ____values;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11496 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Common::DoubleStorage, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::Common::DoubleStorage, ____values) == 0x50, "Offset mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::DoubleStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::DoubleStorage*, "System.Data.Common", "DoubleStorage");
