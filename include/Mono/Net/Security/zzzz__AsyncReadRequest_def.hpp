#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncReadRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncReadOrWriteRequest_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadRequest)
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncReadRequest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncReadRequest);
// Dependencies Mono.Net.Security.AsyncReadOrWriteRequest
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.AsyncReadRequest
class CORDL_TYPE AsyncReadRequest : public ::Mono::Net::Security::AsyncReadOrWriteRequest {
public:
  // Declarations
  static inline ::Mono::Net::Security::AsyncReadRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset,
                                                                  int32_t size);

  /// @brief Method Run, addr 0x411fa7c, size 0x68, virtual true, abstract: false, final false
  inline ::Mono::Net::Security::AsyncOperationStatus Run(::Mono::Net::Security::AsyncOperationStatus status);

  /// @brief Method .ctor, addr 0x411fa74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncReadRequest(AsyncReadRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncReadRequest(AsyncReadRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncReadRequest, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncReadRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncReadRequest*, "Mono.Net.Security", "AsyncReadRequest");
