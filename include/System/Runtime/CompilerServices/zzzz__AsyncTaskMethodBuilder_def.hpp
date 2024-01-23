#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncTaskMethodBuilder)
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncTaskMethodBuilder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2794)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 900
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(3401)) CS Name: ::System.Runtime.CompilerServices::AsyncTaskMethodBuilder
struct CORDL_TYPE AsyncTaskMethodBuilder {
public:
  // Declarations
  /// @brief Field s_cachedCompleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedCompleted, put = setStaticF_s_cachedCompleted))::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* s_cachedCompleted;

  __declspec(property(get = get_Task))::System::Threading::Tasks::Task* Task;

  static inline void setStaticF_s_cachedCompleted(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* value);

  static inline ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult>* getStaticF_s_cachedCompleted();

  /// @brief Method Create, addr 0x24dca3c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Create();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void Start(ByRef<TStateMachine> stateMachine);

  /// @brief Method SetStateMachine, addr 0x24da7a4, size 0x58, virtual false, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  /// @brief Method get_Task, addr 0x24da930, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_Task();

  /// @brief Method SetResult, addr 0x24da814, size 0x78, virtual false, abstract: false, final false
  inline void SetResult();

  /// @brief Method SetException, addr 0x24da890, size 0x58, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  // Ctor Parameters [CppParam { name: "m_builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }]
  constexpr AsyncTaskMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncTaskMethodBuilder();

  /// @brief Field m_builder, offset: 0x0, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Threading::Tasks::VoidTaskResult> m_builder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, m_builder) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
