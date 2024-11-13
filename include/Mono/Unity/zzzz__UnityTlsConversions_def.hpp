#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsConversions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityTlsConversions)
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_protocol;
}
namespace Mono::Unity {
struct __UnityTls__unitytls_x509verify_result;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsConversions;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::UnityTlsConversions);
// Type: Mono.Unity::UnityTlsConversions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Unity {
// Is value type: false
// CS Name: ::Mono.Unity::UnityTlsConversions*
class CORDL_TYPE UnityTlsConversions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertProtocolVersion, addr 0x40ab1f0, size 0x20, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(::Mono::Unity::__UnityTls__unitytls_protocol protocol);

  /// @brief Method GetMaxProtocol, addr 0x40aa4c0, size 0x38, virtual false, abstract: false, final false
  static inline ::Mono::Unity::__UnityTls__unitytls_protocol GetMaxProtocol(::System::Security::Authentication::SslProtocols protocols);

  /// @brief Method GetMinProtocol, addr 0x40aa488, size 0x38, virtual false, abstract: false, final false
  static inline ::Mono::Unity::__UnityTls__unitytls_protocol GetMinProtocol(::System::Security::Authentication::SslProtocols protocols);

  /// @brief Method VerifyResultToAlertDescription, addr 0x40a7ff0, size 0x54, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(::Mono::Unity::__UnityTls__unitytls_x509verify_result verifyResult,
                                                                                             ::Mono::Security::Interface::AlertDescription defaultAlert);

  /// @brief Method VerifyResultToChainStatus, addr 0x40ac6e8, size 0x40, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags VerifyResultToChainStatus(::Mono::Unity::__UnityTls__unitytls_x509verify_result verifyResult);

  /// @brief Method VerifyResultToPolicyErrror, addr 0x40ac6b8, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Net::Security::SslPolicyErrors VerifyResultToPolicyErrror(::Mono::Unity::__UnityTls__unitytls_x509verify_result verifyResult);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityTlsConversions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityTlsConversions(UnityTlsConversions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityTlsConversions(UnityTlsConversions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::UnityTlsConversions, 0x10>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::UnityTlsConversions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsConversions*, "Mono.Unity", "UnityTlsConversions");
