#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ECDsaPublicBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_def.hpp"
CORDL_MODULE_EXPORT(ECDsaPublicBcpgKey)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECDsaPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey);
// Type: Org.BouncyCastle.Bcpg::ECDsaPublicBcpgKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::ECDsaPublicBcpgKey*
class CORDL_TYPE ECDsaPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  static inline ::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::BigInteger* encodedPoint);

  static inline ::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method .ctor, addr 0x143a4bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor, addr 0x143a4c4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::BigInteger* encodedPoint);

  /// @brief Method .ctor, addr 0x143a4c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Math::EC::ECPoint* point);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDsaPublicBcpgKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECDsaPublicBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDsaPublicBcpgKey(ECDsaPublicBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDsaPublicBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDsaPublicBcpgKey(ECDsaPublicBcpgKey const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "ECDsaPublicBcpgKey");
