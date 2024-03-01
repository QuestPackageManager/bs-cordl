#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PkixCertPathValidatorResult)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult);
// Type: Org.BouncyCastle.Pkix::PkixCertPathValidatorResult
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPathValidatorResult*
class CORDL_TYPE PkixCertPathValidatorResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PolicyTree))::Org::BouncyCastle::Pkix::PkixPolicyNode* PolicyTree;

  __declspec(property(get = get_SubjectPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* SubjectPublicKey;

  __declspec(property(get = get_TrustAnchor))::Org::BouncyCastle::Pkix::TrustAnchor* TrustAnchor;

  /// @brief Field policyTree, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_policyTree, put = __cordl_internal_set_policyTree))::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree;

  /// @brief Field subjectPublicKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_subjectPublicKey, put = __cordl_internal_set_subjectPublicKey))::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey;

  /// @brief Field trustAnchor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_trustAnchor, put = __cordl_internal_set_trustAnchor))::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor;

  /// @brief Method Clone, addr 0x1164ed4, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* Clone();

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* New_ctor(::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree,
                                                                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey);

  /// @brief Method ToString, addr 0x1164f4c, size 0x170, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Pkix::PkixPolicyNode*& __cordl_internal_get_policyTree();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixPolicyNode*> const& __cordl_internal_get_policyTree() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_subjectPublicKey();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& __cordl_internal_get_subjectPublicKey() const;

  constexpr ::Org::BouncyCastle::Pkix::TrustAnchor*& __cordl_internal_get_trustAnchor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::TrustAnchor*> const& __cordl_internal_get_trustAnchor() const;

  constexpr void __cordl_internal_set_policyTree(::Org::BouncyCastle::Pkix::PkixPolicyNode* value);

  constexpr void __cordl_internal_set_subjectPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_trustAnchor(::Org::BouncyCastle::Pkix::TrustAnchor* value);

  /// @brief Method .ctor, addr 0x1164e20, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey);

  /// @brief Method get_PolicyTree, addr 0x1164e08, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* get_PolicyTree();

  /// @brief Method get_SubjectPublicKey, addr 0x1164e18, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* get_SubjectPublicKey();

  /// @brief Method get_TrustAnchor, addr 0x1164e10, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::TrustAnchor* get_TrustAnchor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathValidatorResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathValidatorResult(PkixCertPathValidatorResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathValidatorResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathValidatorResult(PkixCertPathValidatorResult const&) = delete;

  /// @brief Field trustAnchor, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkix::TrustAnchor* ___trustAnchor;

  /// @brief Field policyTree, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkix::PkixPolicyNode* ___policyTree;

  /// @brief Field subjectPublicKey, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___subjectPublicKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, ___trustAnchor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, ___policyTree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, ___subjectPublicKey) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*, "Org.BouncyCastle.Pkix", "PkixCertPathValidatorResult");
