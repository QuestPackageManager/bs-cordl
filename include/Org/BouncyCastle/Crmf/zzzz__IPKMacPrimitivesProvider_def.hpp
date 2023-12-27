#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPKMacPrimitivesProvider)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IPKMacPrimitivesProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider);
// Type: Org.BouncyCastle.Crmf::IPKMacPrimitivesProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(699))
// CS Name: ::Org.BouncyCastle.Crmf::IPKMacPrimitivesProvider*
class CORDL_TYPE IPKMacPrimitivesProvider {
public:
  // Declarations
  /// @brief Method CreateDigest addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::IDigest* CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlg);

  /// @brief Method CreateMac addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Org::BouncyCastle::Crypto::IMac* CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg);

  // Ctor Parameters [CppParam { name: "", ty: "IPKMacPrimitivesProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPKMacPrimitivesProvider(IPKMacPrimitivesProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPKMacPrimitivesProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPKMacPrimitivesProvider(IPKMacPrimitivesProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, "Org.BouncyCastle.Crmf", "IPKMacPrimitivesProvider");
