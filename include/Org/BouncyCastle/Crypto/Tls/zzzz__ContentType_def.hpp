#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ContentType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ContentType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ContentType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.ContentType
class CORDL_TYPE ContentType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ContentType* New_ctor();

  /// @brief Method .ctor, addr 0x3317770, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentType(ContentType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentType(ContentType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1205 };

  /// @brief Field alert offset 0xffffffff size 0x1
  static constexpr uint8_t alert{ static_cast<uint8_t>(0x15u) };

  /// @brief Field application_data offset 0xffffffff size 0x1
  static constexpr uint8_t application_data{ static_cast<uint8_t>(0x17u) };

  /// @brief Field change_cipher_spec offset 0xffffffff size 0x1
  static constexpr uint8_t change_cipher_spec{ static_cast<uint8_t>(0x14u) };

  /// @brief Field handshake offset 0xffffffff size 0x1
  static constexpr uint8_t handshake{ static_cast<uint8_t>(0x16u) };

  /// @brief Field heartbeat offset 0xffffffff size 0x1
  static constexpr uint8_t heartbeat{ static_cast<uint8_t>(0x18u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ContentType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ContentType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ContentType*, "Org.BouncyCastle.Crypto.Tls", "ContentType");
