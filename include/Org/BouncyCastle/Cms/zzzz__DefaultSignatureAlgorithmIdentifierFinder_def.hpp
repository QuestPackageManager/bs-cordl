#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/DefaultSignatureAlgorithmIdentifierFinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultSignatureAlgorithmIdentifierFinder)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.DefaultSignatureAlgorithmIdentifierFinder
class CORDL_TYPE DefaultSignatureAlgorithmIdentifierFinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field ENCRYPTION_DSA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_DSA, put = setStaticF_ENCRYPTION_DSA)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_DSA;

  /// @brief Field ENCRYPTION_ECDSA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_ECDSA, put = setStaticF_ENCRYPTION_ECDSA)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECDSA;

  /// @brief Field ENCRYPTION_ECGOST3410, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_ECGOST3410, put = setStaticF_ENCRYPTION_ECGOST3410)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECGOST3410;

  /// @brief Field ENCRYPTION_ECGOST3410_2012_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_ECGOST3410_2012_256, put = setStaticF_ENCRYPTION_ECGOST3410_2012_256)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECGOST3410_2012_256;

  /// @brief Field ENCRYPTION_ECGOST3410_2012_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_ECGOST3410_2012_512, put = setStaticF_ENCRYPTION_ECGOST3410_2012_512)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_ECGOST3410_2012_512;

  /// @brief Field ENCRYPTION_GOST3410, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_GOST3410, put = setStaticF_ENCRYPTION_GOST3410)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_GOST3410;

  /// @brief Field ENCRYPTION_RSA, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_RSA, put = setStaticF_ENCRYPTION_RSA)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_RSA;

  /// @brief Field ENCRYPTION_RSA_PSS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ENCRYPTION_RSA_PSS, put = setStaticF_ENCRYPTION_RSA_PSS)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ENCRYPTION_RSA_PSS;

  /// @brief Field _params, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__params, put = setStaticF__params)) ::System::Collections::IDictionary* _params;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Field digestBuilders, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestBuilders, put = setStaticF_digestBuilders)) ::System::Collections::IDictionary* digestBuilders;

  /// @brief Field digestOids, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_digestOids, put = setStaticF_digestOids)) ::System::Collections::IDictionary* digestOids;

  /// @brief Field noParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noParams, put = setStaticF_noParams)) ::Org::BouncyCastle::Utilities::Collections::ISet* noParams;

  /// @brief Field pkcs15RsaEncryption, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pkcs15RsaEncryption, put = setStaticF_pkcs15RsaEncryption)) ::Org::BouncyCastle::Utilities::Collections::ISet* pkcs15RsaEncryption;

  /// @brief Method CreatePssParams, addr 0x266ca88, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int32_t saltSize);

  /// @brief Method Find, addr 0x266d274, size 0x54, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Find(::StringW sigAlgName);

  /// @brief Method Generate, addr 0x266cba8, size 0x6cc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Generate(::StringW signatureAlgorithm);

  static inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* New_ctor();

  /// @brief Method .ctor, addr 0x266d2c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_DSA();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECDSA();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECGOST3410();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECGOST3410_2012_256();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_ECGOST3410_2012_512();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_GOST3410();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_RSA();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ENCRYPTION_RSA_PSS();

  static inline ::System::Collections::IDictionary* getStaticF__params();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::System::Collections::IDictionary* getStaticF_digestBuilders();

  static inline ::System::Collections::IDictionary* getStaticF_digestOids();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_pkcs15RsaEncryption();

  static inline void setStaticF_ENCRYPTION_DSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_ECDSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_ECGOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_ECGOST3410_2012_256(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_ECGOST3410_2012_512(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_GOST3410(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_RSA(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_ENCRYPTION_RSA_PSS(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF__params(::System::Collections::IDictionary* value);

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_digestBuilders(::System::Collections::IDictionary* value);

  static inline void setStaticF_digestOids(::System::Collections::IDictionary* value);

  static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  static inline void setStaticF_pkcs15RsaEncryption(::Org::BouncyCastle::Utilities::Collections::ISet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSignatureAlgorithmIdentifierFinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureAlgorithmIdentifierFinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSignatureAlgorithmIdentifierFinder(DefaultSignatureAlgorithmIdentifierFinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureAlgorithmIdentifierFinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSignatureAlgorithmIdentifierFinder(DefaultSignatureAlgorithmIdentifierFinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "Org.BouncyCastle.Cms", "DefaultSignatureAlgorithmIdentifierFinder");
