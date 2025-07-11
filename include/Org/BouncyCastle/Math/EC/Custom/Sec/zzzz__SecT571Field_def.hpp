#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT571Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT571Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT571Field;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field
class CORDL_TYPE SecT571Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field ROOT_Z, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ROOT_Z, put = setStaticF_ROOT_Z)) ::ArrayW<uint64_t, ::Array<uint64_t>*> ROOT_Z;

  /// @brief Method Add, addr 0x24b1558, size 0x94, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, int32_t yOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Add, addr 0x24b14e8, size 0x70, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddBothTo, addr 0x24b15ec, size 0x9c, virtual false, abstract: false, final false
  static inline void AddBothTo(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t xOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, int32_t yOff, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method AddExt, addr 0x24b1688, size 0x70, virtual false, abstract: false, final false
  static inline void AddExt(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> yy, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method AddOne, addr 0x24b16f8, size 0x74, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method AddTo, addr 0x24b176c, size 0x5c, virtual false, abstract: false, final false
  static inline void AddTo(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method FromBigInteger, addr 0x24b17c8, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method HalfTrace, addr 0x24b17d8, size 0xc4, virtual false, abstract: false, final false
  static inline void HalfTrace(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method ImplMultiply, addr 0x24b1f38, size 0x288, virtual false, abstract: false, final false
  static inline void ImplMultiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method ImplMulwAcc, addr 0x24b2510, size 0x1e0, virtual false, abstract: false, final false
  static inline void ImplMulwAcc(::ArrayW<uint64_t, ::Array<uint64_t>*> xs, uint64_t y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method ImplSquare, addr 0x24b189c, size 0x13c, virtual false, abstract: false, final false
  static inline void ImplSquare(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method Invert, addr 0x24b1b20, size 0x248, virtual false, abstract: false, final false
  static inline void Invert(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Multiply, addr 0x24b1de8, size 0x88, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method MultiplyAddToExt, addr 0x24b21c0, size 0x8c, virtual false, abstract: false, final false
  static inline void MultiplyAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field* New_ctor();

  /// @brief Method Reduce, addr 0x24b19d8, size 0x148, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint64_t, ::Array<uint64_t>*> xx, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Reduce5, addr 0x24b224c, size 0x6c, virtual false, abstract: false, final false
  static inline void Reduce5(::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Sqrt, addr 0x24b22b8, size 0x190, virtual false, abstract: false, final false
  static inline void Sqrt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Square, addr 0x24b1d68, size 0x80, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method SquareAddToExt, addr 0x24b2448, size 0x84, virtual false, abstract: false, final false
  static inline void SquareAddToExt(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> zz);

  /// @brief Method SquareN, addr 0x24b1e70, size 0xc8, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint64_t, ::Array<uint64_t>*> x, int32_t n, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Trace, addr 0x24b24cc, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t Trace(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method .ctor, addr 0x24b2784, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_ROOT_Z();

  static inline void setStaticF_ROOT_Z(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecT571Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecT571Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecT571Field(SecT571Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecT571Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecT571Field(SecT571Field const&) = delete;

  /// @brief Field M59 offset 0xffffffff size 0x8
  static constexpr uint64_t M59{ static_cast<uint64_t>(0x7ffffffffffffffu) };

  /// @brief Field RM offset 0xffffffff size 0x8
  static constexpr uint64_t RM{ static_cast<uint64_t>(0xef7bdef7bdef7bdeu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1507 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT571Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT571Field");
