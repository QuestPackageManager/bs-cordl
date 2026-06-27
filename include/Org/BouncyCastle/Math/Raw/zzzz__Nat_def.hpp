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
/// @brief Method Add, addr 0x3475850, size 0x94, virtual false, abstract: false, final false
static inline uint32_t Add(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Add33At, addr 0x3475ccc, size 0x84, virtual false, abstract: false, final false
static inline uint32_t Add33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method Add33At, addr 0x3475be4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t Add33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method Add33To, addr 0x3475db4, size 0x68, virtual false, abstract: false, final false
static inline uint32_t Add33To(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Add33To, addr 0x3475e1c, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t Add33To(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddBothTo, addr 0x3475f34, size 0xc4, virtual false, abstract: false, final false
static inline uint32_t AddBothTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddBothTo, addr 0x3475e98, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t AddBothTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddDWordAt, addr 0x3476070, size 0x80, virtual false, abstract: false, final false
static inline uint32_t AddDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method AddDWordAt, addr 0x3475ff8, size 0x78, virtual false, abstract: false, final false
static inline uint32_t AddDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method AddDWordTo, addr 0x34760f0, size 0x64, virtual false, abstract: false, final false
static inline uint32_t AddDWordTo(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddDWordTo, addr 0x3476154, size 0x78, virtual false, abstract: false, final false
static inline uint32_t AddDWordTo(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddTo, addr 0x34761cc, size 0x98, virtual false, abstract: false, final false
static inline uint32_t AddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddTo, addr 0x3476264, size 0x90, virtual false, abstract: false, final false
static inline uint32_t AddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  cIn) ;

/// @brief Method AddTo, addr 0x34759c4, size 0x80, virtual false, abstract: false, final false
static inline uint32_t AddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddToEachOther, addr 0x34762f4, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t AddToEachOther(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  u, int32_t  uOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  v, int32_t  vOff) ;

/// @brief Method AddWordAt, addr 0x34763e4, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t AddWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method AddWordAt, addr 0x3476390, size 0x54, virtual false, abstract: false, final false
static inline uint32_t AddWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method AddWordTo, addr 0x3476440, size 0x48, virtual false, abstract: false, final false
static inline uint32_t AddWordTo(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddWordTo, addr 0x3476488, size 0x54, virtual false, abstract: false, final false
static inline uint32_t AddWordTo(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method CAdd, addr 0x34764dc, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t CAdd(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method CMov, addr 0x34765fc, size 0x84, virtual false, abstract: false, final false
static inline void CMov(int32_t  len, int32_t  mask, ::ArrayW<int32_t,::Array<int32_t>*>  x, int32_t  xOff, ::ArrayW<int32_t,::Array<int32_t>*>  z, int32_t  zOff) ;

/// @brief Method CMov, addr 0x3476578, size 0x84, virtual false, abstract: false, final false
static inline void CMov(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method CSub, addr 0x3476958, size 0xc4, virtual false, abstract: false, final false
static inline int32_t CSub(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method CSub, addr 0x34768bc, size 0x9c, virtual false, abstract: false, final false
static inline int32_t CSub(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Compare, addr 0x34766fc, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Compare(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff) ;

/// @brief Method Compare, addr 0x3476680, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Compare(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Copy, addr 0x3475364, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Copy(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method Copy, addr 0x3476794, size 0x20, virtual false, abstract: false, final false
static inline void Copy(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy, addr 0x3476778, size 0x1c, virtual false, abstract: false, final false
static inline void Copy(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Copy64, addr 0x34767b4, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Copy64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method Copy64, addr 0x3476850, size 0x20, virtual false, abstract: false, final false
static inline void Copy64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy64, addr 0x3476834, size 0x1c, virtual false, abstract: false, final false
static inline void Copy64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Create, addr 0x34753e4, size 0x4c, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Create(int32_t  len) ;

/// @brief Method Create64, addr 0x3476870, size 0x4c, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Create64(int32_t  len) ;

/// @brief Method Dec, addr 0x3476a78, size 0xbc, virtual false, abstract: false, final false
static inline int32_t Dec(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Dec, addr 0x3476a1c, size 0x5c, virtual false, abstract: false, final false
static inline int32_t Dec(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method DecAt, addr 0x3476ba0, size 0x64, virtual false, abstract: false, final false
static inline int32_t DecAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method DecAt, addr 0x3476b34, size 0x6c, virtual false, abstract: false, final false
static inline int32_t DecAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method Eq, addr 0x3476c04, size 0x68, virtual false, abstract: false, final false
static inline bool Eq(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method FromBigInteger, addr 0x3476c6c, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> FromBigInteger(int32_t  bits, ::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method FromBigInteger64, addr 0x3476d44, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> FromBigInteger64(int32_t  bits, ::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method GetBit, addr 0x3476e1c, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t GetBit(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bit) ;

/// @brief Method Gte, addr 0x34755b8, size 0x74, virtual false, abstract: false, final false
static inline bool Gte(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Inc, addr 0x3476ed4, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t Inc(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Inc, addr 0x3476e78, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t Inc(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method IncAt, addr 0x3475d50, size 0x64, virtual false, abstract: false, final false
static inline uint32_t IncAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method IncAt, addr 0x3475c60, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t IncAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method IsOne, addr 0x34752ec, size 0x78, virtual false, abstract: false, final false
static inline bool IsOne(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method IsZero, addr 0x3475278, size 0x74, virtual false, abstract: false, final false
static inline bool IsZero(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method LessThan, addr 0x347700c, size 0x94, virtual false, abstract: false, final false
static inline int32_t LessThan(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff) ;

/// @brief Method LessThan, addr 0x3476f90, size 0x7c, virtual false, abstract: false, final false
static inline int32_t LessThan(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Mul, addr 0x3477290, size 0x11c, virtual false, abstract: false, final false
static inline void Mul(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Mul, addr 0x34770a0, size 0xec, virtual false, abstract: false, final false
static inline void Mul(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Mul, addr 0x3477434, size 0x124, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  xLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, int32_t  yLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Mul31BothAdd, addr 0x347771c, size 0xac, virtual false, abstract: false, final false
static inline uint32_t Mul31BothAdd(int32_t  len, uint32_t  a, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  b, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulAddTo, addr 0x347762c, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method MulAddTo, addr 0x3477558, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method MulWord, addr 0x34773ac, size 0x88, virtual false, abstract: false, final false
static inline uint32_t MulWord(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWord, addr 0x347718c, size 0x74, virtual false, abstract: false, final false
static inline uint32_t MulWord(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method MulWordAddTo, addr 0x3477200, size 0x90, virtual false, abstract: false, final false
static inline uint32_t MulWordAddTo(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWordDwordAddAt, addr 0x34777c8, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t MulWordDwordAddAt(int32_t  len, uint32_t  x, uint64_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

static inline ::Org::BouncyCastle::Math::Raw::Nat* New_ctor() ;

/// @brief Method ShiftDownBit, addr 0x34778c8, size 0x70, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftDownBit, addr 0x3477938, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftDownBit, addr 0x3475b0c, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, uint32_t  c) ;

/// @brief Method ShiftDownBit, addr 0x3477868, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  c) ;

/// @brief Method ShiftDownBits, addr 0x3477a30, size 0x8c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftDownBits, addr 0x3477abc, size 0x98, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftDownBits, addr 0x3475a98, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftDownBits, addr 0x34779b4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftDownWord, addr 0x3475a44, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ShiftDownWord(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, uint32_t  c) ;

/// @brief Method ShiftUpBit, addr 0x3477c10, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftUpBit, addr 0x3477c84, size 0x8c, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBit, addr 0x3477b54, size 0x58, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, uint32_t  c) ;

/// @brief Method ShiftUpBit, addr 0x3477bac, size 0x64, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  c) ;

/// @brief Method ShiftUpBit64, addr 0x3477d10, size 0x90, virtual false, abstract: false, final false
static inline uint64_t ShiftUpBit64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, uint64_t  c, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBits, addr 0x3477f1c, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftUpBits, addr 0x3477fac, size 0xa8, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBits, addr 0x3477da0, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftUpBits, addr 0x3477e14, size 0x80, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftUpBits64, addr 0x3478054, size 0xac, virtual false, abstract: false, final false
static inline uint64_t ShiftUpBits64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, int32_t  bits, uint64_t  c, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBits64, addr 0x3477e94, size 0x88, virtual false, abstract: false, final false
static inline uint64_t ShiftUpBits64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff, int32_t  bits, uint64_t  c) ;

/// @brief Method Square, addr 0x34782dc, size 0x174, virtual false, abstract: false, final false
static inline void Square(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Square, addr 0x3478100, size 0x14c, virtual false, abstract: false, final false
static inline void Square(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method SquareWordAdd, addr 0x3478578, size 0x98, virtual false, abstract: false, final false
static inline uint32_t SquareWordAdd(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SquareWordAdd, addr 0x34784e8, size 0x90, virtual false, abstract: false, final false
static inline uint32_t SquareWordAdd(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SquareWordAddTo, addr 0x3478450, size 0x98, virtual false, abstract: false, final false
static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SquareWordAddTo, addr 0x347824c, size 0x90, virtual false, abstract: false, final false
static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Sub, addr 0x3478610, size 0xbc, virtual false, abstract: false, final false
static inline int32_t Sub(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Sub, addr 0x3475930, size 0x94, virtual false, abstract: false, final false
static inline int32_t Sub(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Sub33At, addr 0x3478740, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Sub33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method Sub33At, addr 0x34786cc, size 0x74, virtual false, abstract: false, final false
static inline int32_t Sub33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method Sub33From, addr 0x34787bc, size 0x60, virtual false, abstract: false, final false
static inline int32_t Sub33From(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Sub33From, addr 0x347881c, size 0x74, virtual false, abstract: false, final false
static inline int32_t Sub33From(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubBothFrom, addr 0x347892c, size 0xc4, virtual false, abstract: false, final false
static inline int32_t SubBothFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubBothFrom, addr 0x3478890, size 0x9c, virtual false, abstract: false, final false
static inline int32_t SubBothFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubDWordAt, addr 0x3478a64, size 0x7c, virtual false, abstract: false, final false
static inline int32_t SubDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method SubDWordAt, addr 0x34789f0, size 0x74, virtual false, abstract: false, final false
static inline int32_t SubDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method SubDWordFrom, addr 0x3478ae0, size 0x60, virtual false, abstract: false, final false
static inline int32_t SubDWordFrom(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubDWordFrom, addr 0x3478b40, size 0x74, virtual false, abstract: false, final false
static inline int32_t SubDWordFrom(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubFrom, addr 0x3478bb4, size 0x98, virtual false, abstract: false, final false
static inline int32_t SubFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubFrom, addr 0x347562c, size 0x80, virtual false, abstract: false, final false
static inline int32_t SubFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubWordAt, addr 0x3478ca0, size 0x5c, virtual false, abstract: false, final false
static inline int32_t SubWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method SubWordAt, addr 0x3478c4c, size 0x54, virtual false, abstract: false, final false
static inline int32_t SubWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method SubWordFrom, addr 0x3478cfc, size 0x48, virtual false, abstract: false, final false
static inline int32_t SubWordFrom(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubWordFrom, addr 0x3478d44, size 0x54, virtual false, abstract: false, final false
static inline int32_t SubWordFrom(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ToBigInteger, addr 0x3478d98, size 0xfc, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method Zero, addr 0x3478e94, size 0x40, virtual false, abstract: false, final false
static inline void Zero(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method .ctor, addr 0x3478ed4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Nat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Nat(Nat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Nat(Nat const& ) = delete;

/// @brief Field M offset 0xffffffff size 0x8
static constexpr uint64_t  M{static_cast<uint64_t>(0xffffffffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1590};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat*, "Org.BouncyCastle.Math.Raw", "Nat");
