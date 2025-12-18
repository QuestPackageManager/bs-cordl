#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncHandshakeRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
CORDL_MODULE_EXPORT(AsyncHandshakeRequest)
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncHandshakeRequest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncHandshakeRequest);
// Dependencies Mono.Net.Security.AsyncProtocolRequest
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.AsyncHandshakeRequest
class CORDL_TYPE AsyncHandshakeRequest : public ::Mono::Net::Security::AsyncProtocolRequest {
public:
  // Declarations
  static inline ::Mono::Net::Security::AsyncHandshakeRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);

  /// @brief Method Run, addr 0x5e23554, size 0x18, virtual true, abstract: false, final false
  inline ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status);

  /// @brief Method .ctor, addr 0x5e23550, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncHandshakeRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncHandshakeRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncHandshakeRequest(AsyncHandshakeRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncHandshakeRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncHandshakeRequest(AsyncHandshakeRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10991 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncHandshakeRequest, 0x38>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncHandshakeRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncHandshakeRequest*, "Mono.Net.Security", "AsyncHandshakeRequest");
