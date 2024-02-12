#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Curve25519FieldElement)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
class Curve25519FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement);
// Type: Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519FieldElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1369))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1370))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Djb::Curve25519FieldElement*
class CORDL_TYPE Curve25519FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Field Q, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Q, put = setStaticF_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field PRECOMP_POW2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_POW2, put = setStaticF_PRECOMP_POW2))::ArrayW<uint32_t, ::Array<uint32_t>*> PRECOMP_POW2;

  __declspec(property(get = get_IsZero)) bool IsZero;

  __declspec(property(get = get_IsOne)) bool IsOne;

  __declspec(property(get = get_FieldName))::StringW FieldName;

  __declspec(property(get = get_FieldSize)) int32_t FieldSize;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_x();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_x() const;

  constexpr void __cordl_internal_set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_Q(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Q();

  static inline void setStaticF_PRECOMP_POW2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_PRECOMP_POW2();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger* x);

  /// @brief Method .ctor, addr 0xff9468, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* x);

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* New_ctor();

  /// @brief Method .ctor, addr 0xffb70c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* New_ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method .ctor, addr 0xff9aa4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method get_IsZero, addr 0xffb730, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsZero();

  /// @brief Method get_IsOne, addr 0xffb73c, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsOne();

  /// @brief Method TestBitZero, addr 0xffb748, size 0x24, virtual true, abstract: false, final false
  inline bool TestBitZero();

  /// @brief Method ToBigInteger, addr 0xffb76c, size 0xc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger();

  /// @brief Method get_FieldName, addr 0xffb778, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_FieldSize, addr 0xffb7b8, size 0x64, virtual true, abstract: false, final false
  inline int32_t get_FieldSize();

  /// @brief Method Add, addr 0xffb81c, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method AddOne, addr 0xffb90c, size 0xa8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();

  /// @brief Method Subtract, addr 0xffb9b4, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Multiply, addr 0xffbaa4, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Divide, addr 0xffbb94, size 0xf8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement* b);

  /// @brief Method Negate, addr 0xffbc8c, size 0xa8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate();

  /// @brief Method Square, addr 0xffbd34, size 0xa8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square();

  /// @brief Method Invert, addr 0xffbddc, size 0xa8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert();

  /// @brief Method Sqrt, addr 0xffbe84, size 0x2d0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();

  /// @brief Method Equals, addr 0xffc154, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0xffc1e0, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement* other);

  /// @brief Method Equals, addr 0xffc26c, size 0x2c, virtual true, abstract: false, final false
  inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement* other);

  /// @brief Method GetHashCode, addr 0xffc298, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "Curve25519FieldElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Curve25519FieldElement(Curve25519FieldElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Curve25519FieldElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Curve25519FieldElement(Curve25519FieldElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Curve25519FieldElement();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement, ___x) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Custom::Djb
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519FieldElement");
