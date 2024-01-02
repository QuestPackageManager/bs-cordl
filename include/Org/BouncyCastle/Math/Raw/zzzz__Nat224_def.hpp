#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat224)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat224;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat224);
// Type: Org.BouncyCastle.Math.Raw::Nat224
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1594))
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat224*
class CORDL_TYPE Nat224 : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x106721c, size 0x16c, virtual false, abstract: false, final false
  static inline uint32_t Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Add, addr 0x1067388, size 0x214, virtual false, abstract: false, final false
  static inline uint32_t Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method AddBothTo, addr 0x106759c, size 0x1a4, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddBothTo, addr 0x1067740, size 0x24c, virtual false, abstract: false, final false
  static inline uint32_t AddBothTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                                   int32_t zOff);

  /// @brief Method AddTo, addr 0x106798c, size 0x130, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddTo, addr 0x1067abc, size 0x1a8, virtual false, abstract: false, final false
  static inline uint32_t AddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff, uint32_t cIn);

  /// @brief Method AddToEachOther, addr 0x1067c64, size 0x1d0, virtual false, abstract: false, final false
  static inline uint32_t AddToEachOther(::ArrayW<uint32_t, ::Array<uint32_t>*> u, int32_t uOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> v, int32_t vOff);

  /// @brief Method Copy, addr 0x1067e34, size 0xc4, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Copy, addr 0x1067ef8, size 0x134, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Create, addr 0x106802c, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Create();

  /// @brief Method CreateExt, addr 0x1068070, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> CreateExt();

  /// @brief Method Diff, addr 0x10680b4, size 0x7c, virtual false, abstract: false, final false
  static inline bool Diff(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Eq, addr 0x10683c4, size 0x68, virtual false, abstract: false, final false
  static inline bool Eq(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method FromBigInteger, addr 0x106842c, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method GetBit, addr 0x106850c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t GetBit(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t bit);

  /// @brief Method Gte, addr 0x1068570, size 0x70, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Gte, addr 0x1068130, size 0x80, virtual false, abstract: false, final false
  static inline bool Gte(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff);

  /// @brief Method IsOne, addr 0x10685e0, size 0x60, virtual false, abstract: false, final false
  static inline bool IsOne(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsZero, addr 0x1068640, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Mul, addr 0x106868c, size 0x1d4, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Mul, addr 0x1068860, size 0x2ec, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method MulAddTo, addr 0x1068b4c, size 0x190, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method MulAddTo, addr 0x1068cdc, size 0x240, virtual false, abstract: false, final false
  static inline uint32_t MulAddTo(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz,
                                  int32_t zzOff);

  /// @brief Method Mul33Add, addr 0x1068f1c, size 0x230, virtual false, abstract: false, final false
  static inline uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z,
                                  int32_t zOff);

  /// @brief Method MulByWord, addr 0x106914c, size 0xc4, virtual false, abstract: false, final false
  static inline uint32_t MulByWord(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MulByWordAddTo, addr 0x1069210, size 0x134, virtual false, abstract: false, final false
  static inline uint32_t MulByWordAddTo(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MulWordAddTo, addr 0x1069344, size 0x1a4, virtual false, abstract: false, final false
  static inline uint32_t MulWordAddTo(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Mul33DWordAdd, addr 0x10694e8, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Mul33WordAdd, addr 0x10695b0, size 0xa0, virtual false, abstract: false, final false
  static inline uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWordDwordAdd, addr 0x1069650, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method MulWord, addr 0x10696f4, size 0x7c, virtual false, abstract: false, final false
  static inline uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Square, addr 0x1069770, size 0x31c, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz);

  /// @brief Method Square, addr 0x1069a8c, size 0x414, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> zz, int32_t zzOff);

  /// @brief Method Sub, addr 0x1069ea0, size 0x16c, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub, addr 0x10681b0, size 0x214, virtual false, abstract: false, final false
  static inline int32_t Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method SubBothFrom, addr 0x106a00c, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t SubBothFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubFrom, addr 0x106a1b0, size 0x130, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubFrom, addr 0x106a2e0, size 0x1b0, virtual false, abstract: false, final false
  static inline int32_t SubFrom(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method ToBigInteger, addr 0x106a490, size 0xe4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Zero, addr 0x106a574, size 0x6c, virtual false, abstract: false, final false
  static inline void Zero(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  static inline ::Org::BouncyCastle::Math::Raw::Nat224* New_ctor();

  /// @brief Method .ctor, addr 0x106a5e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Nat224", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Nat224(Nat224&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Nat224", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Nat224(Nat224 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Nat224();

public:
  /// @brief Field M offset 0xffffffff size 0x8
  static constexpr uint64_t M{ static_cast<uint64_t>(0xffffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat224, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat224);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat224*, "Org.BouncyCastle.Math.Raw", "Nat224");
