#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Rfc7748/X448Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X448Field)
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X448Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc7748::X448Field);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X448Field
class CORDL_TYPE X448Field : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x24bc984, size 0x70, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddOne, addr 0x24be0e4, size 0x2c, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method AddOne, addr 0x24be110, size 0x34, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CMov, addr 0x24be2c0, size 0x80, virtual false, abstract: false, final false
  static inline void CMov(int32_t cond, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method CNegate, addr 0x24be340, size 0x44, virtual false, abstract: false, final false
  static inline void CNegate(int32_t negate, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method CSwap, addr 0x24bdf40, size 0x70, virtual false, abstract: false, final false
  static inline void CSwap(int32_t swap, ::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> b);

  /// @brief Method Carry, addr 0x24be144, size 0x17c, virtual false, abstract: false, final false
  static inline void Carry(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Copy, addr 0x24bded0, size 0x70, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Create, addr 0x24bc940, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Create();

  /// @brief Method Decode, addr 0x24bde20, size 0xb0, virtual false, abstract: false, final false
  static inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Decode24, addr 0x24be400, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t Decode24(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode32, addr 0x24be454, size 0x68, virtual false, abstract: false, final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode56, addr 0x24be384, size 0x7c, virtual false, abstract: false, final false
  static inline void Decode56(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off, ::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t zOff);

  /// @brief Method Encode, addr 0x24be01c, size 0xb8, virtual false, abstract: false, final false
  static inline void Encode(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, int32_t zOff);

  /// @brief Method Encode24, addr 0x24be524, size 0x64, virtual false, abstract: false, final false
  static inline void Encode24(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode32, addr 0x24be588, size 0x80, virtual false, abstract: false, final false
  static inline void Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode56, addr 0x24be4bc, size 0x68, virtual false, abstract: false, final false
  static inline void Encode56(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Inv, addr 0x24bdfb0, size 0x4c, virtual false, abstract: false, final false
  static inline void Inv(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method IsZero, addr 0x24be840, size 0x54, virtual false, abstract: false, final false
  static inline int32_t IsZero(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method IsZeroVar, addr 0x24be894, size 0x18, virtual false, abstract: false, final false
  static inline bool IsZeroVar(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method Mul, addr 0x24bd2f0, size 0x8e8, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Mul, addr 0x24bdbd8, size 0x1f8, virtual false, abstract: false, final false
  static inline void Mul(::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Negate, addr 0x24be8ac, size 0x28, virtual false, abstract: false, final false
  static inline void Negate(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  static inline ::Org::BouncyCastle::Math::EC::Rfc7748::X448Field* New_ctor();

  /// @brief Method Normalize, addr 0x24bdffc, size 0x20, virtual false, abstract: false, final false
  static inline void Normalize(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method One, addr 0x24be980, size 0x54, virtual false, abstract: false, final false
  static inline void One(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method PowPm3d4, addr 0x24be608, size 0x1f0, virtual false, abstract: false, final false
  static inline void PowPm3d4(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Reduce, addr 0x24be8d4, size 0xac, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint32_t, ::Array<uint32_t>*> z, int32_t x);

  /// @brief Method Sqr, addr 0x24be7f8, size 0x48, virtual false, abstract: false, final false
  static inline void Sqr(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sqr, addr 0x24bcd64, size 0x58c, virtual false, abstract: false, final false
  static inline void Sqr(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SqrtRatioVar, addr 0x24be9d4, size 0x134, virtual false, abstract: false, final false
  static inline bool SqrtRatioVar(::ArrayW<uint32_t, ::Array<uint32_t>*> u, ::ArrayW<uint32_t, ::Array<uint32_t>*> v, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Sub, addr 0x24bc9f4, size 0x370, virtual false, abstract: false, final false
  static inline void Sub(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method SubOne, addr 0x24beb08, size 0x3c, virtual false, abstract: false, final false
  static inline void SubOne(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Zero, addr 0x24beb44, size 0x3c, virtual false, abstract: false, final false
  static inline void Zero(::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method .ctor, addr 0x24be0dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X448Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X448Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X448Field(X448Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X448Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X448Field(X448Field const&) = delete;

  /// @brief Field M28 offset 0xffffffff size 0x4
  static constexpr uint32_t M28{ static_cast<uint32_t>(0xfffffffu) };

  /// @brief Field Size offset 0xffffffff size 0x4
  static constexpr int32_t Size{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1555 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc7748::X448Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc7748::X448Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc7748::X448Field*, "Org.BouncyCastle.Math.EC.Rfc7748", "X448Field");
