#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultPKMacPrimitivesProvider)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crmf {
class IPKMacPrimitivesProvider;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class DefaultPKMacPrimitivesProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider);
// Type: Org.BouncyCastle.Crmf::DefaultPKMacPrimitivesProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(700))
// CS Name: ::Org.BouncyCastle.Crmf::DefaultPKMacPrimitivesProvider*
class CORDL_TYPE DefaultPKMacPrimitivesProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider"
  constexpr operator ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider"
  constexpr ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* i___Org__BouncyCastle__Crmf__IPKMacPrimitivesProvider() noexcept;

  /// @brief Method CreateDigest, addr 0x121075c, size 0x78, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IDigest* CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlg);

  /// @brief Method CreateMac, addr 0x12107d4, size 0x78, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IMac* CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg);

  static inline ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider* New_ctor();

  /// @brief Method .ctor, addr 0x121084c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacPrimitivesProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultPKMacPrimitivesProvider(DefaultPKMacPrimitivesProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacPrimitivesProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultPKMacPrimitivesProvider(DefaultPKMacPrimitivesProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultPKMacPrimitivesProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*, "Org.BouncyCastle.Crmf", "DefaultPKMacPrimitivesProvider");
