#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat576)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat576;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat576);
// Type: Org.BouncyCastle.Math.Raw::Nat576
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1600))
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat576*
class CORDL_TYPE Nat576 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Copy64, addr 0x10bbe30, size 0x114, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Copy64, addr 0x10bbf44, size 0x1c4, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Create64, addr 0x10bc108, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Create64();

  /// @brief Method CreateExt64, addr 0x10bc14c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> CreateExt64();

  /// @brief Method Eq64, addr 0x10bc190, size 0x68, virtual false, abstract: false, final false
  static inline bool Eq64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method FromBigInteger64, addr 0x10bc1f8, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method IsOne64, addr 0x10bc2cc, size 0x60, virtual false, abstract: false, final false
  static inline bool IsOne64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method IsZero64, addr 0x10bc32c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsZero64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method ToBigInteger64, addr 0x10bc378, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  static inline ::Org::BouncyCastle::Math::Raw::Nat576* New_ctor();

  /// @brief Method .ctor, addr 0x10bc458, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Nat576", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat576(Nat576&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat576", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat576(Nat576 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat576();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat576, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat576);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat576*, "Org.BouncyCastle.Math.Raw", "Nat576");
