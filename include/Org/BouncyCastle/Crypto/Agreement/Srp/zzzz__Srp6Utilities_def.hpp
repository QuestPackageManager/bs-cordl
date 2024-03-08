#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Srp6Utilities)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Utilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities);
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Utilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Utilities*
class CORDL_TYPE Srp6Utilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateK, addr 0x12ae760, size 0xc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateK(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method CalculateKey, addr 0x12ae934, size 0x218, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateKey(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* S);

  /// @brief Method CalculateM1, addr 0x12ae7f0, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateM1(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* A,
                                                                   ::Org::BouncyCastle::Math::BigInteger* B, ::Org::BouncyCastle::Math::BigInteger* S);

  /// @brief Method CalculateM2, addr 0x12ae8ac, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateM2(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* A,
                                                                   ::Org::BouncyCastle::Math::BigInteger* M1, ::Org::BouncyCastle::Math::BigInteger* S);

  /// @brief Method CalculateU, addr 0x12ae57c, size 0x4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateU(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* A,
                                                                  ::Org::BouncyCastle::Math::BigInteger* B);

  /// @brief Method CalculateX, addr 0x12ae048, size 0x408, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateX(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> identity, ::ArrayW<uint8_t, ::Array<uint8_t>*> password);

  /// @brief Method GeneratePrivateValue, addr 0x12ae65c, size 0x104, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* GeneratePrivateValue(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N,
                                                                            ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GetPadded, addr 0x12af7a4, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPadded(::Org::BouncyCastle::Math::BigInteger* n, int32_t length);

  /// @brief Method HashPaddedPair, addr 0x12af1d8, size 0x2a0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* HashPaddedPair(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* n1,
                                                                      ::Org::BouncyCastle::Math::BigInteger* n2);

  /// @brief Method HashPaddedTriplet, addr 0x12af478, size 0x32c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* HashPaddedTriplet(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::BigInteger* N,
                                                                         ::Org::BouncyCastle::Math::BigInteger* n1, ::Org::BouncyCastle::Math::BigInteger* n2,
                                                                         ::Org::BouncyCastle::Math::BigInteger* n3);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities* New_ctor();

  /// @brief Method ValidatePublicValue, addr 0x12ae494, size 0xe8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ValidatePublicValue(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method .ctor, addr 0x12af840, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Srp6Utilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Srp6Utilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Srp6Utilities(Srp6Utilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Srp6Utilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Srp6Utilities(Srp6Utilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Utilities*, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Utilities");
