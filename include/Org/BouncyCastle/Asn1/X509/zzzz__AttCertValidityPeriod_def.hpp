#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AttCertValidityPeriod)
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
class DerGeneralizedTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertValidityPeriod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod);
// Type: Org.BouncyCastle.Asn1.X509::AttCertValidityPeriod
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttCertValidityPeriod*
class CORDL_TYPE AttCertValidityPeriod : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_NotAfterTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotAfterTime;

  __declspec(property(get = get_NotBeforeTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotBeforeTime;

  /// @brief Field notAfterTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_notAfterTime, put = __cordl_internal_set_notAfterTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime;

  /// @brief Field notBeforeTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_notBeforeTime, put = __cordl_internal_set_notBeforeTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime;

  /// @brief Method GetInstance, addr 0x1119764, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x11194cc, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime,
                                                                                 ::Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime);

  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11197b8, size 0xf0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_notAfterTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_notAfterTime() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_notBeforeTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_notBeforeTime() const;

  constexpr void __cordl_internal_set_notAfterTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_notBeforeTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method .ctor, addr 0x111977c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime);

  /// @brief Method .ctor, addr 0x1119654, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NotAfterTime, addr 0x11197b0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotAfterTime();

  /// @brief Method get_NotBeforeTime, addr 0x11197a8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotBeforeTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttCertValidityPeriod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttCertValidityPeriod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttCertValidityPeriod(AttCertValidityPeriod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttCertValidityPeriod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttCertValidityPeriod(AttCertValidityPeriod const&) = delete;

  /// @brief Field notBeforeTime, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___notBeforeTime;

  /// @brief Field notAfterTime, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___notAfterTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod, ___notBeforeTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod, ___notAfterTime) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*, "Org.BouncyCastle.Asn1.X509", "AttCertValidityPeriod");
