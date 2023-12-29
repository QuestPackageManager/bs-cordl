#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphAPIClient)
namespace System::Net::Http {
class HttpClient;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
template <typename TRequest, typename TResponse> struct __GraphAPIClient___Post_d__4_2;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace GlobalNamespace {
template <typename TRequest, typename TResponse> struct __GraphAPIClient___Post_d__4_2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GraphAPIClient);
MARK_GEN_VAL_T(::GlobalNamespace::__GraphAPIClient___Post_d__4_2);
// Type: ::<Post>d__4`2
// SizeInfo { instance_size: 96, native_size: 112, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TRequest, typename TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(14872)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 866
// }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 851 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 393 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(12698)) CS Name:
// ::GraphAPIClient::<Post>d__4`2<TRequest,TResponse>
struct CORDL_TYPE __GraphAPIClient___Post_d__4_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient*", modifiers:
  // "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name:
  // "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam {
  // name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __GraphAPIClient___Post_d__4_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::GlobalNamespace::GraphAPIClient* __4__this,
                                           ::StringW path, TRequest request, ::StringW accessToken, ::System::Threading::CancellationToken cancellationToken,
                                           ::System::Net::Http::HttpRequestMessage* _requestMessage_5__2,
                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1,
                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphAPIClient___Post_d__4_2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GraphAPIClient* __4__this;

  /// @brief Field path, offset: 0x28, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field request, offset: 0x30, size: 0x8, def value: None
  TRequest request;

  /// @brief Field accessToken, offset: 0x38, size: 0x8, def value: None
  ::StringW accessToken;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <requestMessage>5__2, offset: 0x48, size: 0x8, def value: None
  ::System::Net::Http::HttpRequestMessage* _requestMessage_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::GraphAPIClient
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12699))
// CS Name: ::GraphAPIClient*
class CORDL_TYPE GraphAPIClient : public ::System::Object {
public:
  // Declarations
  template <typename TRequest, typename TResponse> using _Post_d__4_2 = ::GlobalNamespace::__GraphAPIClient___Post_d__4_2<TRequest, TResponse>;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __get__networkConfig, put = __set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _client, offset 0x18, size 0x8
  __declspec(property(get = __get__client, put = __set__client))::System::Net::Http::HttpClient* _client;

  constexpr ::GlobalNamespace::INetworkConfig*& __get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __get__networkConfig() const;

  constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::System::Net::Http::HttpClient*& __get__client();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __get__client() const;

  constexpr void __set__client(::System::Net::Http::HttpClient* value);

  static inline ::GlobalNamespace::GraphAPIClient* New_ctor(::GlobalNamespace::INetworkConfig* networkConfig);

  /// @brief Method .ctor addr 0xdb7e18 size 0x7c virtual false final false
  inline void _ctor(::GlobalNamespace::INetworkConfig* networkConfig);

  /// @brief Method PostLoggedOut addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TRequest, typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>* PostLoggedOut(::StringW path, TRequest request, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Post addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TRequest, typename TResponse>
  inline ::System::Threading::Tasks::Task_1<TResponse>* Post(::StringW path, ::StringW accessToken, TRequest request, ::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphAPIClient(GraphAPIClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphAPIClient(GraphAPIClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphAPIClient();

public:
  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphAPIClient, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphAPIClient, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphAPIClient, ____client) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GraphAPIClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphAPIClient*, "", "GraphAPIClient");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__GraphAPIClient___Post_d__4_2, "", "GraphAPIClient/<Post>d__4`2");
