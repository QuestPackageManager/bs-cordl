#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsHandshakeRetransmit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsHandshakeRetransmit)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit);
// Dependencies
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsHandshakeRetransmit
class CORDL_TYPE DtlsHandshakeRetransmit {
public:
  // Declarations
  /// @brief Method ReceivedHandshakeRecord, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "DtlsHandshakeRetransmit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsHandshakeRetransmit(DtlsHandshakeRetransmit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1226 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*, "Org.BouncyCastle.Crypto.Tls", "DtlsHandshakeRetransmit");
