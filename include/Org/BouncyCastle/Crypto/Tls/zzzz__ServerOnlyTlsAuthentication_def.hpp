#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerOnlyTlsAuthentication)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerOnlyTlsAuthentication;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication);
// Type: Org.BouncyCastle.Crypto.Tls::ServerOnlyTlsAuthentication
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1270))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ServerOnlyTlsAuthentication*
class CORDL_TYPE ServerOnlyTlsAuthentication : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* i___Org__BouncyCastle__Crypto__Tls__TlsAuthentication() noexcept;

  /// @brief Method NotifyServerCertificate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method GetClientCredentials, addr 0xf95a98, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetClientCredentials(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  static inline ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication* New_ctor();

  /// @brief Method .ctor, addr 0xf95aa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerOnlyTlsAuthentication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerOnlyTlsAuthentication(ServerOnlyTlsAuthentication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerOnlyTlsAuthentication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerOnlyTlsAuthentication(ServerOnlyTlsAuthentication const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerOnlyTlsAuthentication();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*, "Org.BouncyCastle.Crypto.Tls", "ServerOnlyTlsAuthentication");
