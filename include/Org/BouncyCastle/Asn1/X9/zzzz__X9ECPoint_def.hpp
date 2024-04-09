#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X9ECPoint)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::X9ECPoint);
// Type: Org.BouncyCastle.Asn1.X9::X9ECPoint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X9::X9ECPoint*
class CORDL_TYPE X9ECPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IsPointCompressed)) bool IsPointCompressed;

  __declspec(property(get = get_Point))::Org::BouncyCastle::Math::EC::ECPoint* Point;

  /// @brief Field c, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::Org::BouncyCastle::Math::EC::ECCurve* c;

  /// @brief Field encoding, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding))::Org::BouncyCastle::Asn1::Asn1OctetString* encoding;

  /// @brief Field p, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::Org::BouncyCastle::Math::EC::ECPoint* p;

  /// @brief Method GetPointEncoding, addr 0x132103c, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPointEncoding();

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* c, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Asn1::Asn1OctetString* s);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, bool compressed);

  /// @brief Method ToAsn1Object, addr 0x1321100, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& __cordl_internal_get_c();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECCurve*> const& __cordl_internal_get_c() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_encoding();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_encoding() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_p() const;

  constexpr void __cordl_internal_set_c(::Org::BouncyCastle::Math::EC::ECCurve* value);

  constexpr void __cordl_internal_set_encoding(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x131a11c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* c, ::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor, addr 0x13206a0, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* c, ::Org::BouncyCastle::Asn1::Asn1OctetString* s);

  /// @brief Method .ctor, addr 0x1320798, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p);

  /// @brief Method .ctor, addr 0x1320f80, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint* p, bool compressed);

  /// @brief Method get_IsPointCompressed, addr 0x13210b4, size 0x4c, virtual false, abstract: false, final false
  inline bool get_IsPointCompressed();

  /// @brief Method get_Point, addr 0x131a1d4, size 0x70, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Point();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X9ECPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X9ECPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X9ECPoint(X9ECPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X9ECPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X9ECPoint(X9ECPoint const&) = delete;

  /// @brief Field encoding, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___encoding;

  /// @brief Field c, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECCurve* ___c;

  /// @brief Field p, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___p;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::X9ECPoint, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECPoint, ___encoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECPoint, ___c) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::X9ECPoint, ___p) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9ECPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9ECPoint*, "Org.BouncyCastle.Asn1.X9", "X9ECPoint");
