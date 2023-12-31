#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerObjectInfoInit)
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit);
// Type: System.Runtime.Serialization.Formatters.Binary::SerObjectInfoInit
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3283))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SerObjectInfoInit*
class CORDL_TYPE SerObjectInfoInit : public ::System::Object {
public:
  // Declarations
  /// @brief Field seenBeforeTable, offset 0x10, size 0x8
  __declspec(property(get = __get_seenBeforeTable, put = __set_seenBeforeTable))::System::Collections::Hashtable* seenBeforeTable;

  /// @brief Field objectInfoIdCount, offset 0x18, size 0x4
  __declspec(property(get = __get_objectInfoIdCount, put = __set_objectInfoIdCount)) int32_t objectInfoIdCount;

  /// @brief Field oiPool, offset 0x20, size 0x8
  __declspec(property(get = __get_oiPool, put = __set_oiPool))::System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool;

  constexpr ::System::Collections::Hashtable*& __get_seenBeforeTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_seenBeforeTable() const;

  constexpr void __set_seenBeforeTable(::System::Collections::Hashtable* value);

  constexpr int32_t& __get_objectInfoIdCount();

  constexpr int32_t const& __get_objectInfoIdCount() const;

  constexpr void __set_objectInfoIdCount(int32_t value);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& __get_oiPool();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const& __get_oiPool() const;

  constexpr void __set_oiPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* New_ctor();

  /// @brief Method .ctor, addr 0x24cb1e0, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerObjectInfoInit(SerObjectInfoInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerObjectInfoInit(SerObjectInfoInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerObjectInfoInit();

public:
  /// @brief Field seenBeforeTable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___seenBeforeTable;

  /// @brief Field objectInfoIdCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___objectInfoIdCount;

  /// @brief Field oiPool, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::SerStack* ___oiPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, ___seenBeforeTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, ___objectInfoIdCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, ___oiPool) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
