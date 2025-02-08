#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsPeer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbstractTlsPeer)
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
class AbstractTlsPeer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer);
// Dependencies Org.BouncyCastle.Crypto.Tls.TlsPeer, System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsPeer
class CORDL_TYPE AbstractTlsPeer : public ::System::Object {
public:
  // Declarations
  /// @brief Field mCloseHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mCloseHandle, put = __cordl_internal_set_mCloseHandle)) ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* mCloseHandle;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer*() noexcept;

  /// @brief Method Cancel, addr 0x23e107c, size 0xac, virtual true, abstract: false, final false
  inline void Cancel();

  /// @brief Method GetCipher, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCipher* GetCipher();

  /// @brief Method GetCompression, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Tls::TlsCompression* GetCompression();

  /// @brief Method GetHandshakeTimeoutMillis, addr 0x23e114c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHandshakeTimeoutMillis();

  static inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer* New_ctor();

  /// @brief Method NotifyAlertRaised, addr 0x23e11a8, size 0x4, virtual true, abstract: false, final false
  inline void NotifyAlertRaised(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, ::System::Exception* cause);

  /// @brief Method NotifyAlertReceived, addr 0x23e11ac, size 0x4, virtual true, abstract: false, final false
  inline void NotifyAlertReceived(uint8_t alertLevel, uint8_t alertDescription);

  /// @brief Method NotifyCloseHandle, addr 0x23e1128, size 0x24, virtual true, abstract: false, final false
  inline void NotifyCloseHandle(::Org::BouncyCastle::Crypto::Tls::TlsCloseable* closeHandle);

  /// @brief Method NotifyHandshakeComplete, addr 0x23e11b0, size 0x4, virtual true, abstract: false, final false
  inline void NotifyHandshakeComplete();

  /// @brief Method NotifySecureRenegotiation, addr 0x23e1164, size 0x44, virtual true, abstract: false, final false
  inline void NotifySecureRenegotiation(bool secureRenegotiation);

  /// @brief Method RequiresExtendedMasterSecret, addr 0x23e1154, size 0x8, virtual true, abstract: false, final false
  inline bool RequiresExtendedMasterSecret();

  /// @brief Method ShouldUseGmtUnixTime, addr 0x23e115c, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldUseGmtUnixTime();

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* const& __cordl_internal_get_mCloseHandle() const;

  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*& __cordl_internal_get_mCloseHandle();

  constexpr void __cordl_internal_set_mCloseHandle(::Org::BouncyCastle::Crypto::Tls::TlsCloseable* value);

  /// @brief Method .ctor, addr 0x23e11b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsPeer"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsPeer* i___Org__BouncyCastle__Crypto__Tls__TlsPeer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbstractTlsPeer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsPeer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbstractTlsPeer(AbstractTlsPeer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbstractTlsPeer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbstractTlsPeer(AbstractTlsPeer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1163 };

  /// @brief Field mCloseHandle, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* ___mCloseHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer, ___mCloseHandle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer*, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsPeer");
