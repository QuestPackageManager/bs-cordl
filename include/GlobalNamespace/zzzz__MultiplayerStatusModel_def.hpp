#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerStatusModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __MultiplayerStatusModel__MultiplayerStatusDataFB;
}
namespace GlobalNamespace {
struct __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
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
class __MultiplayerStatusModel__MultiplayerStatusDataFB;
}
namespace GlobalNamespace {
struct __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusModel);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB);
MARK_VAL_T(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9);
// Type: ::MultiplayerStatusDataFB
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerStatusModel::MultiplayerStatusDataFB*
class CORDL_TYPE __MultiplayerStatusModel__MultiplayerStatusDataFB : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> data;

  static inline ::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*>& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> value);

  /// @brief Method .ctor, addr 0x14d0bf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusModel__MultiplayerStatusDataFB();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusModel__MultiplayerStatusDataFB", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerStatusModel__MultiplayerStatusDataFB(__MultiplayerStatusModel__MultiplayerStatusDataFB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusModel__MultiplayerStatusDataFB", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerStatusModel__MultiplayerStatusDataFB(__MultiplayerStatusModel__MultiplayerStatusDataFB const&) = delete;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MultiplayerStatusData*, ::Array<::GlobalNamespace::MultiplayerStatusData*>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB, ___data) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetMultiplayerStatusAsyncInternal>d__9
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MultiplayerStatusModel::<GetMultiplayerStatusAsyncInternal>d__9
struct CORDL_TYPE __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14d0bf8, size 0x824, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14d141c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::MultiplayerStatusModel*", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(int32_t __1__state,
                                                                              ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*> __t__builder,
                                                                              ::GlobalNamespace::MultiplayerStatusModel* __4__this, ::System::UriBuilder* _uriBuilder_5__2,
                                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, _uriBuilder_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerStatusModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerStatusModel*
class CORDL_TYPE MultiplayerStatusModel : public ::System::Object {
public:
  // Declarations
  using MultiplayerStatusDataFB = ::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB;

  using _GetMultiplayerStatusAsyncInternal_d__9 = ::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;

  /// @brief Field _client, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client))::System::Net::Http::HttpClient* _client;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request))::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* _request;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
  constexpr operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept;

  /// @brief Method GetMultiplayerStatusAsync, addr 0x14d09cc, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetMultiplayerStatusAsyncInternal, addr 0x14d0a94, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsyncInternal();

  /// @brief Method Init, addr 0x14d099c, size 0x18, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IsAvailabilityTaskValid, addr 0x14d0a38, size 0x5c, virtual false, abstract: false, final false
  inline bool IsAvailabilityTaskValid();

  static inline ::GlobalNamespace::MultiplayerStatusModel* New_ctor();

  /// @brief Method StartRequest, addr 0x14d09b4, size 0x18, virtual false, abstract: false, final false
  inline void StartRequest();

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__client();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __cordl_internal_get__client() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __cordl_internal_get__networkConfig() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*& __cordl_internal_get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*> const& __cordl_internal_get__request() const;

  constexpr void __cordl_internal_set__client(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* value);

  /// @brief Method .ctor, addr 0x14d0b88, size 0x68, virtual false, abstract: false, final false
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

  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____client;

  /// @brief Field _request, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* ____request;

  /// @brief Field kRequestTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kRequestTimeoutSeconds{ static_cast<int32_t>(0x3c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel, ____client) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerStatusModel, ____request) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusModel*, "", "MultiplayerStatusModel");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB*, "", "MultiplayerStatusModel/MultiplayerStatusDataFB");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, "", "MultiplayerStatusModel/<GetMultiplayerStatusAsyncInternal>d__9");
