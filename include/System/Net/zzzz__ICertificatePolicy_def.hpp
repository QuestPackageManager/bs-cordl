#pragma once
// IWYU pragma private; include "System/Net/ICertificatePolicy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICertificatePolicy)
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebRequest;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Net {
class ICertificatePolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ICertificatePolicy);
// Dependencies
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ICertificatePolicy
class CORDL_TYPE ICertificatePolicy {
public:
  // Declarations
  /// @brief Method CheckValidationResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CheckValidationResult(::System::Net::ServicePoint* srvPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Net::WebRequest* request,
                                    int32_t certificateProblem);

  // Ctor Parameters [CppParam { name: "", ty: "ICertificatePolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICertificatePolicy(ICertificatePolicy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICertificatePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICertificatePolicy*, "System.Net", "ICertificatePolicy");
