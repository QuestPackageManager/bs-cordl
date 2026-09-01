#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\Raw\Nat320.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat320)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat320;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::Raw::Nat320*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::Raw::Nat320*, "Org.BouncyCastle.Math.Raw", "Nat320");
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat320
class CORDL_TYPE Nat320 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Copy64, addr 0x3564544, size 0x104, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x35644a0, size 0xa4, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);

  /// @brief Method Create64, addr 0x3564648, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Create64();

  /// @brief Method CreateExt64, addr 0x3564690, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> CreateExt64();

  /// @brief Method Eq64, addr 0x35646d8, size 0x64, virtual false, abstract: false, final false
  static inline bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y);

  /// @brief Method FromBigInteger64, addr 0x356473c, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsOne64, addr 0x35647fc, size 0x68, virtual false, abstract: false, final false
  static inline bool IsOne64(::ArrayW<uint64_t> x);

  /// @brief Method IsZero64, addr 0x3564864, size 0x50, virtual false, abstract: false, final false
  static inline bool IsZero64(::ArrayW<uint64_t> x);

  static inline ::Org::BouncyCastle::Math::Raw::Nat320* New_ctor();

  /// @brief Method ToBigInteger64, addr 0x35648b4, size 0xf4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t> x);

  /// @brief Method .ctor, addr 0x35649a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat320();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat320", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat320(Nat320&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat320", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat320(Nat320 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::Raw::Nat320) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
