#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusXPlatformAccessTokenRequestOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusXPlatformAccessTokenRequestOperation)
namespace GlobalNamespace {
struct OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState;
}
namespace GlobalNamespace {
struct OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
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
// Forward declare root types
namespace GlobalNamespace {
struct OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState;
}
namespace GlobalNamespace {
class OculusXPlatformAccessTokenRequestOperation;
}
namespace GlobalNamespace {
struct OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState);
MARK_REF_PTR_T(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
MARK_VAL_T(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusXPlatformAccessTokenRequestOperation/OculusTokenRequestOperationState
struct CORDL_TYPE OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState_Unwrapped
  enum struct __OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState_Unwrapped : int32_t {
    __E_NotStarted = static_cast<int32_t>(0x0),
    __E_Requesting = static_cast<int32_t>(0x1),
    __E_Succeeded = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState_Unwrapped() const noexcept {
    return static_cast<__OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(3)
  static ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState const Failed;

  /// @brief Field NotStarted value: I32(0)
  static ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState const NotStarted;

  /// @brief Field Requesting value: I32(1)
  static ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState const Requesting;

  /// @brief Field Succeeded value: I32(2)
  static ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState const Succeeded;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18324 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter,
// System.Threading.CancellationToken, XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: true
// CS Name: OculusXPlatformAccessTokenRequestOperation/<RequestXPlatformAccessToken>d__7
struct CORDL_TYPE OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22767e8, size 0x354, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2276b3c, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder,
      ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t _attemptCount_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18325 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <attemptCount>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _attemptCount_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, _attemptCount_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OculusXPlatformAccessTokenRequestOperation::OculusTokenRequestOperationState, System.Object, XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusXPlatformAccessTokenRequestOperation
class CORDL_TYPE OculusXPlatformAccessTokenRequestOperation : public ::System::Object {
public:
  // Declarations
  using OculusTokenRequestOperationState = ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState;

  using _RequestXPlatformAccessToken_d__7 = ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7;

  /// @brief Field _operationState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__operationState,
                      put = __cordl_internal_set__operationState)) ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState _operationState;

  /// @brief Field _tokenData, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__tokenData, put = __cordl_internal_set__tokenData)) ::GlobalNamespace::XPlatformAccessTokenData _tokenData;

  static inline ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* New_ctor();

  /// @brief Method OnCompleteLoadingOculusAccessToken, addr 0x2276674, size 0x174, virtual false, abstract: false, final false
  inline void OnCompleteLoadingOculusAccessToken(::Oculus::Platform::Message_1<::StringW>* message);

  /// @brief Method RequestAccessToken, addr 0x2276570, size 0x104, virtual false, abstract: false, final false
  inline void RequestAccessToken();

  /// @brief Method RequestXPlatformAccessToken, addr 0x2276478, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x227632c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* Run(::System::Threading::CancellationToken cancellationToken);

  constexpr ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState const& __cordl_internal_get__operationState() const;

  constexpr ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState& __cordl_internal_get__operationState();

  constexpr ::GlobalNamespace::XPlatformAccessTokenData const& __cordl_internal_get__tokenData() const;

  constexpr ::GlobalNamespace::XPlatformAccessTokenData& __cordl_internal_get__tokenData();

  constexpr void __cordl_internal_set__operationState(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState value);

  constexpr void __cordl_internal_set__tokenData(::GlobalNamespace::XPlatformAccessTokenData value);

  /// @brief Method .ctor, addr 0x2276408, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusXPlatformAccessTokenRequestOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18326 };

  /// @brief Field kMaxTokenRetry offset 0xffffffff size 0x4
  static constexpr int32_t kMaxTokenRetry{ static_cast<int32_t>(0x3) };

  /// @brief Field kMillisecondsDelayToCheckCallbackResponse offset 0xffffffff size 0x4
  static constexpr int32_t kMillisecondsDelayToCheckCallbackResponse{ static_cast<int32_t>(0x1f4) };

  /// @brief Field _tokenData, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData ____tokenData;

  /// @brief Field _operationState, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState ____operationState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, ____tokenData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, ____operationState) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation_OculusTokenRequestOperationState, "",
                       "OculusXPlatformAccessTokenRequestOperation/OculusTokenRequestOperationState");
NEED_NO_BOX(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*, "", "OculusXPlatformAccessTokenRequestOperation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation__RequestXPlatformAccessToken_d__7, "",
                       "OculusXPlatformAccessTokenRequestOperation/<RequestXPlatformAccessToken>d__7");
