#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpPersistentTransport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpPersistentTransport)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLLiveQuery;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponse;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPersistentTransport__ExecuteAsync_d__15;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPersistentTransport__ReadFromStream_d__17;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c__DisplayClass17_0;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c__DisplayClass17_1;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c__DisplayClass17_2;
}
namespace OculusStudios::GraphQL::Client {
class HttpRequestManager;
}
namespace OculusStudios::GraphQL::Client {
class IGraphQLClientTransport;
}
namespace OculusStudios::GraphQL::Client {
class MinimalMainThreadExecutor;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c__DisplayClass17_0;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c__DisplayClass17_1;
}
namespace OculusStudios::GraphQL::Client {
class HttpPersistentTransport___c__DisplayClass17_2;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPersistentTransport__ExecuteAsync_d__15;
}
namespace OculusStudios::GraphQL::Client {
struct HttpPersistentTransport__ReadFromStream_d__17;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15);
MARK_VAL_T(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport/<>c
class CORDL_TYPE HttpPersistentTransport___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Action* __9__15_0;

  static inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* New_ctor();

  /// @brief Method <ExecuteAsync>b__15_0, addr 0x5d76620, size 0x4, virtual false, abstract: false, final false
  inline void _ExecuteAsync_b__15_0();

  /// @brief Method .ctor, addr 0x5d7661c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* getStaticF___9();

  static inline ::System::Action* getStaticF___9__15_0();

  static inline void setStaticF___9(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c* value);

  static inline void setStaticF___9__15_0(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPersistentTransport___c(HttpPersistentTransport___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPersistentTransport___c(HttpPersistentTransport___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport/<>c__DisplayClass17_0
class CORDL_TYPE HttpPersistentTransport___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field responseStream, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_responseStream, put = __cordl_internal_set_responseStream)) ::OculusStudios::GraphQL::Client::GraphQLResponseStream* responseStream;

  static inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* New_ctor();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseStream* const& __cordl_internal_get_responseStream() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLResponseStream*& __cordl_internal_get_responseStream();

  constexpr void __cordl_internal_set_responseStream(::OculusStudios::GraphQL::Client::GraphQLResponseStream* value);

  /// @brief Method .ctor, addr 0x5d76624, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPersistentTransport___c__DisplayClass17_0(HttpPersistentTransport___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPersistentTransport___c__DisplayClass17_0(HttpPersistentTransport___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20182 };

  /// @brief Field responseStream, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponseStream* ___responseStream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0, ___responseStream) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport/<>c__DisplayClass17_1
class CORDL_TYPE HttpPersistentTransport___c__DisplayClass17_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* CS$__8__locals1;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::IO::StreamReader* reader;

  static inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* New_ctor();

  /// @brief Method <ReadFromStream>b__0, addr 0x5d7662c, size 0x1c, virtual false, abstract: false, final false
  inline void _ReadFromStream_b__0();

  constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::IO::StreamReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::IO::StreamReader*& __cordl_internal_get_reader();

  constexpr void __cordl_internal_set_CS$__8__locals1(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* value);

  constexpr void __cordl_internal_set_reader(::System::IO::StreamReader* value);

  /// @brief Method .ctor, addr 0x5d76628, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport___c__DisplayClass17_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c__DisplayClass17_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPersistentTransport___c__DisplayClass17_1(HttpPersistentTransport___c__DisplayClass17_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c__DisplayClass17_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPersistentTransport___c__DisplayClass17_1(HttpPersistentTransport___c__DisplayClass17_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20183 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::IO::StreamReader* ___reader;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1, 0x20>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport/<>c__DisplayClass17_2
class CORDL_TYPE HttpPersistentTransport___c__DisplayClass17_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals2,
                      put = __cordl_internal_set_CS$__8__locals2)) ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* CS$__8__locals2;

  /// @brief Field resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resp, put = __cordl_internal_set_resp)) ::OculusStudios::GraphQL::Client::GraphQLResponse* resp;

  static inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2* New_ctor();

  /// @brief Method <ReadFromStream>b__1, addr 0x5d7664c, size 0x30, virtual false, abstract: false, final false
  inline void _ReadFromStream_b__1();

  constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* const& __cordl_internal_get_CS$__8__locals2() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*& __cordl_internal_get_CS$__8__locals2();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse* const& __cordl_internal_get_resp() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse*& __cordl_internal_get_resp();

  constexpr void __cordl_internal_set_CS$__8__locals2(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* value);

  constexpr void __cordl_internal_set_resp(::OculusStudios::GraphQL::Client::GraphQLResponse* value);

  /// @brief Method .ctor, addr 0x5d76648, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport___c__DisplayClass17_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c__DisplayClass17_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPersistentTransport___c__DisplayClass17_2(HttpPersistentTransport___c__DisplayClass17_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport___c__DisplayClass17_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPersistentTransport___c__DisplayClass17_2(HttpPersistentTransport___c__DisplayClass17_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20184 };

  /// @brief Field resp, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponse* ___resp;

  /// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* ___CS$__8__locals2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2, ___resp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2, 0x20>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport/<ExecuteAsync>d__15
