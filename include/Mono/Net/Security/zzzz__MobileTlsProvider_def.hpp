#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileTlsProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MobileTlsProvider)
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Forward declare root types
namespace Mono::Net::Security {
class MobileTlsProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MobileTlsProvider);
// Dependencies Mono.Security.Interface.MonoTlsProvider
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MobileTlsProvider
class CORDL_TYPE MobileTlsProvider : public ::Mono::Security::Interface::MonoTlsProvider {
public:
  // Declarations
  /// @brief Method CreateSslStream, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream, bool leaveInnerStreamOpen,
                                                                           ::Mono::Security::Interface::MonoTlsSettings* settings);

  static inline ::Mono::Net::Security::MobileTlsProvider* New_ctor();

  /// @brief Method ValidateCertificate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* validator, ::StringW targetHost, bool serverMode,
                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain,
                                  ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain, ::ByRef<::System::Net::Security::SslPolicyErrors> errors, ::ByRef<int32_t> status11);

  /// @brief Method .ctor, addr 0x5e21438, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileTlsProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileTlsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileTlsProvider(MobileTlsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileTlsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileTlsProvider(MobileTlsProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11006 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MobileTlsProvider, 0x10>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MobileTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileTlsProvider*, "Mono.Net.Security", "MobileTlsProvider");
