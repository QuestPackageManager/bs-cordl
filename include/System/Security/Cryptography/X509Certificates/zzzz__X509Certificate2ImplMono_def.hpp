#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Certificate2ImplMono)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono::Security::X509 {
class X509Certificate;
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
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2ImplMono;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono);
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2ImplMono
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate2ImplMono*
class CORDL_TYPE X509Certificate2ImplMono : public ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix {
public:
  // Declarations
  __declspec(property(get = get_Cert))::Mono::Security::X509::X509Certificate* Cert;

  __declspec(property(get = get_HasPrivateKey)) bool HasPrivateKey;

  __declspec(property(get = get_IntermediateCertificates))::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* IntermediateCertificates;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_MonoCertificate))::Mono::Security::X509::X509Certificate* MonoCertificate;

  __declspec(property(get = get_PrivateKey, put = set_PrivateKey))::System::Security::Cryptography::AsymmetricAlgorithm* PrivateKey;

  /// @brief Field _cert, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__cert, put = __cordl_internal_set__cert))::Mono::Security::X509::X509Certificate* _cert;

  /// @brief Field empty_error, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_empty_error, put = setStaticF_empty_error))::StringW empty_error;

  /// @brief Field intermediateCerts, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_intermediateCerts,
                      put = __cordl_internal_set_intermediateCerts))::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* intermediateCerts;

  /// @brief Field signedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_signedData, put = setStaticF_signedData))::ArrayW<uint8_t, ::Array<uint8_t>*> signedData;

  /// @brief Method Clone, addr 0x2fb26d0, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();

  /// @brief Method GetDSAPrivateKey, addr 0x2fb2e00, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::DSA* GetDSAPrivateKey();

  /// @brief Method GetRSAPrivateKey, addr 0x2fb2d74, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::RSA* GetRSAPrivateKey();

  /// @brief Method GetRawCertData, addr 0x2fb2758, size 0x38, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawCertData();

  /// @brief Method ImportPkcs12, addr 0x2fb2678, size 0x58, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* ImportPkcs12(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password);

  /// @brief Method ImportPkcs12, addr 0x2fb2e8c, size 0x7c4, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* ImportPkcs12(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::StringW password);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* New_ctor(::Mono::Security::X509::X509Certificate* cert);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData,
                                                                                                       ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                                       ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method Verify, addr 0x2fb37a4, size 0x94, virtual true, abstract: false, final false
  inline bool Verify(::System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate);

  constexpr ::Mono::Security::X509::X509Certificate*& __cordl_internal_get__cert();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Certificate*> const& __cordl_internal_get__cert() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*& __cordl_internal_get_intermediateCerts();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection*> const& __cordl_internal_get_intermediateCerts() const;

  constexpr void __cordl_internal_set__cert(::Mono::Security::X509::X509Certificate* value);

  constexpr void __cordl_internal_set_intermediateCerts(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* value);

  /// @brief Method .ctor, addr 0x2fb2448, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::X509::X509Certificate* cert);

  /// @brief Method .ctor, addr 0x2fb2478, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono* other);

  /// @brief Method .ctor, addr 0x2fb251c, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                    ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  static inline ::StringW getStaticF_empty_error();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_signedData();

  /// @brief Method get_Cert, addr 0x2fb273c, size 0x1c, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* get_Cert();

  /// @brief Method get_HasPrivateKey, addr 0x2fb2790, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasPrivateKey();

  /// @brief Method get_IntermediateCertificates, addr 0x2fb38e4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();

  /// @brief Method get_IsValid, addr 0x2fb2438, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_MonoCertificate, addr 0x2fb38ec, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* get_MonoCertificate();

  /// @brief Method get_PrivateKey, addr 0x2fb27b4, size 0x428, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();

  static inline void setStaticF_empty_error(::StringW value);

  static inline void setStaticF_signedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_PrivateKey, addr 0x2fb2bdc, size 0x198, virtual true, abstract: false, final false
  inline void set_PrivateKey(::System::Security::Cryptography::AsymmetricAlgorithm* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2ImplMono();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplMono", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2ImplMono(X509Certificate2ImplMono&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2ImplMono", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2ImplMono(X509Certificate2ImplMono const&) = delete;

  /// @brief Field intermediateCerts, offset: 0xb0, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* ___intermediateCerts;

  /// @brief Field _cert, offset: 0xb8, size: 0x8, def value: None
  ::Mono::Security::X509::X509Certificate* ____cert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono, 0xc0>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono, ___intermediateCerts) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono, ____cert) == 0xb8, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono*, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplMono");
