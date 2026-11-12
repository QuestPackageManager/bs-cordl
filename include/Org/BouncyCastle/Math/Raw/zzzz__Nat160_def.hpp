#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat160.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat160)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat160;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::Raw::Nat160*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::Raw::Nat160*, "Org.BouncyCastle.Math.Raw", "Nat160");
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat160
class CORDL_TYPE Nat160 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x37e9a40, size 0x10c, virtual false, abstract: false, final false
  static inline uint32_t Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddBothTo, addr 0x37e9b4c, size 0x130, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddTo, addr 0x37e9d58, size 0x168, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddTo, addr 0x37e9c7c, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method AddToEachOther, addr 0x37e9ec0, size 0x140, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff);

  /// @brief Method Copy, addr 0x37ea094, size 0xe4, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Copy, addr 0x37ea000, size 0x94, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Create, addr 0x37ea178, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Create();

  /// @brief Method CreateExt, addr 0x37ea1c0, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> CreateExt();

  /// @brief Method Diff, addr 0x37ea208, size 0x7c, virtual false, abstract: false, final false
  static inline bool Diff(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Eq, addr 0x37ea47c, size 0x64, virtual false, abstract: false, final false
  static inline bool Eq(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method FromBigInteger, addr 0x37ea4e0, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x37ea5ac, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit);

  /// @brief Method Gte, addr 0x37ea284, size 0x78, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff);

  /// @brief Method Gte, addr 0x37ea610, size 0x6c, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method IsOne, addr 0x37ea67c, size 0x68, virtual false, abstract: false, final false
  static inline bool IsOne(::ArrayW<uint32_t> x);

  /// @brief Method IsZero, addr 0x37ea6e4, size 0x50, virtual false, abstract: false, final false
  static inline bool IsZero(::ArrayW<uint32_t> x);

  /// @brief Method Mul, addr 0x37ea898, size 0x24c, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Mul, addr 0x37ea734, size 0x164, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method Mul33Add, addr 0x37eadf0, size 0x198, virtual false, abstract: false, final false
  static inline uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Mul33DWordAdd, addr 0x37eb0bc, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Mul33WordAdd, addr 0x37eb18c, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulAddTo, addr 0x37eac28, size 0x1c8, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x37eaae4, size 0x144, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method MulWord, addr 0x37eb3cc, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWordAddExt, addr 0x37eaf88, size 0x134, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddExt(uint32_t x, ::ArrayW<uint32_t> yy, int32_t yyOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method MulWordDwordAdd, addr 0x37eb254, size 0xd0, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWordsAdd, addr 0x37eb324, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t MulWordsAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  static inline ::Org::BouncyCastle::Math::Raw::Nat160* New_ctor();

  /// @brief Method Square, addr 0x37eb62c, size 0x29c, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Square, addr 0x37eb448, size 0x1e4, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz);

  /// @brief Method Sub, addr 0x37ea2fc, size 0x180, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Sub, addr 0x37eb8c8, size 0x108, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubBothFrom, addr 0x37eb9d0, size 0x130, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubFrom, addr 0x37ebbdc, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x37ebb00, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method ToBigInteger, addr 0x37ebd08, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t> x);

  /// @brief Method Zero, addr 0x37ebde8, size 0x54, virtual false, abstract: false, final false
  static inline void Zero(::ArrayW<uint32_t> z);

  /// @brief Method .ctor, addr 0x37ebe3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat160();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat160", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat160(Nat160&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat160", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat160(Nat160 const&) = delete;

  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::Raw::Nat160) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
