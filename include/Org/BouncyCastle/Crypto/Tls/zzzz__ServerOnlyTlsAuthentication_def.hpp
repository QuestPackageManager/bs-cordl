#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ServerOnlyTlsAuthentication.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ServerOnlyTlsAuthentication)
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
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
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsAuthentication, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.ServerOnlyTlsAuthentication
class CORDL_TYPE ServerOnlyTlsAuthentication : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*() noexcept;

  /// @brief Method GetClientCredentials, addr 0x241b174, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetClientCredentials(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest);

  static inline ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication* New_ctor();

  /// @brief Method NotifyServerCertificate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void NotifyServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate);

  /// @brief Method .ctor, addr 0x241b17c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* i___Org__BouncyCastle__Crypto__Tls__TlsAuthentication() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerOnlyTlsAuthentication();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerOnlyTlsAuthentication", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerOnlyTlsAuthentication(ServerOnlyTlsAuthentication&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerOnlyTlsAuthentication", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerOnlyTlsAuthentication(ServerOnlyTlsAuthentication const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1270 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*, "Org.BouncyCastle.Crypto.Tls", "ServerOnlyTlsAuthentication");
