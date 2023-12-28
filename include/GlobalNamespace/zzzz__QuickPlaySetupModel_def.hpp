#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuickPlaySetupModel)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class __QuickPlaySetupModel__QuickPlaySetupDataFB;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net::Http {
class HttpClient;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
struct __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class UriBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySetupModel;
}
namespace GlobalNamespace {
class __QuickPlaySetupModel__QuickPlaySetupDataFB;
}
namespace GlobalNamespace {
struct __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupModel);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB);
MARK_VAL_T(::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10);
// Type: ::QuickPlaySetupDataFB
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4481))
// CS Name: ::QuickPlaySetupModel::QuickPlaySetupDataFB*
class CORDL_TYPE __QuickPlaySetupModel__QuickPlaySetupDataFB : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> data;

  constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*>& __get_data();

  constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> value);

  static inline ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB* New_ctor();

  /// @brief Method .ctor addr 0x2353fe4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupModel__QuickPlaySetupDataFB", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySetupModel__QuickPlaySetupDataFB(__QuickPlaySetupModel__QuickPlaySetupDataFB&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupModel__QuickPlaySetupDataFB", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySetupModel__QuickPlaySetupDataFB(__QuickPlaySetupModel__QuickPlaySetupDataFB const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySetupModel__QuickPlaySetupDataFB();

public:
  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::QuickPlaySetupData*, ::Array<::GlobalNamespace::QuickPlaySetupData*>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetQuickPlaySetupInternal>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 898 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 397 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(4480))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4482))
// CS Name: ::QuickPlaySetupModel::<GetQuickPlaySetupInternal>d__10
struct CORDL_TYPE __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2353fec size 0x7fc virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x23547e8 size 0x1058 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::QuickPlaySetupModel*", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> __t__builder,
                                                                    ::GlobalNamespace::QuickPlaySetupModel* __4__this, ::System::UriBuilder* _uriBuilder_5__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::QuickPlaySetupModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4483))
// CS Name: ::QuickPlaySetupModel*
class CORDL_TYPE QuickPlaySetupModel : public ::System::Object {
public:
  // Declarations
  using _GetQuickPlaySetupInternal_d__10 = ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;

  using QuickPlaySetupDataFB = ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB;

  /// @brief Field _networkConfig, offset 0x10, size 0x8
  __declspec(property(get = __get__networkConfig, put = __set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _client, offset 0x18, size 0x8
  __declspec(property(get = __get__client, put = __set__client))::System::Net::Http::HttpClient* _client;

  /// @brief Field _request, offset 0x20, size 0x8
  __declspec(property(get = __get__request, put = __set__request))::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* _request;

  /// @brief Field _lastRequestTime, offset 0x28, size 0x8
  __declspec(property(get = __get__lastRequestTime, put = __set__lastRequestTime))::System::DateTime _lastRequestTime;

  /// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
  constexpr operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept;

  constexpr ::GlobalNamespace::INetworkConfig*& __get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __get__networkConfig() const;

  constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::System::Net::Http::HttpClient*& __get__client();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> const& __get__client() const;

  constexpr void __set__client(::System::Net::Http::HttpClient* value);

  constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*& __get__request();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*> const& __get__request() const;

  constexpr void __set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* value);

  constexpr ::System::DateTime& __get__lastRequestTime();

  constexpr ::System::DateTime const& __get__lastRequestTime() const;

  constexpr void __set__lastRequestTime(::System::DateTime value);

  /// @brief Method GetQuickPlaySetupAsync addr 0x2353c64 size 0x64 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Init addr 0x2353e28 size 0x4 virtual false final false
  inline void Init();

  /// @brief Method StartRequest addr 0x2353dc0 size 0x68 virtual false final false
  inline void StartRequest();

  /// @brief Method GetQuickPlaySetupInternal addr 0x2353e2c size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupInternal();

  /// @brief Method IsQuickPlaySetupTaskValid addr 0x2353cc8 size 0xf8 virtual false final false
  inline bool IsQuickPlaySetupTaskValid();

  /// @brief Method IsUrlValid addr 0x2353f20 size 0x5c virtual false final false
  inline bool IsUrlValid(::StringW url);

  static inline ::GlobalNamespace::QuickPlaySetupModel* New_ctor();

  /// @brief Method .ctor addr 0x2353f7c size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySetupModel(QuickPlaySetupModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySetupModel(QuickPlaySetupModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySetupModel();

public:
  /// @brief Field _networkConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _client, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Http::HttpClient* ____client;

  /// @brief Field _request, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* ____request;

  /// @brief Field _lastRequestTime, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ____lastRequestTime;

  /// @brief Field kRequestCacheTimeoutMinutes offset 0xffffffff size 0x4
  static constexpr int32_t kRequestCacheTimeoutMinutes{ static_cast<int32_t>(0x5) };

  /// @brief Field kRequestTimeoutSeconds offset 0xffffffff size 0x4
  static constexpr int32_t kRequestTimeoutSeconds{ static_cast<int32_t>(0x3c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel*, "", "QuickPlaySetupModel");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*, "", "QuickPlaySetupModel/QuickPlaySetupDataFB");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10, "", "QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10");
