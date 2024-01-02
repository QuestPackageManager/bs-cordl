#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1TaggedObjectParser)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser);
// Type: Org.BouncyCastle.Asn1::Asn1TaggedObjectParser
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(468))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1TaggedObjectParser*
class CORDL_TYPE Asn1TaggedObjectParser {
public:
  // Declarations
  __declspec(property(get = get_TagNo)) int32_t TagNo;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method get_TagNo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_TagNo();

  /// @brief Method GetObjectParser, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetObjectParser(int32_t tag, bool isExplicit);

  // Ctor Parameters [CppParam { name: "", ty: "Asn1TaggedObjectParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1TaggedObjectParser(Asn1TaggedObjectParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1TaggedObjectParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1TaggedObjectParser(Asn1TaggedObjectParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*, "Org.BouncyCastle.Asn1", "Asn1TaggedObjectParser");
