#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OculusXPlatformAccessTokenRequestOperation_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusXPlatformAccessTokenRequestOperation)
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;
}
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;
}
namespace GlobalNamespace {
class OculusXPlatformAccessTokenRequestOperation;
}
namespace GlobalNamespace {
struct __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState);
MARK_REF_PTR_T(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
MARK_VAL_T(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7);
// Type: ::OculusTokenRequestOperationState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16000))
// CS Name: ::OculusXPlatformAccessTokenRequestOperation::OculusTokenRequestOperationState
struct CORDL_TYPE __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped
  enum struct ____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped : int32_t {
    __E_NotStarted = static_cast<int32_t>(0x0),
    __E_Requesting = static_cast<int32_t>(0x1),
    __E_Succeeded = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped() const noexcept {
    return static_cast<____OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotStarted value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const NotStarted;

  /// @brief Field Requesting value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Requesting;

  /// @brief Field Succeeded value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Succeeded;

  /// @brief Field Failed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RequestXPlatformAccessToken>d__7
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3402)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 902 }), TypeDefinitionIndex(TypeDefinitionIndex(12925))} Self: TypeDefinitionIndex(TypeDefinitionIndex(16001)) CS
// Name: ::OculusXPlatformAccessTokenRequestOperation::<RequestXPlatformAccessToken>d__7
struct CORDL_TYPE __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x2800574, size 0x2d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x280084c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
  // "", def_value: None }, CppParam { name: "_attemptCount_5__2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
      ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* __4__this, ::System::Threading::CancellationToken cancellationToken, int32_t _attemptCount_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <attemptCount>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t _attemptCount_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, _attemptCount_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusXPlatformAccessTokenRequestOperation
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(16000))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16002))
// CS Name: ::OculusXPlatformAccessTokenRequestOperation*
class CORDL_TYPE OculusXPlatformAccessTokenRequestOperation : public ::System::Object {
public:
  // Declarations
  using _RequestXPlatformAccessToken_d__7 = ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7;

  using OculusTokenRequestOperationState = ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState;

  /// @brief Field _tokenData, offset 0x10, size 0x8
  __declspec(property(get = __get__tokenData, put = __set__tokenData))::GlobalNamespace::XPlatformAccessTokenData* _tokenData;

  /// @brief Field _operationState, offset 0x18, size 0x4
  __declspec(property(get = __get__operationState, put = __set__operationState))::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState _operationState;

  constexpr ::GlobalNamespace::XPlatformAccessTokenData*& __get__tokenData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> const& __get__tokenData() const;

  constexpr void __set__tokenData(::GlobalNamespace::XPlatformAccessTokenData* value);

  constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState& __get__operationState();

  constexpr ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState const& __get__operationState() const;

  constexpr void __set__operationState(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState value);

  static inline ::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation* New_ctor();

  /// @brief Method .ctor, addr 0x28001d8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Run, addr 0x2800080, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* Run(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RequestXPlatformAccessToken, addr 0x28001f4, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RequestAccessToken, addr 0x28002ec, size 0x10c, virtual false, abstract: false, final false
  inline void RequestAccessToken();

  /// @brief Method OnCompleteLoadingOculusAccessToken, addr 0x28003f8, size 0x17c, virtual false, abstract: false, final false
  inline void OnCompleteLoadingOculusAccessToken(::Oculus::Platform::Message_1<::StringW>* message);

  // Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusXPlatformAccessTokenRequestOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusXPlatformAccessTokenRequestOperation(OculusXPlatformAccessTokenRequestOperation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusXPlatformAccessTokenRequestOperation();

public:
  /// @brief Field _tokenData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::XPlatformAccessTokenData* ____tokenData;

  /// @brief Field _operationState, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState ____operationState;

  /// @brief Field kMillisecondsDelayToCheckCallbackResponse offset 0xffffffff size 0x4
  static constexpr int32_t kMillisecondsDelayToCheckCallbackResponse{ static_cast<int32_t>(0x1f4) };

  /// @brief Field kMaxTokenRetry offset 0xffffffff size 0x4
  static constexpr int32_t kMaxTokenRetry{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, ____tokenData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation, ____operationState) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation__OculusTokenRequestOperationState, "",
                       "OculusXPlatformAccessTokenRequestOperation/OculusTokenRequestOperationState");
NEED_NO_BOX(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXPlatformAccessTokenRequestOperation*, "", "OculusXPlatformAccessTokenRequestOperation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusXPlatformAccessTokenRequestOperation___RequestXPlatformAccessToken_d__7, "",
                       "OculusXPlatformAccessTokenRequestOperation/<RequestXPlatformAccessToken>d__7");
