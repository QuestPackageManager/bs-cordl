#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnePassSignaturePacket)
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class OnePassSignaturePacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket);
// Type: Org.BouncyCastle.Bcpg::OnePassSignaturePacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560)), TypeDefinitionIndex(TypeDefinitionIndex(572)), TypeDefinitionIndex(TypeDefinitionIndex(580))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(577))
// CS Name: ::Org.BouncyCastle.Bcpg::OnePassSignaturePacket*
class CORDL_TYPE OnePassSignaturePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field sigType, offset 0x14, size 0x4
  __declspec(property(get = __get_sigType, put = __set_sigType)) int32_t sigType;

  /// @brief Field hashAlgorithm, offset 0x18, size 0x4
  __declspec(property(get = __get_hashAlgorithm, put = __set_hashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm;

  /// @brief Field keyAlgorithm, offset 0x1c, size 0x4
  __declspec(property(get = __get_keyAlgorithm, put = __set_keyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm;

  /// @brief Field keyId, offset 0x20, size 0x8
  __declspec(property(get = __get_keyId, put = __set_keyId)) int64_t keyId;

  /// @brief Field nested, offset 0x28, size 0x4
  __declspec(property(get = __get_nested, put = __set_nested)) int32_t nested;

  __declspec(property(get = get_SignatureType)) int32_t SignatureType;

  __declspec(property(get = get_KeyAlgorithm))::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag KeyAlgorithm;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_KeyId)) int64_t KeyId;

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr int32_t& __get_sigType();

  constexpr int32_t const& __get_sigType() const;

  constexpr void __set_sigType(int32_t value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __get_hashAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __get_hashAlgorithm() const;

  constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& __get_keyAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& __get_keyAlgorithm() const;

  constexpr void __set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value);

  constexpr int64_t& __get_keyId();

  constexpr int64_t const& __get_keyId() const;

  constexpr void __set_keyId(int64_t value);

  constexpr int32_t& __get_nested();

  constexpr int32_t const& __get_nested() const;

  constexpr void __set_nested(int32_t value);

  static inline ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x115d22c size 0x198 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::OnePassSignaturePacket* New_ctor(int32_t sigType, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                            ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, int64_t keyId, bool isNested);

  /// @brief Method .ctor addr 0x1160d60 size 0x68 virtual false final false
  inline void _ctor(int32_t sigType, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, int64_t keyId, bool isNested);

  /// @brief Method get_SignatureType addr 0x1160dc8 size 0x8 virtual false final false
  inline int32_t get_SignatureType();

  /// @brief Method get_KeyAlgorithm addr 0x1160dd0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm();

  /// @brief Method get_HashAlgorithm addr 0x1160dd8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_KeyId addr 0x1160de0 size 0x8 virtual false final false
  inline int64_t get_KeyId();

  /// @brief Method Encode addr 0x1160de8 size 0x16c virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  // Ctor Parameters [CppParam { name: "", ty: "OnePassSignaturePacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnePassSignaturePacket(OnePassSignaturePacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnePassSignaturePacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnePassSignaturePacket(OnePassSignaturePacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnePassSignaturePacket();

public:
  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field sigType, offset: 0x14, size: 0x4, def value: None
  int32_t ___sigType;

  /// @brief Field hashAlgorithm, offset: 0x18, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashAlgorithm;

  /// @brief Field keyAlgorithm, offset: 0x1c, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag ___keyAlgorithm;

  /// @brief Field keyId, offset: 0x20, size: 0x8, def value: None
  int64_t ___keyId;

  /// @brief Field nested, offset: 0x28, size: 0x4, def value: None
  int32_t ___nested;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, ___sigType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, ___hashAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, ___keyAlgorithm) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, ___keyId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, ___nested) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket*, "Org.BouncyCastle.Bcpg", "OnePassSignaturePacket");
