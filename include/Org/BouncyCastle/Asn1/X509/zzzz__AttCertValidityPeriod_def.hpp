#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AttCertValidityPeriod)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(340))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttCertValidityPeriod*
class CORDL_TYPE AttCertValidityPeriod : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field notBeforeTime, offset 0x10, size 0x8
  __declspec(property(get = __get_notBeforeTime, put = __set_notBeforeTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime;

  /// @brief Field notAfterTime, offset 0x18, size 0x8
  __declspec(property(get = __get_notAfterTime, put = __set_notAfterTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime;

  __declspec(property(get = get_NotBeforeTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotBeforeTime;

  __declspec(property(get = get_NotAfterTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotAfterTime;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_notBeforeTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_notBeforeTime() const;

  constexpr void __set_notBeforeTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_notAfterTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_notAfterTime() const;

  constexpr void __set_notAfterTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method GetInstance addr 0x1012d18 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0x1012fb0 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1012ea0 size 0x110 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime,
                                                                                 ::Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime);

  /// @brief Method .ctor addr 0x1012fc8 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* notBeforeTime, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* notAfterTime);

  /// @brief Method get_NotBeforeTime addr 0x1012ff4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotBeforeTime();

  /// @brief Method get_NotAfterTime addr 0x1012ffc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotAfterTime();

  /// @brief Method ToAsn1Object addr 0x1013004 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AttCertValidityPeriod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttCertValidityPeriod(AttCertValidityPeriod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttCertValidityPeriod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttCertValidityPeriod(AttCertValidityPeriod const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttCertValidityPeriod();

public:
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
