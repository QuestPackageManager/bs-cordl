#pragma once
// IWYU pragma private; include "System/Data/Common/UInt64Storage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt64Storage)
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
class UInt64Storage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::UInt64Storage);
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.UInt64Storage
class CORDL_TYPE UInt64Storage : public ::System::Data::Common::DataStorage {
public:
  // Declarations
  /// @brief Field _values, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<uint64_t, ::Array<uint64_t>*> _values;

  /// @brief Field s_defaultValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultValue, put = setStaticF_s_defaultValue)) uint64_t s_defaultValue;

  /// @brief Method Aggregate, addr 0x5f1c990, size 0x7bc, virtual true, abstract: false, final false
  inline ::System::Object* Aggregate(::ArrayW<int32_t, ::Array<int32_t>*> records, ::System::Data::AggregateType kind);

  /// @brief Method Compare, addr 0x5f1d14c, size 0xd0, virtual true, abstract: false, final false
  inline int32_t Compare(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CompareValueTo, addr 0x5f1d21c, size 0x104, virtual true, abstract: false, final false
  inline int32_t CompareValueTo(int32_t recordNo, ::System::Object* value);

  /// @brief Method ConvertObjectToXml, addr 0x5f1d878, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ConvertObjectToXml(::System::Object* value);

  /// @brief Method ConvertValue, addr 0x5f1d320, size 0x144, virtual true, abstract: false, final false
  inline ::System::Object* ConvertValue(::System::Object* value);

  /// @brief Method ConvertXmlToObject, addr 0x5f1d7e8, size 0x90, virtual true, abstract: false, final false
  inline ::System::Object* ConvertXmlToObject(::StringW s);

  /// @brief Method Copy, addr 0x5f1d464, size 0x58, virtual true, abstract: false, final false
  inline void Copy(int32_t recordNo1, int32_t recordNo2);

  /// @brief Method CopyValue, addr 0x5f1d970, size 0x104, virtual true, abstract: false, final false
  inline void CopyValue(int32_t record, ::System::Object* store, ::System::Collections::BitArray* nullbits, int32_t storeIndex);

  /// @brief Method Get, addr 0x5f1d4bc, size 0xb8, virtual true, abstract: false, final false
  inline ::System::Object* Get(int32_t record);

  /// @brief Method GetEmptyStorage, addr 0x5f1d924, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Object* GetEmptyStorage(int32_t recordCount);

  static inline ::System::Data::Common::UInt64Storage* New_ctor(::System::Data::DataColumn* column);

  /// @brief Method Set, addr 0x5f1d574, size 0x1b0, virtual true, abstract: false, final false
  inline void Set(int32_t record, ::System::Object* value);

  /// @brief Method SetCapacity, addr 0x5f1d724, size 0xc4, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t capacity);

  /// @brief Method SetStorage, addr 0x5f1da74, size 0x98, virtual true, abstract: false, final false
  inline void SetStorage(::System::Object* store, ::System::Collections::BitArray* nullbits);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__values(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x5f1c8ac, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  static inline uint64_t getStaticF_s_defaultValue();

  static inline void setStaticF_s_defaultValue(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt64Storage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UInt64Storage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UInt64Storage(UInt64Storage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UInt64Storage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UInt64Storage(UInt64Storage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13924 };

  /// @brief Field _values, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ____values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::UInt64Storage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::UInt64Storage, 0x58>, "Size mismatch!");

} // namespace System::Data::Common
NEED_NO_BOX(::System::Data::Common::UInt64Storage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::UInt64Storage*, "System.Data.Common", "UInt64Storage");
