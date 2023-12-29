#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClient)
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net::Http {
struct HttpCompletionOption;
}
namespace System::Net::Http {
struct __HttpClient___SendAsyncWorker_d__47;
}
namespace System::Net::Http {
struct __HttpClient___GetStringAsync_d__53;
}
namespace System {
class Uri;
}
namespace System {
struct TimeSpan;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
struct __HttpClient___GetStringAsync_d__53;
}
namespace System::Net::Http {
struct __HttpClient___SendAsyncWorker_d__47;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpClient);
MARK_VAL_T(::System::Net::Http::__HttpClient___GetStringAsync_d__53);
MARK_VAL_T(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47);
// Type: ::<SendAsyncWorker>d__47
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 866 }),
// TypeDefinitionIndex(TypeDefinitionIndex(14862)), TypeDefinitionIndex(TypeDefinitionIndex(14872)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3392)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3392), inst: 866 }), TypeDefinitionIndex(TypeDefinitionIndex(2675))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14859)) CS
// Name: ::HttpClient::<SendAsyncWorker>d__47
struct CORDL_TYPE __HttpClient___SendAsyncWorker_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26b697c size 0x620 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x26b6f9c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None },
  // CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "completionOption", ty: "::System::Net::Http::HttpCompletionOption",
  // modifiers: "", def_value: None }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "_response_5__3", ty:
  // "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HttpClient___SendAsyncWorker_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder,
                                                 ::System::Net::Http::HttpClient* __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage* request,
                                                 ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationTokenSource* _lcts_5__2,
                                                 ::System::Net::Http::HttpResponseMessage* _response_5__3,
                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
                                                 ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___SendAsyncWorker_d__47();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* request;

  /// @brief Field completionOption, offset: 0x38, size: 0x4, def value: None
  ::System::Net::Http::HttpCompletionOption completionOption;

  /// @brief Field <lcts>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _lcts_5__2;

  /// @brief Field <response>5__3, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _response_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, completionOption) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, _lcts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, _response_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, __u__2) == 0x60, "Offset mismatch!");

} // namespace System::Net::Http
// Type: ::<GetStringAsync>d__53
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3392)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3392), inst: 866
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(14872)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3392), inst: 393 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14860)) CS Name: ::HttpClient::<GetStringAsync>d__53
struct CORDL_TYPE __HttpClient___GetStringAsync_d__53 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x26b6ff4 size 0x4c4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x26b7658 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers: "",
  // def_value: None }, CppParam { name: "requestUri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "_resp_5__2", ty: "::System::Net::Http::HttpResponseMessage*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None }]
  constexpr __HttpClient___GetStringAsync_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpClient* __4__this,
                                                ::System::Uri* requestUri, ::System::Net::Http::HttpResponseMessage* _resp_5__2,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1,
                                                ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpClient___GetStringAsync_d__53();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* __4__this;

  /// @brief Field requestUri, offset: 0x28, size: 0x8, def value: None
  ::System::Uri* requestUri;

  /// @brief Field <resp>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _resp_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpClient___GetStringAsync_d__53, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, requestUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, _resp_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::__HttpClient___GetStringAsync_d__53, __u__2) == 0x48, "Offset mismatch!");

} // namespace System::Net::Http
// Type: System.Net.Http::HttpClient
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14868)), TypeDefinitionIndex(TypeDefinitionIndex(2482))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14861))
// CS Name: ::System.Net.Http::HttpClient*
class CORDL_TYPE HttpClient : public ::System::Net::Http::HttpMessageInvoker {
public:
  // Declarations
  using _GetStringAsync_d__53 = ::System::Net::Http::__HttpClient___GetStringAsync_d__53;

  using _SendAsyncWorker_d__47 = ::System::Net::Http::__HttpClient___SendAsyncWorker_d__47;

  /// @brief Field base_address, offset 0x20, size 0x8
  __declspec(property(get = __get_base_address, put = __set_base_address))::System::Uri* base_address;

  /// @brief Field cts, offset 0x28, size 0x8
  __declspec(property(get = __get_cts, put = __set_cts))::System::Threading::CancellationTokenSource* cts;

  /// @brief Field disposed, offset 0x30, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field headers, offset 0x38, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::System::Net::Http::Headers::HttpRequestHeaders* headers;

