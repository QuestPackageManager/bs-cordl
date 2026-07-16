#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathBuilderResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PkixCertPathBuilderResult)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*, "Org.BouncyCastle.Pkix", "PkixCertPathBuilderResult");
// Dependencies Org.BouncyCastle.Pkix.PkixCertPathValidatorResult
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathBuilderResult
class CORDL_TYPE PkixCertPathBuilderResult : public ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult {
public:
  // Declarations
  __declspec(property(get = get_CertPath)) ::Org::BouncyCastle::Pkix::PkixCertPath* CertPath;

  /// @brief Field certPath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certPath, put = __cordl_internal_set_certPath)) ::Org::BouncyCastle::Pkix::PkixCertPath* certPath;

  static inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* New_ctor(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor,
                                                                               ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey);

  /// @brief Method ToString, addr 0x35c5a60, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Pkix::PkixCertPath* const& __cordl_internal_get_certPath() const;

  constexpr ::Org::BouncyCastle::Pkix::PkixCertPath*& __cordl_internal_get_certPath();

  constexpr void __cordl_internal_set_certPath(::Org::BouncyCastle::Pkix::PkixCertPath* value);

  /// @brief Method .ctor, addr 0x35bcf44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor, ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey);

  /// @brief Method get_CertPath, addr 0x35c5a58, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixCertPath* get_CertPath();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCertPathBuilderResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCertPathBuilderResult(PkixCertPathBuilderResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilderResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCertPathBuilderResult(PkixCertPathBuilderResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1720 };

  /// @brief Field certPath, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkix::PkixCertPath* ___certPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult, ___certPath) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult) == 0x30, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
