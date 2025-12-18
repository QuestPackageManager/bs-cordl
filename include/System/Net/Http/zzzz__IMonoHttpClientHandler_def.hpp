#pragma once
// IWYU pragma private; include "System/Net/Http/IMonoHttpClientHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMonoHttpClientHandler)
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::IMonoHttpClientHandler);
// Dependencies
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.IMonoHttpClientHandler
class CORDL_TYPE IMonoHttpClientHandler {
public:
  // Declarations
  __declspec(property(put = set_AllowAutoRedirect)) bool AllowAutoRedirect;

  __declspec(property(get = get_SslOptions, put = set_SslOptions)) ::System::Net::Security::SslClientAuthenticationOptions* SslOptions;

  __declspec(property(put = set_UseProxy)) bool UseProxy;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method SendAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SetWebRequestTimeout, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetWebRequestTimeout(::System::TimeSpan timeout);

  /// @brief Method get_SslOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Net::Security::SslClientAuthenticationOptions* get_SslOptions();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_AllowAutoRedirect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_AllowAutoRedirect(bool value);

  /// @brief Method set_SslOptions, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* value);

  /// @brief Method set_UseProxy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_UseProxy(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IMonoHttpClientHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMonoHttpClientHandler(IMonoHttpClientHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20033 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::IMonoHttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::IMonoHttpClientHandler*, "System.Net.Http", "IMonoHttpClientHandler");
