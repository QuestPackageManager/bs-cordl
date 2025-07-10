#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/IssuingDistributionPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IssuingDistributionPoint)
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
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
class IssuingDistributionPoint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
class CORDL_TYPE IssuingDistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_DistributionPoint)) ::Org::BouncyCastle::Asn1::X509::DistributionPointName* DistributionPoint;

  __declspec(property(get = get_IsIndirectCrl)) bool IsIndirectCrl;

  __declspec(property(get = get_OnlyContainsAttributeCerts)) bool OnlyContainsAttributeCerts;

  __declspec(property(get = get_OnlyContainsCACerts)) bool OnlyContainsCACerts;

  __declspec(property(get = get_OnlyContainsUserCerts)) bool OnlyContainsUserCerts;

  __declspec(property(get = get_OnlySomeReasons)) ::Org::BouncyCastle::Asn1::X509::ReasonFlags* OnlySomeReasons;

  /// @brief Field _distributionPoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__distributionPoint, put = __cordl_internal_set__distributionPoint)) ::Org::BouncyCastle::Asn1::X509::DistributionPointName* _distributionPoint;

  /// @brief Field _indirectCRL, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__indirectCRL, put = __cordl_internal_set__indirectCRL)) bool _indirectCRL;

  /// @brief Field _onlyContainsAttributeCerts, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__onlyContainsAttributeCerts, put = __cordl_internal_set__onlyContainsAttributeCerts)) bool _onlyContainsAttributeCerts;

  /// @brief Field _onlyContainsCACerts, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__onlyContainsCACerts, put = __cordl_internal_set__onlyContainsCACerts)) bool _onlyContainsCACerts;

  /// @brief Field _onlyContainsUserCerts, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__onlyContainsUserCerts, put = __cordl_internal_set__onlyContainsUserCerts)) bool _onlyContainsUserCerts;

  /// @brief Field _onlySomeReasons, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onlySomeReasons, put = __cordl_internal_set__onlySomeReasons)) ::Org::BouncyCastle::Asn1::X509::ReasonFlags* _onlySomeReasons;

  /// @brief Field seq, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Method GetInstance, addr 0x260a094, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x260a0ac, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint, bool onlyContainsUserCerts,
                                                                                    bool onlyContainsCACerts, ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons, bool indirectCRL,
                                                                                    bool onlyContainsAttributeCerts);

  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x260a810, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x260a818, size 0x2e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName* const& __cordl_internal_get__distributionPoint() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& __cordl_internal_get__distributionPoint();

  constexpr bool const& __cordl_internal_get__indirectCRL() const;

  constexpr bool& __cordl_internal_get__indirectCRL();

  constexpr bool const& __cordl_internal_get__onlyContainsAttributeCerts() const;

  constexpr bool& __cordl_internal_get__onlyContainsAttributeCerts();

  constexpr bool const& __cordl_internal_get__onlyContainsCACerts() const;

  constexpr bool& __cordl_internal_get__onlyContainsCACerts();

  constexpr bool const& __cordl_internal_get__onlyContainsUserCerts() const;

  constexpr bool& __cordl_internal_get__onlyContainsUserCerts();

  constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags* const& __cordl_internal_get__onlySomeReasons() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& __cordl_internal_get__onlySomeReasons();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr void __cordl_internal_set__distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName* value);

  constexpr void __cordl_internal_set__indirectCRL(bool value);

  constexpr void __cordl_internal_set__onlyContainsAttributeCerts(bool value);

  constexpr void __cordl_internal_set__onlyContainsCACerts(bool value);

  constexpr void __cordl_internal_set__onlyContainsUserCerts(bool value);

  constexpr void __cordl_internal_set__onlySomeReasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags* value);

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x260a4cc, size 0x314, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint, bool onlyContainsUserCerts, bool onlyContainsCACerts,
                    ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons, bool indirectCRL, bool onlyContainsAttributeCerts);

  /// @brief Method .ctor, addr 0x260a228, size 0x2a4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method appendObject, addr 0x260aaf8, size 0xf8, virtual false, abstract: false, final false
  inline void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);

  /// @brief Method get_DistributionPoint, addr 0x260a800, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* get_DistributionPoint();

  /// @brief Method get_IsIndirectCrl, addr 0x260a7f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsIndirectCrl();

  /// @brief Method get_OnlyContainsAttributeCerts, addr 0x260a7f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyContainsAttributeCerts();

  /// @brief Method get_OnlyContainsCACerts, addr 0x260a7e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyContainsCACerts();

  /// @brief Method get_OnlyContainsUserCerts, addr 0x260a7e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyContainsUserCerts();

  /// @brief Method get_OnlySomeReasons, addr 0x260a808, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_OnlySomeReasons();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IssuingDistributionPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IssuingDistributionPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IssuingDistributionPoint(IssuingDistributionPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IssuingDistributionPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IssuingDistributionPoint(IssuingDistributionPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 367 };

  /// @brief Field _distributionPoint, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::DistributionPointName* ____distributionPoint;

  /// @brief Field _onlyContainsUserCerts, offset: 0x18, size: 0x1, def value: None
  bool ____onlyContainsUserCerts;

  /// @brief Field _onlyContainsCACerts, offset: 0x19, size: 0x1, def value: None
  bool ____onlyContainsCACerts;

  /// @brief Field _onlySomeReasons, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::ReasonFlags* ____onlySomeReasons;

  /// @brief Field _indirectCRL, offset: 0x28, size: 0x1, def value: None
  bool ____indirectCRL;

  /// @brief Field _onlyContainsAttributeCerts, offset: 0x29, size: 0x1, def value: None
  bool ____onlyContainsAttributeCerts;

  /// @brief Field seq, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____distributionPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlyContainsUserCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlyContainsCACerts) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlySomeReasons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____indirectCRL) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlyContainsAttributeCerts) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ___seq) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*, "Org.BouncyCastle.Asn1.X509", "IssuingDistributionPoint");
