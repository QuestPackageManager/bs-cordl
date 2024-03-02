#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9ECParameters)
namespace Org::BouncyCastle::Asn1::X9 {
class X9Curve;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9ECParameters);
// Type: Org.BouncyCastle.Asn1.X9::X9ECParameters
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9ECParameters*
class CORDL_TYPE X9ECParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_BaseEntry))::Org::BouncyCastle::Asn1::X9::X9ECPoint* BaseEntry;

  __declspec(property(get = get_Curve))::Org::BouncyCastle::Math::EC::ECCurve* Curve;

  __declspec(property(get = get_CurveEntry))::Org::BouncyCastle::Asn1::X9::X9Curve* CurveEntry;

  __declspec(property(get = get_FieldIDEntry))::Org::BouncyCastle::Asn1::X9::X9FieldID* FieldIDEntry;

  __declspec(property(get = get_G))::Org::BouncyCastle::Math::EC::ECPoint* G;

  __declspec(property(get = get_H))::Org::BouncyCastle::Math::BigInteger* H;

  __declspec(property(get = get_N))::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field curve, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_curve, put = __cordl_internal_set_curve))::Org::BouncyCastle::Math::EC::ECCurve* curve;

  /// @brief Field fieldID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldID, put = __cordl_internal_set_fieldID))::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g))::Org::BouncyCastle::Asn1::X9::X9ECPoint* g;

  /// @brief Field h, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_h, put = __cordl_internal_set_h))::Org::BouncyCastle::Math::BigInteger* h;

  /// @brief Field n, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n))::Org::BouncyCastle::Math::BigInteger* n;

  /// @brief Field seed, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed))::ArrayW<uint8_t, ::Array<uint8_t>*> seed;

  /// @brief Method GetInstance, addr 0x1220b64, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetInstance(::System::Object* obj);

  /// @brief Method GetSeed, addr 0x12219e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSeed();

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint* g,
                                                                        ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint* g,
                                                                        ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                        ::Org::BouncyCastle::Math::BigInteger* n);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                        ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                        ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x1221a6c, size 0x28c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_curve();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __cordl_internal_get_curve() const;

  constexpr ::Org::BouncyCastle::Asn1::X9::X9FieldID*& __cordl_internal_get_fieldID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::X9FieldID*> const& __cordl_internal_get_fieldID() const;

  constexpr ::Org::BouncyCastle::Asn1::X9::X9ECPoint*& __cordl_internal_get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::X9ECPoint*> const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_h();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_h() const;

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_n();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_n() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_seed() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_fieldID(::Org::BouncyCastle::Asn1::X9::X9FieldID* value);

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Asn1::X9::X9ECPoint* value);

  constexpr void __cordl_internal_set_h(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_seed(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x121da2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method .ctor, addr 0x121c2b4, size 0x354, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Asn1::X9::X9ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor, addr 0x1221458, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n);

  /// @brief Method .ctor, addr 0x1221508, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h);

  /// @brief Method .ctor, addr 0x1221464, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h,
                    ::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method .ctor, addr 0x1220f9c, size 0x3dc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_BaseEntry, addr 0x1221a64, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* get_BaseEntry();

  /// @brief Method get_Curve, addr 0x12219b8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECCurve* get_Curve();

  /// @brief Method get_CurveEntry, addr 0x12219f0, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9Curve* get_CurveEntry();

  /// @brief Method get_FieldIDEntry, addr 0x1221a5c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::X9FieldID* get_FieldIDEntry();

  /// @brief Method get_G, addr 0x12219c0, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_G();

  /// @brief Method get_H, addr 0x12219e0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_H();

  /// @brief Method get_N, addr 0x12219d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_N();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9ECParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X9ECParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9ECParameters(X9ECParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9ECParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9ECParameters(X9ECParameters const&) = delete;

  /// @brief Field fieldID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X9::X9FieldID* ___fieldID;

  /// @brief Field curve, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___curve;

  /// @brief Field g, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X9::X9ECPoint* ___g;

  /// @brief Field n, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___n;

  /// @brief Field h, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___h;

  /// @brief Field seed, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___seed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9ECParameters, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParameters, ___fieldID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParameters, ___curve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParameters, ___g) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParameters, ___n) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParameters, ___h) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECParameters, ___seed) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ECParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ECParameters*, "Org.BouncyCastle.Asn1.X9", "X9ECParameters");
