#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/X9Curve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9Curve)
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9Curve;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9Curve);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X9.X9Curve
class CORDL_TYPE X9Curve : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Curve)) ::Org::BouncyCastle::Math::EC::ECCurve* Curve;

  /// @brief Field curve, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve)) ::Org::BouncyCastle::Math::EC::ECCurve* curve;

  /// @brief Field fieldIdentifier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldIdentifier, put = __cordl_internal_set_fieldIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* fieldIdentifier;

  /// @brief Field seed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) ::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Method GetSeed, addr 0x2626bf0, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                 ::Org::BouncyCastle::Math::BigInteger* cofactor, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X9::X9Curve* New_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2626c4c, size 0x20c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& __cordl_internal_get_curve() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_curve();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_fieldIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_fieldIdentifier();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_fieldIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2626094, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  /// @brief Method .ctor, addr 0x262609c, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor, addr 0x2626228, size 0x710, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Math::BigInteger* order, ::Org::BouncyCastle::Math::BigInteger* cofactor,
                    ::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2626218, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Curve, addr 0x2626be8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9Curve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X9Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9Curve(X9Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9Curve(X9Curve const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 442 };

  /// @brief Field curve, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___curve;

  /// @brief Field seed, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  /// @brief Field fieldIdentifier, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___fieldIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9Curve, ___curve) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9Curve, ___seed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9Curve, ___fieldIdentifier) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9Curve, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9Curve*, "Org.BouncyCastle.Asn1.X9", "X9Curve");
