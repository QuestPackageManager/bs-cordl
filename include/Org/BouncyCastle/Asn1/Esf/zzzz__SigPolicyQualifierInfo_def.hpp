#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/SigPolicyQualifierInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SigPolicyQualifierInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SigPolicyQualifierInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.SigPolicyQualifierInfo
class CORDL_TYPE SigPolicyQualifierInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_SigPolicyQualifierId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SigPolicyQualifierId;

  __declspec(property(get = get_SigQualifier)) ::Org::BouncyCastle::Asn1::Asn1Object* SigQualifier;

  /// @brief Field sigPolicyQualifierId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sigPolicyQualifierId, put = __cordl_internal_set_sigPolicyQualifierId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyQualifierId;

  /// @brief Field sigQualifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sigQualifier, put = __cordl_internal_set_sigQualifier)) ::Org::BouncyCastle::Asn1::Asn1Object* sigQualifier;

  /// @brief Method GetInstance, addr 0x2325950, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyQualifierId,
                                                                                 ::Org::BouncyCastle::Asn1::Asn1Encodable* sigQualifier);

  /// @brief Method ToAsn1Object, addr 0x2326e44, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_sigPolicyQualifierId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_sigPolicyQualifierId();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get_sigQualifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_sigQualifier();

  constexpr void __cordl_internal_set_sigPolicyQualifierId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_sigQualifier(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x2326bec, size 0x200, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2326dec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigPolicyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable* sigQualifier);

  /// @brief Method get_SigPolicyQualifierId, addr 0x2326e34, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SigPolicyQualifierId();

  /// @brief Method get_SigQualifier, addr 0x2326e3c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_SigQualifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SigPolicyQualifierInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SigPolicyQualifierInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SigPolicyQualifierInfo(SigPolicyQualifierInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SigPolicyQualifierInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SigPolicyQualifierInfo(SigPolicyQualifierInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 159 };

  /// @brief Field sigPolicyQualifierId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___sigPolicyQualifierId;

  /// @brief Field sigQualifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___sigQualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo, ___sigPolicyQualifierId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo, ___sigQualifier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*, "Org.BouncyCastle.Asn1.Esf", "SigPolicyQualifierInfo");
