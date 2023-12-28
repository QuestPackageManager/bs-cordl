#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICertificatePolicy)
namespace System::Net {
class ServicePoint;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net {
class WebRequest;
}
// Forward declare root types
namespace System::Net {
class ICertificatePolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ICertificatePolicy);
// Type: System.Net::ICertificatePolicy
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9069))
// CS Name: ::System.Net::ICertificatePolicy*
class CORDL_TYPE ICertificatePolicy {
public:
  // Declarations
  /// @brief Method CheckValidationResult addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CheckValidationResult(::System::Net::ServicePoint* srvPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Net::WebRequest* request,
                                    int32_t certificateProblem);

  // Ctor Parameters [CppParam { name: "", ty: "ICertificatePolicy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICertificatePolicy(ICertificatePolicy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICertificatePolicy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICertificatePolicy(ICertificatePolicy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
NEED_NO_BOX(::System::Net::ICertificatePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICertificatePolicy*, "System.Net", "ICertificatePolicy");
