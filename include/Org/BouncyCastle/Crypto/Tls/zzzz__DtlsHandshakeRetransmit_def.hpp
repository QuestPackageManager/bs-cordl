#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsHandshakeRetransmit)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit);
// Type: Org.BouncyCastle.Crypto.Tls::DtlsHandshakeRetransmit
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1226))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsHandshakeRetransmit*
class CORDL_TYPE DtlsHandshakeRetransmit {
public:
  // Declarations
  /// @brief Method ReceivedHandshakeRecord, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "DtlsHandshakeRetransmit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsHandshakeRetransmit(DtlsHandshakeRetransmit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsHandshakeRetransmit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsHandshakeRetransmit(DtlsHandshakeRetransmit const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit*, "Org.BouncyCastle.Crypto.Tls", "DtlsHandshakeRetransmit");
