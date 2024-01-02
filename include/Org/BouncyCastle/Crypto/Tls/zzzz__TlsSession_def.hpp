#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Tls::TlsSession
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1324))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsSession*
class CORDL_TYPE TlsSession {
public:
  // Declarations
  __declspec(property(get = get_SessionID))::ArrayW<uint8_t, ::Array<uint8_t>*> SessionID;

  __declspec(property(get = get_IsResumable)) bool IsResumable;

  /// @brief Method ExportSessionParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* ExportSessionParameters();

  /// @brief Method get_SessionID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SessionID();

  /// @brief Method Invalidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Invalidate();

  /// @brief Method get_IsResumable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsResumable();

  // Ctor Parameters [CppParam { name: "", ty: "TlsSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsSession(TlsSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsSession(TlsSession const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsSession);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsSession*, "Org.BouncyCastle.Crypto.Tls", "TlsSession");
