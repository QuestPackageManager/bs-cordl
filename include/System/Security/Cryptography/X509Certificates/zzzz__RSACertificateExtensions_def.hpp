#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/RSACertificateExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RSACertificateExtensions)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class RSACertificateExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::RSACertificateExtensions);
// Type: System.Security.Cryptography.X509Certificates::RSACertificateExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::RSACertificateExtensions*
class CORDL_TYPE RSACertificateExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRSAPublicKey, addr 0x2c142f8, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* GetRSAPublicKey(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSACertificateExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSACertificateExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSACertificateExtensions(RSACertificateExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSACertificateExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSACertificateExtensions(RSACertificateExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::RSACertificateExtensions, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::RSACertificateExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::RSACertificateExtensions*, "System.Security.Cryptography.X509Certificates", "RSACertificateExtensions");
