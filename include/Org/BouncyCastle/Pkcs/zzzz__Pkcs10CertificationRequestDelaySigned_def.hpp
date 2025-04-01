#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs10CertificationRequestDelaySigned.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs10CertificationRequestDelaySigned)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequestDelaySigned;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned);
// Dependencies Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequestDelaySigned
class CORDL_TYPE Pkcs10CertificationRequestDelaySigned : public ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest {
public:
  // Declarations
  /// @brief Method GetDataToSign, addr 0x2556ee8, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDataToSign();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* New_ctor();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* New_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                                                                                           ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned* New_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                                                                                           ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                           ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey);

  /// @brief Method SignRequest, addr 0x2556f04, size 0x68, virtual false, abstract: false, final false
  inline void SignRequest(::ArrayW<uint8_t, ::Array<uint8_t>*> signedData);

  /// @brief Method SignRequest, addr 0x2556f6c, size 0x8, virtual false, abstract: false, final false
  inline void SignRequest(::Org::BouncyCastle::Asn1::DerBitString* signedData);

  /// @brief Method .ctor, addr 0x2556698, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25566f0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method .ctor, addr 0x25567bc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x2556754, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x25568b4, size 0x634, virtual false, abstract: false, final false
  inline void _ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                    ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method .ctor, addr 0x2556820, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                    ::Org::BouncyCastle::Asn1::Asn1Set* attributes, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs10CertificationRequestDelaySigned();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequestDelaySigned", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs10CertificationRequestDelaySigned(Pkcs10CertificationRequestDelaySigned&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequestDelaySigned", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs10CertificationRequestDelaySigned(Pkcs10CertificationRequestDelaySigned const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1697 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned*, "Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequestDelaySigned");
