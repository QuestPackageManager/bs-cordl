#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHPublicBcpgKey)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECDHPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey);
// Type: Org.BouncyCastle.Bcpg::ECDHPublicBcpgKey
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(594)), TypeDefinitionIndex(TypeDefinitionIndex(565)), TypeDefinitionIndex(TypeDefinitionIndex(572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(566))
// CS Name: ::Org.BouncyCastle.Bcpg::ECDHPublicBcpgKey*
class CORDL_TYPE ECDHPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey {
public:
  // Declarations
  /// @brief Field reserved, offset 0x20, size 0x1
  __declspec(property(get = __get_reserved, put = __set_reserved)) uint8_t reserved;

  /// @brief Field hashFunctionId, offset 0x24, size 0x4
  __declspec(property(get = __get_hashFunctionId, put = __set_hashFunctionId))::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashFunctionId;

  /// @brief Field symAlgorithmId, offset 0x28, size 0x4
  __declspec(property(get = __get_symAlgorithmId, put = __set_symAlgorithmId))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symAlgorithmId;

  __declspec(property(get = get_Reserved)) uint8_t Reserved;

  __declspec(property(get = get_HashAlgorithm))::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_SymmetricKeyAlgorithm))::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag SymmetricKeyAlgorithm;

  constexpr uint8_t& __get_reserved();

  constexpr uint8_t const& __get_reserved() const;

  constexpr void __set_reserved(uint8_t value);

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __get_hashFunctionId();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __get_hashFunctionId() const;

  constexpr void __set_hashFunctionId(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __get_symAlgorithmId();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __get_symAlgorithmId() const;

  constexpr void __set_symAlgorithmId(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  static inline ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x115ff20 size 0x128 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                       ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                       ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm);

  /// @brief Method .ctor addr 0x1160118 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm);

  /// @brief Method get_Reserved addr 0x1160154 size 0x8 virtual true final false
  inline uint8_t get_Reserved();

  /// @brief Method get_HashAlgorithm addr 0x116015c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_SymmetricKeyAlgorithm addr 0x1160164 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_SymmetricKeyAlgorithm();

  /// @brief Method Encode addr 0x116016c size 0x84 virtual true final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method VerifyHashAlgorithm addr 0x1160048 size 0x68 virtual false final false
  inline void VerifyHashAlgorithm();

  /// @brief Method VerifySymmetricKeyAlgorithm addr 0x11600b0 size 0x68 virtual false final false
  inline void VerifySymmetricKeyAlgorithm();

  // Ctor Parameters [CppParam { name: "", ty: "ECDHPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHPublicBcpgKey(ECDHPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHPublicBcpgKey(ECDHPublicBcpgKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHPublicBcpgKey();

public:
  /// @brief Field reserved, offset: 0x20, size: 0x1, def value: None
  uint8_t ___reserved;

  /// @brief Field hashFunctionId, offset: 0x24, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashFunctionId;

  /// @brief Field symAlgorithmId, offset: 0x28, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___symAlgorithmId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, ___reserved) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, ___hashFunctionId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, ___symAlgorithmId) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "ECDHPublicBcpgKey");