struct CORDL_TYPE HttpPersistentTransport__ExecuteAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d76738, size 0x384, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d76ba4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport__ExecuteAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }, CppParam { name: "graphQLRequest", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::HttpPersistentTransport*", modifiers:
  // "", def_value: None }, CppParam { name: "MinimalMainThreadExecutor", ty: "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: None }, CppParam { name:
  // "_responseStream_5__2", ty: "::OculusStudios::GraphQL::Client::GraphQLResponseStream*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HttpPersistentTransport__ExecuteAsync_d__15(int32_t __1__state,
                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
                                                        ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest, ::OculusStudios::GraphQL::Client::HttpPersistentTransport* __4__this,
                                                        ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor,
                                                        ::OculusStudios::GraphQL::Client::GraphQLResponseStream* _responseStream_5__2,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20185 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder;

  /// @brief Field graphQLRequest, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPersistentTransport* __4__this;

  /// @brief Field MinimalMainThreadExecutor, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor;

  /// @brief Field <responseStream>5__2, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponseStream* _responseStream_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, graphQLRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, MinimalMainThreadExecutor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, _responseStream_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, 0x48>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationTokenRegistration, System.TimeSpan
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport/<ReadFromStream>d__17
struct CORDL_TYPE HttpPersistentTransport__ReadFromStream_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d76c24, size 0x13e8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d78014, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport__ReadFromStream_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "responseStream", ty: "::OculusStudios::GraphQL::Client::GraphQLResponseStream*",
  // modifiers: "", def_value: None }, CppParam { name: "liveQuery", ty: "::OculusStudios::GraphQL::Client::GraphQLLiveQuery*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::OculusStudios::GraphQL::Client::HttpPersistentTransport*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*", modifiers: "", def_value: None }, CppParam { name: "__8__2", ty:
  // "::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*", modifiers: "", def_value: None }, CppParam { name: "MinimalMainThreadExecutor", ty:
  // "::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*", modifiers: "", def_value: None }, CppParam { name: "_buf_5__2", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "_total_len_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_b_5__4", ty: "::System::Text::StringBuilder*", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap4", ty: "::OculusStudios::GraphQL::Client::GraphQLLiveQuery*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value: None }, CppParam { name: "_stopWatch_5__6", ty:
  // "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: None }, CppParam { name: "_response_5__7", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }, CppParam { name: "_latency_5__8",
  // ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "_body_5__9", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap9", ty:
  // "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers:
  // "", def_value: None }]
  constexpr HttpPersistentTransport__ReadFromStream_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                          ::OculusStudios::GraphQL::Client::GraphQLResponseStream* responseStream, ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery,
                                                          ::OculusStudios::GraphQL::Client::HttpPersistentTransport* __4__this,
                                                          ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* __8__1,
                                                          ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* __8__2,
                                                          ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor, ::ArrayW<char16_t, ::Array<char16_t>*> _buf_5__2,
                                                          int32_t _total_len_5__3, ::System::Text::StringBuilder* _b_5__4, ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* __7__wrap4,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
                                                          ::System::Diagnostics::Stopwatch* _stopWatch_5__6, ::System::Net::Http::HttpResponseMessage* _response_5__7,
                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2, ::System::TimeSpan _latency_5__8,
                                                          ::System::IO::Stream* _body_5__9, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*> __u__3,
                                                          ::System::Threading::CancellationTokenRegistration __7__wrap9, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20186 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field responseStream, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLResponseStream* responseStream;

