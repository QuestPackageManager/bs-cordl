#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECPointFormat)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECPointFormat;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ECPointFormat);
// Type: Org.BouncyCastle.Crypto.Tls::ECPointFormat
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ECPointFormat*
class CORDL_TYPE ECPointFormat : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ECPointFormat* New_ctor();

  /// @brief Method .ctor, addr 0x11f0b94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECPointFormat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECPointFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECPointFormat(ECPointFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECPointFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECPointFormat(ECPointFormat const&) = delete;

  /// @brief Field ansiX962_compressed_char2 offset 0xffffffff size 0x1
  static constexpr uint8_t ansiX962_compressed_char2{ static_cast<uint8_t>(0x2u) };

  /// @brief Field ansiX962_compressed_prime offset 0xffffffff size 0x1
  static constexpr uint8_t ansiX962_compressed_prime{ static_cast<uint8_t>(0x1u) };

  /// @brief Field uncompressed offset 0xffffffff size 0x1
  static constexpr uint8_t uncompressed{ static_cast<uint8_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ECPointFormat, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ECPointFormat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ECPointFormat*, "Org.BouncyCastle.Crypto.Tls", "ECPointFormat");
