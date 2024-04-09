#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpMessageInvoker)
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
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
// Forward declare root types
namespace System::Net::Http {
class HttpMessageInvoker;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpMessageInvoker);
// Type: System.Net.Http::HttpMessageInvoker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// CS Name: ::System.Net.Http::HttpMessageInvoker*
class CORDL_TYPE HttpMessageInvoker : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposeHandler, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_disposeHandler, put = __cordl_internal_set_disposeHandler)) bool disposeHandler;

  /// @brief Field handler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler))::System::Net::Http::HttpMessageHandler* handler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2c69e8c, size 0x10, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2c679f0, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Net::Http::HttpMessageInvoker* New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method SendAsync, addr 0x2c683c0, size 0x20, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  constexpr bool const& __cordl_internal_get_disposeHandler() const;

  constexpr bool& __cordl_internal_get_disposeHandler();

  constexpr ::System::Net::Http::HttpMessageHandler*& __cordl_internal_get_handler();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpMessageHandler*> const& __cordl_internal_get_handler() const;

  constexpr void __cordl_internal_set_disposeHandler(bool value);

  constexpr void __cordl_internal_set_handler(::System::Net::Http::HttpMessageHandler* value);

  /// @brief Method .ctor, addr 0x2c677c4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpMessageInvoker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpMessageInvoker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpMessageInvoker(HttpMessageInvoker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpMessageInvoker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpMessageInvoker(HttpMessageInvoker const&) = delete;

  /// @brief Field handler, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::HttpMessageHandler* ___handler;

  /// @brief Field disposeHandler, offset: 0x18, size: 0x1, def value: None
  bool ___disposeHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpMessageInvoker, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::HttpMessageInvoker, ___handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpMessageInvoker, ___disposeHandler) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpMessageInvoker);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpMessageInvoker*, "System.Net.Http", "HttpMessageInvoker");
