#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/PolicyQualifierInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PolicyQualifierInfo)
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
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyQualifierInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.PolicyQualifierInfo
class CORDL_TYPE PolicyQualifierInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_PolicyQualifierId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PolicyQualifierId;

  __declspec(property(get = get_Qualifier)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Qualifier;

  /// @brief Field policyQualifierId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_policyQualifierId, put = __cordl_internal_set_policyQualifierId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyQualifierId;

  /// @brief Field qualifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_qualifier, put = __cordl_internal_set_qualifier)) ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier;

  /// @brief Method GetInstance, addr 0x260dafc, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* New_ctor(::StringW cps);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier);

  static inline ::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x260dbb0, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_policyQualifierId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_policyQualifierId();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_qualifier() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_qualifier();

  constexpr void __cordl_internal_set_policyQualifierId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_qualifier(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x260d8f0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::StringW cps);

  /// @brief Method .ctor, addr 0x260d8c4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* policyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable* qualifier);

  /// @brief Method .ctor, addr 0x260d998, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PolicyQualifierId, addr 0x260dba0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PolicyQualifierId();

  /// @brief Method get_Qualifier, addr 0x260dba8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Qualifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolicyQualifierInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolicyQualifierInfo(PolicyQualifierInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolicyQualifierInfo(PolicyQualifierInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 377 };

  /// @brief Field policyQualifierId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___policyQualifierId;

  /// @brief Field qualifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___qualifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo, ___policyQualifierId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo, ___qualifier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo*, "Org.BouncyCastle.Asn1.X509", "PolicyQualifierInfo");
