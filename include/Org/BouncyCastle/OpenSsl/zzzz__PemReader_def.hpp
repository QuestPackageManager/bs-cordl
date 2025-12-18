#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/PemReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemReader)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequest;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace System::IO {
class TextReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemReader;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemReader);
// Dependencies Org.BouncyCastle.Utilities.IO.Pem.PemReader
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: Org.BouncyCastle.OpenSsl.PemReader
class CORDL_TYPE PemReader : public ::Org::BouncyCastle::Utilities::IO::Pem::PemReader {
public:
  // Declarations
  /// @brief Field pFinder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pFinder, put = __cordl_internal_set_pFinder)) ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder;

  /// @brief Method GetCurveParameters, addr 0x34ad800, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetCurveParameters(::StringW name);

  static inline ::Org::BouncyCastle::OpenSsl::PemReader* New_ctor(::System::IO::TextReader* reader);

  static inline ::Org::BouncyCastle::OpenSsl::PemReader* New_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder);

  /// @brief Method ReadAttributeCertificate, addr 0x34ad6f0, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttributeCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadCertificate, addr 0x34ad338, size 0x154, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadCertificateRequest, addr 0x34ad1ec, size 0x14c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* ReadCertificateRequest(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadCrl, addr 0x34ad5a4, size 0x14c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadObject, addr 0x34ab974, size 0x570, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject();

  /// @brief Method ReadPkcs7, addr 0x34ad48c, size 0x118, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadPkcs7(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadPrivateKey, addr 0x34abee4, size 0x1264, virtual false, abstract: false, final false
  inline ::System::Object* ReadPrivateKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadPublicKey, addr 0x34ad148, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadRsaPublicKey, addr 0x34ad160, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadRsaPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder* const& __cordl_internal_get_pFinder() const;

  constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder*& __cordl_internal_get_pFinder();

  constexpr void __cordl_internal_set_pFinder(::Org::BouncyCastle::OpenSsl::IPasswordFinder* value);

  /// @brief Method .ctor, addr 0x34ab938, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method .ctor, addr 0x34ab950, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemReader(PemReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemReader(PemReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1686 };

  /// @brief Field pFinder, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::OpenSsl::IPasswordFinder* ___pFinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::OpenSsl::PemReader, ___pFinder) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemReader, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemReader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemReader*, "Org.BouncyCastle.OpenSsl", "PemReader");
