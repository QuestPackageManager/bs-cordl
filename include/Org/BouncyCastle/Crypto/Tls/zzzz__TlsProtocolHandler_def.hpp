#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsProtocolHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientProtocol_def.hpp"
CORDL_MODULE_EXPORT(TlsProtocolHandler)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocolHandler;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsClientProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsProtocolHandler
class CORDL_TYPE TlsProtocolHandler : public ::Org::BouncyCastle::Crypto::Tls::TlsClientProtocol {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler* New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  static inline ::Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler* New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0x2434488, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method .ctor, addr 0x2434478, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TlsProtocolHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TlsProtocolHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsProtocolHandler(TlsProtocolHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsProtocolHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsProtocolHandler(TlsProtocolHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler, 0xe0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsProtocolHandler*, "Org.BouncyCastle.Crypto.Tls", "TlsProtocolHandler");
