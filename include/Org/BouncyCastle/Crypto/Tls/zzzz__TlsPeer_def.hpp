#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsPeer)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsPeer);
// Type: Org.BouncyCastle.Crypto.Tls::TlsPeer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1162))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsPeer*
class CORDL_TYPE TlsPeer {
public:
  // Declarations
  /// @brief Method NotifyCloseHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyCloseHandle(::Org::BouncyCastle::Crypto::Tls::TlsCloseable* closehandle);

  /// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Cancel();

  /// @brief Method GetHandshakeTimeoutMillis, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetHandshakeTimeoutMillis();

  /// @brief Method RequiresExtendedMasterSecret, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool RequiresExtendedMasterSecret();

  /// @brief Method ShouldUseGmtUnixTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ShouldUseGmtUnixTime();

  /// @brief Method NotifySecureRenegotiation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifySecureRenegotiation(bool secureRenegotiation);

  /// @brief Method GetCompression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetCipher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method NotifyAlertRaised, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyAlertRaised(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method NotifyAlertReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyAlertReceived(uint8_t alertLevel, uint8_t alertDescription);

  /// @brief Method NotifyHandshakeComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void NotifyHandshakeComplete();

  // Ctor Parameters [CppParam { name: "", ty: "TlsPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsPeer(TlsPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsPeer(TlsPeer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsPeer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsPeer*, "Org.BouncyCastle.Crypto.Tls", "TlsPeer");
