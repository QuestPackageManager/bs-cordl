#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat256.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat256)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat256;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::Raw::Nat256*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::Raw::Nat256*, "Org.BouncyCastle.Math.Raw", "Nat256");
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat256
class CORDL_TYPE Nat256 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x3810544, size 0x25c, virtual false, abstract: false, final false
  static inline uint32_t Add(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Add, addr 0x38103a8, size 0x19c, virtual false, abstract: false, final false
  static inline uint32_t Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddBothTo, addr 0x3810978, size 0x298, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x38107a0, size 0x1d8, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddTo, addr 0x3810d64, size 0x1dc, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddTo, addr 0x3810c10, size 0x154, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method AddToEachOther, addr 0x3810f40, size 0x1f4, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff);

  /// @brief Method Copy, addr 0x3811210, size 0x15c, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Copy, addr 0x3811134, size 0xdc, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Copy64, addr 0x38113f4, size 0xd4, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x381136c, size 0x88, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);

  /// @brief Method Create, addr 0x38114c8, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Create();

  /// @brief Method Create64, addr 0x3811510, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Create64();

  /// @brief Method CreateExt, addr 0x3811558, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> CreateExt();

  /// @brief Method CreateExt64, addr 0x38115a0, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> CreateExt64();

  /// @brief Method Diff, addr 0x38115e8, size 0x7c, virtual false, abstract: false, final false
  static inline bool Diff(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Eq, addr 0x3811934, size 0x64, virtual false, abstract: false, final false
  static inline bool Eq(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Eq64, addr 0x3811998, size 0x64, virtual false, abstract: false, final false
  static inline bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y);

  /// @brief Method FromBigInteger, addr 0x38119fc, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method FromBigInteger64, addr 0x3811d84, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x3811ea8, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit);

  /// @brief Method Gte, addr 0x3811664, size 0x78, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff);

  /// @brief Method Gte, addr 0x3811f0c, size 0x6c, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method IsOne, addr 0x3811f78, size 0x68, virtual false, abstract: false, final false
  static inline bool IsOne(::ArrayW<uint32_t> x);

  /// @brief Method IsOne64, addr 0x3811fe0, size 0x68, virtual false, abstract: false, final false
  static inline bool IsOne64(::ArrayW<uint64_t> x);

  /// @brief Method IsZero, addr 0x3812048, size 0x50, virtual false, abstract: false, final false
  static inline bool IsZero(::ArrayW<uint32_t> x);

  /// @brief Method IsZero64, addr 0x3812098, size 0x50, virtual false, abstract: false, final false
  static inline bool IsZero64(::ArrayW<uint64_t> x);

  /// @brief Method Mul, addr 0x38122dc, size 0x378, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Mul, addr 0x38120e8, size 0x1f4, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method Mul33Add, addr 0x3812aac, size 0x27c, virtual false, abstract: false, final false
  static inline uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Mul33DWordAdd, addr 0x3813138, size 0xec, virtual false, abstract: false, final false
  static inline uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Mul33WordAdd, addr 0x3813224, size 0xc0, virtual false, abstract: false, final false
  static inline uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulAddTo, addr 0x381281c, size 0x290, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x3812654, size 0x1c8, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method MulByWord, addr 0x3812d28, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t MulByWord(uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method MulByWordAddTo, addr 0x3812e04, size 0x158, virtual false, abstract: false, final false
  static inline uint32_t MulByWordAddTo(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method MulWord, addr 0x38133ac, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWordAddTo, addr 0x3812f5c, size 0x1dc, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddTo(uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWordDwordAdd, addr 0x38132e4, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff);

  static inline ::Org::BouncyCastle::Math::Raw::Nat256* New_ctor();

  /// @brief Method Square, addr 0x3813790, size 0x4a8, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Square, addr 0x3813428, size 0x368, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz);

  /// @brief Method Sub, addr 0x38116dc, size 0x258, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Sub, addr 0x3813c38, size 0x198, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubBothFrom, addr 0x3813dd0, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubFrom, addr 0x38140fc, size 0x1d4, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x3813fa8, size 0x154, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method ToBigInteger, addr 0x38142d0, size 0xdc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t> x);

  /// @brief Method ToBigInteger64, addr 0x38143c4, size 0xf8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t> x);

  /// @brief Method Zero, addr 0x38144bc, size 0x78, virtual false, abstract: false, final false
  static inline void Zero(::ArrayW<uint32_t> z);

  /// @brief Method .ctor, addr 0x3814534, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat256();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat256", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat256(Nat256&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat256", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat256(Nat256 const&) = delete;

  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::Raw::Nat256) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
