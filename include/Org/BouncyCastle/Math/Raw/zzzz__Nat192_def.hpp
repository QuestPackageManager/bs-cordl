#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat192.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat192)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat192;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat192);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Nat192
class CORDL_TYPE Nat192 : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x347d568, size 0x13c, virtual false, abstract: false, final false
static inline uint32_t Add(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddBothTo, addr 0x347d6a4, size 0x168, virtual false, abstract: false, final false
static inline uint32_t AddBothTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddTo, addr 0x347d910, size 0x16c, virtual false, abstract: false, final false
static inline uint32_t AddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  cIn) ;

/// @brief Method AddTo, addr 0x347d80c, size 0x104, virtual false, abstract: false, final false
static inline uint32_t AddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddToEachOther, addr 0x347da7c, size 0x17c, virtual false, abstract: false, final false
static inline uint32_t AddToEachOther(::ArrayW<uint32_t,::Array<uint32_t>*>  u, int32_t  uOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  v, int32_t  vOff) ;

/// @brief Method Copy, addr 0x347dca4, size 0x10c, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy, addr 0x347dbf8, size 0xac, virtual false, abstract: false, final false
static inline void Copy(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Copy64, addr 0x347de1c, size 0xa4, virtual false, abstract: false, final false
static inline void Copy64(::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy64, addr 0x347ddb0, size 0x6c, virtual false, abstract: false, final false
static inline void Copy64(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Create, addr 0x347dec0, size 0x48, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Create() ;

/// @brief Method Create64, addr 0x347df08, size 0x48, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Create64() ;

/// @brief Method CreateExt, addr 0x347df50, size 0x48, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> CreateExt() ;

/// @brief Method CreateExt64, addr 0x347df98, size 0x48, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> CreateExt64() ;

/// @brief Method Diff, addr 0x347dfe0, size 0x7c, virtual false, abstract: false, final false
static inline bool Diff(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Eq, addr 0x347e29c, size 0x64, virtual false, abstract: false, final false
static inline bool Eq(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Eq64, addr 0x347e300, size 0x64, virtual false, abstract: false, final false
static inline bool Eq64(::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  y) ;

/// @brief Method FromBigInteger, addr 0x347e364, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method FromBigInteger64, addr 0x347e430, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method GetBit, addr 0x347e4fc, size 0x64, virtual false, abstract: false, final false
static inline uint32_t GetBit(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bit) ;

/// @brief Method Gte, addr 0x347e05c, size 0x78, virtual false, abstract: false, final false
static inline bool Gte(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff) ;

/// @brief Method Gte, addr 0x347e560, size 0x6c, virtual false, abstract: false, final false
static inline bool Gte(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method IsOne, addr 0x347e5cc, size 0x68, virtual false, abstract: false, final false
static inline bool IsOne(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method IsOne64, addr 0x347e634, size 0x6c, virtual false, abstract: false, final false
static inline bool IsOne64(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method IsZero, addr 0x347e6a0, size 0x50, virtual false, abstract: false, final false
static inline bool IsZero(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method IsZero64, addr 0x347e6f0, size 0x50, virtual false, abstract: false, final false
static inline bool IsZero64(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method Mul, addr 0x347e8d4, size 0x2a8, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Mul, addr 0x347e740, size 0x194, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Mul33Add, addr 0x347eef4, size 0x1e4, virtual false, abstract: false, final false
static inline uint64_t Mul33Add(uint32_t  w, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Mul33DWordAdd, addr 0x347f244, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t Mul33DWordAdd(uint32_t  x, uint64_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Mul33WordAdd, addr 0x347f334, size 0xc4, virtual false, abstract: false, final false
static inline uint32_t Mul33WordAdd(uint32_t  x, uint32_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulAddTo, addr 0x347ece8, size 0x20c, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method MulAddTo, addr 0x347eb7c, size 0x16c, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method MulWord, addr 0x347f4c4, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t MulWord(uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWordAddExt, addr 0x347f0d8, size 0x16c, virtual false, abstract: false, final false
static inline uint32_t MulWordAddExt(uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  yy, int32_t  yyOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method MulWordDwordAdd, addr 0x347f3f8, size 0xcc, virtual false, abstract: false, final false
static inline uint32_t MulWordDwordAdd(uint32_t  x, uint64_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

static inline ::Org::BouncyCastle::Math::Raw::Nat192* New_ctor() ;

/// @brief Method Square, addr 0x347f794, size 0x340, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Square, addr 0x347f540, size 0x254, virtual false, abstract: false, final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Sub, addr 0x347e0d4, size 0x1c8, virtual false, abstract: false, final false
static inline int32_t Sub(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Sub, addr 0x347fad4, size 0x138, virtual false, abstract: false, final false
static inline int32_t Sub(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubBothFrom, addr 0x347fc0c, size 0x168, virtual false, abstract: false, final false
static inline int32_t SubBothFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubFrom, addr 0x347fe78, size 0x164, virtual false, abstract: false, final false
static inline int32_t SubFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubFrom, addr 0x347fd74, size 0x104, virtual false, abstract: false, final false
static inline int32_t SubFrom(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ToBigInteger, addr 0x347ffdc, size 0xe0, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method ToBigInteger64, addr 0x34800bc, size 0xf8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method Zero, addr 0x34801b4, size 0x60, virtual false, abstract: false, final false
static inline void Zero(::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method .ctor, addr 0x3480214, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Nat192() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Nat192", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Nat192(Nat192 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Nat192", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Nat192(Nat192 const& ) = delete;

/// @brief Field M offset 0xffffffff size 0x8
static constexpr uint64_t  M{static_cast<uint64_t>(0xffffffffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat192, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat192);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat192*, "Org.BouncyCastle.Math.Raw", "Nat192");
