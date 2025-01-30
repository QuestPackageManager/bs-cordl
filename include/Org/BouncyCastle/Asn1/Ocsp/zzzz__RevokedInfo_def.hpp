#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/RevokedInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RevokedInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class CrlReason;
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
class DerGeneralizedTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.RevokedInfo
class CORDL_TYPE RevokedInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_RevocationReason)) ::Org::BouncyCastle::Asn1::X509::CrlReason* RevocationReason;

  __declspec(property(get = get_RevocationTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* RevocationTime;

  /// @brief Field revocationReason, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_revocationReason, put = __cordl_internal_set_revocationReason)) ::Org::BouncyCastle::Asn1::X509::CrlReason* revocationReason;

  /// @brief Field revocationTime, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_revocationTime, put = __cordl_internal_set_revocationTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime;

  /// @brief Method GetInstance, addr 0x2404acc, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2407e20, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime, ::Org::BouncyCastle::Asn1::X509::CrlReason* revocationReason);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24081e8, size 0x108, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::CrlReason* const& __cordl_internal_get_revocationReason() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::CrlReason*& __cordl_internal_get_revocationReason();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_revocationTime() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_revocationTime();

  constexpr void __cordl_internal_set_revocationReason(::Org::BouncyCastle::Asn1::X509::CrlReason* value);

  constexpr void __cordl_internal_set_revocationTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method .ctor, addr 0x2408158, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime);

  /// @brief Method .ctor, addr 0x2408160, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* revocationTime, ::Org::BouncyCastle::Asn1::X509::CrlReason* revocationReason);

  /// @brief Method .ctor, addr 0x2407f9c, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_RevocationReason, addr 0x24081e0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::CrlReason* get_RevocationReason();

  /// @brief Method get_RevocationTime, addr 0x24081d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_RevocationTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RevokedInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RevokedInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RevokedInfo(RevokedInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RevokedInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RevokedInfo(RevokedInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 219 };

  /// @brief Field revocationTime, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___revocationTime;

  /// @brief Field revocationReason, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::CrlReason* ___revocationReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, ___revocationTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, ___revocationReason) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*, "Org.BouncyCastle.Asn1.Ocsp", "RevokedInfo");
