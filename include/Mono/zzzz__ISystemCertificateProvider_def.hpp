#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISystemCertificateProvider)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono {
struct CertificateImportFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Forward declare root types
namespace Mono {
class ISystemCertificateProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::ISystemCertificateProvider);
// Type: Mono::ISystemCertificateProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2225))
// CS Name: ::Mono::ISystemCertificateProvider*
class CORDL_TYPE ISystemCertificateProvider {
public:
  // Declarations
  /// @brief Method Import, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Import, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                         ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags,
                                                                                         ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Import, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                         ::Mono::CertificateImportFlags importFlags);

  // Ctor Parameters [CppParam { name: "", ty: "ISystemCertificateProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISystemCertificateProvider(ISystemCertificateProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISystemCertificateProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISystemCertificateProvider(ISystemCertificateProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono
NEED_NO_BOX(::Mono::ISystemCertificateProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::ISystemCertificateProvider*, "Mono", "ISystemCertificateProvider");
