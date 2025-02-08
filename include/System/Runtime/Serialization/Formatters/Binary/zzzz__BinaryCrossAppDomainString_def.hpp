#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryCrossAppDomainString.hpp"
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
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainString
class CORDL_TYPE BinaryCrossAppDomainString : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  /// @brief Field value, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  /// @brief Method Dump, addr 0x3d05abc, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* New_ctor();

  /// @brief Method Read, addr 0x3d05a78, size 0x44, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_objectId(int32_t value);

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x3d05a70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryCrossAppDomainString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryCrossAppDomainString(BinaryCrossAppDomainString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryCrossAppDomainString(BinaryCrossAppDomainString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3265 };

  /// @brief Field objectId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field value, offset: 0x14, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, ___objectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, ___value) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
