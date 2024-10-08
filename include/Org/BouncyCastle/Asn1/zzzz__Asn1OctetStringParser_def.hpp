#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1OctetStringParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(Asn1OctetStringParser)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1OctetStringParser);
// Type: Org.BouncyCastle.Asn1::Asn1OctetStringParser
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::Asn1OctetStringParser*
class CORDL_TYPE Asn1OctetStringParser {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method GetOctetStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IO::Stream* GetOctetStream();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OctetStringParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1OctetStringParser(Asn1OctetStringParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OctetStringParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1OctetStringParser(Asn1OctetStringParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1OctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1OctetStringParser*, "Org.BouncyCastle.Asn1", "Asn1OctetStringParser");
