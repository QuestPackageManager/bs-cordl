#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2ImplUnix.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate2ImplUnix)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2ImplUnix;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix);
// Dependencies Internal.Cryptography.Pal.CertificateData, System.Security.Cryptography.X509Certificates.X509Certificate2Impl
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
class CORDL_TYPE X509Certificate2ImplUnix : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
public:
  // Declarations
  __declspec(property(get = get_Extensions)) ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Extensions;

  __declspec(property(get = get_Issuer)) ::StringW Issuer;

  __declspec(property(get = get_IssuerName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* IssuerName;

  __declspec(property(get = get_KeyAlgorithm)) ::StringW KeyAlgorithm;

  __declspec(property(get = get_KeyAlgorithmParameters)) ::ArrayW<uint8_t, ::Array<uint8_t>*> KeyAlgorithmParameters;

  __declspec(property(get = get_NotAfter)) ::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore)) ::System::DateTime NotBefore;

  __declspec(property(get = get_PublicKeyValue)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKeyValue;

  __declspec(property(get = get_RawData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_SerialNumber)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  __declspec(property(get = get_SignatureAlgorithm)) ::StringW SignatureAlgorithm;

  __declspec(property(get = get_Subject)) ::StringW Subject;

  __declspec(property(get = get_SubjectName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* SubjectName;

  __declspec(property(get = get_Thumbprint)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Thumbprint;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field certData, offset 0x18, size 0x98
  __declspec(property(get = __cordl_internal_get_certData, put = __cordl_internal_set_certData)) ::Internal::Cryptography::Pal::CertificateData certData;

  /// @brief Field readCertData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_readCertData, put = __cordl_internal_set_readCertData)) bool readCertData;

  /// @brief Method AppendPrivateKeyInfo, addr 0x61f51ac, size 0xb0, virtual true, abstract: false, final true
  inline void AppendPrivateKeyInfo(::System::Text::StringBuilder* sb);

  /// @brief Method EnsureCertData, addr 0x61f4da8, size 0x84, virtual false, abstract: false, final false
  inline void EnsureCertData();

  /// @brief Method GetNameInfo, addr 0x61f5098, size 0x34, virtual true, abstract: false, final true
  inline ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);

  /// @brief Method GetRawCertData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertData();

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix* New_ctor();

  constexpr ::Internal::Cryptography::Pal::CertificateData const& __cordl_internal_get_certData() const;

  constexpr ::Internal::Cryptography::Pal::CertificateData& __cordl_internal_get_certData();

  constexpr bool const& __cordl_internal_get_readCertData() const;

  constexpr bool& __cordl_internal_get_readCertData();

  constexpr void __cordl_internal_set_certData(::Internal::Cryptography::Pal::CertificateData value);

  constexpr void __cordl_internal_set_readCertData(bool value);

  /// @brief Method .ctor, addr 0x61f394c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Extensions, addr 0x61f50cc, size 0x18, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* get_Extensions();

  /// @brief Method get_Issuer, addr 0x61f4f18, size 0x28, virtual true, abstract: false, final true
  inline ::StringW get_Issuer();

  /// @brief Method get_IssuerName, addr 0x61f4ed8, size 0x18, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();

  /// @brief Method get_KeyAlgorithm, addr 0x61f4e2c, size 0x18, virtual true, abstract: false, final true
  inline ::StringW get_KeyAlgorithm();

  /// @brief Method get_KeyAlgorithmParameters, addr 0x61f4e44, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyAlgorithmParameters();

  /// @brief Method get_NotAfter, addr 0x61f50e4, size 0x64, virtual true, abstract: false, final true
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x61f5148, size 0x64, virtual true, abstract: false, final true
  inline ::System::DateTime get_NotBefore();

  /// @brief Method get_PublicKeyValue, addr 0x61f4e5c, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKeyValue();

  /// @brief Method get_RawData, addr 0x61f4f40, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_SerialNumber, addr 0x61f4e74, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_SignatureAlgorithm, addr 0x61f4e8c, size 0x18, virtual true, abstract: false, final true
  inline ::StringW get_SignatureAlgorithm();

  /// @brief Method get_Subject, addr 0x61f4ef0, size 0x28, virtual true, abstract: false, final true
  inline ::StringW get_Subject();

  /// @brief Method get_SubjectName, addr 0x61f4ec0, size 0x18, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();

  /// @brief Method get_Thumbprint, addr 0x61f4f58, size 0x140, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Thumbprint();

  /// @brief Method get_Version, addr 0x61f4ea4, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2ImplUnix();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplUnix", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2ImplUnix(X509Certificate2ImplUnix&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplUnix", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2ImplUnix(X509Certificate2ImplUnix const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11171 };

  /// @brief Field readCertData, offset: 0x10, size: 0x1, def value: None
  bool ___readCertData;

  /// @brief Field certData, offset: 0x18, size: 0x98, def value: None
  ::Internal::Cryptography::Pal::CertificateData ___certData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, ___readCertData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, ___certData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, 0xb0>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplUnix");
