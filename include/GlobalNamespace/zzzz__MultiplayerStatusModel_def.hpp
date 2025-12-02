#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerStatusModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerStatusModel)
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class MultiplayerStatusModel_MultiplayerStatusDataFB;
}
namespace GlobalNamespace {
struct MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class UriBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerStatusModel;
}
namespace GlobalNamespace {
class MultiplayerStatusModel_MultiplayerStatusDataFB;
}
namespace GlobalNamespace {
struct MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusModel);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB);
MARK_VAL_T(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerStatusModel/MultiplayerStatusDataFB
class CORDL_TYPE MultiplayerStatusModel_MultiplayerStatusDataFB : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> data;

  static inline ::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*>& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> value);

  /// @brief Method .ctor, addr 0x3608e78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusModel_MultiplayerStatusDataFB();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel_MultiplayerStatusDataFB", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerStatusModel_MultiplayerStatusDataFB(MultiplayerStatusModel_MultiplayerStatusDataFB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel_MultiplayerStatusDataFB", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerStatusModel_MultiplayerStatusDataFB(MultiplayerStatusModel_MultiplayerStatusDataFB const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15033 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerStatusModel/<GetMultiplayerStatusAsyncInternal>d__9
struct CORDL_TYPE MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3608e7c, size 0x8b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3609734, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MultiplayerStatusModel*", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9(int32_t __1__state,
                                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*> __t__builder,
                                                                           ::GlobalNamespace::MultiplayerStatusModel* __4__this, ::System::UriBuilder* _uriBuilder_5__2,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15034 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusModel* __4__this;

  /// @brief Field <uriBuilder>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::UriBuilder* _uriBuilder_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, _uriBuilder_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerStatusModel
class CORDL_TYPE MultiplayerStatusModel : public ::System::Object {
public:
  // Declarations
  using MultiplayerStatusDataFB = ::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB;

  using _GetMultiplayerStatusAsyncInternal_d__9 = ::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9;

  /// @brief Field _client, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client)) ::System::Net::Http::HttpClient* _client;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* _request;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
  constexpr operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept;

  /// @brief Method GetMultiplayerStatusAsync, addr 0x3608c60, size 0x78, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetMultiplayerStatusAsyncInternal, addr 0x3608d3c, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsyncInternal();

  /// @brief Method Init, addr 0x3608c30, size 0x18, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IsAvailabilityTaskValid, addr 0x3608cd8, size 0x64, virtual false, abstract: false, final false
  inline bool IsAvailabilityTaskValid();

  static inline ::GlobalNamespace::MultiplayerStatusModel* New_ctor();

  /// @brief Method StartRequest, addr 0x3608c48, size 0x18, virtual false, abstract: false, final false
  inline void StartRequest();

  constexpr ::System::Net::Http::HttpClient* const& __cordl_internal_get__client() const;

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__client();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* const& __cordl_internal_get__request() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*& __cordl_internal_get__request();

  constexpr void __cordl_internal_set__client(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* value);

  /// @brief Method .ctor, addr 0x3608e1c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerStatusModel"
  constexpr ::GlobalNamespace::IMultiplayerStatusModel* i___GlobalNamespace__IMultiplayerStatusModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerStatusModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerStatusModel(MultiplayerStatusModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerStatusModel(MultiplayerStatusModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15035 };

  /// @brief Field kRequestTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kRequestTimeoutSeconds{ static_cast<int32_t>(0x3c) };

  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____client;

  /// @brief Field _request, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* ____request;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel, ____client) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel, ____request) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusModel, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusModel*, "", "MultiplayerStatusModel");
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusModel_MultiplayerStatusDataFB*, "", "MultiplayerStatusModel/MultiplayerStatusDataFB");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusModel__GetMultiplayerStatusAsyncInternal_d__9, "", "MultiplayerStatusModel/<GetMultiplayerStatusAsyncInternal>d__9");
