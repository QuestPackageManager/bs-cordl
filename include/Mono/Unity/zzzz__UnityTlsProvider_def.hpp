#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTlsProvider)
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace Mono::Unity {
struct UnityTls_unitytls_errorstate;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509_ref;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509verify_result;
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
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::UnityTlsProvider);
// Dependencies Mono.Net.Security.MobileTlsProvider
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTlsProvider
class CORDL_TYPE UnityTlsProvider : public ::Mono::Net::Security::MobileTlsProvider {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_SupportedProtocols)) ::System::Security::Authentication::SslProtocols SupportedProtocols;

  __declspec(property(get = get_SupportsCleanShutdown)) bool SupportsCleanShutdown;

  __declspec(property(get = get_SupportsConnectionInfo)) bool SupportsConnectionInfo;

  __declspec(property(get = get_SupportsMonoExtensions)) bool SupportsMonoExtensions;

  __declspec(property(get = get_SupportsSslStream)) bool SupportsSslStream;

  __declspec(property(get = get_ID)) ::System::Guid _cordl_ID;

  /// @brief Method CreateSslStream, addr 0x410f580, size 0x88, virtual true, abstract: false, final false
  inline ::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream, bool leaveInnerStreamOpen,
                                                                           ::Mono::Security::Interface::MonoTlsSettings* settings);

  static inline ::Mono::Unity::UnityTlsProvider* New_ctor();

  /// @brief Method ValidateCertificate, addr 0x410f69c, size 0x958, virtual true, abstract: false, final false
  inline bool ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* validator, ::StringW targetHost, bool serverMode,
                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain,
                                  ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain, ::ByRef<::System::Net::Security::SslPolicyErrors> errors, ::ByRef<int32_t> status11);

  /// @brief Method .ctor, addr 0x410fff4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ID, addr 0x410f500, size 0x58, virtual true, abstract: false, final false
  inline ::System::Guid get_ID();

  /// @brief Method get_Name, addr 0x410f4c0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_SupportedProtocols, addr 0x410f578, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Authentication::SslProtocols get_SupportedProtocols();

  /// @brief Method get_SupportsCleanShutdown, addr 0x410f570, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsCleanShutdown();

  /// @brief Method get_SupportsConnectionInfo, addr 0x410f568, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsConnectionInfo();

  /// @brief Method get_SupportsMonoExtensions, addr 0x410f560, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsMonoExtensions();

  /// @brief Method get_SupportsSslStream, addr 0x410f558, size 0x8, virtual true, abstract: false, final false
  inline bool get_SupportsSslStream();

  /// @brief Method x509verify_callback, addr 0x410f45c, size 0x64, virtual false, abstract: false, final false
  static inline ::Mono::Unity::UnityTls_unitytls_x509verify_result x509verify_callback(::cordl_internals::Ptr<void> userData, ::Mono::Unity::UnityTls_unitytls_x509_ref cert,
                                                                                       ::Mono::Unity::UnityTls_unitytls_x509verify_result result,
                                                                                       ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsProvider(UnityTlsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsProvider(UnityTlsProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9132 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsProvider, 0x10>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsProvider*, "Mono.Unity", "UnityTlsProvider");
