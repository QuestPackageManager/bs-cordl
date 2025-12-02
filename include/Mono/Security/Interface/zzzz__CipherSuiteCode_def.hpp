#pragma once
// IWYU pragma private; include "Mono/Security/Interface/CipherSuiteCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CipherSuiteCode)
// Forward declare root types
namespace Mono::Security::Interface {
struct CipherSuiteCode;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::CipherSuiteCode);
// Dependencies
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: Mono.Security.Interface.CipherSuiteCode
struct CORDL_TYPE CipherSuiteCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __CipherSuiteCode_Unwrapped
  enum struct __CipherSuiteCode_Unwrapped : uint16_t {
    __E_TLS_NULL_WITH_NULL_NULL = static_cast<uint16_t>(0x0u),
    __E_TLS_RSA_WITH_NULL_MD5 = static_cast<uint16_t>(0x1u),
    __E_TLS_RSA_WITH_NULL_SHA = static_cast<uint16_t>(0x2u),
    __E_TLS_RSA_EXPORT_WITH_RC4_40_MD5 = static_cast<uint16_t>(0x3u),
    __E_TLS_RSA_WITH_RC4_128_MD5 = static_cast<uint16_t>(0x4u),
    __E_TLS_RSA_WITH_RC4_128_SHA = static_cast<uint16_t>(0x5u),
    __E_TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 = static_cast<uint16_t>(0x6u),
    __E_TLS_RSA_WITH_IDEA_CBC_SHA = static_cast<uint16_t>(0x7u),
    __E_TLS_RSA_EXPORT_WITH_DES40_CBC_SHA = static_cast<uint16_t>(0x8u),
    __E_TLS_RSA_WITH_DES_CBC_SHA = static_cast<uint16_t>(0x9u),
    __E_TLS_RSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xau),
    __E_TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA = static_cast<uint16_t>(0xbu),
    __E_TLS_DH_DSS_WITH_DES_CBC_SHA = static_cast<uint16_t>(0xcu),
    __E_TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xdu),
    __E_TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA = static_cast<uint16_t>(0xeu),
    __E_TLS_DH_RSA_WITH_DES_CBC_SHA = static_cast<uint16_t>(0xfu),
    __E_TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x10u),
    __E_TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = static_cast<uint16_t>(0x11u),
    __E_TLS_DHE_DSS_WITH_DES_CBC_SHA = static_cast<uint16_t>(0x12u),
    __E_TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x13u),
    __E_TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = static_cast<uint16_t>(0x14u),
    __E_TLS_DHE_RSA_WITH_DES_CBC_SHA = static_cast<uint16_t>(0x15u),
    __E_TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x16u),
    __E_TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 = static_cast<uint16_t>(0x17u),
    __E_TLS_DH_anon_WITH_RC4_128_MD5 = static_cast<uint16_t>(0x18u),
    __E_TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA = static_cast<uint16_t>(0x19u),
    __E_TLS_DH_anon_WITH_DES_CBC_SHA = static_cast<uint16_t>(0x1au),
    __E_TLS_DH_anon_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x1bu),
    __E_TLS_RSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x2fu),
    __E_TLS_DH_DSS_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x30u),
    __E_TLS_DH_RSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x31u),
    __E_TLS_DHE_DSS_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x32u),
    __E_TLS_DHE_RSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x33u),
    __E_TLS_DH_anon_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x34u),
    __E_TLS_RSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x35u),
    __E_TLS_DH_DSS_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x36u),
    __E_TLS_DH_RSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x37u),
    __E_TLS_DHE_DSS_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x38u),
    __E_TLS_DHE_RSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x39u),
    __E_TLS_DH_anon_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x3au),
    __E_TLS_RSA_WITH_CAMELLIA_128_CBC_SHA = static_cast<uint16_t>(0x41u),
    __E_TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA = static_cast<uint16_t>(0x42u),
    __E_TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA = static_cast<uint16_t>(0x43u),
    __E_TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA = static_cast<uint16_t>(0x44u),
    __E_TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA = static_cast<uint16_t>(0x45u),
    __E_TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA = static_cast<uint16_t>(0x46u),
    __E_TLS_RSA_WITH_CAMELLIA_256_CBC_SHA = static_cast<uint16_t>(0x84u),
    __E_TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA = static_cast<uint16_t>(0x85u),
    __E_TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA = static_cast<uint16_t>(0x86u),
    __E_TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA = static_cast<uint16_t>(0x87u),
    __E_TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA = static_cast<uint16_t>(0x88u),
    __E_TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA = static_cast<uint16_t>(0x89u),
    __E_TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xbau),
    __E_TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xbbu),
    __E_TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xbcu),
    __E_TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xbdu),
    __E_TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xbeu),
    __E_TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xbfu),
    __E_TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 = static_cast<uint16_t>(0xc0u),
    __E_TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 = static_cast<uint16_t>(0xc1u),
    __E_TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 = static_cast<uint16_t>(0xc2u),
    __E_TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 = static_cast<uint16_t>(0xc3u),
    __E_TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 = static_cast<uint16_t>(0xc4u),
    __E_TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 = static_cast<uint16_t>(0xc5u),
    __E_TLS_RSA_WITH_SEED_CBC_SHA = static_cast<uint16_t>(0x96u),
    __E_TLS_DH_DSS_WITH_SEED_CBC_SHA = static_cast<uint16_t>(0x97u),
    __E_TLS_DH_RSA_WITH_SEED_CBC_SHA = static_cast<uint16_t>(0x98u),
    __E_TLS_DHE_DSS_WITH_SEED_CBC_SHA = static_cast<uint16_t>(0x99u),
    __E_TLS_DHE_RSA_WITH_SEED_CBC_SHA = static_cast<uint16_t>(0x9au),
    __E_TLS_DH_anon_WITH_SEED_CBC_SHA = static_cast<uint16_t>(0x9bu),
    __E_TLS_PSK_WITH_RC4_128_SHA = static_cast<uint16_t>(0x8au),
    __E_TLS_PSK_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x8bu),
    __E_TLS_PSK_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x8cu),
    __E_TLS_PSK_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x8du),
    __E_TLS_DHE_PSK_WITH_RC4_128_SHA = static_cast<uint16_t>(0x8eu),
    __E_TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x8fu),
    __E_TLS_DHE_PSK_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x90u),
    __E_TLS_DHE_PSK_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x91u),
    __E_TLS_RSA_PSK_WITH_RC4_128_SHA = static_cast<uint16_t>(0x92u),
    __E_TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0x93u),
    __E_TLS_RSA_PSK_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0x94u),
    __E_TLS_RSA_PSK_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0x95u),
    __E_TLS_ECDH_ECDSA_WITH_NULL_SHA = static_cast<uint16_t>(0xc001u),
    __E_TLS_ECDH_ECDSA_WITH_RC4_128_SHA = static_cast<uint16_t>(0xc002u),
    __E_TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc003u),
    __E_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc004u),
    __E_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc005u),
    __E_TLS_ECDHE_ECDSA_WITH_NULL_SHA = static_cast<uint16_t>(0xc006u),
    __E_TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = static_cast<uint16_t>(0xc007u),
    __E_TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc008u),
    __E_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc009u),
    __E_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc00au),
    __E_TLS_ECDH_RSA_WITH_NULL_SHA = static_cast<uint16_t>(0xc00bu),
    __E_TLS_ECDH_RSA_WITH_RC4_128_SHA = static_cast<uint16_t>(0xc00cu),
    __E_TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc00du),
    __E_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc00eu),
    __E_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc00fu),
    __E_TLS_ECDHE_RSA_WITH_NULL_SHA = static_cast<uint16_t>(0xc010u),
    __E_TLS_ECDHE_RSA_WITH_RC4_128_SHA = static_cast<uint16_t>(0xc011u),
    __E_TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc012u),
    __E_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc013u),
    __E_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc014u),
    __E_TLS_ECDH_anon_WITH_NULL_SHA = static_cast<uint16_t>(0xc015u),
    __E_TLS_ECDH_anon_WITH_RC4_128_SHA = static_cast<uint16_t>(0xc016u),
    __E_TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc017u),
    __E_TLS_ECDH_anon_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc018u),
    __E_TLS_ECDH_anon_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc019u),
    __E_TLS_PSK_WITH_NULL_SHA = static_cast<uint16_t>(0x2cu),
    __E_TLS_DHE_PSK_WITH_NULL_SHA = static_cast<uint16_t>(0x2du),
    __E_TLS_RSA_PSK_WITH_NULL_SHA = static_cast<uint16_t>(0x2eu),
    __E_TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc01au),
    __E_TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc01bu),
    __E_TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc01cu),
    __E_TLS_SRP_SHA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc01du),
    __E_TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc01eu),
    __E_TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc01fu),
    __E_TLS_SRP_SHA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc020u),
    __E_TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc021u),
    __E_TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc022u),
    __E_TLS_RSA_WITH_NULL_SHA256 = static_cast<uint16_t>(0x3bu),
    __E_TLS_RSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0x3cu),
    __E_TLS_RSA_WITH_AES_256_CBC_SHA256 = static_cast<uint16_t>(0x3du),
    __E_TLS_DH_DSS_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0x3eu),
    __E_TLS_DH_RSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0x3fu),
    __E_TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0x40u),
    __E_TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0x67u),
    __E_TLS_DH_DSS_WITH_AES_256_CBC_SHA256 = static_cast<uint16_t>(0x68u),
    __E_TLS_DH_RSA_WITH_AES_256_CBC_SHA256 = static_cast<uint16_t>(0x69u),
    __E_TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = static_cast<uint16_t>(0x6au),
    __E_TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = static_cast<uint16_t>(0x6bu),
    __E_TLS_DH_anon_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0x6cu),
    __E_TLS_DH_anon_WITH_AES_256_CBC_SHA256 = static_cast<uint16_t>(0x6du),
    __E_TLS_RSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0x9cu),
    __E_TLS_RSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0x9du),
    __E_TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0x9eu),
    __E_TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0x9fu),
    __E_TLS_DH_RSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xa0u),
    __E_TLS_DH_RSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xa1u),
    __E_TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xa2u),
    __E_TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xa3u),
    __E_TLS_DH_DSS_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xa4u),
    __E_TLS_DH_DSS_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xa5u),
    __E_TLS_DH_anon_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xa6u),
    __E_TLS_DH_anon_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xa7u),
    __E_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xc023u),
    __E_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xc024u),
    __E_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xc025u),
    __E_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xc026u),
    __E_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xc027u),
    __E_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xc028u),
    __E_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xc029u),
    __E_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xc02au),
    __E_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xc02bu),
    __E_TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xc02cu),
    __E_TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xc02du),
    __E_TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xc02eu),
    __E_TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xc02fu),
    __E_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xc030u),
    __E_TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xc031u),
    __E_TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xc032u),
    __E_TLS_PSK_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xa8u),
    __E_TLS_PSK_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xa9u),
    __E_TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xaau),
    __E_TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xabu),
    __E_TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 = static_cast<uint16_t>(0xacu),
    __E_TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 = static_cast<uint16_t>(0xadu),
    __E_TLS_PSK_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xaeu),
    __E_TLS_PSK_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xafu),
    __E_TLS_PSK_WITH_NULL_SHA256 = static_cast<uint16_t>(0xb0u),
    __E_TLS_PSK_WITH_NULL_SHA384 = static_cast<uint16_t>(0xb1u),
    __E_TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xb2u),
    __E_TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xb3u),
    __E_TLS_DHE_PSK_WITH_NULL_SHA256 = static_cast<uint16_t>(0xb4u),
    __E_TLS_DHE_PSK_WITH_NULL_SHA384 = static_cast<uint16_t>(0xb5u),
    __E_TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xb6u),
    __E_TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xb7u),
    __E_TLS_RSA_PSK_WITH_NULL_SHA256 = static_cast<uint16_t>(0xb8u),
    __E_TLS_RSA_PSK_WITH_NULL_SHA384 = static_cast<uint16_t>(0xb9u),
    __E_TLS_ECDHE_PSK_WITH_RC4_128_SHA = static_cast<uint16_t>(0xc033u),
    __E_TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA = static_cast<uint16_t>(0xc034u),
    __E_TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA = static_cast<uint16_t>(0xc035u),
    __E_TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA = static_cast<uint16_t>(0xc036u),
    __E_TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 = static_cast<uint16_t>(0xc037u),
    __E_TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 = static_cast<uint16_t>(0xc038u),
    __E_TLS_ECDHE_PSK_WITH_NULL_SHA = static_cast<uint16_t>(0xc039u),
    __E_TLS_ECDHE_PSK_WITH_NULL_SHA256 = static_cast<uint16_t>(0xc03au),
    __E_TLS_ECDHE_PSK_WITH_NULL_SHA384 = static_cast<uint16_t>(0xc03bu),
    __E_TLS_EMPTY_RENEGOTIATION_INFO_SCSV = static_cast<uint16_t>(0xffu),
    __E_TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc072u),
    __E_TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc073u),
    __E_TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc074u),
    __E_TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc075u),
    __E_TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc076u),
    __E_TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc077u),
    __E_TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc078u),
    __E_TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc079u),
    __E_TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc07au),
    __E_TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc07bu),
    __E_TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc07cu),
    __E_TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc07du),
    __E_TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc07eu),
    __E_TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc07fu),
    __E_TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc080u),
    __E_TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc081u),
    __E_TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc082u),
    __E_TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc083u),
    __E_TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc084u),
    __E_TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc085u),
    __E_TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc086u),
    __E_TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc087u),
    __E_TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc088u),
    __E_TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc089u),
    __E_TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc08au),
    __E_TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc08bu),
    __E_TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc08cu),
    __E_TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc08du),
    __E_TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc08eu),
    __E_TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc08fu),
    __E_TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc090u),
    __E_TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc091u),
    __E_TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 = static_cast<uint16_t>(0xc092u),
    __E_TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 = static_cast<uint16_t>(0xc093u),
    __E_TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc094u),
    __E_TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc095u),
    __E_TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc096u),
    __E_TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc097u),
    __E_TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc098u),
    __E_TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc099u),
    __E_TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 = static_cast<uint16_t>(0xc09au),
    __E_TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 = static_cast<uint16_t>(0xc09bu),
    __E_TLS_RSA_WITH_AES_128_CCM = static_cast<uint16_t>(0xc09cu),
    __E_TLS_RSA_WITH_AES_256_CCM = static_cast<uint16_t>(0xc09du),
    __E_TLS_DHE_RSA_WITH_AES_128_CCM = static_cast<uint16_t>(0xc09eu),
    __E_TLS_DHE_RSA_WITH_AES_256_CCM = static_cast<uint16_t>(0xc09fu),
    __E_TLS_RSA_WITH_AES_128_CCM_8 = static_cast<uint16_t>(0xc0a0u),
    __E_TLS_RSA_WITH_AES_256_CCM_8 = static_cast<uint16_t>(0xc0a1u),
    __E_TLS_DHE_RSA_WITH_AES_128_CCM_8 = static_cast<uint16_t>(0xc0a2u),
    __E_TLS_DHE_RSA_WITH_AES_256_CCM_8 = static_cast<uint16_t>(0xc0a3u),
    __E_TLS_PSK_WITH_AES_128_CCM = static_cast<uint16_t>(0xc0a4u),
    __E_TLS_PSK_WITH_AES_256_CCM = static_cast<uint16_t>(0xc0a5u),
    __E_TLS_DHE_PSK_WITH_AES_128_CCM = static_cast<uint16_t>(0xc0a6u),
    __E_TLS_DHE_PSK_WITH_AES_256_CCM = static_cast<uint16_t>(0xc0a7u),
    __E_TLS_PSK_WITH_AES_128_CCM_8 = static_cast<uint16_t>(0xc0a8u),
    __E_TLS_PSK_WITH_AES_256_CCM_8 = static_cast<uint16_t>(0xc0a9u),
    __E_TLS_PSK_DHE_WITH_AES_128_CCM_8 = static_cast<uint16_t>(0xc0aau),
    __E_TLS_PSK_DHE_WITH_AES_256_CCM_8 = static_cast<uint16_t>(0xc0abu),
    __E_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = static_cast<uint16_t>(0xcc13u),
    __E_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = static_cast<uint16_t>(0xcc14u),
    __E_TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = static_cast<uint16_t>(0xcc15u),
    __E_TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe410u),
    __E_TLS_RSA_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe411u),
    __E_TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe412u),
    __E_TLS_ECDHE_RSA_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe413u),
    __E_TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe414u),
    __E_TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe415u),
    __E_TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe416u),
    __E_TLS_PSK_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe417u),
    __E_TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe418u),
    __E_TLS_ECDHE_PSK_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe419u),
    __E_TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe41au),
    __E_TLS_RSA_PSK_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe41bu),
    __E_TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe41cu),
    __E_TLS_DHE_PSK_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe41du),
    __E_TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 = static_cast<uint16_t>(0xe41eu),
    __E_TLS_DHE_RSA_WITH_SALSA20_SHA1 = static_cast<uint16_t>(0xe41fu),
    __E_TLS_FALLBACK_SCSV = static_cast<uint16_t>(0x5600u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CipherSuiteCode_Unwrapped() const noexcept {
    return static_cast<__CipherSuiteCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherSuiteCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CipherSuiteCode(uint16_t value__) noexcept;

  /// @brief Field TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA value: U16(17)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA value: U16(19)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA value: U16(50)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 value: U16(64)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 value: U16(162)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA value: U16(56)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 value: U16(106)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 value: U16(163)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA value: U16(68)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 value: U16(189)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49280)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA value: U16(135)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 value: U16(195)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49281)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DHE_DSS_WITH_DES_CBC_SHA value: U16(18)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_SEED_CBC_SHA value: U16(153)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA value: U16(143)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA value: U16(144)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 value: U16(178)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CCM value: U16(49318)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CCM;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 value: U16(170)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA value: U16(145)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 value: U16(179)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CCM value: U16(49319)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CCM;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 value: U16(171)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49302)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49296)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49303)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49297)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 value: U16(58396)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA value: U16(45)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA256 value: U16(180)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA384 value: U16(181)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_RC4_128_SHA value: U16(142)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_SALSA20_SHA1 value: U16(58397)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA value: U16(20)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA value: U16(22)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA value: U16(51)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 value: U16(103)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM value: U16(49310)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CCM;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM_8 value: U16(49314)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CCM_8;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 value: U16(158)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA value: U16(57)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 value: U16(107)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM value: U16(49311)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CCM;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM_8 value: U16(49315)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CCM_8;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 value: U16(159)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA value: U16(69)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(190)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49276)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA value: U16(136)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 value: U16(196)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49277)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 value: U16(52245)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_DES_CBC_SHA value: U16(21)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 value: U16(58398)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_DHE_RSA_WITH_SALSA20_SHA1 value: U16(58399)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_DHE_RSA_WITH_SEED_CBC_SHA value: U16(154)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA value: U16(11)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA value: U16(13)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA value: U16(48)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA256 value: U16(62)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_AES_128_GCM_SHA256 value: U16(164)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA value: U16(54)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA256 value: U16(104)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_AES_256_GCM_SHA384 value: U16(165)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA value: U16(66)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 value: U16(187)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49282)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA value: U16(133)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 value: U16(193)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49283)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DH_DSS_WITH_DES_CBC_SHA value: U16(12)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_SEED_CBC_SHA value: U16(151)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA value: U16(14)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA value: U16(16)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA value: U16(49)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA256 value: U16(63)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_AES_128_GCM_SHA256 value: U16(160)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA value: U16(55)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA256 value: U16(105)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_AES_256_GCM_SHA384 value: U16(161)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA value: U16(67)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(188)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49278)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA value: U16(134)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 value: U16(194)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49279)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DH_RSA_WITH_DES_CBC_SHA value: U16(15)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_SEED_CBC_SHA value: U16(152)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA value: U16(25)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 value: U16(23)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_EXPORT_WITH_RC4_40_MD5;

  /// @brief Field TLS_DH_anon_WITH_3DES_EDE_CBC_SHA value: U16(27)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA value: U16(52)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA256 value: U16(108)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_AES_128_GCM_SHA256 value: U16(166)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA value: U16(58)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA256 value: U16(109)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_AES_256_GCM_SHA384 value: U16(167)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA value: U16(70)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 value: U16(191)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49284)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA value: U16(137)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 value: U16(197)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49285)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DH_anon_WITH_DES_CBC_SHA value: U16(26)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_RC4_128_MD5 value: U16(24)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_RC4_128_MD5;

  /// @brief Field TLS_DH_anon_WITH_SEED_CBC_SHA value: U16(155)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA value: U16(49160)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA value: U16(49161)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 value: U16(49187)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 value: U16(49195)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA value: U16(49162)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 value: U16(49188)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 value: U16(49196)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49266)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49286)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49267)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49287)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 value: U16(52244)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 value: U16(58388)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_NULL_SHA value: U16(49158)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_RC4_128_SHA value: U16(49159)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 value: U16(58389)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA value: U16(49204)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA value: U16(49205)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 value: U16(49207)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA value: U16(49206)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 value: U16(49208)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49306)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49307)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 value: U16(58392)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA value: U16(49209)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA256 value: U16(49210)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA384 value: U16(49211)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_ECDHE_PSK_WITH_RC4_128_SHA value: U16(49203)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_SALSA20_SHA1 value: U16(58393)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA value: U16(49170)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA value: U16(49171)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 value: U16(49191)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 value: U16(49199)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA value: U16(49172)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 value: U16(49192)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 value: U16(49200)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49270)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49290)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49271)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49291)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 value: U16(52243)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 value: U16(58386)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_RSA_WITH_NULL_SHA value: U16(49168)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_RC4_128_SHA value: U16(49169)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_SALSA20_SHA1 value: U16(58387)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA value: U16(49155)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA value: U16(49156)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 value: U16(49189)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 value: U16(49197)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA value: U16(49157)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 value: U16(49190)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 value: U16(49198)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49268)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49288)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49269)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49289)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_NULL_SHA value: U16(49153)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_RC4_128_SHA value: U16(49154)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA value: U16(49165)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA value: U16(49166)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 value: U16(49193)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 value: U16(49201)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA value: U16(49167)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 value: U16(49194)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 value: U16(49202)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49272)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49292)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49273)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49293)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_NULL_SHA value: U16(49163)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_RC4_128_SHA value: U16(49164)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA value: U16(49175)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_AES_128_CBC_SHA value: U16(49176)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_AES_256_CBC_SHA value: U16(49177)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_NULL_SHA value: U16(49173)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_NULL_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_RC4_128_SHA value: U16(49174)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_RC4_128_SHA;

  /// @brief Field TLS_EMPTY_RENEGOTIATION_INFO_SCSV value: U16(255)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_EMPTY_RENEGOTIATION_INFO_SCSV;

  /// @brief Field TLS_FALLBACK_SCSV value: U16(22016)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_FALLBACK_SCSV;

  /// @brief Field TLS_NULL_WITH_NULL_NULL value: U16(0)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_NULL_WITH_NULL_NULL;

  /// @brief Field TLS_PSK_DHE_WITH_AES_128_CCM_8 value: U16(49322)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_DHE_WITH_AES_128_CCM_8;

  /// @brief Field TLS_PSK_DHE_WITH_AES_256_CCM_8 value: U16(49323)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_DHE_WITH_AES_256_CCM_8;

  /// @brief Field TLS_PSK_WITH_3DES_EDE_CBC_SHA value: U16(139)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA value: U16(140)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA256 value: U16(174)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_PSK_WITH_AES_128_CCM value: U16(49316)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CCM;

  /// @brief Field TLS_PSK_WITH_AES_128_CCM_8 value: U16(49320)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CCM_8;

  /// @brief Field TLS_PSK_WITH_AES_128_GCM_SHA256 value: U16(168)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA value: U16(141)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA384 value: U16(175)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_PSK_WITH_AES_256_CCM value: U16(49317)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CCM;

  /// @brief Field TLS_PSK_WITH_AES_256_CCM_8 value: U16(49321)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CCM_8;

  /// @brief Field TLS_PSK_WITH_AES_256_GCM_SHA384 value: U16(169)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49300)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49294)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49301)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49295)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 value: U16(58390)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_PSK_WITH_NULL_SHA value: U16(44)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_PSK_WITH_NULL_SHA256 value: U16(176)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_PSK_WITH_NULL_SHA384 value: U16(177)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_PSK_WITH_RC4_128_SHA value: U16(138)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_PSK_WITH_SALSA20_SHA1 value: U16(58391)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_RSA_EXPORT_WITH_DES40_CBC_SHA value: U16(8)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 value: U16(6)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5;

  /// @brief Field TLS_RSA_EXPORT_WITH_RC4_40_MD5 value: U16(3)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_RC4_40_MD5;

  /// @brief Field TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA value: U16(147)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA value: U16(148)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 value: U16(182)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 value: U16(172)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA value: U16(149)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 value: U16(183)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 value: U16(173)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: U16(49304)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49298)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: U16(49305)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49299)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 value: U16(58394)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA value: U16(46)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA256 value: U16(184)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA384 value: U16(185)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_RC4_128_SHA value: U16(146)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_SALSA20_SHA1 value: U16(58395)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_RSA_WITH_3DES_EDE_CBC_SHA value: U16(10)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA value: U16(47)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA256 value: U16(60)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_AES_128_CCM value: U16(49308)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CCM;

  /// @brief Field TLS_RSA_WITH_AES_128_CCM_8 value: U16(49312)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CCM_8;

  /// @brief Field TLS_RSA_WITH_AES_128_GCM_SHA256 value: U16(156)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA value: U16(53)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA256 value: U16(61)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_AES_256_CCM value: U16(49309)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CCM;

  /// @brief Field TLS_RSA_WITH_AES_256_CCM_8 value: U16(49313)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CCM_8;

  /// @brief Field TLS_RSA_WITH_AES_256_GCM_SHA384 value: U16(157)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA value: U16(65)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: U16(186)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: U16(49274)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA value: U16(132)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 value: U16(192)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: U16(49275)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_RSA_WITH_DES_CBC_SHA value: U16(9)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_DES_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 value: U16(58384)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_RSA_WITH_IDEA_CBC_SHA value: U16(7)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_IDEA_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_NULL_MD5 value: U16(1)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_MD5;

  /// @brief Field TLS_RSA_WITH_NULL_SHA value: U16(2)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_SHA;

  /// @brief Field TLS_RSA_WITH_NULL_SHA256 value: U16(59)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_SHA256;

  /// @brief Field TLS_RSA_WITH_RC4_128_MD5 value: U16(4)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_RC4_128_MD5;

  /// @brief Field TLS_RSA_WITH_RC4_128_SHA value: U16(5)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_RSA_WITH_SALSA20_SHA1 value: U16(58385)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_RSA_WITH_SEED_CBC_SHA value: U16(150)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA value: U16(49180)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA value: U16(49183)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA value: U16(49186)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA value: U16(49179)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA value: U16(49182)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA value: U16(49185)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA value: U16(49178)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_WITH_AES_128_CBC_SHA value: U16(49181)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_WITH_AES_256_CBC_SHA value: U16(49184)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_AES_256_CBC_SHA;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Interface::CipherSuiteCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::CipherSuiteCode, 0x2>, "Size mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::CipherSuiteCode, "Mono.Security.Interface", "CipherSuiteCode");
