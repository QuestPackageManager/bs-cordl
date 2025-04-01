#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ECDHPublicBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHPublicBcpgKey)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
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
// Dependencies Org.BouncyCastle.Bcpg.ECPublicBcpgKey, Org.BouncyCastle.Bcpg.HashAlgorithmTag, Org.BouncyCastle.Bcpg.SymmetricKeyAlgorithmTag
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.ECDHPublicBcpgKey
class CORDL_TYPE ECDHPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag HashAlgorithm;

  __declspec(property(get = get_Reserved)) uint8_t Reserved;

  __declspec(property(get = get_SymmetricKeyAlgorithm)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag SymmetricKeyAlgorithm;

  /// @brief Field hashFunctionId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_hashFunctionId, put = __cordl_internal_set_hashFunctionId)) ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashFunctionId;

  /// @brief Field reserved, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_reserved, put = __cordl_internal_set_reserved)) uint8_t reserved;

  /// @brief Field symAlgorithmId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_symAlgorithmId, put = __cordl_internal_set_symAlgorithmId)) ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symAlgorithmId;

  /// @brief Method Encode, addr 0x2644758, size 0x84, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  static inline ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point,
                                                                       ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                       ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm);

  /// @brief Method VerifyHashAlgorithm, addr 0x264463c, size 0x64, virtual false, abstract: false, final false
  inline void VerifyHashAlgorithm();

  /// @brief Method VerifySymmetricKeyAlgorithm, addr 0x26446a0, size 0x64, virtual false, abstract: false, final false
  inline void VerifySymmetricKeyAlgorithm();

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& __cordl_internal_get_hashFunctionId() const;

  constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& __cordl_internal_get_hashFunctionId();

  constexpr uint8_t const& __cordl_internal_get_reserved() const;

  constexpr uint8_t& __cordl_internal_get_reserved();

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& __cordl_internal_get_symAlgorithmId() const;

  constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& __cordl_internal_get_symAlgorithmId();

  constexpr void __cordl_internal_set_hashFunctionId(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value);

  constexpr void __cordl_internal_set_reserved(uint8_t value);

  constexpr void __cordl_internal_set_symAlgorithmId(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value);

  /// @brief Method .ctor, addr 0x2644518, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x2644704, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm);

  /// @brief Method get_HashAlgorithm, addr 0x2644748, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm();

  /// @brief Method get_Reserved, addr 0x2644740, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_Reserved();

  /// @brief Method get_SymmetricKeyAlgorithm, addr 0x2644750, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_SymmetricKeyAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHPublicBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECDHPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHPublicBcpgKey(ECDHPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHPublicBcpgKey(ECDHPublicBcpgKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 566 };

  /// @brief Field reserved, offset: 0x20, size: 0x1, def value: None
  uint8_t ___reserved;

  /// @brief Field hashFunctionId, offset: 0x24, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag ___hashFunctionId;

  /// @brief Field symAlgorithmId, offset: 0x28, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag ___symAlgorithmId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, ___reserved) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, ___hashFunctionId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, ___symAlgorithmId) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "ECDHPublicBcpgKey");