  /// @brief Field liveQuery, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPersistentTransport* __4__this;

  /// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0* __8__1;

  /// @brief Field <>8__2, offset: 0x48, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1* __8__2;

  /// @brief Field MinimalMainThreadExecutor, offset: 0x50, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor;

  /// @brief Field <buf>5__2, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _buf_5__2;

  /// @brief Field <total_len>5__3, offset: 0x60, size: 0x4, def value: None
  int32_t _total_len_5__3;

  /// @brief Field <b>5__4, offset: 0x68, size: 0x8, def value: None
  ::System::Text::StringBuilder* _b_5__4;

  /// @brief Field <>7__wrap4, offset: 0x70, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* __7__wrap4;

  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1;

  /// @brief Field <stopWatch>5__6, offset: 0x80, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _stopWatch_5__6;

  /// @brief Field <response>5__7, offset: 0x88, size: 0x8, def value: None
  ::System::Net::Http::HttpResponseMessage* _response_5__7;

  /// @brief Field <>u__2, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__2;

  /// @brief Field <latency>5__8, offset: 0x98, size: 0x8, def value: None
  ::System::TimeSpan _latency_5__8;

  /// @brief Field <body>5__9, offset: 0xa0, size: 0x8, def value: None
  ::System::IO::Stream* _body_5__9;

  /// @brief Field <>u__3, offset: 0xa8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::IO::Stream*> __u__3;

  /// @brief Field <>7__wrap9, offset: 0xb0, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration __7__wrap9;

  /// @brief Field <>u__4, offset: 0xc8, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t> __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, responseStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, liveQuery) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __8__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, MinimalMainThreadExecutor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _buf_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _total_len_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _b_5__4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __7__wrap4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _stopWatch_5__6) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _response_5__7) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __u__2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _latency_5__8) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, _body_5__9) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __u__3) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __7__wrap9) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, __u__4) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, 0xd0>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpPersistentTransport
class CORDL_TYPE HttpPersistentTransport : public ::System::Object {
public:
  // Declarations
  using _ExecuteAsync_d__15 = ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15;

  using _ReadFromStream_d__17 = ::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17;

  using __c = ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c;

  using __c__DisplayClass17_0 = ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0;

  using __c__DisplayClass17_1 = ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1;

  using __c__DisplayClass17_2 = ::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2;

  __declspec(property(get = get_AccessToken, put = set_AccessToken)) ::StringW AccessToken;

  /// @brief Field CustomAppHeaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomAppHeaders, put = __cordl_internal_set_CustomAppHeaders)) ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* CustomAppHeaders;

  __declspec(property(get = get_Endpoint, put = set_Endpoint)) ::StringW Endpoint;

  /// @brief Field HeartbeatCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_HeartbeatCount, put = setStaticF_HeartbeatCount)) int32_t HeartbeatCount;

  /// @brief Field HeartbeatInterval, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HeartbeatInterval, put = setStaticF_HeartbeatInterval)) ::StringW HeartbeatInterval;

  /// @brief Field <AccessToken>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__AccessToken_k__BackingField, put = __cordl_internal_set__AccessToken_k__BackingField)) ::StringW _AccessToken_k__BackingField;

  /// @brief Field <Endpoint>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Endpoint_k__BackingField, put = __cordl_internal_set__Endpoint_k__BackingField)) ::StringW _Endpoint_k__BackingField;

  /// @brief Field http_, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_http_, put = __cordl_internal_set_http_)) ::OculusStudios::GraphQL::Client::HttpRequestManager* http_;

  /// @brief Field logger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger;

  /// @brief Convert operator to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
  constexpr operator ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5d76550, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ExecuteAsync, addr 0x5d75a78, size 0xf4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*
  ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest, ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor);

