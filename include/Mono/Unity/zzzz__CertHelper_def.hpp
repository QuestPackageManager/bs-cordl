#pragma once
// IWYU pragma private; include "Mono/Unity/CertHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CertHelper)
namespace Mono::Unity {
struct UnityTls_unitytls_errorstate;
}
namespace Mono::Unity {
struct UnityTls_unitytls_x509list;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Unity {
class CertHelper;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Unity::CertHelper);
// Dependencies System.Object
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.CertHelper
class CORDL_TYPE CertHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method AddCertificateToNativeChain, addr 0x4117e10, size 0x1b0, virtual false, abstract: false, final false
  static inline void AddCertificateToNativeChain(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> nativeCertificateChain,
                                                 ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                 ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

  /// @brief Method AddCertificatesToNativeChain, addr 0x4117c38, size 0x1d8, virtual false, abstract: false, final false
  static inline void AddCertificatesToNativeChain(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> nativeCertificateChain,
                                                  ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates,
                                                  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertHelper(CertHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertHelper(CertHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Unity::CertHelper, 0x10>, "Size mismatch!");

} // namespace Mono::Unity
NEED_NO_BOX(::Mono::Unity::CertHelper);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::CertHelper*, "Mono.Unity", "CertHelper");
