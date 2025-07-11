#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OcspIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OcspIdentifier)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
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
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OcspIdentifier
class CORDL_TYPE OcspIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OcspResponderID)) ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* OcspResponderID;

  __declspec(property(get = get_ProducedAt)) ::System::DateTime ProducedAt;

  /// @brief Field ocspResponderID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ocspResponderID, put = __cordl_internal_set_ocspResponderID)) ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID;

  /// @brief Field producedAt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_producedAt, put = __cordl_internal_set_producedAt)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt;

  /// @brief Method GetInstance, addr 0x2320e18, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID, ::System::DateTime producedAt);

  static inline ::Org::BouncyCastle::Asn1::Esf::OcspIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2321274, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* const& __cordl_internal_get_ocspResponderID() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& __cordl_internal_get_ocspResponderID();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_producedAt() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_producedAt();

  constexpr void __cordl_internal_set_ocspResponderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value);

  constexpr void __cordl_internal_set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method .ctor, addr 0x232119c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ocspResponderID, ::System::DateTime producedAt);

  /// @brief Method .ctor, addr 0x2320f94, size 0x208, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OcspResponderID, addr 0x2321250, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* get_OcspResponderID();

  /// @brief Method get_ProducedAt, addr 0x2321258, size 0x1c, virtual false, abstract: false, final false
  inline ::System::DateTime get_ProducedAt();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcspIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcspIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcspIdentifier(OcspIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcspIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcspIdentifier(OcspIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 145 };

  /// @brief Field ocspResponderID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ___ocspResponderID;

  /// @brief Field producedAt, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___producedAt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier, ___ocspResponderID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier, ___producedAt) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OcspIdentifier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OcspIdentifier*, "Org.BouncyCastle.Asn1.Esf", "OcspIdentifier");
