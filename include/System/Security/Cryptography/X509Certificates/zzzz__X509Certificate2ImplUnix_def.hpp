#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2ImplUnix
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8996)), TypeDefinitionIndex(TypeDefinitionIndex(8858))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8998))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate2ImplUnix*
class CORDL_TYPE X509Certificate2ImplUnix : public ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl {
public:
  // Declarations
  /// @brief Field readCertData, offset 0x10, size 0x1
  __declspec(property(get = __get_readCertData, put = __set_readCertData)) bool readCertData;

  /// @brief Field certData, offset 0x18, size 0x98
  __declspec(property(get = __get_certData, put = __set_certData))::Internal::Cryptography::Pal::CertificateData certData;

  __declspec(property(get = get_KeyAlgorithm))::StringW KeyAlgorithm;

  __declspec(property(get = get_KeyAlgorithmParameters))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyAlgorithmParameters;

  __declspec(property(get = get_PublicKeyValue))::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKeyValue;

  __declspec(property(get = get_SerialNumber))::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  __declspec(property(get = get_SignatureAlgorithm))::StringW SignatureAlgorithm;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_SubjectName))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* SubjectName;

  __declspec(property(get = get_IssuerName))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* IssuerName;

  __declspec(property(get = get_Subject))::StringW Subject;

  __declspec(property(get = get_Issuer))::StringW Issuer;

  __declspec(property(get = get_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  __declspec(property(get = get_Thumbprint))::ArrayW<uint8_t, ::Array<uint8_t>*> Thumbprint;

  __declspec(property(get = get_Extensions))::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Extensions;

  __declspec(property(get = get_NotAfter))::System::DateTime NotAfter;

  __declspec(property(get = get_NotBefore))::System::DateTime NotBefore;

  constexpr bool& __get_readCertData();

  constexpr bool const& __get_readCertData() const;

  constexpr void __set_readCertData(bool value);

  constexpr ::Internal::Cryptography::Pal::CertificateData& __get_certData();

  constexpr ::Internal::Cryptography::Pal::CertificateData const& __get_certData() const;

  constexpr void __set_certData(::Internal::Cryptography::Pal::CertificateData value);

  /// @brief Method EnsureCertData, addr 0x297e858, size 0x80, virtual false, abstract: false, final false
  inline void EnsureCertData();

  /// @brief Method GetRawCertData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertData();

  /// @brief Method get_KeyAlgorithm, addr 0x297e8d8, size 0x18, virtual true, abstract: false, final true
  inline ::StringW get_KeyAlgorithm();

  /// @brief Method get_KeyAlgorithmParameters, addr 0x297e8f0, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_KeyAlgorithmParameters();

  /// @brief Method get_PublicKeyValue, addr 0x297e908, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PublicKeyValue();

  /// @brief Method get_SerialNumber, addr 0x297e920, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SerialNumber();

  /// @brief Method get_SignatureAlgorithm, addr 0x297e938, size 0x18, virtual true, abstract: false, final true
  inline ::StringW get_SignatureAlgorithm();

  /// @brief Method get_Version, addr 0x297e950, size 0x1c, virtual true, abstract: false, final true
  inline int32_t get_Version();

  /// @brief Method get_SubjectName, addr 0x297e96c, size 0x18, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();

  /// @brief Method get_IssuerName, addr 0x297e984, size 0x18, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();

  /// @brief Method get_Subject, addr 0x297e99c, size 0x28, virtual true, abstract: false, final true
  inline ::StringW get_Subject();

  /// @brief Method get_Issuer, addr 0x297e9c4, size 0x28, virtual true, abstract: false, final true
  inline ::StringW get_Issuer();

  /// @brief Method get_RawData, addr 0x297e9ec, size 0x18, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method get_Thumbprint, addr 0x297ea04, size 0x194, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Thumbprint();

  /// @brief Method GetNameInfo, addr 0x297eb98, size 0x34, virtual true, abstract: false, final true
  inline ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);

  /// @brief Method get_Extensions, addr 0x297ebcc, size 0x18, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* get_Extensions();

  /// @brief Method get_NotAfter, addr 0x297ebe4, size 0x1c, virtual true, abstract: false, final true
  inline ::System::DateTime get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x297ec00, size 0x1c, virtual true, abstract: false, final true
  inline ::System::DateTime get_NotBefore();

  /// @brief Method AppendPrivateKeyInfo, addr 0x297ec1c, size 0x94, virtual true, abstract: false, final true
  inline void AppendPrivateKeyInfo(::System::Text::StringBuilder* sb);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix* New_ctor();

  /// @brief Method .ctor, addr 0x297d314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplUnix", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2ImplUnix(X509Certificate2ImplUnix&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplUnix", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2ImplUnix(X509Certificate2ImplUnix const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2ImplUnix();

public:
  /// @brief Field readCertData, offset: 0x10, size: 0x1, def value: None
  bool ___readCertData;

  /// @brief Field certData, offset: 0x18, size: 0x98, def value: None
  ::Internal::Cryptography::Pal::CertificateData ___certData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, 0xb0>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, ___readCertData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix, ___certData) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix*, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplUnix");
