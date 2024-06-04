#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SignatureAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm);
// Type: Org.BouncyCastle.Crypto.Tls::SignatureAlgorithm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SignatureAlgorithm*
class CORDL_TYPE SignatureAlgorithm : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x11fb6c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureAlgorithm(SignatureAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureAlgorithm(SignatureAlgorithm const&) = delete;

  /// @brief Field anonymous offset 0xffffffff size 0x1
  static constexpr uint8_t anonymous{ static_cast<uint8_t>(0x0u) };

  /// @brief Field dsa offset 0xffffffff size 0x1
  static constexpr uint8_t dsa{ static_cast<uint8_t>(0x2u) };

  /// @brief Field ecdsa offset 0xffffffff size 0x1
  static constexpr uint8_t ecdsa{ static_cast<uint8_t>(0x3u) };

  /// @brief Field rsa offset 0xffffffff size 0x1
  static constexpr uint8_t rsa{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "SignatureAlgorithm");
