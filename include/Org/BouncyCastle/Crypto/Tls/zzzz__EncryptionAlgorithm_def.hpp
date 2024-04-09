#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class EncryptionAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm);
// Type: Org.BouncyCastle.Crypto.Tls::EncryptionAlgorithm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::EncryptionAlgorithm*
class CORDL_TYPE EncryptionAlgorithm : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x10fd478, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptionAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionAlgorithm(EncryptionAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionAlgorithm(EncryptionAlgorithm const&) = delete;

  /// @brief Field AES_128_CBC offset 0xffffffff size 0x4
  static constexpr int32_t AES_128_CBC{ static_cast<int32_t>(0x8) };

  /// @brief Field AES_128_CCM offset 0xffffffff size 0x4
  static constexpr int32_t AES_128_CCM{ static_cast<int32_t>(0xf) };

  /// @brief Field AES_128_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t AES_128_CCM_8{ static_cast<int32_t>(0x10) };

  /// @brief Field AES_128_GCM offset 0xffffffff size 0x4
  static constexpr int32_t AES_128_GCM{ static_cast<int32_t>(0xa) };

  /// @brief Field AES_128_OCB_TAGLEN96 offset 0xffffffff size 0x4
  static constexpr int32_t AES_128_OCB_TAGLEN96{ static_cast<int32_t>(0x67) };

  /// @brief Field AES_256_CBC offset 0xffffffff size 0x4
  static constexpr int32_t AES_256_CBC{ static_cast<int32_t>(0x9) };

  /// @brief Field AES_256_CCM offset 0xffffffff size 0x4
  static constexpr int32_t AES_256_CCM{ static_cast<int32_t>(0x11) };

  /// @brief Field AES_256_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t AES_256_CCM_8{ static_cast<int32_t>(0x12) };

  /// @brief Field AES_256_GCM offset 0xffffffff size 0x4
  static constexpr int32_t AES_256_GCM{ static_cast<int32_t>(0xb) };

  /// @brief Field AES_256_OCB_TAGLEN96 offset 0xffffffff size 0x4
  static constexpr int32_t AES_256_OCB_TAGLEN96{ static_cast<int32_t>(0x68) };

  /// @brief Field CAMELLIA_128_CBC offset 0xffffffff size 0x4
  static constexpr int32_t CAMELLIA_128_CBC{ static_cast<int32_t>(0xc) };

  /// @brief Field CAMELLIA_128_GCM offset 0xffffffff size 0x4
  static constexpr int32_t CAMELLIA_128_GCM{ static_cast<int32_t>(0x13) };

  /// @brief Field CAMELLIA_256_CBC offset 0xffffffff size 0x4
  static constexpr int32_t CAMELLIA_256_CBC{ static_cast<int32_t>(0xd) };

  /// @brief Field CAMELLIA_256_GCM offset 0xffffffff size 0x4
  static constexpr int32_t CAMELLIA_256_GCM{ static_cast<int32_t>(0x14) };

  /// @brief Field CHACHA20_POLY1305 offset 0xffffffff size 0x4
  static constexpr int32_t CHACHA20_POLY1305{ static_cast<int32_t>(0x15) };

  /// @brief Field DES40_CBC offset 0xffffffff size 0x4
  static constexpr int32_t DES40_CBC{ static_cast<int32_t>(0x5) };

  /// @brief Field DES_CBC offset 0xffffffff size 0x4
  static constexpr int32_t DES_CBC{ static_cast<int32_t>(0x6) };

  /// @brief Field IDEA_CBC offset 0xffffffff size 0x4
  static constexpr int32_t IDEA_CBC{ static_cast<int32_t>(0x4) };

  /// @brief Field RC2_CBC_40 offset 0xffffffff size 0x4
  static constexpr int32_t RC2_CBC_40{ static_cast<int32_t>(0x3) };

  /// @brief Field RC4_128 offset 0xffffffff size 0x4
  static constexpr int32_t RC4_128{ static_cast<int32_t>(0x2) };

  /// @brief Field RC4_40 offset 0xffffffff size 0x4
  static constexpr int32_t RC4_40{ static_cast<int32_t>(0x1) };

  /// @brief Field SEED_CBC offset 0xffffffff size 0x4
  static constexpr int32_t SEED_CBC{ static_cast<int32_t>(0xe) };

  /// @brief Field NULL offset 0xffffffff size 0x4
  static constexpr int32_t _cordl_NULL{ static_cast<int32_t>(0x0) };

  /// @brief Field cls_3DES_EDE_CBC offset 0xffffffff size 0x4
  static constexpr int32_t cls_3DES_EDE_CBC{ static_cast<int32_t>(0x7) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::EncryptionAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "EncryptionAlgorithm");
