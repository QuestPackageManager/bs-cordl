#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\Raw\Nat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::Raw::Nat*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::Raw::Nat*, "Org.BouncyCastle.Math.Raw", "Nat");
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat
class CORDL_TYPE Nat : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x3534090, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t Add(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method Add33At, addr 0x353450c, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method Add33At, addr 0x3534424, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method Add33To, addr 0x35345f4, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method Add33To, addr 0x353465c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x3534774, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x35346d8, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddDWordAt, addr 0x35348b0, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddDWordAt, addr 0x3534838, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method AddDWordTo, addr 0x3534930, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t> z);

  /// @brief Method AddDWordTo, addr 0x3534994, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x3534a0c, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x3534aa4, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddTo, addr 0x3534204, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method AddToEachOther, addr 0x3534b34, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(int32_t len, ::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff);

  /// @brief Method AddWordAt, addr 0x3534c24, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddWordAt, addr 0x3534bd0, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method AddWordTo, addr 0x3534c80, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method AddWordTo, addr 0x3534cc8, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method CAdd, addr 0x3534d1c, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t CAdd(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method CMov, addr 0x3534e3c, size 0x84, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<int32_t> x, int32_t xOff, ::ArrayW<int32_t> z, int32_t zOff);

  /// @brief Method CMov, addr 0x3534db8, size 0x84, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method CSub, addr 0x3535198, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method CSub, addr 0x35350fc, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method Compare, addr 0x3534f3c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff);

  /// @brief Method Compare, addr 0x3534ec0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Copy, addr 0x3533ba4, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Copy(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method Copy, addr 0x3534fd4, size 0x20, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Copy, addr 0x3534fb8, size 0x1c, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Copy64, addr 0x3534ff4, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Copy64(int32_t len, ::ArrayW<uint64_t> x);

  /// @brief Method Copy64, addr 0x3535090, size 0x20, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x3535074, size 0x1c, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z);

  /// @brief Method Create, addr 0x3533c24, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> Create(int32_t len);

  /// @brief Method Create64, addr 0x35350b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> Create64(int32_t len);

  /// @brief Method Dec, addr 0x35352b8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Dec, addr 0x353525c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t> z);

  /// @brief Method DecAt, addr 0x35353e0, size 0x64, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method DecAt, addr 0x3535374, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method Eq, addr 0x3535444, size 0x68, virtual false, abstract: false, final false
  static inline bool Eq(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method FromBigInteger, addr 0x35354ac, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> FromBigInteger(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method FromBigInteger64, addr 0x3535584, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t> FromBigInteger64(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x353565c, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit);

  /// @brief Method Gte, addr 0x3533df8, size 0x74, virtual false, abstract: false, final false
  static inline bool Gte(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Inc, addr 0x3535714, size 0xbc, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Inc, addr 0x35356b8, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t> z);

  /// @brief Method IncAt, addr 0x3534590, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method IncAt, addr 0x35344a0, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method IsOne, addr 0x3533b2c, size 0x78, virtual false, abstract: false, final false
  static inline bool IsOne(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method IsZero, addr 0x3533ab8, size 0x74, virtual false, abstract: false, final false
  static inline bool IsZero(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method LessThan, addr 0x353584c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff);

  /// @brief Method LessThan, addr 0x35357d0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y);

  /// @brief Method Mul, addr 0x3535ad0, size 0x11c, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Mul, addr 0x35358e0, size 0xec, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method Mul, addr 0x3535c74, size 0x124, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t> x, int32_t xOff, int32_t xLen, ::ArrayW<uint32_t> y, int32_t yOff, int32_t yLen, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Mul31BothAdd, addr 0x3535f5c, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t Mul31BothAdd(int32_t len, uint32_t a, ::ArrayW<uint32_t> x, uint32_t b, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulAddTo, addr 0x3535e6c, size 0xf0, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x3535d98, size 0xd4, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method MulWord, addr 0x3535bec, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWord, addr 0x35359cc, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method MulWordAddTo, addr 0x3535a40, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddTo(int32_t len, uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method MulWordDwordAddAt, addr 0x3536008, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zPos);

  static inline ::Org::BouncyCastle::Math::Raw::Nat* New_ctor();

  /// @brief Method ShiftDownBit, addr 0x3536108, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> x, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftDownBit, addr 0x3536178, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftDownBit, addr 0x353434c, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> z, uint32_t c);

  /// @brief Method ShiftDownBit, addr 0x35360a8, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x3536270, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftDownBits, addr 0x35362fc, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftDownBits, addr 0x35342d8, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x35361f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownWord, addr 0x3534284, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownWord(int32_t len, ::ArrayW<uint32_t> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x3536450, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> x, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftUpBit, addr 0x35364c4, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftUpBit, addr 0x3536394, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x35363ec, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftUpBit64, addr 0x3536550, size 0x90, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBit64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, uint64_t c, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x353675c, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z);

  /// @brief Method ShiftUpBits, addr 0x35367ec, size 0xa8, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x35365e0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits, addr 0x3536654, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits64, addr 0x3536894, size 0xac, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t> x, int32_t xOff, int32_t bits, uint64_t c, ::ArrayW<uint64_t> z, int32_t zOff);

  /// @brief Method ShiftUpBits64, addr 0x35366d4, size 0x88, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t> z, int32_t zOff, int32_t bits, uint64_t c);

  /// @brief Method Square, addr 0x3536b1c, size 0x174, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff);

  /// @brief Method Square, addr 0x3536940, size 0x14c, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz);

  /// @brief Method SquareWordAdd, addr 0x3536db8, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SquareWordAdd, addr 0x3536d28, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t> x, int32_t xPos, ::ArrayW<uint32_t> z);

  /// @brief Method SquareWordAddTo, addr 0x3536c90, size 0x98, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SquareWordAddTo, addr 0x3536a8c, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t> x, int32_t xPos, ::ArrayW<uint32_t> z);

  /// @brief Method Sub, addr 0x3536e50, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method Sub, addr 0x3534170, size 0x94, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method Sub33At, addr 0x3536f80, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method Sub33At, addr 0x3536f0c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method Sub33From, addr 0x3536ffc, size 0x60, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method Sub33From, addr 0x353705c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x353716c, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x35370d0, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubDWordAt, addr 0x35372a4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubDWordAt, addr 0x3537230, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method SubDWordFrom, addr 0x3537320, size 0x60, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t> z);

  /// @brief Method SubDWordFrom, addr 0x3537380, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x35373f4, size 0x98, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x3533e6c, size 0x80, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method SubWordAt, addr 0x35374e0, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubWordAt, addr 0x353748c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zPos);

  /// @brief Method SubWordFrom, addr 0x353753c, size 0x48, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method SubWordFrom, addr 0x3537584, size 0x54, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t> z, int32_t zOff);

  /// @brief Method ToBigInteger, addr 0x35375d8, size 0xfc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t len, ::ArrayW<uint32_t> x);

  /// @brief Method Zero, addr 0x35376d4, size 0x40, virtual false, abstract: false, final false
  static inline void Zero(int32_t len, ::ArrayW<uint32_t> z);

  /// @brief Method .ctor, addr 0x3537714, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat(Nat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat(Nat const&) = delete;

  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::Raw::Nat) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
