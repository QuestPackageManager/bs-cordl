#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspIdentifier)
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier);
// Type: Org.BouncyCastle.Asn1.Esf::OcspIdentifier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(145))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::OcspIdentifier*
class CORDL_TYPE OcspIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ocspResponderID, offset 0x10, size 0x8
  __declspec(property(get = __get_ocspResponderID, put = __set_ocspResponderID))::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID;

  /// @brief Field producedAt, offset 0x18, size 0x8
  __declspec(property(get = __get_producedAt, put = __set_producedAt))::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt;

  __declspec(property(get = get_OcspResponderID))::Org::BouncyCastle::Asn1::Ocsp::ResponderID* OcspResponderID;

  __declspec(property(get = get_ProducedAt))::System::DateTime ProducedAt;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& __get_ocspResponderID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*> const& __get_ocspResponderID() const;

  constexpr void __set_ocspResponderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_producedAt();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_producedAt() const;

  constexpr void __set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method GetInstance addr 0xe93438 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe935c0 size 0x210 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID, ::System::DateTime producedAt);

  /// @brief Method .ctor addr 0xe937d0 size 0xc4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID, ::System::DateTime producedAt);

  /// @brief Method get_OcspResponderID addr 0xe93894 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* get_OcspResponderID();

  /// @brief Method get_ProducedAt addr 0xe9389c size 0x1c virtual false final false
  inline ::System::DateTime get_ProducedAt();

  /// @brief Method ToAsn1Object addr 0xe938b8 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "OcspIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspIdentifier(OcspIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspIdentifier(OcspIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspIdentifier();

public:
  /// @brief Field ocspResponderID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ___ocspResponderID;

  /// @brief Field producedAt, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___producedAt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*, "Org.BouncyCastle.Asn1.Esf", "OcspIdentifier");
