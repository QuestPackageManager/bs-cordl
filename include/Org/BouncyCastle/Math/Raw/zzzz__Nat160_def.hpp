#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat160);
// Type: Org.BouncyCastle.Math.Raw::Nat160
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1592))
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat160*
class CORDL_TYPE Nat160 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add addr 0xff0f28 size 0x10c virtual false final false
  static inline uint32_t Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddBothTo addr 0xff1034 size 0x134 virtual false final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddTo addr 0xff1168 size 0xe0 virtual false final false
  static inline uint32_t AddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddTo addr 0xff1248 size 0x168 virtual false final false
  static inline uint32_t AddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddToEachOther addr 0xff13b0 size 0x150 virtual false final false
  static inline uint32_t AddToEachOther(::ArrayW<uint32_t, ::Array<uint32_t>*> u, int32_t uOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> v, int32_t vOff);

  /// @brief Method Copy addr 0xff1500 size 0x94 virtual false final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Copy addr 0xff1594 size 0xe4 virtual false final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Create addr 0xff1678 size 0x44 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Create();

  /// @brief Method CreateExt addr 0xff16bc size 0x44 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> CreateExt();

  /// @brief Method Diff addr 0xff1700 size 0x7c virtual false final false
  static inline bool Diff(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Eq addr 0xff1980 size 0x68 virtual false final false
  static inline bool Eq(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method FromBigInteger addr 0xff19e8 size 0xe0 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit addr 0xff1ac8 size 0x64 virtual false final false
  static inline uint32_t GetBit(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bit);

  /// @brief Method Gte addr 0xff1b2c size 0x70 virtual false final false
  static inline bool Gte(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Gte addr 0xff177c size 0x80 virtual false final false
  static inline bool Gte(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method IsOne addr 0xff1b9c size 0x60 virtual false final false
  static inline bool IsOne(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsZero addr 0xff1bfc size 0x4c virtual false final false
  static inline bool IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Mul addr 0xff1c48 size 0x16c virtual false final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Mul addr 0xff1db4 size 0x23c virtual false final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method MulAddTo addr 0xff1ff0 size 0x13c virtual false final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method MulAddTo addr 0xff212c size 0x1bc virtual false final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz,
                                  int32_t zzOff);

  /// @brief Method Mul33Add addr 0xff22e8 size 0x198 virtual false final false
  static inline uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                                  int32_t zOff);

  /// @brief Method MulWordAddExt addr 0xff2480 size 0x134 virtual false final false
  static inline uint32_t MulWordAddExt(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> yy, int32_t yyOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Mul33DWordAdd addr 0xff25b4 size 0xc8 virtual false final false
  static inline uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Mul33WordAdd addr 0xff267c size 0xa0 virtual false final false
  static inline uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordDwordAdd addr 0xff271c size 0xa4 virtual false final false
  static inline uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordsAdd addr 0xff27c0 size 0x80 virtual false final false
  static inline uint32_t MulWordsAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWord addr 0xff2840 size 0x7c virtual false final false
  static inline uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Square addr 0xff28bc size 0x20c virtual false final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Square addr 0xff2ac8 size 0x2bc virtual false final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Sub addr 0xff2d84 size 0x10c virtual false final false
  static inline int32_t Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub addr 0xff17fc size 0x184 virtual false final false
  static inline int32_t Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubBothFrom addr 0xff2e90 size 0x134 virtual false final false
  static inline int32_t SubBothFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubFrom addr 0xff2fc4 size 0xe0 virtual false final false
  static inline int32_t SubFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubFrom addr 0xff30a4 size 0x138 virtual false final false
  static inline int32_t SubFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ToBigInteger addr 0xff31dc size 0xe4 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Zero addr 0xff32c0 size 0x54 virtual false final false
  static inline void Zero(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  static inline ::Org::BouncyCastle::Math::Raw::Nat160* New_ctor();

  /// @brief Method .ctor addr 0xff3314 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Nat160", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat160(Nat160&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat160", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat160(Nat160 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat160();

public:
  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat160, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat160);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat160*, "Org.BouncyCastle.Math.Raw", "Nat160");
