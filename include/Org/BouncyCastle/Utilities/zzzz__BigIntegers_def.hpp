#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/BigIntegers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegers)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class BigIntegers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::BigIntegers);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.BigIntegers
class CORDL_TYPE BigIntegers : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsUnsignedByteArray, addr 0x25e6108, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsUnsignedByteArray(int32_t length, ::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method AsUnsignedByteArray, addr 0x25e60f4, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsUnsignedByteArray(::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method AsUnsignedByteArray, addr 0x25e6210, size 0x148, virtual false, abstract: false, final false
  static inline void AsUnsignedByteArray(::Org::BouncyCastle::Math::BigInteger* value, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method CreateRandomBigInteger, addr 0x25e6358, size 0x6c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CreateRandomBigInteger(int32_t bitLength, ::Org::BouncyCastle::Security::SecureRandom* secureRandom);

  /// @brief Method CreateRandomInRange, addr 0x25e63c4, size 0x218, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CreateRandomInRange(::Org::BouncyCastle::Math::BigInteger* min, ::Org::BouncyCastle::Math::BigInteger* max,
                                                                           ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method GetUnsignedByteLength, addr 0x25e65dc, size 0x30, virtual false, abstract: false, final false
  static inline int32_t GetUnsignedByteLength(::Org::BouncyCastle::Math::BigInteger* n);

  static inline ::Org::BouncyCastle::Utilities::BigIntegers* New_ctor();

  /// @brief Method .ctor, addr 0x25e660c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigIntegers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BigIntegers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigIntegers(BigIntegers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigIntegers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigIntegers(BigIntegers const&) = delete;

  /// @brief Field MaxIterations offset 0xffffffff size 0x4
  static constexpr int32_t MaxIterations{ static_cast<int32_t>(0x3e8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1832 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::BigIntegers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::BigIntegers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::BigIntegers*, "Org.BouncyCastle.Utilities", "BigIntegers");
