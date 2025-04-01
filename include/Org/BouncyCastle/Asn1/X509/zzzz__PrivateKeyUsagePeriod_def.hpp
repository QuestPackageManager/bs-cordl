#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/PrivateKeyUsagePeriod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PrivateKeyUsagePeriod)
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
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PrivateKeyUsagePeriod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.PrivateKeyUsagePeriod
class CORDL_TYPE PrivateKeyUsagePeriod : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_NotAfter)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotAfter;

  __declspec(property(get = get_NotBefore)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* NotBefore;

  /// @brief Field _notAfter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__notAfter, put = __cordl_internal_set__notAfter)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* _notAfter;

  /// @brief Field _notBefore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__notBefore, put = __cordl_internal_set__notBefore)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* _notBefore;

  /// @brief Method GetInstance, addr 0x260a19c, size 0x1c8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x260a688, size 0xbc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get__notAfter() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get__notAfter();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get__notBefore() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get__notBefore();

  constexpr void __cordl_internal_set__notAfter(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set__notBefore(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method .ctor, addr 0x260a364, size 0x314, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_NotAfter, addr 0x260a680, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotAfter();

  /// @brief Method get_NotBefore, addr 0x260a678, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_NotBefore();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivateKeyUsagePeriod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyUsagePeriod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivateKeyUsagePeriod(PrivateKeyUsagePeriod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivateKeyUsagePeriod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivateKeyUsagePeriod(PrivateKeyUsagePeriod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 378 };

  /// @brief Field _notBefore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ____notBefore;

  /// @brief Field _notAfter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ____notAfter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod, ____notBefore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod, ____notAfter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PrivateKeyUsagePeriod*, "Org.BouncyCastle.Asn1.X509", "PrivateKeyUsagePeriod");
