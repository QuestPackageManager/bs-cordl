#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/DistributionPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DistributionPoint)
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
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
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DistributionPoint);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.DistributionPoint
class CORDL_TYPE DistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CrlIssuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* CrlIssuer;

  __declspec(property(get = get_DistributionPointName)) ::Org::BouncyCastle::Asn1::X509::DistributionPointName* DistributionPointName;

  __declspec(property(get = get_Reasons)) ::Org::BouncyCastle::Asn1::X509::ReasonFlags* Reasons;

  /// @brief Field cRLIssuer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cRLIssuer, put = __cordl_internal_set_cRLIssuer)) ::Org::BouncyCastle::Asn1::X509::GeneralNames* cRLIssuer;

  /// @brief Field distributionPoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_distributionPoint, put = __cordl_internal_set_distributionPoint)) ::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint;

  /// @brief Field reasons, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reasons, put = __cordl_internal_set_reasons)) ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons;

  /// @brief Method GetInstance, addr 0x2602788, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2601824, size 0x168, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPointName,
                                                                             ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons, ::Org::BouncyCastle::Asn1::X509::GeneralNames* crlIssuer);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2602a24, size 0xd4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x2602af8, size 0x1b8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& __cordl_internal_get_cRLIssuer() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_cRLIssuer();

  constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName* const& __cordl_internal_get_distributionPoint() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& __cordl_internal_get_distributionPoint();

  constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags* const& __cordl_internal_get_reasons() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& __cordl_internal_get_reasons();

  constexpr void __cordl_internal_set_cRLIssuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName* value);

  constexpr void __cordl_internal_set_reasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags* value);

  /// @brief Method .ctor, addr 0x26029d0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPointName, ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons,
                    ::Org::BouncyCastle::Asn1::X509::GeneralNames* crlIssuer);

  /// @brief Method .ctor, addr 0x26027a0, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method appendObject, addr 0x2602cb0, size 0xf8, virtual false, abstract: false, final false
  inline void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);

  /// @brief Method get_CrlIssuer, addr 0x2602a1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_CrlIssuer();

  /// @brief Method get_DistributionPointName, addr 0x2602a0c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* get_DistributionPointName();

  /// @brief Method get_Reasons, addr 0x2602a14, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_Reasons();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DistributionPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DistributionPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DistributionPoint(DistributionPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DistributionPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DistributionPoint(DistributionPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 357 };

  /// @brief Field distributionPoint, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DistributionPointName* ___distributionPoint;

  /// @brief Field reasons, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::ReasonFlags* ___reasons;

  /// @brief Field cRLIssuer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___cRLIssuer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ___distributionPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ___reasons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ___cRLIssuer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DistributionPoint, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, "Org.BouncyCastle.Asn1.X509", "DistributionPoint");
