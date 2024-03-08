#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SecurityParameters);
// Type: Org.BouncyCastle.Crypto.Tls::SecurityParameters
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SecurityParameters*
class CORDL_TYPE SecurityParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CipherSuite)) int32_t CipherSuite;

  __declspec(property(get = get_ClientRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> ClientRandom;

  __declspec(property(get = get_CompressionAlgorithm)) uint8_t CompressionAlgorithm;

  __declspec(property(get = get_Entity)) int32_t Entity;

  __declspec(property(get = get_IsExtendedMasterSecret)) bool IsExtendedMasterSecret;

  __declspec(property(get = get_MasterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> MasterSecret;

  __declspec(property(get = get_PrfAlgorithm)) int32_t PrfAlgorithm;

  __declspec(property(get = get_PskIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> PskIdentity;

  __declspec(property(get = get_ServerRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> ServerRandom;

  __declspec(property(get = get_SessionHash))::ArrayW<uint8_t, ::Array<uint8_t>*> SessionHash;

  __declspec(property(get = get_SrpIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> SrpIdentity;

  __declspec(property(get = get_VerifyDataLength)) int32_t VerifyDataLength;

  /// @brief Field cipherSuite, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cipherSuite, put = __cordl_internal_set_cipherSuite)) int32_t cipherSuite;

  /// @brief Field clientRandom, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_clientRandom, put = __cordl_internal_set_clientRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field compressionAlgorithm, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_compressionAlgorithm, put = __cordl_internal_set_compressionAlgorithm)) uint8_t compressionAlgorithm;

  /// @brief Field encryptThenMac, offset 0x5b, size 0x1
  __declspec(property(get = __cordl_internal_get_encryptThenMac, put = __cordl_internal_set_encryptThenMac)) bool encryptThenMac;

  /// @brief Field entity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_entity, put = __cordl_internal_set_entity)) int32_t entity;

  /// @brief Field extendedMasterSecret, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_extendedMasterSecret, put = __cordl_internal_set_extendedMasterSecret)) bool extendedMasterSecret;

  /// @brief Field masterSecret, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_masterSecret, put = __cordl_internal_set_masterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> masterSecret;

  /// @brief Field maxFragmentLength, offset 0x58, size 0x2
  __declspec(property(get = __cordl_internal_get_maxFragmentLength, put = __cordl_internal_set_maxFragmentLength)) int16_t maxFragmentLength;

  /// @brief Field prfAlgorithm, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_prfAlgorithm, put = __cordl_internal_set_prfAlgorithm)) int32_t prfAlgorithm;

  /// @brief Field pskIdentity, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_pskIdentity, put = __cordl_internal_set_pskIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> pskIdentity;

  /// @brief Field serverRandom, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_serverRandom, put = __cordl_internal_set_serverRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom;

  /// @brief Field sessionHash, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionHash, put = __cordl_internal_set_sessionHash))::ArrayW<uint8_t, ::Array<uint8_t>*> sessionHash;

  /// @brief Field srpIdentity, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_srpIdentity, put = __cordl_internal_set_srpIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> srpIdentity;

  /// @brief Field truncatedHMac, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_truncatedHMac, put = __cordl_internal_set_truncatedHMac)) bool truncatedHMac;

  /// @brief Field verifyDataLength, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_verifyDataLength, put = __cordl_internal_set_verifyDataLength)) int32_t verifyDataLength;

  /// @brief Method Clear, addr 0x10261f0, size 0x6c, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* New_ctor();

  constexpr int32_t const& __cordl_internal_get_cipherSuite() const;

  constexpr int32_t& __cordl_internal_get_cipherSuite();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_clientRandom() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_clientRandom();

  constexpr uint8_t const& __cordl_internal_get_compressionAlgorithm() const;

  constexpr uint8_t& __cordl_internal_get_compressionAlgorithm();

  constexpr bool const& __cordl_internal_get_encryptThenMac() const;

  constexpr bool& __cordl_internal_get_encryptThenMac();

  constexpr int32_t const& __cordl_internal_get_entity() const;

  constexpr int32_t& __cordl_internal_get_entity();

  constexpr bool const& __cordl_internal_get_extendedMasterSecret() const;

  constexpr bool& __cordl_internal_get_extendedMasterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_masterSecret() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_masterSecret();

  constexpr int16_t const& __cordl_internal_get_maxFragmentLength() const;

  constexpr int16_t& __cordl_internal_get_maxFragmentLength();

  constexpr int32_t const& __cordl_internal_get_prfAlgorithm() const;

  constexpr int32_t& __cordl_internal_get_prfAlgorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_pskIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_pskIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_serverRandom() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_serverRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_sessionHash() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_sessionHash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_srpIdentity() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_srpIdentity();

  constexpr bool const& __cordl_internal_get_truncatedHMac() const;

  constexpr bool& __cordl_internal_get_truncatedHMac();

  constexpr int32_t const& __cordl_internal_get_verifyDataLength() const;

  constexpr int32_t& __cordl_internal_get_verifyDataLength();

  constexpr void __cordl_internal_set_cipherSuite(int32_t value);

  constexpr void __cordl_internal_set_clientRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_compressionAlgorithm(uint8_t value);

  constexpr void __cordl_internal_set_encryptThenMac(bool value);

  constexpr void __cordl_internal_set_entity(int32_t value);

  constexpr void __cordl_internal_set_extendedMasterSecret(bool value);

  constexpr void __cordl_internal_set_masterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_maxFragmentLength(int16_t value);

  constexpr void __cordl_internal_set_prfAlgorithm(int32_t value);

  constexpr void __cordl_internal_set_pskIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_serverRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_sessionHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_srpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_truncatedHMac(bool value);

  constexpr void __cordl_internal_set_verifyDataLength(int32_t value);

  /// @brief Method .ctor, addr 0x10262bc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CipherSuite, addr 0x1026264, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_CipherSuite();

  /// @brief Method get_ClientRandom, addr 0x102628c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_ClientRandom();

  /// @brief Method get_CompressionAlgorithm, addr 0x102626c, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_CompressionAlgorithm();

  /// @brief Method get_Entity, addr 0x102625c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Entity();

  /// @brief Method get_IsExtendedMasterSecret, addr 0x10262b4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsExtendedMasterSecret();

  /// @brief Method get_MasterSecret, addr 0x1026284, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_MasterSecret();

  /// @brief Method get_PrfAlgorithm, addr 0x1026274, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_PrfAlgorithm();

  /// @brief Method get_PskIdentity, addr 0x10262a4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PskIdentity();

  /// @brief Method get_ServerRandom, addr 0x1026294, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_ServerRandom();

  /// @brief Method get_SessionHash, addr 0x102629c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SessionHash();

  /// @brief Method get_SrpIdentity, addr 0x10262ac, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SrpIdentity();

  /// @brief Method get_VerifyDataLength, addr 0x102627c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_VerifyDataLength();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityParameters(SecurityParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityParameters(SecurityParameters const&) = delete;

  /// @brief Field entity, offset: 0x10, size: 0x4, def value: None
  int32_t ___entity;

  /// @brief Field cipherSuite, offset: 0x14, size: 0x4, def value: None
  int32_t ___cipherSuite;

  /// @brief Field compressionAlgorithm, offset: 0x18, size: 0x1, def value: None
  uint8_t ___compressionAlgorithm;

  /// @brief Field prfAlgorithm, offset: 0x1c, size: 0x4, def value: None
  int32_t ___prfAlgorithm;

  /// @brief Field verifyDataLength, offset: 0x20, size: 0x4, def value: None
  int32_t ___verifyDataLength;

  /// @brief Field masterSecret, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___masterSecret;

  /// @brief Field clientRandom, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___clientRandom;

  /// @brief Field serverRandom, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___serverRandom;

  /// @brief Field sessionHash, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___sessionHash;

  /// @brief Field pskIdentity, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___pskIdentity;

  /// @brief Field srpIdentity, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___srpIdentity;

  /// @brief Field maxFragmentLength, offset: 0x58, size: 0x2, def value: None
  int16_t ___maxFragmentLength;

  /// @brief Field truncatedHMac, offset: 0x5a, size: 0x1, def value: None
  bool ___truncatedHMac;

  /// @brief Field encryptThenMac, offset: 0x5b, size: 0x1, def value: None
  bool ___encryptThenMac;

  /// @brief Field extendedMasterSecret, offset: 0x5c, size: 0x1, def value: None
  bool ___extendedMasterSecret;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SecurityParameters, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___cipherSuite) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___compressionAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___prfAlgorithm) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___verifyDataLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___masterSecret) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___clientRandom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___serverRandom) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___sessionHash) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___pskIdentity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___srpIdentity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___maxFragmentLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___truncatedHMac) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___encryptThenMac) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::SecurityParameters, ___extendedMasterSecret) == 0x5c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SecurityParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SecurityParameters*, "Org.BouncyCastle.Crypto.Tls", "SecurityParameters");
