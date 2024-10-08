#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Certificate2Impl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate2Impl)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl);
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2Impl
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate2Impl*
class CORDL_TYPE X509Certificate2Impl : public ::System::Security::Cryptography::X509Certificates::X509CertificateImpl {
public:
  // Declarations
  __declspec(property(get = get_Extensions)) ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Extensions;

  __declspec(property(get = get_IntermediateCertificates)) ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* IntermediateCertificates;

  __declspec(property(get = get_IssuerName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* IssuerName;

  __declspec(property(get = get_PrivateKey, put = set_PrivateKey)) ::System::Security::Cryptography::AsymmetricAlgorithm* PrivateKey;

  __declspec(property(get = get_SignatureAlgorithm)) ::StringW SignatureAlgorithm;

  __declspec(property(get = get_SubjectName)) ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* SubjectName;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Method AppendPrivateKeyInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AppendPrivateKeyInfo(::System::Text::StringBuilder* sb);

  /// @brief Method CopyWithPrivateKey, addr 0x43c4c84, size 0xac, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* CopyWithPrivateKey(::System::Security::Cryptography::RSA* privateKey);

  /// @brief Method GetNameInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* New_ctor();

  /// @brief Method Verify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate);

  /// @brief Method .ctor, addr 0x43c4d30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Extensions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* get_Extensions();

  /// @brief Method get_IntermediateCertificates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();

  /// @brief Method get_IssuerName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();

  /// @brief Method get_PrivateKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();

  /// @brief Method get_SignatureAlgorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_SignatureAlgorithm();

  /// @brief Method get_SubjectName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();

  /// @brief Method get_Version, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Version();

  /// @brief Method set_PrivateKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2Impl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Impl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2Impl(X509Certificate2Impl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Impl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2Impl(X509Certificate2Impl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Impl");
