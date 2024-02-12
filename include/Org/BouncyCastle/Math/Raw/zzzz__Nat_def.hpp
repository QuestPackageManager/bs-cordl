#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Math.Raw::Nat
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1590))
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat*
class CORDL_TYPE Nat : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x108978c, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t Add(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Add33At, addr 0x1089b1c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method Add33At, addr 0x1089be8, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t Add33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method Add33To, addr 0x1089cc8, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Add33To, addr 0x1089d2c, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t Add33To(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x1089da4, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddBothTo, addr 0x1089e40, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                                   ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddDWordAt, addr 0x1089ef0, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method AddDWordAt, addr 0x1089f68, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddDWordTo, addr 0x1089fe8, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddDWordTo, addr 0x108a050, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t AddDWordTo(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x1089900, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddTo, addr 0x108a0cc, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddTo, addr 0x108a15c, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t AddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddToEachOther, addr 0x108a1e4, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> u, int32_t uOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> v, int32_t vOff);

  /// @brief Method AddWordAt, addr 0x108a278, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method AddWordAt, addr 0x108a2cc, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t AddWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method AddWordTo, addr 0x108a328, size 0x4c, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddWordTo, addr 0x108a374, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t AddWordTo(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CAdd, addr 0x108a3cc, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t CAdd(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method CMov, addr 0x108a46c, size 0x88, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CMov, addr 0x108a4f4, size 0x88, virtual false, abstract: false, final false
  static inline void CMov(int32_t len, int32_t mask, ::ArrayW<int32_t, ::Array<int32_t>*> x, int32_t xOff, ::ArrayW<int32_t, ::Array<int32_t>*> z, int32_t zOff);

  /// @brief Method Compare, addr 0x108a57c, size 0x70, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Compare, addr 0x108a5ec, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Compare(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method Copy, addr 0x108a668, size 0x18, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Copy, addr 0x10892e4, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Copy(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Copy, addr 0x108a680, size 0x20, virtual false, abstract: false, final false
  static inline void Copy(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x108a6a0, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Copy64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method Copy64, addr 0x108a71c, size 0x18, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Copy64, addr 0x108a734, size 0x20, virtual false, abstract: false, final false
  static inline void Copy64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Create, addr 0x1089360, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Create(int32_t len);

  /// @brief Method Create64, addr 0x108a754, size 0x48, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Create64(int32_t len);

  /// @brief Method CSub, addr 0x108a79c, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method CSub, addr 0x108a83c, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t CSub(int32_t len, int32_t mask, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                             ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Dec, addr 0x108a8f0, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Dec, addr 0x108a94c, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t Dec(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method DecAt, addr 0x108a9fc, size 0x58, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method DecAt, addr 0x108aa54, size 0x64, virtual false, abstract: false, final false
  static inline int32_t DecAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method Eq, addr 0x108aab8, size 0x64, virtual false, abstract: false, final false
  static inline bool Eq(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method FromBigInteger, addr 0x108ab1c, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method FromBigInteger64, addr 0x108ac08, size 0xec, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger64(int32_t bits, ::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x108acf4, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bit);

  /// @brief Method Gte, addr 0x1089500, size 0x68, virtual false, abstract: false, final false
  static inline bool Gte(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Inc, addr 0x108ad54, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Inc, addr 0x108adb0, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t Inc(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method IncAt, addr 0x1089b90, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method IncAt, addr 0x1089c64, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t IncAt(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method IsOne, addr 0x1089280, size 0x64, virtual false, abstract: false, final false
  static inline bool IsOne(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsZero, addr 0x1089220, size 0x60, virtual false, abstract: false, final false
  static inline bool IsZero(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method LessThan, addr 0x108ae60, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method LessThan, addr 0x108aedc, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t LessThan(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method Mul, addr 0x108af68, size 0xe8, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Mul, addr 0x108b150, size 0x11c, virtual false, abstract: false, final false
  static inline void Mul(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz,
                         int32_t zzOff);

  /// @brief Method Mul, addr 0x108b2f4, size 0x124, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t xLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, int32_t yLen,
                         ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x108b418, size 0xd4, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method MulAddTo, addr 0x108b4ec, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                                  ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Mul31BothAdd, addr 0x108b5d0, size 0xac, virtual false, abstract: false, final false
  static inline uint32_t Mul31BothAdd(int32_t len, uint32_t a, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t b, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                                      int32_t zOff);

  /// @brief Method MulWord, addr 0x108b050, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MulWord, addr 0x108b26c, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t MulWord(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordAddTo, addr 0x108b0c0, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddTo(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordDwordAddAt, addr 0x108b67c, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method ShiftDownBit, addr 0x1089a44, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, uint32_t c);

  /// @brief Method ShiftDownBit, addr 0x108b718, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftDownBit, addr 0x108b770, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftDownBit, addr 0x108b7dc, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftDownBits, addr 0x10899d0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x108b84c, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftDownBits, addr 0x108b8c0, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftDownBits, addr 0x108b948, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftDownWord, addr 0x1089980, size 0x50, virtual false, abstract: false, final false
  static inline uint32_t ShiftDownWord(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x108b9d4, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x108ba34, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t c);

  /// @brief Method ShiftUpBit, addr 0x108baa0, size 0x74, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftUpBit, addr 0x108bb14, size 0x84, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBit(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBit64, addr 0x108bb98, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBit64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, uint64_t c, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBits, addr 0x108bc1c, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits, addr 0x108bc98, size 0x88, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t bits, uint32_t c);

  /// @brief Method ShiftUpBits64, addr 0x108bd20, size 0x88, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff, int32_t bits, uint64_t c);

  /// @brief Method ShiftUpBits, addr 0x108bda8, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftUpBits, addr 0x108be38, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t ShiftUpBits(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t bits, uint32_t c, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ShiftUpBits64, addr 0x108bed8, size 0xa0, virtual false, abstract: false, final false
  static inline uint64_t ShiftUpBits64(int32_t len, ::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, int32_t bits, uint64_t c, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Square, addr 0x108bf78, size 0x148, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Square, addr 0x108c154, size 0x174, virtual false, abstract: false, final false
  static inline void Square(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method SquareWordAdd, addr 0x108c35c, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SquareWordAdd, addr 0x108c3f0, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAdd(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SquareWordAddTo, addr 0x108c0c0, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SquareWordAddTo, addr 0x108c2c8, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, int32_t xPos, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Sub, addr 0x108986c, size 0x94, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub, addr 0x108c484, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t Sub(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                            int32_t zOff);

  /// @brief Method Sub33At, addr 0x108c52c, size 0x74, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method Sub33At, addr 0x108c5a0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Sub33At(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method Sub33From, addr 0x108c61c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub33From, addr 0x108c680, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Sub33From(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x108c6f8, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubBothFrom, addr 0x108c794, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff,
                                    ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubDWordAt, addr 0x108c844, size 0x74, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method SubDWordAt, addr 0x108c8b8, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SubDWordAt(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubDWordFrom, addr 0x108c934, size 0x64, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubDWordFrom, addr 0x108c998, size 0x78, virtual false, abstract: false, final false
  static inline int32_t SubDWordFrom(int32_t len, uint64_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x1089568, size 0x80, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubFrom, addr 0x108ca10, size 0x90, virtual false, abstract: false, final false
  static inline int32_t SubFrom(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubWordAt, addr 0x108caa0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zPos);

  /// @brief Method SubWordAt, addr 0x108caf4, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t SubWordAt(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, int32_t zPos);

  /// @brief Method SubWordFrom, addr 0x108cb50, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubWordFrom, addr 0x108cb9c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t SubWordFrom(int32_t len, uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ToBigInteger, addr 0x108cbf4, size 0xf4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Zero, addr 0x108cce8, size 0x48, virtual false, abstract: false, final false
  static inline void Zero(int32_t len, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  static inline ::Org::BouncyCastle::Math::Raw::Nat* New_ctor();

  /// @brief Method .ctor, addr 0x108cd30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat(Nat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat(Nat const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat();

public:
  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat*, "Org.BouncyCastle.Math.Raw", "Nat");
