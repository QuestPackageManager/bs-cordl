#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DatagramTransport)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DatagramTransport);
// Type: Org.BouncyCastle.Crypto.Tls::DatagramTransport
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1207))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DatagramTransport*
class CORDL_TYPE DatagramTransport {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr operator ::Org::BouncyCastle::Crypto::Tls::TlsCloseable*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCloseable"
  constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCloseable* i___Org__BouncyCastle__Crypto__Tls__TlsCloseable() noexcept;

  /// @brief Method GetReceiveLimit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetReceiveLimit();

  /// @brief Method GetSendLimit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetSendLimit();

  /// @brief Method Receive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len, int32_t waitMillis);

  /// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "DatagramTransport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DatagramTransport(DatagramTransport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DatagramTransport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DatagramTransport(DatagramTransport const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DatagramTransport);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DatagramTransport*, "Org.BouncyCastle.Crypto.Tls", "DatagramTransport");