  /// @brief Method GetHttpRequest, addr 0x5d75b6c, size 0x91c, virtual false, abstract: false, final false
  inline ::System::Net::Http::HttpRequestMessage* GetHttpRequest(::OculusStudios::GraphQL::Client::GraphQLRequest* graphQLRequest);

  static inline ::OculusStudios::GraphQL::Client::HttpPersistentTransport* New_ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger);

  /// @brief Method ReadFromStream, addr 0x5d76488, size 0xc8, virtual false, abstract: false, final false
  inline void ReadFromStream(::OculusStudios::GraphQL::Client::GraphQLLiveQuery* liveQuery, ::OculusStudios::GraphQL::Client::GraphQLResponseStream* responseStream,
                             ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* MinimalMainThreadExecutor);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* const& __cordl_internal_get_CustomAppHeaders() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get_CustomAppHeaders();

  constexpr ::StringW const& __cordl_internal_get__AccessToken_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__AccessToken_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Endpoint_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Endpoint_k__BackingField();

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager* const& __cordl_internal_get_http_() const;

  constexpr ::OculusStudios::GraphQL::Client::HttpRequestManager*& __cordl_internal_get_http_();

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* const& __cordl_internal_get_logger() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*& __cordl_internal_get_logger();

  constexpr void __cordl_internal_set_CustomAppHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__AccessToken_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Endpoint_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_http_(::OculusStudios::GraphQL::Client::HttpRequestManager* value);

  constexpr void __cordl_internal_set_logger(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* value);

  /// @brief Method .ctor, addr 0x5d75938, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger);

  static inline int32_t getStaticF_HeartbeatCount();

  static inline ::StringW getStaticF_HeartbeatInterval();

  /// @brief Method get_AccessToken, addr 0x5d75928, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AccessToken();

  /// @brief Method get_Endpoint, addr 0x5d75918, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Endpoint();

  /// @brief Convert to "::OculusStudios::GraphQL::Client::IGraphQLClientTransport"
  constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* i___OculusStudios__GraphQL__Client__IGraphQLClientTransport() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_HeartbeatCount(int32_t value);

  static inline void setStaticF_HeartbeatInterval(::StringW value);

  /// @brief Method set_AccessToken, addr 0x5d75930, size 0x8, virtual false, abstract: false, final false
  inline void set_AccessToken(::StringW value);

  /// @brief Method set_Endpoint, addr 0x5d75920, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoint(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpPersistentTransport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpPersistentTransport(HttpPersistentTransport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpPersistentTransport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpPersistentTransport(HttpPersistentTransport const&) = delete;

  /// @brief Field BUFF_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BUFF_SIZE{ static_cast<int32_t>(0x400) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20187 };

  /// @brief Field <Endpoint>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Endpoint_k__BackingField;

  /// @brief Field <AccessToken>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____AccessToken_k__BackingField;

  /// @brief Field CustomAppHeaders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ___CustomAppHeaders;

  /// @brief Field logger, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* ___logger;

  /// @brief Field http_, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::HttpRequestManager* ___http_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport, ____Endpoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport, ____AccessToken_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport, ___CustomAppHeaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport, ___logger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::HttpPersistentTransport, ___http_) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpPersistentTransport, 0x38>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPersistentTransport);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport*, "OculusStudios.GraphQL.Client", "HttpPersistentTransport");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c*, "OculusStudios.GraphQL.Client", "HttpPersistentTransport/<>c");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_0*, "OculusStudios.GraphQL.Client", "HttpPersistentTransport/<>c__DisplayClass17_0");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_1*, "OculusStudios.GraphQL.Client", "HttpPersistentTransport/<>c__DisplayClass17_1");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport___c__DisplayClass17_2*, "OculusStudios.GraphQL.Client", "HttpPersistentTransport/<>c__DisplayClass17_2");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ExecuteAsync_d__15, "OculusStudios.GraphQL.Client", "HttpPersistentTransport/<ExecuteAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpPersistentTransport__ReadFromStream_d__17, "OculusStudios.GraphQL.Client", "HttpPersistentTransport/<ReadFromStream>d__17");
