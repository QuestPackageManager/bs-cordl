#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/DsaParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DsaParameter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DsaParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DsaParameter);
// Type: Org.BouncyCastle.Asn1.X509::DsaParameter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::DsaParameter*
class CORDL_TYPE DsaParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_G))::Org::BouncyCastle::Math::BigInteger* G;

  __declspec(property(get = get_P))::Org::BouncyCastle::Math::BigInteger* P;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Math::BigInteger* Q;

  /// @brief Field g, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g))::Org::BouncyCastle::Asn1::DerInteger* g;

  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::Org::BouncyCastle::Asn1::DerInteger* p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::Org::BouncyCastle::Asn1::DerInteger* q;

  /// @brief Method GetInstance, addr 0x13f69d8, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x13f69f0, size 0x178, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g);

  static inline ::Org::BouncyCastle::Asn1::X509::DsaParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x13f6dc8, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_g() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_p() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_q() const;

  constexpr void __cordl_internal_set_g(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_p(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_q(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x13f6ca8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* g);

  /// @brief Method .ctor, addr 0x13f6b68, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_G, addr 0x13f6dac, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_G();

  /// @brief Method get_P, addr 0x13f6d74, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_P();

  /// @brief Method get_Q, addr 0x13f6d90, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Q();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DsaParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DsaParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DsaParameter(DsaParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DsaParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DsaParameter(DsaParameter const&) = delete;

  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___q;

  /// @brief Field g, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___g;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DsaParameter, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DsaParameter, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DsaParameter, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DsaParameter, ___g) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DsaParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DsaParameter*, "Org.BouncyCastle.Asn1.X509", "DsaParameter");
