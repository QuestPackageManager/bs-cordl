#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsn1ApplicationSpecificParser)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1ApplicationSpecificParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser);
// Type: Org.BouncyCastle.Asn1::IAsn1ApplicationSpecificParser
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::IAsn1ApplicationSpecificParser*
class CORDL_TYPE IAsn1ApplicationSpecificParser {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  /// @brief Method ReadObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible* i___Org__BouncyCastle__Asn1__IAsn1Convertible() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1ApplicationSpecificParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAsn1ApplicationSpecificParser(IAsn1ApplicationSpecificParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAsn1ApplicationSpecificParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsn1ApplicationSpecificParser(IAsn1ApplicationSpecificParser const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser*, "Org.BouncyCastle.Asn1", "IAsn1ApplicationSpecificParser");
