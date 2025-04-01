#pragma once
// IWYU pragma private; include "GlobalNamespace/QuickPlaySetupModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuickPlaySetupModel)
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class QuickPlaySetupModel_QuickPlaySetupDataFB;
}
namespace GlobalNamespace {
struct QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10;
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
class QuickPlaySetupModel;
}
namespace GlobalNamespace {
class QuickPlaySetupModel_QuickPlaySetupDataFB;
}
namespace GlobalNamespace {
struct QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupModel);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB);
MARK_VAL_T(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupModel/QuickPlaySetupDataFB
class CORDL_TYPE QuickPlaySetupModel_QuickPlaySetupDataFB : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> data;

  static inline ::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> const& __cordl_internal_get_data() const;

  constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*>& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> value);

  /// @brief Method .ctor, addr 0x26d45c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySetupModel_QuickPlaySetupDataFB();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel_QuickPlaySetupDataFB", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySetupModel_QuickPlaySetupDataFB(QuickPlaySetupModel_QuickPlaySetupDataFB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel_QuickPlaySetupDataFB", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySetupModel_QuickPlaySetupDataFB(QuickPlaySetupModel_QuickPlaySetupDataFB const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13069 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10
struct CORDL_TYPE QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26d45d0, size 0x824, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26d4df4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::QuickPlaySetupModel*", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> __t__builder,
                                                                 ::GlobalNamespace::QuickPlaySetupModel* __4__this, ::System::UriBuilder* _uriBuilder_5__2,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13070 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupModel* __4__this;

  /// @brief Field <uriBuilder>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::UriBuilder* _uriBuilder_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, _uriBuilder_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IQuickPlaySetupModel, System.DateTime, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySetupModel
class CORDL_TYPE QuickPlaySetupModel : public ::System::Object {
public:
  // Declarations
  using QuickPlaySetupDataFB = ::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB;

  using _GetQuickPlaySetupInternal_d__10 = ::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10;

  /// @brief Field _client, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__client, put = __cordl_internal_set__client)) ::System::Net::Http::HttpClient* _client;

  /// @brief Field _lastRequestTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lastRequestTime, put = __cordl_internal_set__lastRequestTime)) ::System::DateTime _lastRequestTime;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _request, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__request, put = __cordl_internal_set__request)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* _request;

  /// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
  constexpr operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept;

  /// @brief Method GetQuickPlaySetupAsync, addr 0x26d425c, size 0x64, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetQuickPlaySetupInternal, addr 0x26d4424, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupInternal();

  /// @brief Method Init, addr 0x26d4420, size 0x4, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IsQuickPlaySetupTaskValid, addr 0x26d42c0, size 0xf8, virtual false, abstract: false, final false
  inline bool IsQuickPlaySetupTaskValid();

  /// @brief Method IsUrlValid, addr 0x26d450c, size 0x5c, virtual false, abstract: false, final false
  inline bool IsUrlValid(::StringW url);

  static inline ::GlobalNamespace::QuickPlaySetupModel* New_ctor();

  /// @brief Method StartRequest, addr 0x26d43b8, size 0x68, virtual false, abstract: false, final false
  inline void StartRequest();

  constexpr ::System::Net::Http::HttpClient* const& __cordl_internal_get__client() const;

  constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__client();

  constexpr ::System::DateTime const& __cordl_internal_get__lastRequestTime() const;

  constexpr ::System::DateTime& __cordl_internal_get__lastRequestTime();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* const& __cordl_internal_get__request() const;

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*& __cordl_internal_get__request();

  constexpr void __cordl_internal_set__client(::System::Net::Http::HttpClient* value);

  constexpr void __cordl_internal_set__lastRequestTime(::System::DateTime value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* value);

  /// @brief Method .ctor, addr 0x26d4568, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IQuickPlaySetupModel"
  constexpr ::GlobalNamespace::IQuickPlaySetupModel* i___GlobalNamespace__IQuickPlaySetupModel() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySetupModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySetupModel(QuickPlaySetupModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySetupModel(QuickPlaySetupModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13071 };

  /// @brief Field kRequestCacheTimeoutMinutes offset 0xffffffff size 0x4
  static constexpr int32_t kRequestCacheTimeoutMinutes{ static_cast<int32_t>(0x5) };

  /// @brief Field kRequestTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kRequestTimeoutSeconds{ static_cast<int32_t>(0x3c) };

  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____client;

  /// @brief Field _request, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* ____request;

  /// @brief Field _lastRequestTime, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____lastRequestTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel, ____networkConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel, ____client) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel, ____request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySetupModel, ____lastRequestTime) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel*, "", "QuickPlaySetupModel");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel_QuickPlaySetupDataFB*, "", "QuickPlaySetupModel/QuickPlaySetupDataFB");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel__GetQuickPlaySetupInternal_d__10, "", "QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10");
