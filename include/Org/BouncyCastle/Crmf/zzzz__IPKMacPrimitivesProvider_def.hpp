#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/IPKMacPrimitivesProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPKMacPrimitivesProvider)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
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
// Dependencies
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.IPKMacPrimitivesProvider
class CORDL_TYPE IPKMacPrimitivesProvider {
public:
  // Declarations
  /// @brief Method CreateDigest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlg);

  /// @brief Method CreateMac, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IMac* CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg);

  // Ctor Parameters [CppParam { name: "", ty: "IPKMacPrimitivesProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPKMacPrimitivesProvider(IPKMacPrimitivesProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, "Org.BouncyCastle.Crmf", "IPKMacPrimitivesProvider");
