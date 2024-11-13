#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SrtpProtectionProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SrtpProtectionProfile)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SrtpProtectionProfile;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile);
// Type: Org.BouncyCastle.Crypto.Tls::SrtpProtectionProfile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SrtpProtectionProfile*
class CORDL_TYPE SrtpProtectionProfile : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile* New_ctor();

  /// @brief Method .ctor, addr 0x23e7c90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SrtpProtectionProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SrtpProtectionProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SrtpProtectionProfile(SrtpProtectionProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SrtpProtectionProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SrtpProtectionProfile(SrtpProtectionProfile const&) = delete;

  /// @brief Field SRTP_AEAD_AES_128_GCM offset 0xffffffff size 0x4
  static constexpr int32_t SRTP_AEAD_AES_128_GCM{ static_cast<int32_t>(0x7) };

  /// @brief Field SRTP_AEAD_AES_256_GCM offset 0xffffffff size 0x4
  static constexpr int32_t SRTP_AEAD_AES_256_GCM{ static_cast<int32_t>(0x8) };

  /// @brief Field SRTP_AES128_CM_HMAC_SHA1_32 offset 0xffffffff size 0x4
  static constexpr int32_t SRTP_AES128_CM_HMAC_SHA1_32{ static_cast<int32_t>(0x2) };

  /// @brief Field SRTP_AES128_CM_HMAC_SHA1_80 offset 0xffffffff size 0x4
  static constexpr int32_t SRTP_AES128_CM_HMAC_SHA1_80{ static_cast<int32_t>(0x1) };

  /// @brief Field SRTP_NULL_HMAC_SHA1_32 offset 0xffffffff size 0x4
  static constexpr int32_t SRTP_NULL_HMAC_SHA1_32{ static_cast<int32_t>(0x6) };

  /// @brief Field SRTP_NULL_HMAC_SHA1_80 offset 0xffffffff size 0x4
  static constexpr int32_t SRTP_NULL_HMAC_SHA1_80{ static_cast<int32_t>(0x5) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrtpProtectionProfile*, "Org.BouncyCastle.Crypto.Tls", "SrtpProtectionProfile");