  /// @brief Field buffer_size, offset 0x40, size 0x8
  __declspec(property(get = __get_buffer_size, put = __set_buffer_size)) int64_t buffer_size;

  /// @brief Field timeout, offset 0x48, size 0x8
  __declspec(property(get = __get_timeout, put = __set_timeout))::System::TimeSpan timeout;

  /// @brief Field TimeoutDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TimeoutDefault, put = setStaticF_TimeoutDefault))::System::TimeSpan TimeoutDefault;

  __declspec(property(get = get_MaxResponseContentBufferSize)) int64_t MaxResponseContentBufferSize;

  __declspec(property(put = set_Timeout))::System::TimeSpan Timeout;

  constexpr ::System::Uri*& __get_base_address();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_base_address() const;

  constexpr void __set_base_address(::System::Uri* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get_cts();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get_cts() const;

  constexpr void __set_cts(::System::Threading::CancellationTokenSource* value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& __get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpRequestHeaders*> const& __get_headers() const;

  constexpr void __set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value);

  constexpr int64_t& __get_buffer_size();

  constexpr int64_t const& __get_buffer_size() const;

  constexpr void __set_buffer_size(int64_t value);

  constexpr ::System::TimeSpan& __get_timeout();

  constexpr ::System::TimeSpan const& __get_timeout() const;

  constexpr void __set_timeout(::System::TimeSpan value);

  static inline void setStaticF_TimeoutDefault(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_TimeoutDefault();

  static inline ::System::Net::Http::HttpClient* New_ctor();

  /// @brief Method .ctor addr 0x26b5bcc size 0x64 virtual false final false
  inline void _ctor();

  static inline ::System::Net::Http::HttpClient* New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method .ctor addr 0x26b5c30 size 0xbc virtual false final false
  inline void _ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);

  /// @brief Method get_MaxResponseContentBufferSize addr 0x26b5d70 size 0x8 virtual false final false
  inline int64_t get_MaxResponseContentBufferSize();

  /// @brief Method set_Timeout addr 0x26b5d78 size 0x134 virtual false final false
  inline void set_Timeout(::System::TimeSpan value);

  /// @brief Method Dispose addr 0x26b5eac size 0x6c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method GetAsync addr 0x26b5f50 size 0xdc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* GetAsync(::System::Uri* requestUri, ::System::Net::Http::HttpCompletionOption completionOption);

  /// @brief Method SendAsync addr 0x26b60e0 size 0x74 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request);

  /// @brief Method SendAsync addr 0x26b6068 size 0x78 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Net::Http::HttpCompletionOption completionOption);

  /// @brief Method SendAsync addr 0x26b63e4 size 0xc virtual true final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAsync addr 0x26b6154 size 0x290 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*
  SendAsync(::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendAsyncWorker addr 0x26b66a8 size 0x118 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*
  SendAsyncWorker(::System::Net::Http::HttpRequestMessage* request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetStringAsync addr 0x26b67c0 size 0x100 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetStringAsync(::System::Uri* requestUri);

  /// @brief Method <>n__0 addr 0x26b693c size 0x20 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* __n__0(::System::Net::Http::HttpRequestMessage* request,
                                                                                               ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpClient(HttpClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpClient(HttpClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpClient();

public:
  /// @brief Field base_address, offset: 0x20, size: 0x8, def value: None
  ::System::Uri* ___base_address;

  /// @brief Field cts, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ___cts;

  /// @brief Field disposed, offset: 0x30, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field headers, offset: 0x38, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpRequestHeaders* ___headers;

  /// @brief Field buffer_size, offset: 0x40, size: 0x8, def value: None
  int64_t ___buffer_size;

  /// @brief Field timeout, offset: 0x48, size: 0x8, def value: None
  ::System::TimeSpan ___timeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpClient, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___base_address) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___cts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___disposed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___buffer_size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::HttpClient, ___timeout) == 0x48, "Offset mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpClient*, "System.Net.Http", "HttpClient");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpClient___GetStringAsync_d__53, "System.Net.Http", "HttpClient/<GetStringAsync>d__53");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpClient___SendAsyncWorker_d__47, "System.Net.Http", "HttpClient/<SendAsyncWorker>d__47");
