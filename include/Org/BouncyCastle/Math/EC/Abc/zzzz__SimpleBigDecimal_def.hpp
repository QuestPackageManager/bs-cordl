#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Abc/SimpleBigDecimal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleBigDecimal)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class SimpleBigDecimal;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
class CORDL_TYPE SimpleBigDecimal : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IntValue)) int32_t IntValue;

  __declspec(property(get = get_LongValue)) int64_t LongValue;

  __declspec(property(get = get_Scale)) int32_t Scale;

  /// @brief Field bigInt, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bigInt, put = __cordl_internal_set_bigInt)) ::Org::BouncyCastle::Math::BigInteger* bigInt;

  /// @brief Field scale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) int32_t scale;

  /// @brief Method Add, addr 0x244b228, size 0x9c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method Add, addr 0x244b194, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);

  /// @brief Method AdjustScale, addr 0x244b0b4, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* AdjustScale(int32_t newScale);

  /// @brief Method CheckScale, addr 0x244b048, size 0x6c, virtual false, abstract: false, final false
  inline void CheckScale(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);

  /// @brief Method CompareTo, addr 0x244b700, size 0x3c, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Org::BouncyCastle::Math::BigInteger* val);

  /// @brief Method CompareTo, addr 0x244b6c8, size 0x38, virtual false, abstract: false, final false
  inline int32_t CompareTo(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* val);

  /// @brief Method Divide, addr 0x244b5c0, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method Divide, addr 0x244b51c, size 0xa4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);

  /// @brief Method Equals, addr 0x244bb5c, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Floor, addr 0x244b73c, size 0x24, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Floor();

  /// @brief Method GetHashCode, addr 0x244bc20, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInstance, addr 0x244af10, size 0x80, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* GetInstance(::Org::BouncyCastle::Math::BigInteger* val, int32_t scale);

  /// @brief Method Multiply, addr 0x244b498, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method Multiply, addr 0x244b404, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);

  /// @brief Method Negate, addr 0x244b2c4, size 0x7c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Negate();

  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* New_ctor(::Org::BouncyCastle::Math::BigInteger* bigInt, int32_t scale);

  static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* New_ctor(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* limBigDec);

  /// @brief Method Round, addr 0x244b760, size 0xb8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* Round();

  /// @brief Method ShiftLeft, addr 0x244b644, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ShiftLeft(int32_t n);

  /// @brief Method Subtract, addr 0x244b368, size 0x9c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(::Org::BouncyCastle::Math::BigInteger* b);

  /// @brief Method Subtract, addr 0x244b340, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* b);

  /// @brief Method ToString, addr 0x244b858, size 0x304, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Math::BigInteger* const& __cordl_internal_get_bigInt() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_bigInt();

  constexpr int32_t const& __cordl_internal_get_scale() const;

  constexpr int32_t& __cordl_internal_get_scale();

  constexpr void __cordl_internal_set_bigInt(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_scale(int32_t value);

  /// @brief Method .ctor, addr 0x244af90, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* bigInt, int32_t scale);

  /// @brief Method .ctor, addr 0x244b00c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* limBigDec);

  /// @brief Method get_IntValue, addr 0x244b818, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_IntValue();

  /// @brief Method get_LongValue, addr 0x244b834, size 0x1c, virtual false, abstract: false, final false
  inline int64_t get_LongValue();

  /// @brief Method get_Scale, addr 0x244b850, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Scale();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleBigDecimal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleBigDecimal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleBigDecimal(SimpleBigDecimal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleBigDecimal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleBigDecimal(SimpleBigDecimal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1356 };

  /// @brief Field bigInt, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___bigInt;

  /// @brief Field scale, offset: 0x18, size: 0x4, def value: None
  int32_t ___scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal, ___bigInt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal, ___scale) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, "Org.BouncyCastle.Math.EC.Abc", "SimpleBigDecimal");
