#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Helper)
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace Mono {
class ISystemCertificateProvider;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Helper;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Helper);
// Type: System.Security.Cryptography.X509Certificates::X509Helper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2993))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Helper*
class CORDL_TYPE X509Helper : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_CertificateProvider, addr 0x24761f4, size 0xc8, virtual false, abstract: false, final false
  static inline ::Mono::ISystemCertificateProvider* get_CertificateProvider();

  /// @brief Method InitFromCertificate, addr 0x24762bc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  /// @brief Method InitFromCertificate, addr 0x247636c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  /// @brief Method IsValid, addr 0x2476380, size 0x14, virtual false, abstract: false, final false
  static inline bool IsValid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  /// @brief Method ThrowIfContextInvalid, addr 0x2476394, size 0x40, virtual false, abstract: false, final false
  static inline void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);

  /// @brief Method GetInvalidContextException, addr 0x2475e3c, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Exception* GetInvalidContextException();

  /// @brief Method Import, addr 0x24763d4, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method Import, addr 0x2476480, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData,
                                                                                                ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                                ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  // Ctor Parameters [CppParam { name: "", ty: "X509Helper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Helper(X509Helper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Helper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Helper(X509Helper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Helper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Helper, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper*, "System.Security.Cryptography.X509Certificates", "X509Helper");
