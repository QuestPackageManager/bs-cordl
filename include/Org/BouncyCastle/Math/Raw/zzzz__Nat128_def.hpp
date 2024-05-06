#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat128)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat128;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat128);
// Type: Org.BouncyCastle.Math.Raw::Nat128
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat128*
class CORDL_TYPE Nat128 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x12c06b4, size 0xdc, virtual false, abstract: false, final false
  static inline uint32_t Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddBothTo, addr 0x12c0790, size 0xfc, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddTo, addr 0x12c0944, size 0x100, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddTo, addr 0x12c088c, size 0xb8, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddToEachOther, addr 0x12c0a44, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(::ArrayW<uint32_t, ::Array<uint32_t>*> u, int32_t uOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> v, int32_t vOff);

  /// @brief Method Copy, addr 0x12c0bd0, size 0xbc, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Copy, addr 0x12c0b54, size 0x7c, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Copy64, addr 0x12c0cdc, size 0x74, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Copy64, addr 0x12c0c8c, size 0x50, virtual false, abstract: false, final false
  static inline void Copy64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Create, addr 0x12c0d50, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Create();

  /// @brief Method Create64, addr 0x12c0d94, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Create64();

  /// @brief Method CreateExt, addr 0x12c0dd8, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> CreateExt();

  /// @brief Method CreateExt64, addr 0x12c0e1c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> CreateExt64();

  /// @brief Method Diff, addr 0x12c0e60, size 0x7c, virtual false, abstract: false, final false
  static inline bool Diff(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Eq, addr 0x12c1098, size 0x68, virtual false, abstract: false, final false
  static inline bool Eq(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Eq64, addr 0x12c1100, size 0x70, virtual false, abstract: false, final false
  static inline bool Eq64(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method FromBigInteger, addr 0x12c1170, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method FromBigInteger64, addr 0x12c1250, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x12c1330, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bit);

  /// @brief Method Gte, addr 0x12c0edc, size 0x80, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method Gte, addr 0x12c1394, size 0x70, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method IsOne, addr 0x12c1404, size 0x60, virtual false, abstract: false, final false
  static inline bool IsOne(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsOne64, addr 0x12c1464, size 0x48, virtual false, abstract: false, final false
  static inline bool IsOne64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method IsZero, addr 0x12c14ac, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsZero64, addr 0x12c14f8, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsZero64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method Mul, addr 0x12c1678, size 0x1e4, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Mul, addr 0x12c1544, size 0x134, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Mul33Add, addr 0x12c1ae0, size 0x14c, virtual false, abstract: false, final false
  static inline uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                                  int32_t zOff);

  /// @brief Method Mul33DWordAdd, addr 0x12c1d28, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Mul33WordAdd, addr 0x12c1dcc, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulAddTo, addr 0x12c196c, size 0x174, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz,
                                  int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x12c185c, size 0x110, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method MulWord, addr 0x12c1f90, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordAddExt, addr 0x12c1c2c, size 0xfc, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddExt(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> yy, int32_t yyOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method MulWordDwordAdd, addr 0x12c1e6c, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordsAdd, addr 0x12c1f10, size 0x80, virtual false, abstract: false, final false
  static inline uint32_t MulWordsAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  static inline ::Org::BouncyCastle::Math::Raw::Nat128* New_ctor();

  /// @brief Method Square, addr 0x12c21b4, size 0x228, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Square, addr 0x12c200c, size 0x1a8, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Sub, addr 0x12c0f5c, size 0x13c, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Sub, addr 0x12c23dc, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubBothFrom, addr 0x12c24b8, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubFrom, addr 0x12c266c, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubFrom, addr 0x12c25b4, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ToBigInteger, addr 0x12c2768, size 0xe4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method ToBigInteger64, addr 0x12c284c, size 0xe4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method Zero, addr 0x12c2930, size 0x48, virtual false, abstract: false, final false
  static inline void Zero(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method .ctor, addr 0x12c2978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat128();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Nat128", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat128(Nat128&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat128", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat128(Nat128 const&) = delete;

  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat128, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat128);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat128*, "Org.BouncyCastle.Math.Raw", "Nat128");
