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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1266))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::SecurityParameters*
class CORDL_TYPE SecurityParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field entity, offset 0x10, size 0x4
  __declspec(property(get = __get_entity, put = __set_entity)) int32_t entity;

  /// @brief Field cipherSuite, offset 0x14, size 0x4
  __declspec(property(get = __get_cipherSuite, put = __set_cipherSuite)) int32_t cipherSuite;

  /// @brief Field compressionAlgorithm, offset 0x18, size 0x1
  __declspec(property(get = __get_compressionAlgorithm, put = __set_compressionAlgorithm)) uint8_t compressionAlgorithm;

  /// @brief Field prfAlgorithm, offset 0x1c, size 0x4
  __declspec(property(get = __get_prfAlgorithm, put = __set_prfAlgorithm)) int32_t prfAlgorithm;

  /// @brief Field verifyDataLength, offset 0x20, size 0x4
  __declspec(property(get = __get_verifyDataLength, put = __set_verifyDataLength)) int32_t verifyDataLength;

  /// @brief Field masterSecret, offset 0x28, size 0x8
  __declspec(property(get = __get_masterSecret, put = __set_masterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> masterSecret;

  /// @brief Field clientRandom, offset 0x30, size 0x8
  __declspec(property(get = __get_clientRandom, put = __set_clientRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> clientRandom;

  /// @brief Field serverRandom, offset 0x38, size 0x8
  __declspec(property(get = __get_serverRandom, put = __set_serverRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> serverRandom;

  /// @brief Field sessionHash, offset 0x40, size 0x8
  __declspec(property(get = __get_sessionHash, put = __set_sessionHash))::ArrayW<uint8_t, ::Array<uint8_t>*> sessionHash;

  /// @brief Field pskIdentity, offset 0x48, size 0x8
  __declspec(property(get = __get_pskIdentity, put = __set_pskIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> pskIdentity;

  /// @brief Field srpIdentity, offset 0x50, size 0x8
  __declspec(property(get = __get_srpIdentity, put = __set_srpIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> srpIdentity;

  /// @brief Field maxFragmentLength, offset 0x58, size 0x2
  __declspec(property(get = __get_maxFragmentLength, put = __set_maxFragmentLength)) int16_t maxFragmentLength;

  /// @brief Field truncatedHMac, offset 0x5a, size 0x1
  __declspec(property(get = __get_truncatedHMac, put = __set_truncatedHMac)) bool truncatedHMac;

  /// @brief Field encryptThenMac, offset 0x5b, size 0x1
  __declspec(property(get = __get_encryptThenMac, put = __set_encryptThenMac)) bool encryptThenMac;

  /// @brief Field extendedMasterSecret, offset 0x5c, size 0x1
  __declspec(property(get = __get_extendedMasterSecret, put = __set_extendedMasterSecret)) bool extendedMasterSecret;

  __declspec(property(get = get_Entity)) int32_t Entity;

  __declspec(property(get = get_CipherSuite)) int32_t CipherSuite;

  __declspec(property(get = get_CompressionAlgorithm)) uint8_t CompressionAlgorithm;

  __declspec(property(get = get_PrfAlgorithm)) int32_t PrfAlgorithm;

  __declspec(property(get = get_VerifyDataLength)) int32_t VerifyDataLength;

  __declspec(property(get = get_MasterSecret))::ArrayW<uint8_t, ::Array<uint8_t>*> MasterSecret;

  __declspec(property(get = get_ClientRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> ClientRandom;

  __declspec(property(get = get_ServerRandom))::ArrayW<uint8_t, ::Array<uint8_t>*> ServerRandom;

  __declspec(property(get = get_SessionHash))::ArrayW<uint8_t, ::Array<uint8_t>*> SessionHash;

  __declspec(property(get = get_PskIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> PskIdentity;

  __declspec(property(get = get_SrpIdentity))::ArrayW<uint8_t, ::Array<uint8_t>*> SrpIdentity;

  __declspec(property(get = get_IsExtendedMasterSecret)) bool IsExtendedMasterSecret;

  constexpr int32_t& __get_entity();

  constexpr int32_t const& __get_entity() const;

  constexpr void __set_entity(int32_t value);

  constexpr int32_t& __get_cipherSuite();

  constexpr int32_t const& __get_cipherSuite() const;

  constexpr void __set_cipherSuite(int32_t value);

  constexpr uint8_t& __get_compressionAlgorithm();

  constexpr uint8_t const& __get_compressionAlgorithm() const;

  constexpr void __set_compressionAlgorithm(uint8_t value);

  constexpr int32_t& __get_prfAlgorithm();

  constexpr int32_t const& __get_prfAlgorithm() const;

  constexpr void __set_prfAlgorithm(int32_t value);

  constexpr int32_t& __get_verifyDataLength();

  constexpr int32_t const& __get_verifyDataLength() const;

  constexpr void __set_verifyDataLength(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_masterSecret();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_masterSecret() const;

  constexpr void __set_masterSecret(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_clientRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_clientRandom() const;

  constexpr void __set_clientRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_serverRandom();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_serverRandom() const;

  constexpr void __set_serverRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_sessionHash();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_sessionHash() const;

  constexpr void __set_sessionHash(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_pskIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_pskIdentity() const;

  constexpr void __set_pskIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_srpIdentity();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_srpIdentity() const;

  constexpr void __set_srpIdentity(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int16_t& __get_maxFragmentLength();

  constexpr int16_t const& __get_maxFragmentLength() const;

  constexpr void __set_maxFragmentLength(int16_t value);

  constexpr bool& __get_truncatedHMac();

  constexpr bool const& __get_truncatedHMac() const;

  constexpr void __set_truncatedHMac(bool value);

  constexpr bool& __get_encryptThenMac();

  constexpr bool const& __get_encryptThenMac() const;

  constexpr void __set_encryptThenMac(bool value);

  constexpr bool& __get_extendedMasterSecret();

  constexpr bool const& __get_extendedMasterSecret() const;

  constexpr void __set_extendedMasterSecret(bool value);

  /// @brief Method Clear, addr 0xf94c8c, size 0x6c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method get_Entity, addr 0xf94cf8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Entity();

  /// @brief Method get_CipherSuite, addr 0xf94d00, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_CipherSuite();

  /// @brief Method get_CompressionAlgorithm, addr 0xf94d08, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_CompressionAlgorithm();

  /// @brief Method get_PrfAlgorithm, addr 0xf94d10, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_PrfAlgorithm();

  /// @brief Method get_VerifyDataLength, addr 0xf94d18, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_VerifyDataLength();

  /// @brief Method get_MasterSecret, addr 0xf94d20, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_MasterSecret();

  /// @brief Method get_ClientRandom, addr 0xf94d28, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_ClientRandom();

  /// @brief Method get_ServerRandom, addr 0xf94d30, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_ServerRandom();

  /// @brief Method get_SessionHash, addr 0xf94d38, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SessionHash();

  /// @brief Method get_PskIdentity, addr 0xf94d40, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PskIdentity();

  /// @brief Method get_SrpIdentity, addr 0xf94d48, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_SrpIdentity();

  /// @brief Method get_IsExtendedMasterSecret, addr 0xf94d50, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsExtendedMasterSecret();

  static inline ::Org::BouncyCastle::Crypto::Tls::SecurityParameters* New_ctor();

  /// @brief Method .ctor, addr 0xf94d58, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SecurityParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityParameters(SecurityParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityParameters(SecurityParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityParameters();

public:
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
