#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncValueTaskMethodBuilder_1)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncValueTaskMethodBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1);
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
// SizeInfo { instance_size: 40, native_size: 50, calculated_instance_size: 40, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1<TResult>
struct CORDL_TYPE AsyncValueTaskMethodBuilder_1 {
public:
  // Declarations
  __declspec(property(get = get_Task))::System::Threading::Tasks::ValueTask_1<TResult> Task;

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult> Create();

  /// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(TResult result);

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(ByRef<TStateMachine> stateMachine);

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<TResult> get_Task();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncValueTaskMethodBuilder_1();

  // Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>", modifiers: "", def_value: None }, CppParam { name: "_result", ty:
  // "TResult", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value:
  // None }]
  constexpr AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> _methodBuilder, TResult _result, bool _haveResult, bool _useBuilder) noexcept;

  /// @brief Field _methodBuilder, offset: 0x0, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> _methodBuilder;

  /// @brief Field _result, offset: 0x18, size: 0x8, def value: None
  TResult _result;

  /// @brief Field _haveResult, offset: 0x20, size: 0x1, def value: None
  bool _haveResult;

  /// @brief Field _useBuilder, offset: 0x21, size: 0x1, def value: None
  bool _useBuilder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncValueTaskMethodBuilder`1");
