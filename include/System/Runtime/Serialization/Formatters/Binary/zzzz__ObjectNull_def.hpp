#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectNull)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectNull
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3272))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectNull*
class CORDL_TYPE ObjectNull : public ::System::Object {
public:
  // Declarations
  /// @brief Field nullCount, offset 0x10, size 0x4
  __declspec(property(get = __get_nullCount, put = __set_nullCount)) int32_t nullCount;

  constexpr int32_t& __get_nullCount();

  constexpr int32_t const& __get_nullCount() const;

  constexpr void __set_nullCount(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* New_ctor();

  /// @brief Method .ctor addr 0x236a908 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method SetNullCount addr 0x236a910 size 0x8 virtual false final false
  inline void SetNullCount(int32_t nullCount);

  /// @brief Method Write addr 0x236a918 size 0xac virtual true final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read addr 0x236a9c4 size 0x60 virtual false final false
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method Dump addr 0x236aa24 size 0x4 virtual false final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectNull(ObjectNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectNull(ObjectNull const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectNull();

public:
  /// @brief Field nullCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___nullCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectNull, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectNull, ___nullCount) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectNull*, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
