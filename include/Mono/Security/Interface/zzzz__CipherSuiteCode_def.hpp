#pragma once
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
// Type: Mono.Security.Interface::CipherSuiteCode
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace Mono::Security::Interface {
// Is value type: true
// CS Name: ::Mono.Security.Interface::CipherSuiteCode
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
  constexpr operator uint16_t() const noexcept {
    return static_cast<__CipherSuiteCode_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherSuiteCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CipherSuiteCode(uint16_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  /// @brief Field TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA value: static_cast<uint16_t>(0x11u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x13u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x32u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0x40u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xa2u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x38u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 value: static_cast<uint16_t>(0x6au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xa3u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA value: static_cast<uint16_t>(0x44u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xbdu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc080u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA value: static_cast<uint16_t>(0x87u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256 value: static_cast<uint16_t>(0xc3u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc081u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DHE_DSS_WITH_DES_CBC_SHA value: static_cast<uint16_t>(0x12u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DHE_DSS_WITH_SEED_CBC_SHA value: static_cast<uint16_t>(0x99u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_DSS_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x8fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x90u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xb2u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_CCM value: static_cast<uint16_t>(0xc0a6u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_CCM;

  /// @brief Field TLS_DHE_PSK_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xaau)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x91u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xb3u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_CCM value: static_cast<uint16_t>(0xc0a7u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_CCM;

  /// @brief Field TLS_DHE_PSK_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xabu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc096u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc090u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc097u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc091u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe41cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA value: static_cast<uint16_t>(0x2du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA256 value: static_cast<uint16_t>(0xb4u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_DHE_PSK_WITH_NULL_SHA384 value: static_cast<uint16_t>(0xb5u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_DHE_PSK_WITH_RC4_128_SHA value: static_cast<uint16_t>(0x8eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_DHE_PSK_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe41du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA value: static_cast<uint16_t>(0x14u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x16u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x33u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0x67u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM value: static_cast<uint16_t>(0xc09eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CCM;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_CCM_8 value: static_cast<uint16_t>(0xc0a2u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_CCM_8;

  /// @brief Field TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0x9eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x39u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 value: static_cast<uint16_t>(0x6bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM value: static_cast<uint16_t>(0xc09fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CCM;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_CCM_8 value: static_cast<uint16_t>(0xc0a3u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_CCM_8;

  /// @brief Field TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0x9fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA value: static_cast<uint16_t>(0x45u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xbeu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc07cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA value: static_cast<uint16_t>(0x88u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256 value: static_cast<uint16_t>(0xc4u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc07du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 value: static_cast<uint16_t>(0xcc15u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256;

  /// @brief Field TLS_DHE_RSA_WITH_DES_CBC_SHA value: static_cast<uint16_t>(0x15u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe41eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_DHE_RSA_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe41fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_DHE_RSA_WITH_SEED_CBC_SHA value: static_cast<uint16_t>(0x9au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DHE_RSA_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA value: static_cast<uint16_t>(0xbu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xdu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x30u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0x3eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xa4u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x36u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_AES_256_CBC_SHA256 value: static_cast<uint16_t>(0x68u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xa5u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA value: static_cast<uint16_t>(0x42u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xbbu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc082u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA value: static_cast<uint16_t>(0x85u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256 value: static_cast<uint16_t>(0xc1u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc083u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DH_DSS_WITH_DES_CBC_SHA value: static_cast<uint16_t>(0xcu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DH_DSS_WITH_SEED_CBC_SHA value: static_cast<uint16_t>(0x97u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_DSS_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA value: static_cast<uint16_t>(0xeu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x10u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x31u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0x3fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xa0u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x37u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_AES_256_CBC_SHA256 value: static_cast<uint16_t>(0x69u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xa1u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA value: static_cast<uint16_t>(0x43u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xbcu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc07eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA value: static_cast<uint16_t>(0x86u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256 value: static_cast<uint16_t>(0xc2u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc07fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DH_RSA_WITH_DES_CBC_SHA value: static_cast<uint16_t>(0xfu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DH_RSA_WITH_SEED_CBC_SHA value: static_cast<uint16_t>(0x98u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_RSA_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA value: static_cast<uint16_t>(0x19u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_DH_anon_EXPORT_WITH_RC4_40_MD5 value: static_cast<uint16_t>(0x17u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_EXPORT_WITH_RC4_40_MD5;

  /// @brief Field TLS_DH_anon_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x1bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x34u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0x6cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xa6u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x3au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_AES_256_CBC_SHA256 value: static_cast<uint16_t>(0x6du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xa7u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA value: static_cast<uint16_t>(0x46u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xbfu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc084u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA value: static_cast<uint16_t>(0x89u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256 value: static_cast<uint16_t>(0xc5u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc085u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_DH_anon_WITH_DES_CBC_SHA value: static_cast<uint16_t>(0x1au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_DES_CBC_SHA;

  /// @brief Field TLS_DH_anon_WITH_RC4_128_MD5 value: static_cast<uint16_t>(0x18u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_RC4_128_MD5;

  /// @brief Field TLS_DH_anon_WITH_SEED_CBC_SHA value: static_cast<uint16_t>(0x9bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_DH_anon_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc008u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc009u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xc023u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xc02bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc00au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xc024u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xc02cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc072u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc086u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc073u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc087u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 value: static_cast<uint16_t>(0xcc14u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe414u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_NULL_SHA value: static_cast<uint16_t>(0xc006u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_RC4_128_SHA value: static_cast<uint16_t>(0xc007u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe415u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_ECDSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc034u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc035u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xc037u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc036u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xc038u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc09au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc09bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe418u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA value: static_cast<uint16_t>(0xc039u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA256 value: static_cast<uint16_t>(0xc03au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_ECDHE_PSK_WITH_NULL_SHA384 value: static_cast<uint16_t>(0xc03bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_ECDHE_PSK_WITH_RC4_128_SHA value: static_cast<uint16_t>(0xc033u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDHE_PSK_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe419u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc012u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc013u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xc027u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xc02fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc014u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xc028u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xc030u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc076u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc08au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc077u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc08bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 value: static_cast<uint16_t>(0xcc13u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256;

  /// @brief Field TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe412u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_ECDHE_RSA_WITH_NULL_SHA value: static_cast<uint16_t>(0xc010u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_RC4_128_SHA value: static_cast<uint16_t>(0xc011u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDHE_RSA_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe413u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDHE_RSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc003u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc004u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xc025u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xc02du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc005u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xc026u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xc02eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc074u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc088u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc075u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc089u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_ECDSA_WITH_NULL_SHA value: static_cast<uint16_t>(0xc001u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDH_ECDSA_WITH_RC4_128_SHA value: static_cast<uint16_t>(0xc002u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_ECDSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc00du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc00eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xc029u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xc031u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc00fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xc02au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xc032u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc078u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc08cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc079u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc08du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_ECDH_RSA_WITH_NULL_SHA value: static_cast<uint16_t>(0xc00bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_NULL_SHA;

  /// @brief Field TLS_ECDH_RSA_WITH_RC4_128_SHA value: static_cast<uint16_t>(0xc00cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_RSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc017u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc018u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc019u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_NULL_SHA value: static_cast<uint16_t>(0xc015u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_NULL_SHA;

  /// @brief Field TLS_ECDH_anon_WITH_RC4_128_SHA value: static_cast<uint16_t>(0xc016u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_ECDH_anon_WITH_RC4_128_SHA;

  /// @brief Field TLS_EMPTY_RENEGOTIATION_INFO_SCSV value: static_cast<uint16_t>(0xffu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_EMPTY_RENEGOTIATION_INFO_SCSV;

  /// @brief Field TLS_FALLBACK_SCSV value: static_cast<uint16_t>(0x5600u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_FALLBACK_SCSV;

  /// @brief Field TLS_NULL_WITH_NULL_NULL value: static_cast<uint16_t>(0x0u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_NULL_WITH_NULL_NULL;

  /// @brief Field TLS_PSK_DHE_WITH_AES_128_CCM_8 value: static_cast<uint16_t>(0xc0aau)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_DHE_WITH_AES_128_CCM_8;

  /// @brief Field TLS_PSK_DHE_WITH_AES_256_CCM_8 value: static_cast<uint16_t>(0xc0abu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_DHE_WITH_AES_256_CCM_8;

  /// @brief Field TLS_PSK_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x8bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x8cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_PSK_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xaeu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_PSK_WITH_AES_128_CCM value: static_cast<uint16_t>(0xc0a4u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CCM;

  /// @brief Field TLS_PSK_WITH_AES_128_CCM_8 value: static_cast<uint16_t>(0xc0a8u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_CCM_8;

  /// @brief Field TLS_PSK_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xa8u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x8du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_PSK_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xafu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_PSK_WITH_AES_256_CCM value: static_cast<uint16_t>(0xc0a5u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CCM;

  /// @brief Field TLS_PSK_WITH_AES_256_CCM_8 value: static_cast<uint16_t>(0xc0a9u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_CCM_8;

  /// @brief Field TLS_PSK_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xa9u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc094u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc08eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc095u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc08fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_PSK_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe416u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_PSK_WITH_NULL_SHA value: static_cast<uint16_t>(0x2cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_PSK_WITH_NULL_SHA256 value: static_cast<uint16_t>(0xb0u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_PSK_WITH_NULL_SHA384 value: static_cast<uint16_t>(0xb1u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_PSK_WITH_RC4_128_SHA value: static_cast<uint16_t>(0x8au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_PSK_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe417u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_RSA_EXPORT_WITH_DES40_CBC_SHA value: static_cast<uint16_t>(0x8u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_DES40_CBC_SHA;

  /// @brief Field TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5 value: static_cast<uint16_t>(0x6u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_RC2_CBC_40_MD5;

  /// @brief Field TLS_RSA_EXPORT_WITH_RC4_40_MD5 value: static_cast<uint16_t>(0x3u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_EXPORT_WITH_RC4_40_MD5;

  /// @brief Field TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0x93u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x94u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0xb6u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0xacu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x95u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_CBC_SHA384 value: static_cast<uint16_t>(0xb7u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_CBC_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0xadu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xc098u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc092u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384 value: static_cast<uint16_t>(0xc099u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc093u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe41au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA value: static_cast<uint16_t>(0x2eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA256 value: static_cast<uint16_t>(0xb8u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA256;

  /// @brief Field TLS_RSA_PSK_WITH_NULL_SHA384 value: static_cast<uint16_t>(0xb9u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_NULL_SHA384;

  /// @brief Field TLS_RSA_PSK_WITH_RC4_128_SHA value: static_cast<uint16_t>(0x92u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_RC4_128_SHA;

  /// @brief Field TLS_RSA_PSK_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe41bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_PSK_WITH_SALSA20_SHA1;

  /// @brief Field TLS_RSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xau)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0x2fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_AES_128_CBC_SHA256 value: static_cast<uint16_t>(0x3cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_AES_128_CCM value: static_cast<uint16_t>(0xc09cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CCM;

  /// @brief Field TLS_RSA_WITH_AES_128_CCM_8 value: static_cast<uint16_t>(0xc0a0u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_CCM_8;

  /// @brief Field TLS_RSA_WITH_AES_128_GCM_SHA256 value: static_cast<uint16_t>(0x9cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_128_GCM_SHA256;

  /// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0x35u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_AES_256_CBC_SHA256 value: static_cast<uint16_t>(0x3du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_AES_256_CCM value: static_cast<uint16_t>(0xc09du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CCM;

  /// @brief Field TLS_RSA_WITH_AES_256_CCM_8 value: static_cast<uint16_t>(0xc0a1u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_CCM_8;

  /// @brief Field TLS_RSA_WITH_AES_256_GCM_SHA384 value: static_cast<uint16_t>(0x9du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_AES_256_GCM_SHA384;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA value: static_cast<uint16_t>(0x41u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256 value: static_cast<uint16_t>(0xbau)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256 value: static_cast<uint16_t>(0xc07au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA value: static_cast<uint16_t>(0x84u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256 value: static_cast<uint16_t>(0xc0u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256;

  /// @brief Field TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384 value: static_cast<uint16_t>(0xc07bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384;

  /// @brief Field TLS_RSA_WITH_DES_CBC_SHA value: static_cast<uint16_t>(0x9u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_DES_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_ESTREAM_SALSA20_SHA1 value: static_cast<uint16_t>(0xe410u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_ESTREAM_SALSA20_SHA1;

  /// @brief Field TLS_RSA_WITH_IDEA_CBC_SHA value: static_cast<uint16_t>(0x7u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_IDEA_CBC_SHA;

  /// @brief Field TLS_RSA_WITH_NULL_MD5 value: static_cast<uint16_t>(0x1u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_MD5;

  /// @brief Field TLS_RSA_WITH_NULL_SHA value: static_cast<uint16_t>(0x2u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_SHA;

  /// @brief Field TLS_RSA_WITH_NULL_SHA256 value: static_cast<uint16_t>(0x3bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_NULL_SHA256;

  /// @brief Field TLS_RSA_WITH_RC4_128_MD5 value: static_cast<uint16_t>(0x4u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_RC4_128_MD5;

  /// @brief Field TLS_RSA_WITH_RC4_128_SHA value: static_cast<uint16_t>(0x5u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_RC4_128_SHA;

  /// @brief Field TLS_RSA_WITH_SALSA20_SHA1 value: static_cast<uint16_t>(0xe411u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_SALSA20_SHA1;

  /// @brief Field TLS_RSA_WITH_SEED_CBC_SHA value: static_cast<uint16_t>(0x96u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_RSA_WITH_SEED_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc01cu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc01fu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc022u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc01bu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc01eu)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc021u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA value: static_cast<uint16_t>(0xc01au)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_WITH_AES_128_CBC_SHA value: static_cast<uint16_t>(0xc01du)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_AES_128_CBC_SHA;

  /// @brief Field TLS_SRP_SHA_WITH_AES_256_CBC_SHA value: static_cast<uint16_t>(0xc020u)
  static ::Mono::Security::Interface::CipherSuiteCode const TLS_SRP_SHA_WITH_AES_256_CBC_SHA;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::CipherSuiteCode, 0x2>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::Interface::CipherSuiteCode, value__) == 0x0, "Offset mismatch!");

} // namespace Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::CipherSuiteCode, "Mono.Security.Interface", "CipherSuiteCode");
