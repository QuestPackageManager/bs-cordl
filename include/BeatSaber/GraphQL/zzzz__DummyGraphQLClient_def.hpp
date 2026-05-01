#pragma once
// IWYU pragma private; include "BeatSaber/GraphQL/DummyGraphQLClient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DummyGraphQLClient)
namespace BeatSaber::GraphQL {
template <typename TDomainModel, typename TViewModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel, typename TViewModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2;
}
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
class Request;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::GraphQL {
class DummyGraphQLClient;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel, typename TViewModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1;
}
namespace BeatSaber::GraphQL {
template <typename TDomainModel, typename TViewModel> struct DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GraphQL::DummyGraphQLClient);
MARK_GEN_VAL_T(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2);
MARK_GEN_VAL_T(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1);
MARK_GEN_VAL_T(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1);
MARK_GEN_VAL_T(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::GraphQL {
// cpp template
template <typename TDomainModel, typename TViewModel>
// Is value type: true
// CS Name: BeatSaber.GraphQL.DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Mutate>d__10`2<TDomainModel,TViewModel>
struct CORDL_TYPE DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2 {
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
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TViewModel>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2(int32_t __1__state,
                                                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TViewModel> __t__builder,
                                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22404 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TViewModel> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BeatSaber::GraphQL
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::GraphQL {
// cpp template
template <typename TDomainModel>
// Is value type: true
// CS Name: BeatSaber.GraphQL.DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Mutate>d__9`1<TDomainModel>
struct CORDL_TYPE DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1 {
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
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TDomainModel>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1(int32_t __1__state,
                                                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TDomainModel> __t__builder,
                                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TDomainModel> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BeatSaber::GraphQL
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::GraphQL {
// cpp template
template <typename TDomainModel>
// Is value type: true
// CS Name: BeatSaber.GraphQL.DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Query>d__11`1<TDomainModel>
struct CORDL_TYPE DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1 {
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
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TDomainModel>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1(int32_t __1__state,
                                                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TDomainModel> __t__builder,
                                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TDomainModel> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BeatSaber::GraphQL
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BeatSaber::GraphQL {
// cpp template
template <typename TDomainModel, typename TViewModel>
// Is value type: true
// CS Name: BeatSaber.GraphQL.DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Query>d__12`2<TDomainModel,TViewModel>
struct CORDL_TYPE DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2 {
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
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TViewModel>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2(int32_t __1__state,
                                                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TViewModel> __t__builder,
                                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TViewModel> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BeatSaber::GraphQL
// Dependencies System.Object
namespace BeatSaber::GraphQL {
// Is value type: false
// CS Name: BeatSaber.GraphQL.DummyGraphQLClient
class CORDL_TYPE DummyGraphQLClient : public ::System::Object {
public:
  // Declarations
  template <typename TDomainModel, typename TViewModel>
  using _OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2 =
      ::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2<TDomainModel, TViewModel>;

  template <typename TDomainModel>
  using _OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1 =
      ::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1<TDomainModel>;

  template <typename TDomainModel>
  using _OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1 =
      ::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1<TDomainModel>;

  template <typename TDomainModel, typename TViewModel>
  using _OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2 =
      ::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2<TDomainModel, TViewModel>;

  /// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
  constexpr operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient*() noexcept;

  /// @brief Method Initialize, addr 0x31fe400, size 0x4, virtual true, abstract: false, final true
  inline void Initialize(::StringW endpoint, ::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* customAppHeaders,
                         ::OculusStudios::GraphQL::ClientInterface::IGraphQLClientEvents* logger);

  static inline ::BeatSaber::GraphQL::DummyGraphQLClient* New_ctor();

  /// @brief Method OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Mutate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TDomainModel>
  inline ::System::Threading::Tasks::Task_1<TDomainModel>* OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request);

  /// @brief Method OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Mutate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TDomainModel, typename TViewModel>
  inline ::System::Threading::Tasks::Task_1<TViewModel>* OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate(::OculusStudios::GraphQL::ClientInterface::IMutationRequest* request);

  /// @brief Method OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TDomainModel>
  inline ::System::Threading::Tasks::Task_1<TDomainModel>* OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request);

  /// @brief Method OculusStudios.GraphQL.ClientInterface.IGraphQLClient.Query, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TDomainModel, typename TViewModel>
  inline ::System::Threading::Tasks::Task_1<TViewModel>* OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query(::OculusStudios::GraphQL::ClientInterface::IQueryRequest* request);

  /// @brief Method OnApplicationResumed, addr 0x31fe404, size 0x4, virtual true, abstract: false, final true
  inline void OnApplicationResumed();

  /// @brief Method OnApplicationSuspended, addr 0x31fe408, size 0x4, virtual true, abstract: false, final true
  inline void OnApplicationSuspended();

  /// @brief Method PauseRequestQueue, addr 0x31fe40c, size 0x4, virtual true, abstract: false, final true
  inline void PauseRequestQueue();

  /// @brief Method ResetRequestForUserInitiatedRetryAsync, addr 0x31fe41c, size 0x94, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* ResetRequestForUserInitiatedRetryAsync(::OculusStudios::GraphQL::ClientInterface::Request* request);

  /// @brief Method ResumeRequestQueue, addr 0x31fe410, size 0x4, virtual true, abstract: false, final true
  inline void ResumeRequestQueue();

  /// @brief Method SetApplicationOffline, addr 0x31fe414, size 0x4, virtual true, abstract: false, final true
  inline void SetApplicationOffline();

  /// @brief Method SetApplicationOnline, addr 0x31fe418, size 0x4, virtual true, abstract: false, final true
  inline void SetApplicationOnline();

  /// @brief Method Update, addr 0x31fe4b0, size 0x4, virtual true, abstract: false, final true
  inline void Update(float_t deltaTime);

  /// @brief Method .ctor, addr 0x31fe4b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLClient"
  constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLClient* i___OculusStudios__GraphQL__ClientInterface__IGraphQLClient() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DummyGraphQLClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DummyGraphQLClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DummyGraphQLClient(DummyGraphQLClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DummyGraphQLClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DummyGraphQLClient(DummyGraphQLClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22408 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GraphQL::DummyGraphQLClient, 0x10>, "Size mismatch!");

} // namespace BeatSaber::GraphQL
NEED_NO_BOX(::BeatSaber::GraphQL::DummyGraphQLClient);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GraphQL::DummyGraphQLClient*, "BeatSaber.GraphQL", "DummyGraphQLClient");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__10_2, "BeatSaber.GraphQL",
                                      "DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Mutate>d__10`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Mutate_d__9_1, "BeatSaber.GraphQL",
                                      "DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Mutate>d__9`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__11_1, "BeatSaber.GraphQL",
                                      "DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Query>d__11`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BeatSaber::GraphQL::DummyGraphQLClient__OculusStudios_GraphQL_ClientInterface_IGraphQLClient_Query_d__12_2, "BeatSaber.GraphQL",
                                      "DummyGraphQLClient/<OculusStudios-GraphQL-ClientInterface-IGraphQLClient-Query>d__12`2");
