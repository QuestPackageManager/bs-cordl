#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DistributionPoint)
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
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
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DistributionPoint);
// Type: Org.BouncyCastle.Asn1.X509::DistributionPoint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(357))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DistributionPoint*
class CORDL_TYPE DistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field distributionPoint, offset 0x10, size 0x8
  __declspec(property(get = __get_distributionPoint, put = __set_distributionPoint))::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint;

  /// @brief Field reasons, offset 0x18, size 0x8
  __declspec(property(get = __get_reasons, put = __set_reasons))::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons;

  /// @brief Field cRLIssuer, offset 0x20, size 0x8
  __declspec(property(get = __get_cRLIssuer, put = __set_cRLIssuer))::Org::BouncyCastle::Asn1::X509::GeneralNames* cRLIssuer;

  __declspec(property(get = get_DistributionPointName))::Org::BouncyCastle::Asn1::X509::DistributionPointName* DistributionPointName;

  __declspec(property(get = get_Reasons))::Org::BouncyCastle::Asn1::X509::ReasonFlags* Reasons;

  __declspec(property(get = get_CrlIssuer))::Org::BouncyCastle::Asn1::X509::GeneralNames* CrlIssuer;

  constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& __get_distributionPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DistributionPointName*> const& __get_distributionPoint() const;

  constexpr void __set_distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& __get_reasons();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::ReasonFlags*> const& __get_reasons() const;

  constexpr void __set_reasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __get_cRLIssuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __get_cRLIssuer() const;

  constexpr void __set_cRLIssuer(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  /// @brief Method GetInstance addr 0x111bbcc size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x111aae4 size 0x178 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x111bbe4 size 0x170 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::DistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPointName,
                                                                             ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons, ::Org::BouncyCastle::Asn1::X509::GeneralNames* crlIssuer);

  /// @brief Method .ctor addr 0x111be18 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPointName, ::Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons,
                    ::Org::BouncyCastle::Asn1::X509::GeneralNames* crlIssuer);

  /// @brief Method get_DistributionPointName addr 0x111be54 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* get_DistributionPointName();

  /// @brief Method get_Reasons addr 0x111be5c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_Reasons();

  /// @brief Method get_CrlIssuer addr 0x111be64 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_CrlIssuer();

  /// @brief Method ToAsn1Object addr 0x111be6c size 0xd8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString addr 0x111bf44 size 0x1b8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method appendObject addr 0x111c0fc size 0xf8 virtual false final false
  inline void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);

  // Ctor Parameters [CppParam { name: "", ty: "DistributionPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DistributionPoint(DistributionPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DistributionPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DistributionPoint(DistributionPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DistributionPoint();

public:
  /// @brief Field distributionPoint, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DistributionPointName* ___distributionPoint;

  /// @brief Field reasons, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::ReasonFlags* ___reasons;

  /// @brief Field cRLIssuer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___cRLIssuer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DistributionPoint, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ___distributionPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ___reasons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DistributionPoint, ___cRLIssuer) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPoint*, "Org.BouncyCastle.Asn1.X509", "DistributionPoint");
