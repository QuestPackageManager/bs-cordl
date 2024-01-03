#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(DHDomainParameters)
namespace Org::BouncyCastle::Asn1::X9 {
class DHValidationParms;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
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
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHDomainParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X9::DHDomainParameters);
// Type: Org.BouncyCastle.Asn1.X9::DHDomainParameters
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(411))
// CS Name: ::Org.BouncyCastle.Asn1.X9::DHDomainParameters*
class CORDL_TYPE DHDomainParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::Org::BouncyCastle::Asn1::DerInteger* p;

  /// @brief Field g, offset 0x18, size 0x8
  __declspec(property(get = __get_g, put = __set_g))::Org::BouncyCastle::Asn1::DerInteger* g;

  /// @brief Field q, offset 0x20, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::Org::BouncyCastle::Asn1::DerInteger* q;

  /// @brief Field j, offset 0x28, size 0x8
  __declspec(property(get = __get_j, put = __set_j))::Org::BouncyCastle::Asn1::DerInteger* j;

  /// @brief Field validationParms, offset 0x30, size 0x8
  __declspec(property(get = __get_validationParms, put = __set_validationParms))::Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms;

  __declspec(property(get = get_P))::Org::BouncyCastle::Asn1::DerInteger* P;

  __declspec(property(get = get_G))::Org::BouncyCastle::Asn1::DerInteger* G;

  __declspec(property(get = get_Q))::Org::BouncyCastle::Asn1::DerInteger* Q;

  __declspec(property(get = get_J))::Org::BouncyCastle::Asn1::DerInteger* J;

  __declspec(property(get = get_ValidationParms))::Org::BouncyCastle::Asn1::X9::DHValidationParms* ValidationParms;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_p();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_p() const;

  constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_g();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_g() const;

  constexpr void __set_g(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_q();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_q() const;

  constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_j();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_j() const;

  constexpr void __set_j(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X9::DHValidationParms*& __get_validationParms();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X9::DHValidationParms*> const& __get_validationParms() const;

  constexpr void __set_validationParms(::Org::BouncyCastle::Asn1::X9::DHValidationParms* value);

  /// @brief Method GetInstance, addr 0x11a7d04, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x11a7d1c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* p, ::Org::BouncyCastle::Asn1::DerInteger* g,
                                                                            ::Org::BouncyCastle::Asn1::DerInteger* q, ::Org::BouncyCastle::Asn1::DerInteger* j,
                                                                            ::Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms);

  /// @brief Method .ctor, addr 0x11a8090, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* p, ::Org::BouncyCastle::Asn1::DerInteger* g, ::Org::BouncyCastle::Asn1::DerInteger* q, ::Org::BouncyCastle::Asn1::DerInteger* j,
                    ::Org::BouncyCastle::Asn1::X9::DHValidationParms* validationParms);

  static inline ::Org::BouncyCastle::Asn1::X9::DHDomainParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x11a7ea4, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetNext, addr 0x11a8180, size 0x150, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetNext(::System::Collections::IEnumerator* e);

  /// @brief Method get_P, addr 0x11a8458, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_P();

  /// @brief Method get_G, addr 0x11a8460, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_G();

  /// @brief Method get_Q, addr 0x11a8468, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Q();

  /// @brief Method get_J, addr 0x11a8470, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_J();

  /// @brief Method get_ValidationParms, addr 0x11a8478, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X9::DHValidationParms* get_ValidationParms();

  /// @brief Method ToAsn1Object, addr 0x11a8480, size 0x1cc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "DHDomainParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHDomainParameters(DHDomainParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHDomainParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHDomainParameters(DHDomainParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHDomainParameters();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___p;

  /// @brief Field g, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___g;

  /// @brief Field q, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___q;

  /// @brief Field j, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___j;

  /// @brief Field validationParms, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X9::DHValidationParms* ___validationParms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X9::DHDomainParameters, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHDomainParameters, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHDomainParameters, ___g) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHDomainParameters, ___q) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHDomainParameters, ___j) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X9::DHDomainParameters, ___validationParms) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHDomainParameters*, "Org.BouncyCastle.Asn1.X9", "DHDomainParameters");
