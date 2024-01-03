#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemReader)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequest;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
namespace Org::BouncyCastle::OpenSsl {
class IPasswordFinder;
}
namespace System::IO {
class TextReader;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemReader;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemReader);
// Type: Org.BouncyCastle.OpenSsl::PemReader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1685))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1686))
// CS Name: ::Org.BouncyCastle.OpenSsl::PemReader*
class CORDL_TYPE PemReader : public ::Org::BouncyCastle::Utilities::IO::Pem::PemReader {
public:
  // Declarations
  /// @brief Field pFinder, offset 0x18, size 0x8
  __declspec(property(get = __get_pFinder, put = __set_pFinder))::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder;

  constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder*& __get_pFinder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::OpenSsl::IPasswordFinder*> const& __get_pFinder() const;

  constexpr void __set_pFinder(::Org::BouncyCastle::OpenSsl::IPasswordFinder* value);

  static inline ::Org::BouncyCastle::OpenSsl::PemReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method .ctor, addr 0x10d1b54, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  static inline ::Org::BouncyCastle::OpenSsl::PemReader* New_ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder);

  /// @brief Method .ctor, addr 0x10d1b6c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder* pFinder);

  /// @brief Method ReadObject, addr 0x10d1b90, size 0x4e4, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject();

  /// @brief Method ReadRsaPublicKey, addr 0x10d3300, size 0x8c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadRsaPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadPublicKey, addr 0x10d32e4, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ReadPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadCertificate, addr 0x10d34e4, size 0x164, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadCrl, addr 0x10d3764, size 0x164, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* ReadCrl(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadCertificateRequest, addr 0x10d338c, size 0x158, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* ReadCertificateRequest(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadAttributeCertificate, addr 0x10d38c8, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* ReadAttributeCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadPkcs7, addr 0x10d3648, size 0x11c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ReadPkcs7(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method ReadPrivateKey, addr 0x10d2074, size 0x1270, virtual false, abstract: false, final false
  inline ::System::Object* ReadPrivateKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject* pemObject);

  /// @brief Method GetCurveParameters, addr 0x10d39cc, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetCurveParameters(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemReader(PemReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemReader(PemReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemReader();

public:
  /// @brief Field pFinder, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::OpenSsl::IPasswordFinder* ___pFinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemReader, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::PemReader, ___pFinder) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemReader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemReader*, "Org.BouncyCastle.OpenSsl", "PemReader");
