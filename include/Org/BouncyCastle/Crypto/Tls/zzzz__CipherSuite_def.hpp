#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CipherSuite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CipherSuite)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CipherSuite;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CipherSuite);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CipherSuite
class CORDL_TYPE CipherSuite : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsScsv, addr 0x23e831c, size 0x20, virtual false, abstract: false, final false
  static inline bool IsScsv(int32_t cipherSuite);

  static inline ::Org::BouncyCastle::Crypto::Tls::CipherSuite* New_ctor();

  /// @brief Method .ctor, addr 0x23e833c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherSuite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CipherSuite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherSuite(CipherSuite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherSuite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherSuite(CipherSuite const&) = delete;

  /// @brief Field DRAFT_TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_DHE_PSK_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xccad) };

  /// @brief Field DRAFT_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xccaa) };

  /// @brief Field DRAFT_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xcca9) };

  /// @brief Field DRAFT_TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xccac) };

  /// @brief Field DRAFT_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xcca8) };

  /// @brief Field DRAFT_TLS_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_PSK_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xccab) };

  /// @brief Field DRAFT_TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t DRAFT_TLS_RSA_PSK_WITH_CHACHA20_POLY1305_SHA256{ static_cast<int32_t>(0xccae) };

  /// @brief Field TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA{ static_cast<int32_t>(0x11) };

  /// @brief Field TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x13) };

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x32) };

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0x40) };

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xa2) };

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x38) };

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_AES_256_CBC_SHA256{ static_cast<int32_t>(0x6a) };

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xa3) };

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA{ static_cast<int32_t>(0x44) };

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xbd) };

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc080) };

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA{ static_cast<int32_t>(0x87) };

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256{ static_cast<int32_t>(0xc3) };

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc081) };

  /// @brief Field TLS_DHE_DSS_WITH_DES_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_DES_CBC_SHA{ static_cast<int32_t>(0x12) };

  /// @brief Field TLS_DHE_DSS_WITH_SEED_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_DSS_WITH_SEED_CBC_SHA{ static_cast<int32_t>(0x99) };

  /// @brief Field TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x8f) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x90) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xb2) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_128_CCM{ static_cast<int32_t>(0xc0a6) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xaa) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x91) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xb3) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_256_CCM{ static_cast<int32_t>(0xc0a7) };

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xab) };

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc096) };

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc090) };

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc097) };

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc091) };

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_NULL_SHA{ static_cast<int32_t>(0x2d) };

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_NULL_SHA256{ static_cast<int32_t>(0xb4) };

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_NULL_SHA384{ static_cast<int32_t>(0xb5) };

  /// @brief Field TLS_DHE_PSK_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_PSK_WITH_RC4_128_SHA{ static_cast<int32_t>(0x8e) };

  /// @brief Field TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA{ static_cast<int32_t>(0x14) };

  /// @brief Field TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x16) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x33) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0x67) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_128_CCM{ static_cast<int32_t>(0xc09e) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_128_CCM_8{ static_cast<int32_t>(0xc0a2) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0x9e) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x39) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_256_CBC_SHA256{ static_cast<int32_t>(0x6b) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_256_CCM{ static_cast<int32_t>(0xc09f) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_256_CCM_8{ static_cast<int32_t>(0xc0a3) };

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0x9f) };

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA{ static_cast<int32_t>(0x45) };

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xbe) };

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc07c) };

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA{ static_cast<int32_t>(0x88) };

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256{ static_cast<int32_t>(0xc4) };

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc07d) };

  /// @brief Field TLS_DHE_RSA_WITH_DES_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_DES_CBC_SHA{ static_cast<int32_t>(0x15) };

  /// @brief Field TLS_DHE_RSA_WITH_SEED_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DHE_RSA_WITH_SEED_CBC_SHA{ static_cast<int32_t>(0x9a) };

  /// @brief Field TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA{ static_cast<int32_t>(0xb) };

  /// @brief Field TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xd) };

  /// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x30) };

  /// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0x3e) };

  /// @brief Field TLS_DH_DSS_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xa4) };

  /// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x36) };

  /// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_AES_256_CBC_SHA256{ static_cast<int32_t>(0x68) };

  /// @brief Field TLS_DH_DSS_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xa5) };

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA{ static_cast<int32_t>(0x42) };

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xbb) };

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc082) };

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA{ static_cast<int32_t>(0x85) };

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256{ static_cast<int32_t>(0xc1) };

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc083) };

  /// @brief Field TLS_DH_DSS_WITH_DES_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_DES_CBC_SHA{ static_cast<int32_t>(0xc) };

  /// @brief Field TLS_DH_DSS_WITH_SEED_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_DSS_WITH_SEED_CBC_SHA{ static_cast<int32_t>(0x97) };

  /// @brief Field TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA{ static_cast<int32_t>(0xe) };

  /// @brief Field TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x10) };

  /// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x31) };

  /// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0x3f) };

  /// @brief Field TLS_DH_RSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xa0) };

  /// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x37) };

  /// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_AES_256_CBC_SHA256{ static_cast<int32_t>(0x69) };

  /// @brief Field TLS_DH_RSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xa1) };

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA{ static_cast<int32_t>(0x43) };

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xbc) };

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc07e) };

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA{ static_cast<int32_t>(0x86) };

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256{ static_cast<int32_t>(0xc2) };

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc07f) };

  /// @brief Field TLS_DH_RSA_WITH_DES_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_DES_CBC_SHA{ static_cast<int32_t>(0xf) };

  /// @brief Field TLS_DH_RSA_WITH_SEED_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_RSA_WITH_SEED_CBC_SHA{ static_cast<int32_t>(0x98) };

  /// @brief Field TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA{ static_cast<int32_t>(0x19) };

  /// @brief Field TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_EXPORT_WITH_RC4_40_MD5{ static_cast<int32_t>(0x17) };

  /// @brief Field TLS_DH_anon_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x1b) };

  /// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x34) };

  /// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0x6c) };

  /// @brief Field TLS_DH_anon_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xa6) };

  /// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x3a) };

  /// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_AES_256_CBC_SHA256{ static_cast<int32_t>(0x6d) };

  /// @brief Field TLS_DH_anon_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xa7) };

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA{ static_cast<int32_t>(0x46) };

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xbf) };

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc084) };

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA{ static_cast<int32_t>(0x89) };

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256{ static_cast<int32_t>(0xc5) };

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc085) };

  /// @brief Field TLS_DH_anon_WITH_DES_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_DES_CBC_SHA{ static_cast<int32_t>(0x1a) };

  /// @brief Field TLS_DH_anon_WITH_RC4_128_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_RC4_128_MD5{ static_cast<int32_t>(0x18) };

  /// @brief Field TLS_DH_anon_WITH_SEED_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_DH_anon_WITH_SEED_CBC_SHA{ static_cast<int32_t>(0x9b) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc008) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc009) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xc023) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_128_CCM{ static_cast<int32_t>(0xc0ac) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8{ static_cast<int32_t>(0xc0ae) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xc02b) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc00a) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xc024) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_256_CCM{ static_cast<int32_t>(0xc0ad) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8{ static_cast<int32_t>(0xc0af) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xc02c) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc072) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc086) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc073) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc087) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_NULL_SHA{ static_cast<int32_t>(0xc006) };

  /// @brief Field TLS_ECDHE_ECDSA_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_ECDSA_WITH_RC4_128_SHA{ static_cast<int32_t>(0xc007) };

  /// @brief Field TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc034) };

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc035) };

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xc037) };

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc036) };

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xc038) };

  /// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc09a) };

  /// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc09b) };

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_NULL_SHA{ static_cast<int32_t>(0xc039) };

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_NULL_SHA256{ static_cast<int32_t>(0xc03a) };

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_NULL_SHA384{ static_cast<int32_t>(0xc03b) };

  /// @brief Field TLS_ECDHE_PSK_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_PSK_WITH_RC4_128_SHA{ static_cast<int32_t>(0xc033) };

  /// @brief Field TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc012) };

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc013) };

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xc027) };

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xc02f) };

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc014) };

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xc028) };

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xc030) };

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc076) };

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc08a) };

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc077) };

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc08b) };

  /// @brief Field TLS_ECDHE_RSA_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_NULL_SHA{ static_cast<int32_t>(0xc010) };

  /// @brief Field TLS_ECDHE_RSA_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDHE_RSA_WITH_RC4_128_SHA{ static_cast<int32_t>(0xc011) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc003) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc004) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xc025) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xc02d) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc005) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xc026) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xc02e) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc074) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc088) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc075) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc089) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_NULL_SHA{ static_cast<int32_t>(0xc001) };

  /// @brief Field TLS_ECDH_ECDSA_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_ECDSA_WITH_RC4_128_SHA{ static_cast<int32_t>(0xc002) };

  /// @brief Field TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc00d) };

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc00e) };

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xc029) };

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xc031) };

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc00f) };

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xc02a) };

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xc032) };

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc078) };

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc08c) };

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc079) };

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc08d) };

  /// @brief Field TLS_ECDH_RSA_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_NULL_SHA{ static_cast<int32_t>(0xc00b) };

  /// @brief Field TLS_ECDH_RSA_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_RSA_WITH_RC4_128_SHA{ static_cast<int32_t>(0xc00c) };

  /// @brief Field TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc017) };

  /// @brief Field TLS_ECDH_anon_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_anon_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc018) };

  /// @brief Field TLS_ECDH_anon_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_anon_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc019) };

  /// @brief Field TLS_ECDH_anon_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_anon_WITH_NULL_SHA{ static_cast<int32_t>(0xc015) };

  /// @brief Field TLS_ECDH_anon_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_ECDH_anon_WITH_RC4_128_SHA{ static_cast<int32_t>(0xc016) };

  /// @brief Field TLS_EMPTY_RENEGOTIATION_INFO_SCSV offset 0xffffffff size 0x4
  static constexpr int32_t TLS_EMPTY_RENEGOTIATION_INFO_SCSV{ static_cast<int32_t>(0xff) };

  /// @brief Field TLS_FALLBACK_SCSV offset 0xffffffff size 0x4
  static constexpr int32_t TLS_FALLBACK_SCSV{ static_cast<int32_t>(0x5600) };

  /// @brief Field TLS_NULL_WITH_NULL_NULL offset 0xffffffff size 0x4
  static constexpr int32_t TLS_NULL_WITH_NULL_NULL{ static_cast<int32_t>(0x0) };

  /// @brief Field TLS_PSK_DHE_WITH_AES_128_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_DHE_WITH_AES_128_CCM_8{ static_cast<int32_t>(0xc0aa) };

  /// @brief Field TLS_PSK_DHE_WITH_AES_256_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_DHE_WITH_AES_256_CCM_8{ static_cast<int32_t>(0xc0ab) };

  /// @brief Field TLS_PSK_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x8b) };

  /// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x8c) };

  /// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xae) };

  /// @brief Field TLS_PSK_WITH_AES_128_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_128_CCM{ static_cast<int32_t>(0xc0a4) };

  /// @brief Field TLS_PSK_WITH_AES_128_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_128_CCM_8{ static_cast<int32_t>(0xc0a8) };

  /// @brief Field TLS_PSK_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xa8) };

  /// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x8d) };

  /// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xaf) };

  /// @brief Field TLS_PSK_WITH_AES_256_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_256_CCM{ static_cast<int32_t>(0xc0a5) };

  /// @brief Field TLS_PSK_WITH_AES_256_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_256_CCM_8{ static_cast<int32_t>(0xc0a9) };

  /// @brief Field TLS_PSK_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xa9) };

  /// @brief Field TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc094) };

  /// @brief Field TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc08e) };

  /// @brief Field TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc095) };

  /// @brief Field TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc08f) };

  /// @brief Field TLS_PSK_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_NULL_SHA{ static_cast<int32_t>(0x2c) };

  /// @brief Field TLS_PSK_WITH_NULL_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_NULL_SHA256{ static_cast<int32_t>(0xb0) };

  /// @brief Field TLS_PSK_WITH_NULL_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_NULL_SHA384{ static_cast<int32_t>(0xb1) };

  /// @brief Field TLS_PSK_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_PSK_WITH_RC4_128_SHA{ static_cast<int32_t>(0x8a) };

  /// @brief Field TLS_RSA_EXPORT_WITH_DES40_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_EXPORT_WITH_DES40_CBC_SHA{ static_cast<int32_t>(0x8) };

  /// @brief Field TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5{ static_cast<int32_t>(0x6) };

  /// @brief Field TLS_RSA_EXPORT_WITH_RC4_40_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_EXPORT_WITH_RC4_40_MD5{ static_cast<int32_t>(0x3) };

  /// @brief Field TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0x93) };

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x94) };

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0xb6) };

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0xac) };

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x95) };

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_AES_256_CBC_SHA384{ static_cast<int32_t>(0xb7) };

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0xad) };

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xc098) };

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc092) };

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384{ static_cast<int32_t>(0xc099) };

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc093) };

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_NULL_SHA{ static_cast<int32_t>(0x2e) };

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_NULL_SHA256{ static_cast<int32_t>(0xb8) };

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_NULL_SHA384{ static_cast<int32_t>(0xb9) };

  /// @brief Field TLS_RSA_PSK_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_PSK_WITH_RC4_128_SHA{ static_cast<int32_t>(0x92) };

  /// @brief Field TLS_RSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xa) };

  /// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0x2f) };

  /// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_128_CBC_SHA256{ static_cast<int32_t>(0x3c) };

  /// @brief Field TLS_RSA_WITH_AES_128_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_128_CCM{ static_cast<int32_t>(0xc09c) };

  /// @brief Field TLS_RSA_WITH_AES_128_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_128_CCM_8{ static_cast<int32_t>(0xc0a0) };

  /// @brief Field TLS_RSA_WITH_AES_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_128_GCM_SHA256{ static_cast<int32_t>(0x9c) };

  /// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0x35) };

  /// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_256_CBC_SHA256{ static_cast<int32_t>(0x3d) };

  /// @brief Field TLS_RSA_WITH_AES_256_CCM offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_256_CCM{ static_cast<int32_t>(0xc09d) };

  /// @brief Field TLS_RSA_WITH_AES_256_CCM_8 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_256_CCM_8{ static_cast<int32_t>(0xc0a1) };

  /// @brief Field TLS_RSA_WITH_AES_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_AES_256_GCM_SHA384{ static_cast<int32_t>(0x9d) };

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_CAMELLIA_128_CBC_SHA{ static_cast<int32_t>(0x41) };

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256{ static_cast<int32_t>(0xba) };

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256{ static_cast<int32_t>(0xc07a) };

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_CAMELLIA_256_CBC_SHA{ static_cast<int32_t>(0x84) };

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256{ static_cast<int32_t>(0xc0) };

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384{ static_cast<int32_t>(0xc07b) };

  /// @brief Field TLS_RSA_WITH_DES_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_DES_CBC_SHA{ static_cast<int32_t>(0x9) };

  /// @brief Field TLS_RSA_WITH_IDEA_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_IDEA_CBC_SHA{ static_cast<int32_t>(0x7) };

  /// @brief Field TLS_RSA_WITH_NULL_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_NULL_MD5{ static_cast<int32_t>(0x1) };

  /// @brief Field TLS_RSA_WITH_NULL_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_NULL_SHA{ static_cast<int32_t>(0x2) };

  /// @brief Field TLS_RSA_WITH_NULL_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_NULL_SHA256{ static_cast<int32_t>(0x3b) };

  /// @brief Field TLS_RSA_WITH_RC4_128_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_RC4_128_MD5{ static_cast<int32_t>(0x4) };

  /// @brief Field TLS_RSA_WITH_RC4_128_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_RC4_128_SHA{ static_cast<int32_t>(0x5) };

  /// @brief Field TLS_RSA_WITH_SEED_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_RSA_WITH_SEED_CBC_SHA{ static_cast<int32_t>(0x96) };

  /// @brief Field TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc01c) };

  /// @brief Field TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc01f) };

  /// @brief Field TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc022) };

  /// @brief Field TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc01b) };

  /// @brief Field TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc01e) };

  /// @brief Field TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc021) };

  /// @brief Field TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA{ static_cast<int32_t>(0xc01a) };

  /// @brief Field TLS_SRP_SHA_WITH_AES_128_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_WITH_AES_128_CBC_SHA{ static_cast<int32_t>(0xc01d) };

  /// @brief Field TLS_SRP_SHA_WITH_AES_256_CBC_SHA offset 0xffffffff size 0x4
  static constexpr int32_t TLS_SRP_SHA_WITH_AES_256_CBC_SHA{ static_cast<int32_t>(0xc020) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1197 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CipherSuite, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CipherSuite);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CipherSuite*, "Org.BouncyCastle.Crypto.Tls", "CipherSuite");
