#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectNull)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectNull
class CORDL_TYPE ObjectNull : public ::System::Object {
public:
  // Declarations
  /// @brief Field nullCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_nullCount, put = __cordl_internal_set_nullCount)) int32_t nullCount;

  /// @brief Method Dump, addr 0x59a9cf4, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* New_ctor();

  /// @brief Method Read, addr 0x59a9c80, size 0x74, virtual false, abstract: false, final false
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method SetNullCount, addr 0x59a9bc4, size 0x8, virtual false, abstract: false, final false
  inline void SetNullCount(int32_t nullCount);

  /// @brief Method Write, addr 0x59a9bcc, size 0xb4, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_nullCount() const;

  constexpr int32_t& __cordl_internal_get_nullCount();

  constexpr void __cordl_internal_set_nullCount(int32_t value);

  /// @brief Method .ctor, addr 0x59a9bc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectNull();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectNull(ObjectNull&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectNull", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectNull(ObjectNull const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3286 };

  /// @brief Field nullCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___nullCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectNull, ___nullCount) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectNull, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectNull*, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
