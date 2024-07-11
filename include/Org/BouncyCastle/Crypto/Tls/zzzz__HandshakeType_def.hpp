#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/HandshakeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandshakeType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HandshakeType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HandshakeType);
// Type: Org.BouncyCastle.Crypto.Tls::HandshakeType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::HandshakeType*
class CORDL_TYPE HandshakeType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::HandshakeType* New_ctor();

  /// @brief Method .ctor, addr 0x12027e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandshakeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandshakeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandshakeType(HandshakeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandshakeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandshakeType(HandshakeType const&) = delete;

  /// @brief Field certificate offset 0xffffffff size 0x1
  static constexpr uint8_t certificate{ static_cast<uint8_t>(0xbu) };

  /// @brief Field certificate_request offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_request{ static_cast<uint8_t>(0xdu) };

  /// @brief Field certificate_status offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_status{ static_cast<uint8_t>(0x16u) };

  /// @brief Field certificate_url offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_url{ static_cast<uint8_t>(0x15u) };

  /// @brief Field certificate_verify offset 0xffffffff size 0x1
  static constexpr uint8_t certificate_verify{ static_cast<uint8_t>(0xfu) };

  /// @brief Field client_hello offset 0xffffffff size 0x1
  static constexpr uint8_t client_hello{ static_cast<uint8_t>(0x1u) };

  /// @brief Field client_key_exchange offset 0xffffffff size 0x1
  static constexpr uint8_t client_key_exchange{ static_cast<uint8_t>(0x10u) };

  /// @brief Field finished offset 0xffffffff size 0x1
  static constexpr uint8_t finished{ static_cast<uint8_t>(0x14u) };

  /// @brief Field hello_request offset 0xffffffff size 0x1
  static constexpr uint8_t hello_request{ static_cast<uint8_t>(0x0u) };

  /// @brief Field hello_verify_request offset 0xffffffff size 0x1
  static constexpr uint8_t hello_verify_request{ static_cast<uint8_t>(0x3u) };

  /// @brief Field server_hello offset 0xffffffff size 0x1
  static constexpr uint8_t server_hello{ static_cast<uint8_t>(0x2u) };

  /// @brief Field server_hello_done offset 0xffffffff size 0x1
  static constexpr uint8_t server_hello_done{ static_cast<uint8_t>(0xeu) };

  /// @brief Field server_key_exchange offset 0xffffffff size 0x1
  static constexpr uint8_t server_key_exchange{ static_cast<uint8_t>(0xcu) };

  /// @brief Field session_ticket offset 0xffffffff size 0x1
  static constexpr uint8_t session_ticket{ static_cast<uint8_t>(0x4u) };

  /// @brief Field supplemental_data offset 0xffffffff size 0x1
  static constexpr uint8_t supplemental_data{ static_cast<uint8_t>(0x17u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HandshakeType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HandshakeType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HandshakeType*, "Org.BouncyCastle.Crypto.Tls", "HandshakeType");
