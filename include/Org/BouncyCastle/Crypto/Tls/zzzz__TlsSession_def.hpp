#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSession.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(TlsSession)
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsSession);
// Dependencies
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSession
class CORDL_TYPE TlsSession {
public:
  // Declarations
  __declspec(property(get = get_IsResumable)) bool IsResumable;

  __declspec(property(get = get_SessionID)) ::ArrayW<uint8_t, ::Array<uint8_t>*> SessionID;

  /// @brief Method ExportSessionParameters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ExportSessionParameters();

  /// @brief Method Invalidate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invalidate();

  /// @brief Method get_IsResumable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsResumable();

  /// @brief Method get_SessionID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SessionID();

  // Ctor Parameters [CppParam { name: "", ty: "TlsSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSession(TlsSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1324 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSession);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSession*, "Org.BouncyCastle.Crypto.Tls", "TlsSession");
