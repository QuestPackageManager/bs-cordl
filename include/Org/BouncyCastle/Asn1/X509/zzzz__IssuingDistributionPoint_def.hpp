#pragma once
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
// Type: Org.BouncyCastle.Asn1.X509::IssuingDistributionPoint
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(367))
// CS Name: ::Org.BouncyCastle.Asn1.X509::IssuingDistributionPoint*
class CORDL_TYPE IssuingDistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field _distributionPoint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__distributionPoint, put = __cordl_internal_set__distributionPoint))::Org::BouncyCastle::Asn1::X509::DistributionPointName* _distributionPoint;

  /// @brief Field _onlyContainsUserCerts, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__onlyContainsUserCerts, put = __cordl_internal_set__onlyContainsUserCerts)) bool _onlyContainsUserCerts;

  /// @brief Field _onlyContainsCACerts, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__onlyContainsCACerts, put = __cordl_internal_set__onlyContainsCACerts)) bool _onlyContainsCACerts;

  /// @brief Field _onlySomeReasons, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__onlySomeReasons, put = __cordl_internal_set__onlySomeReasons))::Org::BouncyCastle::Asn1::X509::ReasonFlags* _onlySomeReasons;

  /// @brief Field _indirectCRL, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__indirectCRL, put = __cordl_internal_set__indirectCRL)) bool _indirectCRL;

  /// @brief Field _onlyContainsAttributeCerts, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__onlyContainsAttributeCerts, put = __cordl_internal_set__onlyContainsAttributeCerts)) bool _onlyContainsAttributeCerts;

  /// @brief Field seq, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  __declspec(property(get = get_OnlyContainsUserCerts)) bool OnlyContainsUserCerts;

  __declspec(property(get = get_OnlyContainsCACerts)) bool OnlyContainsCACerts;

  __declspec(property(get = get_IsIndirectCrl)) bool IsIndirectCrl;

  __declspec(property(get = get_OnlyContainsAttributeCerts)) bool OnlyContainsAttributeCerts;

  __declspec(property(get = get_DistributionPoint))::Org::BouncyCastle::Asn1::X509::DistributionPointName* DistributionPoint;

  __declspec(property(get = get_OnlySomeReasons))::Org::BouncyCastle::Asn1::X509::ReasonFlags* OnlySomeReasons;

  constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName*& __cordl_internal_get__distributionPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::DistributionPointName*> const& __cordl_internal_get__distributionPoint() const;

  constexpr void __cordl_internal_set__distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName* value);

  constexpr bool& __cordl_internal_get__onlyContainsUserCerts();

  constexpr bool const& __cordl_internal_get__onlyContainsUserCerts() const;

  constexpr void __cordl_internal_set__onlyContainsUserCerts(bool value);

  constexpr bool& __cordl_internal_get__onlyContainsCACerts();

  constexpr bool const& __cordl_internal_get__onlyContainsCACerts() const;

  constexpr void __cordl_internal_set__onlyContainsCACerts(bool value);

  constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags*& __cordl_internal_get__onlySomeReasons();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::ReasonFlags*> const& __cordl_internal_get__onlySomeReasons() const;

  constexpr void __cordl_internal_set__onlySomeReasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags* value);

  constexpr bool& __cordl_internal_get__indirectCRL();

  constexpr bool const& __cordl_internal_get__indirectCRL() const;

  constexpr void __cordl_internal_set__indirectCRL(bool value);

  constexpr bool& __cordl_internal_get__onlyContainsAttributeCerts();

  constexpr bool const& __cordl_internal_get__onlyContainsAttributeCerts() const;

  constexpr void __cordl_internal_set__onlyContainsAttributeCerts(bool value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_seq() const;

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance, addr 0x11bf2cc, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x11bf2e4, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint, bool onlyContainsUserCerts,
                                                                                    bool onlyContainsCACerts, ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons, bool indirectCRL,
                                                                                    bool onlyContainsAttributeCerts);

  /// @brief Method .ctor, addr 0x11bf718, size 0x2f0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint, bool onlyContainsUserCerts, bool onlyContainsCACerts,
                    ::Org::BouncyCastle::Asn1::X509::ReasonFlags* onlySomeReasons, bool indirectCRL, bool onlyContainsAttributeCerts);

  static inline ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x11bf46c, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OnlyContainsUserCerts, addr 0x11bfa08, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyContainsUserCerts();

  /// @brief Method get_OnlyContainsCACerts, addr 0x11bfa10, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyContainsCACerts();

  /// @brief Method get_IsIndirectCrl, addr 0x11bfa18, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsIndirectCrl();

  /// @brief Method get_OnlyContainsAttributeCerts, addr 0x11bfa20, size 0x8, virtual false, abstract: false, final false
  inline bool get_OnlyContainsAttributeCerts();

  /// @brief Method get_DistributionPoint, addr 0x11bfa28, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* get_DistributionPoint();

  /// @brief Method get_OnlySomeReasons, addr 0x11bfa30, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_OnlySomeReasons();

  /// @brief Method ToAsn1Object, addr 0x11bfa38, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x11bfa40, size 0x284, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method appendObject, addr 0x11bfcc4, size 0xf8, virtual false, abstract: false, final false
  inline void appendObject(::System::Text::StringBuilder* buf, ::StringW sep, ::StringW name, ::StringW val);

  // Ctor Parameters [CppParam { name: "", ty: "IssuingDistributionPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IssuingDistributionPoint(IssuingDistributionPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IssuingDistributionPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IssuingDistributionPoint(IssuingDistributionPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IssuingDistributionPoint();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____distributionPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlyContainsUserCerts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlyContainsCACerts) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlySomeReasons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____indirectCRL) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ____onlyContainsAttributeCerts) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, ___seq) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*, "Org.BouncyCastle.Asn1.X509", "IssuingDistributionPoint");
