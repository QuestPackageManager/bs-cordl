#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat448)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat448;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat448);
// Type: Org.BouncyCastle.Math.Raw::Nat448
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat448*
class CORDL_TYPE Nat448 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Copy64, addr 0x10ff70c, size 0x164, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x10ff630, size 0xdc, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Create64, addr 0x10ff870, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Create64();

  /// @brief Method CreateExt64, addr 0x10ff8b4, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> CreateExt64();

  /// @brief Method Eq64, addr 0x10ff8f8, size 0x68, virtual false, abstract: false, final false
  static inline bool Eq64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method FromBigInteger64, addr 0x10ff960, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsOne64, addr 0x10ffa34, size 0x60, virtual false, abstract: false, final false
  static inline bool IsOne64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method IsZero64, addr 0x10ffa94, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsZero64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  static inline ::Org::BouncyCastle::Math::Raw::Nat448* New_ctor();

  /// @brief Method ToBigInteger64, addr 0x10ffae0, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method .ctor, addr 0x10ffbc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat448();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat448", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat448(Nat448&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat448", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat448(Nat448 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat448, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat448);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat448*, "Org.BouncyCastle.Math.Raw", "Nat448");
