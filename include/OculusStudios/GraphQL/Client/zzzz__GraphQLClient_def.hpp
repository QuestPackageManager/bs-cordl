#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLClient)
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClientEvents;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IGraphQLClient;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IMutationRequest;
}
namespace OculusStudios::GraphQL::ClientInterface {
class IQueryRequest;
}
namespace OculusStudios::GraphQL::ClientInterface {
template <typename TBackend, typename TFrontend> class IRequestWithResultConversion_2;
}
namespace OculusStudios::GraphQL::ClientInterface {
struct RequestState;
}
namespace OculusStudios::GraphQL::ClientInterface {
class Request;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__CleanupRequestAsync_d__34;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__ExecuteAsync_d__32;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> struct GraphQLClient__InternalMutateData_d__29_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> struct GraphQLClient__InternalQueryData_d__26_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> struct GraphQLClient__Mutate_d__27_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend, typename TFrontend> struct GraphQLClient__Mutate_d__28_2;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__ProcessRequest_d__23;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> struct GraphQLClient__Query_d__24_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend, typename TFrontend> struct GraphQLClient__Query_d__25_2;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> struct GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__WaitUntilRequestQueueIsResumed_d__35;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass24_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass26_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass26_1_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass26_2_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass27_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class GraphQLClient___c__DisplayClass29_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class GraphQLClient___c__DisplayClass31_0_1;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLClient___c__DisplayClass32_0;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLRequest;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLResponseStream;
}
namespace OculusStudios::GraphQL::Client {
class IGraphQLClientTransport;
}
namespace OculusStudios::GraphQL::Client {
class MinimalMainThreadExecutor;
}
namespace OculusStudios::GraphQL::Client {
class MutationRequest;
}
namespace OculusStudios::GraphQL::Client {
class QueryRequest;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentQueue_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLClient;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass24_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass26_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass26_1_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass26_2_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> class GraphQLClient___c__DisplayClass27_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class GraphQLClient___c__DisplayClass29_0_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> class GraphQLClient___c__DisplayClass31_0_1;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLClient___c__DisplayClass32_0;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__CleanupRequestAsync_d__34;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__ExecuteAsync_d__32;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> struct GraphQLClient__InternalMutateData_d__29_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> struct GraphQLClient__InternalQueryData_d__26_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> struct GraphQLClient__Mutate_d__27_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend, typename TFrontend> struct GraphQLClient__Mutate_d__28_2;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__ProcessRequest_d__23;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend> struct GraphQLClient__Query_d__24_1;
}
namespace OculusStudios::GraphQL::Client {
template <typename TBackend, typename TFrontend> struct GraphQLClient__Query_d__25_2;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36;
}
namespace OculusStudios::GraphQL::Client {
template <typename T> struct GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1;
}
namespace OculusStudios::GraphQL::Client {
struct GraphQLClient__WaitUntilRequestQueueIsResumed_d__35;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1);
MARK_GEN_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1);
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0);
MARK_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34);
MARK_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2);
MARK_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2);
MARK_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36);
MARK_GEN_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1);
MARK_VAL_T(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass24_0`1<TBackend>
class CORDL_TYPE GraphQLClient___c__DisplayClass24_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::OculusStudios::GraphQL::Client::QueryRequest* request;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>* New_ctor();

  /// @brief Method <Query>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Query_b__0();

  constexpr ::OculusStudios::GraphQL::Client::QueryRequest* const& __cordl_internal_get_request() const;

  constexpr ::OculusStudios::GraphQL::Client::QueryRequest*& __cordl_internal_get_request();

  constexpr void __cordl_internal_set_request(::OculusStudios::GraphQL::Client::QueryRequest* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass24_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass24_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass24_0_1(GraphQLClient___c__DisplayClass24_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass24_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass24_0_1(GraphQLClient___c__DisplayClass24_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20221 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::QueryRequest* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass26_0`1<TBackend>
class CORDL_TYPE GraphQLClient___c__DisplayClass26_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::OculusStudios::GraphQL::Client::QueryRequest* request;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* New_ctor();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& __cordl_internal_get___4__this() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& __cordl_internal_get___4__this();

  constexpr ::OculusStudios::GraphQL::Client::QueryRequest* const& __cordl_internal_get_request() const;

  constexpr ::OculusStudios::GraphQL::Client::QueryRequest*& __cordl_internal_get_request();

  constexpr void __cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value);

  constexpr void __cordl_internal_set_request(::OculusStudios::GraphQL::Client::QueryRequest* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass26_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass26_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass26_0_1(GraphQLClient___c__DisplayClass26_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass26_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass26_0_1(GraphQLClient___c__DisplayClass26_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20222 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::QueryRequest* ___request;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass26_1`1<TBackend>
class CORDL_TYPE GraphQLClient___c__DisplayClass26_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* CS$__8__locals1;

  /// @brief Field resultObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resultObject, put = __cordl_internal_set_resultObject)) ::System::Object* resultObject;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>* New_ctor();

  /// @brief Method <InternalQueryData>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _InternalQueryData_b__0();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Object* const& __cordl_internal_get_resultObject() const;

  constexpr ::System::Object*& __cordl_internal_get_resultObject();

  constexpr void __cordl_internal_set_CS$__8__locals1(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* value);

  constexpr void __cordl_internal_set_resultObject(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass26_1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass26_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass26_1_1(GraphQLClient___c__DisplayClass26_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass26_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass26_1_1(GraphQLClient___c__DisplayClass26_1_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20223 };

  /// @brief Field resultObject, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___resultObject;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass26_2`1<TBackend>
class CORDL_TYPE GraphQLClient___c__DisplayClass26_2_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals2,
                      put = __cordl_internal_set_CS$__8__locals2)) ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* CS$__8__locals2;

  /// @brief Field e, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::System::Exception* e;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>* New_ctor();

  /// @brief Method <InternalQueryData>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _InternalQueryData_b__1();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* const& __cordl_internal_get_CS$__8__locals2() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*& __cordl_internal_get_CS$__8__locals2();

  constexpr ::System::Exception* const& __cordl_internal_get_e() const;

  constexpr ::System::Exception*& __cordl_internal_get_e();

  constexpr void __cordl_internal_set_CS$__8__locals2(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* value);

  constexpr void __cordl_internal_set_e(::System::Exception* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass26_2_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass26_2_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass26_2_1(GraphQLClient___c__DisplayClass26_2_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass26_2_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass26_2_1(GraphQLClient___c__DisplayClass26_2_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20224 };

  /// @brief Field e, offset: 0x10, size: 0x8, def value: None
  ::System::Exception* ___e;

  /// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* ___CS$__8__locals2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass27_0`1<TBackend>
class CORDL_TYPE GraphQLClient___c__DisplayClass27_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::OculusStudios::GraphQL::Client::MutationRequest* request;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>* New_ctor();

  /// @brief Method <Mutate>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Mutate_b__0();

  constexpr ::OculusStudios::GraphQL::Client::MutationRequest* const& __cordl_internal_get_request() const;

  constexpr ::OculusStudios::GraphQL::Client::MutationRequest*& __cordl_internal_get_request();

  constexpr void __cordl_internal_set_request(::OculusStudios::GraphQL::Client::MutationRequest* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass27_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass27_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass27_0_1(GraphQLClient___c__DisplayClass27_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass27_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass27_0_1(GraphQLClient___c__DisplayClass27_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20225 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MutationRequest* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass29_0`1<T>
class CORDL_TYPE GraphQLClient___c__DisplayClass29_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::OculusStudios::GraphQL::Client::MutationRequest* request;

  /// @brief Field resultObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resultObject, put = __cordl_internal_set_resultObject)) ::System::Object* resultObject;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>* New_ctor();

  /// @brief Method <InternalMutateData>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _InternalMutateData_b__0();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& __cordl_internal_get___4__this() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& __cordl_internal_get___4__this();

  constexpr ::OculusStudios::GraphQL::Client::MutationRequest* const& __cordl_internal_get_request() const;

  constexpr ::OculusStudios::GraphQL::Client::MutationRequest*& __cordl_internal_get_request();

  constexpr ::System::Object* const& __cordl_internal_get_resultObject() const;

  constexpr ::System::Object*& __cordl_internal_get_resultObject();

  constexpr void __cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value);

  constexpr void __cordl_internal_set_request(::OculusStudios::GraphQL::Client::MutationRequest* value);

  constexpr void __cordl_internal_set_resultObject(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass29_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass29_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass29_0_1(GraphQLClient___c__DisplayClass29_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass29_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass29_0_1(GraphQLClient___c__DisplayClass29_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20226 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MutationRequest* ___request;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* _____4__this;

  /// @brief Field resultObject, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___resultObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass31_0`1<T>
class CORDL_TYPE GraphQLClient___c__DisplayClass31_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field e, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::System::Exception* e;

  /// @brief Field request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::OculusStudios::GraphQL::Client::MutationRequest* request;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>* New_ctor();

  /// @brief Method <ErrorOutMutation>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ErrorOutMutation_b__0();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& __cordl_internal_get___4__this() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& __cordl_internal_get___4__this();

  constexpr ::System::Exception* const& __cordl_internal_get_e() const;

  constexpr ::System::Exception*& __cordl_internal_get_e();

  constexpr ::OculusStudios::GraphQL::Client::MutationRequest* const& __cordl_internal_get_request() const;

  constexpr ::OculusStudios::GraphQL::Client::MutationRequest*& __cordl_internal_get_request();

  constexpr void __cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value);

  constexpr void __cordl_internal_set_e(::System::Exception* value);

  constexpr void __cordl_internal_set_request(::OculusStudios::GraphQL::Client::MutationRequest* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass31_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass31_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass31_0_1(GraphQLClient___c__DisplayClass31_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass31_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass31_0_1(GraphQLClient___c__DisplayClass31_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20227 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* _____4__this;

  /// @brief Field e, offset: 0x18, size: 0x8, def value: None
  ::System::Exception* ___e;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MutationRequest* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<>c__DisplayClass32_0
class CORDL_TYPE GraphQLClient___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field request, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::OculusStudios::GraphQL::Client::GraphQLRequest* request;

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0* New_ctor();

  /// @brief Method <ExecuteAsync>b__0, addr 0x5d0b54c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _ExecuteAsync_b__0();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient* const& __cordl_internal_get___4__this() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLClient*& __cordl_internal_get___4__this();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLRequest* const& __cordl_internal_get_request() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLRequest*& __cordl_internal_get_request();

  constexpr void __cordl_internal_set___4__this(::OculusStudios::GraphQL::Client::GraphQLClient* value);

  constexpr void __cordl_internal_set_request(::OculusStudios::GraphQL::Client::GraphQLRequest* value);

  /// @brief Method .ctor, addr 0x5d0b548, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient___c__DisplayClass32_0(GraphQLClient___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient___c__DisplayClass32_0(GraphQLClient___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20228 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* _____4__this;

  /// @brief Field request, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLRequest* ___request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0, ___request) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0, 0x20>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<CleanupRequestAsync>d__34
struct CORDL_TYPE GraphQLClient__CleanupRequestAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d0b608, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d0b9b8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__CleanupRequestAsync_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::ClientInterface::Request*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "int64_t",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClient__CleanupRequestAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                     ::OculusStudios::GraphQL::ClientInterface::Request* request, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, int64_t requestId,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20229 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::Request* request;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field requestId, offset: 0x30, size: 0x8, def value: None
  int64_t requestId;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, requestId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, 0x40>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<ExecuteAsync>d__32
struct CORDL_TYPE GraphQLClient__ExecuteAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d0ba24, size 0x480, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d0bea4, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__ExecuteAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::GraphQLRequest*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>", modifiers: "", def_value: None }]
  constexpr GraphQLClient__ExecuteAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder,
                                              ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::Client::GraphQLRequest* request,
                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20230 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLRequest* request;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, 0x38>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<InternalMutateData>d__29`1<T>
struct CORDL_TYPE GraphQLClient__InternalMutateData_d__29_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__InternalMutateData_d__29_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::MutationRequest*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value:
  // None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_mutateTask_5__4", ty:
  // "::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__5", ty:
  // "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClient__InternalMutateData_d__29_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                      ::OculusStudios::GraphQL::Client::MutationRequest* request, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
                                                      ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>* __8__1, ::System::Object* __7__wrap1, int32_t __7__wrap2,
                                                      ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _mutateTask_5__4,
                                                      ::System::Threading::Tasks::Task* _timeoutTask_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20231 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MutationRequest* request;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>* __8__1;

  /// @brief Field <>7__wrap1, offset: 0x40, size: 0x8, def value: None
  ::System::Object* __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x48, size: 0x4, def value: None
  int32_t __7__wrap2;

  /// @brief Field <mutateTask>5__4, offset: 0x50, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _mutateTask_5__4;

  /// @brief Field <timeoutTask>5__5, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__5;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<InternalQueryData>d__26`1<TBackend>
struct CORDL_TYPE GraphQLClient__InternalQueryData_d__26_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__InternalQueryData_d__26_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::QueryRequest*", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>*", modifiers: "", def_value: None }, CppParam { name: "__8__2", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>*", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_queryTask_5__4", ty:
  // "::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>*", modifiers: "", def_value: None }, CppParam { name: "_timeoutTask_5__5", ty:
  // "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClient__InternalQueryData_d__26_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                     ::OculusStudios::GraphQL::Client::QueryRequest* request, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
                                                     ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>* __8__1,
                                                     ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* __8__2, ::System::Object* __7__wrap1, int32_t __7__wrap2,
                                                     ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _queryTask_5__4,
                                                     ::System::Threading::Tasks::Task* _timeoutTask_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20232 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::QueryRequest* request;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>* __8__1;

  /// @brief Field <>8__2, offset: 0x40, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>* __8__2;

  /// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
  ::System::Object* __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x50, size: 0x4, def value: None
  int32_t __7__wrap2;

  /// @brief Field <queryTask>5__4, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* _queryTask_5__4;

  /// @brief Field <timeoutTask>5__5, offset: 0x60, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _timeoutTask_5__5;

  /// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> __u__1;

  /// @brief Field <>u__2, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<Mutate>d__27`1<TBackend>
struct CORDL_TYPE GraphQLClient__Mutate_d__27_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__Mutate_d__27_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*",
  // modifiers: "", def_value: None }, CppParam { name: "requestBase", ty: "::OculusStudios::GraphQL::ClientInterface::IMutationRequest*", modifiers: "", def_value: None }, CppParam { name: "__8__1",
  // ty: "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>*", modifiers: "", def_value: None }, CppParam { name: "_requestId_5__2", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: None }]
  constexpr GraphQLClient__Mutate_d__27_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend> __t__builder,
                                          ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase,
                                          ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>* __8__1, int64_t _requestId_5__2,
                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20233 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field requestBase, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>* __8__1;

  /// @brief Field <requestId>5__2, offset: 0x38, size: 0x8, def value: None
  int64_t _requestId_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend, typename TFrontend>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<Mutate>d__28`2<TBackend,TFrontend>
struct CORDL_TYPE GraphQLClient__Mutate_d__28_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__Mutate_d__28_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend>", modifiers: "", def_value: None }, CppParam { name: "requestBase", ty:
  // "::OculusStudios::GraphQL::ClientInterface::IMutationRequest*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers:
  // "", def_value: None }, CppParam { name: "_result_5__2", ty: "TBackend", modifiers: "", def_value: None }, CppParam { name: "_conversion_5__3", ty:
  // "::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend,TFrontend>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend>", modifiers: "", def_value: None }]
  constexpr GraphQLClient__Mutate_d__28_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend> __t__builder,
                                          ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, TBackend _result_5__2,
                                          ::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>* _conversion_5__3,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2,
                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20234 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend> __t__builder;

  /// @brief Field requestBase, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field <result>5__2, offset: 0x30, size: 0x8, def value: None
  TBackend _result_5__2;

  /// @brief Field <conversion>5__3, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>* _conversion_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<ProcessRequest>d__23
struct CORDL_TYPE GraphQLClient__ProcessRequest_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d0bf24, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d0c2a4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__ProcessRequest_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers:
  // "", def_value: None }, CppParam { name: "requestId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr GraphQLClient__ProcessRequest_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, int64_t requestId, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20235 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field requestId, offset: 0x28, size: 0x8, def value: None
  int64_t requestId;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, requestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, 0x38>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<Query>d__24`1<TBackend>
struct CORDL_TYPE GraphQLClient__Query_d__24_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__Query_d__24_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*",
  // modifiers: "", def_value: None }, CppParam { name: "requestBase", ty: "::OculusStudios::GraphQL::ClientInterface::IQueryRequest*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>*", modifiers: "", def_value: None }, CppParam { name: "_requestId_5__2", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*>", modifiers: "", def_value: None }]
  constexpr GraphQLClient__Query_d__24_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend> __t__builder,
                                         ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase,
                                         ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>* __8__1, int64_t _requestId_5__2,
                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20236 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TBackend> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field requestBase, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase;

  /// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>* __8__1;

  /// @brief Field <requestId>5__2, offset: 0x38, size: 0x8, def value: None
  int64_t _requestId_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Object*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename TBackend, typename TFrontend>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<Query>d__25`2<TBackend,TFrontend>
struct CORDL_TYPE GraphQLClient__Query_d__25_2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__Query_d__25_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend>", modifiers: "", def_value: None }, CppParam { name: "requestBase", ty:
  // "::OculusStudios::GraphQL::ClientInterface::IQueryRequest*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "",
  // def_value: None }, CppParam { name: "_result_5__2", ty: "TBackend", modifiers: "", def_value: None }, CppParam { name: "_conversion_5__3", ty:
  // "::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend,TFrontend>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend>", modifiers: "", def_value: None }]
  constexpr GraphQLClient__Query_d__25_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend> __t__builder,
                                         ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, TBackend _result_5__2,
                                         ::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>* _conversion_5__3,
                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2,
                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20237 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TFrontend> __t__builder;

  /// @brief Field requestBase, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field <result>5__2, offset: 0x30, size: 0x8, def value: None
  TBackend _result_5__2;

  /// @brief Field <conversion>5__3, offset: 0x38, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IRequestWithResultConversion_2<TBackend, TFrontend>* _conversion_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TBackend> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<TFrontend> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<ResetRequestForUserInitiatedRetryAsync>d__36
struct CORDL_TYPE GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d0c310, size 0x330, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d0c640, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers:
  // "", def_value: None }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::ClientInterface::Request*", modifiers: "", def_value: None }, CppParam { name: "_tries_5__2", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                        ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this, ::OculusStudios::GraphQL::ClientInterface::Request* request,
                                                                        uint32_t _tries_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field request, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::Request* request;

  /// @brief Field <tries>5__2, offset: 0x30, size: 0x4, def value: None
  uint32_t _tries_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, request) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, _tries_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, 0x40>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace OculusStudios::GraphQL::Client {
// cpp template
template <typename T>
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<RetryOrErrorOutMutationAsync>d__30`1<T>
struct CORDL_TYPE GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "request", ty: "::OculusStudios::GraphQL::Client::MutationRequest*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::System::Exception*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::OculusStudios::GraphQL::Client::MutationRequest* request, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
                                                                ::System::Exception* e, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20239 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field request, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MutationRequest* request;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field e, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* e;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken
namespace OculusStudios::GraphQL::Client {
// Is value type: true
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient/<WaitUntilRequestQueueIsResumed>d__35
struct CORDL_TYPE GraphQLClient__WaitUntilRequestQueueIsResumed_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d0c6ac, size 0x27c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d0c928, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient__WaitUntilRequestQueueIsResumed_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::GraphQL::Client::GraphQLClient*", modifiers: "", def_value: None }, CppParam { name: "_pauseTickCounter_5__2", ty:
  // "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr GraphQLClient__WaitUntilRequestQueueIsResumed_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::System::Threading::CancellationToken cancellationToken, ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this,
                                                                int64_t _pauseTickCounter_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20240 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLClient* __4__this;

  /// @brief Field <pauseTickCounter>5__2, offset: 0x30, size: 0x8, def value: None
  int64_t _pauseTickCounter_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, _pauseTickCounter_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, 0x40>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLClient
class CORDL_TYPE GraphQLClient : public ::System::Object {
public:
  // Declarations
  using _CleanupRequestAsync_d__34 = ::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34;

  using _ExecuteAsync_d__32 = ::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32;

  template <typename T> using _InternalMutateData_d__29_1 = ::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1<T>;

  template <typename TBackend> using _InternalQueryData_d__26_1 = ::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1<TBackend>;

  template <typename TBackend> using _Mutate_d__27_1 = ::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1<TBackend>;

  template <typename TBackend, typename TFrontend> using _Mutate_d__28_2 = ::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2<TBackend, TFrontend>;

  using _ProcessRequest_d__23 = ::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23;

  template <typename TBackend> using _Query_d__24_1 = ::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1<TBackend>;

  template <typename TBackend, typename TFrontend> using _Query_d__25_2 = ::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2<TBackend, TFrontend>;

  using _ResetRequestForUserInitiatedRetryAsync_d__36 = ::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36;

  template <typename T> using _RetryOrErrorOutMutationAsync_d__30_1 = ::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1<T>;

  using _WaitUntilRequestQueueIsResumed_d__35 = ::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35;

  template <typename TBackend> using __c__DisplayClass24_0_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1<TBackend>;

  template <typename TBackend> using __c__DisplayClass26_0_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1<TBackend>;

  template <typename TBackend> using __c__DisplayClass26_1_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1<TBackend>;

  template <typename TBackend> using __c__DisplayClass26_2_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1<TBackend>;

  template <typename TBackend> using __c__DisplayClass27_0_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1<TBackend>;

  template <typename T> using __c__DisplayClass29_0_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1<T>;

  template <typename T> using __c__DisplayClass31_0_1 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1<T>;

  using __c__DisplayClass32_0 = ::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0;

  /// @brief Field applicationOnline, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_applicationOnline, put = __cordl_internal_set_applicationOnline)) bool applicationOnline;

  /// @brief Field applicationSuspended, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_applicationSuspended, put = __cordl_internal_set_applicationSuspended)) bool applicationSuspended;

  /// @brief Field asyncAccessViolations, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncAccessViolations, put = __cordl_internal_set_asyncAccessViolations)) int64_t asyncAccessViolations;

  /// @brief Field externalEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_externalEvents, put = __cordl_internal_set_externalEvents)) ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* externalEvents;

  /// @brief Field gameActiveTask, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_gameActiveTask, put = __cordl_internal_set_gameActiveTask)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* gameActiveTask;

  /// @brief Field inProgressRequests, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_inProgressRequests, put = __cordl_internal_set_inProgressRequests)) ::System::Collections::Generic::HashSet_1<int64_t>* inProgressRequests;

  /// @brief Field initialized, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_initialized, put = __cordl_internal_set_initialized)) bool initialized;

  /// @brief Field mainThreadExecutor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mainThreadExecutor, put = __cordl_internal_set_mainThreadExecutor)) ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* mainThreadExecutor;

  /// @brief Field onRequestCreated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onRequestCreated, put = setStaticF_onRequestCreated)) ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* onRequestCreated;

  /// @brief Field pendingRequestId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pendingRequestId, put = __cordl_internal_set_pendingRequestId)) int64_t pendingRequestId;

  /// @brief Field pendingRequests, offset 0x50, size 0x8
  __declspec(property(
      get = __cordl_internal_get_pendingRequests,
      put = __cordl_internal_set_pendingRequests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>* pendingRequests;

  /// @brief Field requestQueue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_requestQueue, put = __cordl_internal_set_requestQueue)) ::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>* requestQueue;

  /// @brief Field requestQueuePaused, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_requestQueuePaused, put = __cordl_internal_set_requestQueuePaused)) bool requestQueuePaused;

  /// @brief Field requestResponseTransport, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestResponseTransport,
                      put = __cordl_internal_set_requestResponseTransport)) ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* requestResponseTransport;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*() noexcept;

  /// @brief Method CleanupRequest, addr 0x5d0aa1c, size 0x78, virtual false, abstract: false, final false
  inline void CleanupRequest(int64_t requestId, ::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method CleanupRequestAsync, addr 0x5d0aa94, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CleanupRequestAsync(int64_t requestId, ::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method ErrorOutMutation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ErrorOutMutation(::OculusStudios::GraphQL::Client::MutationRequest* request, ::System::Exception* e);

  /// @brief Method ExecuteAsync, addr 0x5d0a92c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::GraphQL::Client::GraphQLResponseStream*>* ExecuteAsync(::OculusStudios::GraphQL::Client::GraphQLRequest* request);

  /// @brief Method InternalMutateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void InternalMutateData(::OculusStudios::GraphQL::Client::MutationRequest* request);

  /// @brief Method InternalQueryData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TBackend> inline void InternalQueryData(::OculusStudios::GraphQL::Client::QueryRequest* request);

  /// @brief Method LogRequestState, addr 0x5d0b168, size 0x1c0, virtual false, abstract: false, final false
  inline void LogRequestState(int64_t requestId, ::OculusStudios::GraphQL::ClientInterface::RequestState requestState);

  /// @brief Method Mutate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TBackend> inline ::System::Threading::Tasks::Task_1<TBackend>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase);

  /// @brief Method Mutate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TBackend, typename TFrontend> inline ::System::Threading::Tasks::Task_1<TFrontend>* Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* requestBase);

  static inline ::OculusStudios::GraphQL::Client::GraphQLClient* New_ctor();

  /// @brief Method OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Initialize, addr 0x5d09edc, size 0x164, virtual true, abstract: false, final true
  inline void OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Initialize(::StringW endpoint, ::StringW accessToken,
                                                                              ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                                                                              ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger);

  /// @brief Method OnApplicationResumed, addr 0x5d0b018, size 0x150, virtual true, abstract: false, final true
  inline void OnApplicationResumed();

  /// @brief Method OnApplicationSuspended, addr 0x5d0aee4, size 0x134, virtual true, abstract: false, final true
  inline void OnApplicationSuspended();

  /// @brief Method PauseRequestQueue, addr 0x5d0acd8, size 0x108, virtual true, abstract: false, final true
  inline void PauseRequestQueue();

  /// @brief Method ProcessRequest, addr 0x5d0a868, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ProcessRequest(int64_t requestId);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TBackend> inline ::System::Threading::Tasks::Task_1<TBackend>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase);

  /// @brief Method Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TBackend, typename TFrontend> inline ::System::Threading::Tasks::Task_1<TFrontend>* Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* requestBase);

  /// @brief Method ResetRequestForUserInitiatedRetryAsync, addr 0x5d0ac18, size 0xc0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method ResumeRequestQueue, addr 0x5d0ade0, size 0x104, virtual true, abstract: false, final true
  inline void ResumeRequestQueue();

  /// @brief Method RetryOrErrorOutMutationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task* RetryOrErrorOutMutationAsync(::OculusStudios::GraphQL::Client::MutationRequest* request, ::System::Exception* e);

  /// @brief Method SetApplicationOffline, addr 0x5d0b334, size 0x8, virtual true, abstract: false, final true
  inline void SetApplicationOffline();

  /// @brief Method SetApplicationOnline, addr 0x5d0b328, size 0xc, virtual true, abstract: false, final true
  inline void SetApplicationOnline();

  /// @brief Method Update, addr 0x5d0a104, size 0x3ec, virtual true, abstract: false, final true
  inline void Update(float_t deltaTime);

  /// @brief Method WaitUntilRequestQueueIsResumed, addr 0x5d0ab58, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitUntilRequestQueueIsResumed(::System::Threading::CancellationToken cancellationToken, ::StringW operationType);

  constexpr bool const& __cordl_internal_get_applicationOnline() const;

  constexpr bool& __cordl_internal_get_applicationOnline();

  constexpr bool const& __cordl_internal_get_applicationSuspended() const;

  constexpr bool& __cordl_internal_get_applicationSuspended();

  constexpr int64_t const& __cordl_internal_get_asyncAccessViolations() const;

  constexpr int64_t& __cordl_internal_get_asyncAccessViolations();

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* const& __cordl_internal_get_externalEvents() const;

  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents*& __cordl_internal_get_externalEvents();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_gameActiveTask() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_gameActiveTask();

  constexpr ::System::Collections::Generic::HashSet_1<int64_t>* const& __cordl_internal_get_inProgressRequests() const;

  constexpr ::System::Collections::Generic::HashSet_1<int64_t>*& __cordl_internal_get_inProgressRequests();

  constexpr bool const& __cordl_internal_get_initialized() const;

  constexpr bool& __cordl_internal_get_initialized();

  constexpr ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* const& __cordl_internal_get_mainThreadExecutor() const;

  constexpr ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*& __cordl_internal_get_mainThreadExecutor();

  constexpr int64_t const& __cordl_internal_get_pendingRequestId() const;

  constexpr int64_t& __cordl_internal_get_pendingRequestId();

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>* const& __cordl_internal_get_pendingRequests() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>*& __cordl_internal_get_pendingRequests();

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>* const& __cordl_internal_get_requestQueue() const;

  constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>*& __cordl_internal_get_requestQueue();

  constexpr bool const& __cordl_internal_get_requestQueuePaused() const;

  constexpr bool& __cordl_internal_get_requestQueuePaused();

  constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* const& __cordl_internal_get_requestResponseTransport() const;

  constexpr ::OculusStudios::GraphQL::Client::IGraphQLClientTransport*& __cordl_internal_get_requestResponseTransport();

  constexpr void __cordl_internal_set_applicationOnline(bool value);

  constexpr void __cordl_internal_set_applicationSuspended(bool value);

  constexpr void __cordl_internal_set_asyncAccessViolations(int64_t value);

  constexpr void __cordl_internal_set_externalEvents(::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* value);

  constexpr void __cordl_internal_set_gameActiveTask(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_inProgressRequests(::System::Collections::Generic::HashSet_1<int64_t>* value);

  constexpr void __cordl_internal_set_initialized(bool value);

  constexpr void __cordl_internal_set_mainThreadExecutor(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* value);

  constexpr void __cordl_internal_set_pendingRequestId(int64_t value);

  constexpr void __cordl_internal_set_pendingRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  constexpr void __cordl_internal_set_requestQueue(::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>* value);

  constexpr void __cordl_internal_set_requestQueuePaused(bool value);

  constexpr void __cordl_internal_set_requestResponseTransport(::OculusStudios::GraphQL::Client::IGraphQLClientTransport* value);

  /// @brief Method .ctor, addr 0x5d0b33c, size 0x178, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onRequestCreated, addr 0x5d09d1c, size 0xe0, virtual false, abstract: false, final false
  static inline void add_onRequestCreated(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  static inline ::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* getStaticF_onRequestCreated();

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* i___OculusStudios__GraphQL__ClientInterface__IGraphQLClient() noexcept;

  /// @brief Method remove_onRequestCreated, addr 0x5d09dfc, size 0xe0, virtual false, abstract: false, final false
  static inline void remove_onRequestCreated(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

  static inline void setStaticF_onRequestCreated(::System::Action_1<::OculusStudios::GraphQL::ClientInterface::Request*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLClient(GraphQLClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLClient(GraphQLClient const&) = delete;

  /// @brief Field AccessViolationRetryDelayMs offset 0xffffffff size 0x4
  static constexpr int32_t AccessViolationRetryDelayMs{ static_cast<int32_t>(0x64) };

  /// @brief Field MaxTriesForUserInitiatedRetryAccessViolation offset 0xffffffff size 0x4
  static constexpr int32_t MaxTriesForUserInitiatedRetryAccessViolation{ static_cast<int32_t>(0x64) };

  /// @brief Field RequestIdPadLeft offset 0xffffffff size 0x4
  static constexpr int32_t RequestIdPadLeft{ static_cast<int32_t>(0x3) };

  /// @brief Field RequestQueuePausedRetryDelayMs offset 0xffffffff size 0x4
  static constexpr int32_t RequestQueuePausedRetryDelayMs{ static_cast<int32_t>(0x5dc) };

  /// @brief Field TimeToWaitBeforeRetryProcessMs offset 0xffffffff size 0x4
  static constexpr int32_t TimeToWaitBeforeRetryProcessMs{ static_cast<int32_t>(0x3e8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20241 };

  /// @brief Field requestResponseTransport, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::IGraphQLClientTransport* ___requestResponseTransport;

  /// @brief Field externalEvents, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* ___externalEvents;

  /// @brief Field initialized, offset: 0x20, size: 0x1, def value: None
  bool ___initialized;

  /// @brief Field requestQueuePaused, offset: 0x21, size: 0x1, def value: None
  bool ___requestQueuePaused;

  /// @brief Field applicationSuspended, offset: 0x22, size: 0x1, def value: None
  bool ___applicationSuspended;

  /// @brief Field applicationOnline, offset: 0x23, size: 0x1, def value: None
  bool ___applicationOnline;

  /// @brief Field pendingRequestId, offset: 0x28, size: 0x8, def value: None
  int64_t ___pendingRequestId;

  /// @brief Field asyncAccessViolations, offset: 0x30, size: 0x8, def value: None
  int64_t ___asyncAccessViolations;

  /// @brief Field gameActiveTask, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___gameActiveTask;

  /// @brief Field mainThreadExecutor, offset: 0x40, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* ___mainThreadExecutor;

  /// @brief Field requestQueue, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentQueue_1<int64_t>* ___requestQueue;

  /// @brief Field pendingRequests, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<int64_t, ::OculusStudios::GraphQL::ClientInterface::Request*>* ___pendingRequests;

  /// @brief Field inProgressRequests, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int64_t>* ___inProgressRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___requestResponseTransport) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___externalEvents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___initialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___requestQueuePaused) == 0x21, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___applicationSuspended) == 0x22, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___applicationOnline) == 0x23, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___pendingRequestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___asyncAccessViolations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___gameActiveTask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___mainThreadExecutor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___requestQueue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___pendingRequests) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLClient, ___inProgressRequests) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLClient, 0x60>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLClient);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient*, "OculusStudios.GraphQL.Client", "GraphQLClient");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass24_0_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass24_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_0_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass26_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_1_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass26_1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass26_2_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass26_2`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass27_0_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass27_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass29_0_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass29_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass31_0_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass31_0`1");
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient___c__DisplayClass32_0*, "OculusStudios.GraphQL.Client", "GraphQLClient/<>c__DisplayClass32_0");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient__CleanupRequestAsync_d__34, "OculusStudios.GraphQL.Client", "GraphQLClient/<CleanupRequestAsync>d__34");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient__ExecuteAsync_d__32, "OculusStudios.GraphQL.Client", "GraphQLClient/<ExecuteAsync>d__32");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__InternalMutateData_d__29_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<InternalMutateData>d__29`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__InternalQueryData_d__26_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<InternalQueryData>d__26`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__27_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<Mutate>d__27`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__Mutate_d__28_2, "OculusStudios.GraphQL.Client", "GraphQLClient/<Mutate>d__28`2");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient__ProcessRequest_d__23, "OculusStudios.GraphQL.Client", "GraphQLClient/<ProcessRequest>d__23");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__24_1, "OculusStudios.GraphQL.Client", "GraphQLClient/<Query>d__24`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__Query_d__25_2, "OculusStudios.GraphQL.Client", "GraphQLClient/<Query>d__25`2");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient__ResetRequestForUserInitiatedRetryAsync_d__36, "OculusStudios.GraphQL.Client",
                       "GraphQLClient/<ResetRequestForUserInitiatedRetryAsync>d__36");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::OculusStudios::GraphQL::Client::GraphQLClient__RetryOrErrorOutMutationAsync_d__30_1, "OculusStudios.GraphQL.Client",
                                      "GraphQLClient/<RetryOrErrorOutMutationAsync>d__30`1");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLClient__WaitUntilRequestQueueIsResumed_d__35, "OculusStudios.GraphQL.Client", "GraphQLClient/<WaitUntilRequestQueueIsResumed>d__35");
