#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP224R1Field.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP224R1Field)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224R1Field;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Field*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Field*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1Field");
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1Field
class CORDL_TYPE SecP224R1Field : public ::System::Object {
public:
  // Declarations
  /// @brief Field P, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_P, put = setStaticF_P)) ::ArrayW<uint32_t> P;

  /// @brief Field PExt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PExt, put = setStaticF_PExt)) ::ArrayW<uint32_t> PExt;

  /// @brief Field PExtInv, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PExtInv, put = setStaticF_PExtInv)) ::ArrayW<uint32_t> PExtInv;

  /// @brief Method Add, addr 0x34c5540, size 0xe4, virtual false, abstract: false, final false
  static inline void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method AddExt, addr 0x34c56c0, size 0x13c, virtual false, abstract: false, final false
  static inline void AddExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz);

  /// @brief Method AddOne, addr 0x34c57fc, size 0xe0, virtual false, abstract: false, final false
  static inline void AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method AddPInvTo, addr 0x34c5624, size 0x9c, virtual false, abstract: false, final false
  static inline void AddPInvTo(::ArrayW<uint32_t> z);

  /// @brief Method FromBigInteger, addr 0x34c58dc, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t> FromBigInteger(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method Half, addr 0x34c59ac, size 0xcc, virtual false, abstract: false, final false
  static inline void Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method Inv, addr 0x34c5a78, size 0x264, virtual false, abstract: false, final false
  static inline void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method IsZero, addr 0x34c5cdc, size 0x54, virtual false, abstract: false, final false
  static inline int32_t IsZero(::ArrayW<uint32_t> x);

  /// @brief Method Multiply, addr 0x34c5db4, size 0x8c, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method MultiplyAddToExt, addr 0x34c6118, size 0x138, virtual false, abstract: false, final false
  static inline void MultiplyAddToExt(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz);

  /// @brief Method Negate, addr 0x34c6250, size 0xb4, virtual false, abstract: false, final false
  static inline void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Field* New_ctor();

  /// @brief Method Random, addr 0x34c4f18, size 0xe0, virtual false, abstract: false, final false
  static inline void Random(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t> z);

  /// @brief Method RandomMult, addr 0x34c5094, size 0x78, virtual false, abstract: false, final false
  static inline void RandomMult(::Org::BouncyCastle::Security::SecureRandom* r, ::ArrayW<uint32_t> z);

  /// @brief Method Reduce, addr 0x34c5f10, size 0x208, virtual false, abstract: false, final false
  static inline void Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z);

  /// @brief Method Reduce32, addr 0x34c6304, size 0x15c, virtual false, abstract: false, final false
  static inline void Reduce32(uint32_t x, ::ArrayW<uint32_t> z);

  /// @brief Method Square, addr 0x34c5d30, size 0x84, virtual false, abstract: false, final false
  static inline void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method SquareN, addr 0x34c5e40, size 0xd0, virtual false, abstract: false, final false
  static inline void SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z);

  /// @brief Method SubPInvFrom, addr 0x34c64f0, size 0x9c, virtual false, abstract: false, final false
  static inline void SubPInvFrom(::ArrayW<uint32_t> z);

  /// @brief Method Subtract, addr 0x34c6460, size 0x90, virtual false, abstract: false, final false
  static inline void Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z);

  /// @brief Method SubtractExt, addr 0x34c658c, size 0xe8, virtual false, abstract: false, final false
  static inline void SubtractExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz);

  /// @brief Method Twice, addr 0x34c6674, size 0xe4, virtual false, abstract: false, final false
  static inline void Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z);

  /// @brief Method .ctor, addr 0x34c6870, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t> getStaticF_P();

  static inline ::ArrayW<uint32_t> getStaticF_PExt();

  static inline ::ArrayW<uint32_t> getStaticF_PExtInv();

  static inline void setStaticF_P(::ArrayW<uint32_t> value);

  static inline void setStaticF_PExt(::ArrayW<uint32_t> value);

  static inline void setStaticF_PExtInv(::ArrayW<uint32_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecP224R1Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecP224R1Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecP224R1Field(SecP224R1Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecP224R1Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecP224R1Field(SecP224R1Field const&) = delete;

  /// @brief Field P6 offset 0xffffffff size 0x4
  static constexpr uint32_t P6{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief Field PExt13 offset 0xffffffff size 0x4
  static constexpr uint32_t PExt13{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1Field) == 0x10, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Sec
