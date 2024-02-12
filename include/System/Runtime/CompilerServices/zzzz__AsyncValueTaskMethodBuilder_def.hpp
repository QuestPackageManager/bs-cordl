#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncValueTaskMethodBuilder)
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncValueTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3397))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3354))
// CS Name: ::System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder
struct CORDL_TYPE AsyncValueTaskMethodBuilder {
public:
  // Declarations
  __declspec(property(get = get_Task))::System::Threading::Tasks::ValueTask Task;

  /// @brief Method Create, addr 0x24facc4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder Create();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(ByRef<TStateMachine> stateMachine);

  /// @brief Method SetStateMachine, addr 0x24facd0, size 0x4, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method SetResult, addr 0x24fad2c, size 0x18, virtual false, abstract: false, final false
  inline void SetResult();

  /// @brief Method SetException, addr 0x24fadbc, size 0x4, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method get_Task, addr 0x24fae18, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask get_Task();

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  // Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
  constexpr AsyncValueTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, bool _haveResult, bool _useBuilder) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncValueTaskMethodBuilder();

  /// @brief Field _methodBuilder, offset: 0x0, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder;

  /// @brief Field _haveResult, offset: 0x18, size: 0x1, def value: None
  bool _haveResult;

  /// @brief Field _useBuilder, offset: 0x19, size: 0x1, def value: None
  bool _useBuilder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, _methodBuilder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, _haveResult) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, _useBuilder) == 0x19, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncValueTaskMethodBuilder");
