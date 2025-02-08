#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat
class CORDL_TYPE Nat : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x24debf8, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t Add(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Add33At, addr 0x24df040, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method Add33At, addr 0x24def74, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method Add33To, addr 0x24df11c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Add33To, addr 0x24df180, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x24df294, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                                   ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x24df1f8, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddDWordAt, addr 0x24df3bc, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddDWordAt, addr 0x24df344, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method AddDWordTo, addr 0x24df43c, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddDWordTo, addr 0x24df4a4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x24df520, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x24df5b0, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddTo, addr 0x24ded6c, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddToEachOther, addr 0x24df638, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> u, int32_t uOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> v, int32_t vOff);

  /// @brief Method AddWordAt, addr 0x24df720, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddWordAt, addr 0x24df6cc, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method AddWordTo, addr 0x24df77c, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddWordTo, addr 0x24df7c8, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CAdd, addr 0x24df820, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t CAdd(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method CMov, addr 0x24df94c, size 0x88, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method CMov, addr 0x24df8c4, size 0x88, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CSub, addr 0x24dfc98, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                             ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CSub, addr 0x24dfbf4, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Compare, addr 0x24dfa44, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method Compare, addr 0x24df9d4, size 0x70, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Copy, addr 0x24de734, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Copy(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Copy, addr 0x24dfad8, size 0x20, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Copy, addr 0x24dfac0, size 0x18, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Copy64, addr 0x24dfaf8, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Copy64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method Copy64, addr 0x24dfb8c, size 0x20, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x24dfb74, size 0x18, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Create, addr 0x24de7b0, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Create(int32_t len);

  /// @brief Method Create64, addr 0x24dfbac, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Create64(int32_t len);

  /// @brief Method Dec, addr 0x24dfdac, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Dec, addr 0x24dfd50, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method DecAt, addr 0x24dfed8, size 0x60, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method DecAt, addr 0x24dfe80, size 0x58, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method Eq, addr 0x24dff38, size 0x5c, virtual false, abstract: false, final false
  static inline bool Eq(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method FromBigInteger, addr 0x24dff94, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method FromBigInteger64, addr 0x24e0078, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger64(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x24e015c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bit);

  /// @brief Method Gte, addr 0x24de96c, size 0x68, virtual false, abstract: false, final false
  static inline bool Gte(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Inc, addr 0x24e0218, size 0xd4, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Inc, addr 0x24e01bc, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method IncAt, addr 0x24df0bc, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method IncAt, addr 0x24defe8, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method IsOne, addr 0x24de6bc, size 0x78, virtual false, abstract: false, final false
  static inline bool IsOne(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsZero, addr 0x24de648, size 0x74, virtual false, abstract: false, final false
  static inline bool IsZero(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method LessThan, addr 0x24e0368, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method LessThan, addr 0x24e02ec, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Mul, addr 0x24e05d8, size 0x11c, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz,
                         int32_t zzOff);

  /// @brief Method Mul, addr 0x24e03f4, size 0xe8, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Mul, addr 0x24e0774, size 0x124, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t xLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, int32_t yLen,
                         ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Mul31BothAdd, addr 0x24e0a50, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t Mul31BothAdd(int32_t len, uint32_t a, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t b, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                                      int32_t zOff);

  /// @brief Method MulAddTo, addr 0x24e096c, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                                  ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x24e0898, size 0xd4, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method MulWord, addr 0x24e06f4, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWord, addr 0x24e04dc, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MulWordAddTo, addr 0x24e0550, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddTo(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordDwordAddAt, addr 0x24e0b00, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  static inline ::Org::BouncyCastle::Math::Raw::Nat* New_ctor();

  /// @brief Method ShiftDownBit, addr 0x24e0bf4, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftDownBit, addr 0x24e0c60, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftDownBit, addr 0x24deea8, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, uint32_t c);

  /// @brief Method ShiftDownBit, addr 0x24e0b9c, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x24e0d44, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftDownBits, addr 0x24e0dcc, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftDownBits, addr 0x24dee38, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x24e0cd0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownWord, addr 0x24dedec, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownWord(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x24e0f24, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftUpBit, addr 0x24e0f98, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBit, addr 0x24e0e58, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x24e0eb8, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftUpBit64, addr 0x24e101c, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBit64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, uint64_t c, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x24e122c, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftUpBits, addr 0x24e12bc, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x24e10a0, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits, addr 0x24e111c, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits64, addr 0x24e135c, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, int32_t bits, uint64_t c, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBits64, addr 0x24e11a4, size 0x88, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff, int32_t bits, uint64_t c);

  /// @brief Method Square, addr 0x24e15d4, size 0x16c, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Square, addr 0x24e13fc, size 0x148, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method SquareWordAdd, addr 0x24e1864, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SquareWordAdd, addr 0x24e17d4, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SquareWordAddTo, addr 0x24e1740, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SquareWordAddTo, addr 0x24e1544, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub, addr 0x24e18f8, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                            int32_t zOff);

  /// @brief Method Sub, addr 0x24decd8, size 0x94, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub33At, addr 0x24e1a14, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method Sub33At, addr 0x24e19a0, size 0x74, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method Sub33From, addr 0x24e1a90, size 0x64, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub33From, addr 0x24e1af4, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x24e1c08, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                                    ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x24e1b6c, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubDWordAt, addr 0x24e1d2c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubDWordAt, addr 0x24e1cb8, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method SubDWordFrom, addr 0x24e1da8, size 0x64, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubDWordFrom, addr 0x24e1e0c, size 0x78, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x24e1e84, size 0x90, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x24de9d4, size 0x80, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubWordAt, addr 0x24e1f68, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubWordAt, addr 0x24e1f14, size 0x54, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method SubWordFrom, addr 0x24e1fc4, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubWordFrom, addr 0x24e2010, size 0x58, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ToBigInteger, addr 0x24e2068, size 0xf4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Zero, addr 0x24e215c, size 0x48, virtual false, abstract: false, final false
  static inline void Zero(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method .ctor, addr 0x24e21a4, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat*, "Org.BouncyCastle.Math.Raw", "Nat");
