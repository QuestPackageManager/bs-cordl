#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCrossAppDomainString)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainString;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3264))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainString*
class CORDL_TYPE BinaryCrossAppDomainString : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __get_objectId, put = __set_objectId)) int32_t objectId;

  /// @brief Field value, offset 0x14, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) int32_t value;

  constexpr int32_t& __get_objectId();

  constexpr int32_t const& __get_objectId() const;

  constexpr void __set_objectId(int32_t value);

  constexpr int32_t& __get_value();

  constexpr int32_t const& __get_value() const;

  constexpr void __set_value(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* New_ctor();

  /// @brief Method .ctor addr 0x23698e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Read addr 0x23698ec size 0x44 virtual true final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump addr 0x2369930 size 0x4 virtual false final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryCrossAppDomainString(BinaryCrossAppDomainString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryCrossAppDomainString(BinaryCrossAppDomainString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryCrossAppDomainString();

public:
  /// @brief Field objectId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field value, offset: 0x14, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, ___objectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, ___value) == 0x14, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
