#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ElGamalParameter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Oiw {
class ElGamalParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter);
// Type: Org.BouncyCastle.Asn1.Oiw::ElGamalParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Oiw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Oiw::ElGamalParameter*
class CORDL_TYPE ElGamalParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g))::Org::BouncyCastle::Asn1::DerInteger* g;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::Org::BouncyCastle::Asn1::DerInteger* p;

  static inline ::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g);

  static inline ::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x101673c, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_p() const;

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x101657c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method .ctor, addr 0x101661c, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_G, addr 0x1016720, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_P, addr 0x1016704, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElGamalParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElGamalParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElGamalParameter(ElGamalParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElGamalParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElGamalParameter(ElGamalParameter const&) = delete;

  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___p;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___g;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter, ___g) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Oiw
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Oiw::ElGamalParameter*, "Org.BouncyCastle.Asn1.Oiw", "ElGamalParameter");
