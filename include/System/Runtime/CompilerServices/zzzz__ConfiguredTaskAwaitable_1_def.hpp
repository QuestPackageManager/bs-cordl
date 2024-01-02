#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable_1)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ConfiguredTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1);
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter);
// Type: ::ConfiguredTaskAwaiter
// SizeInfo { instance_size: 16, native_size: 25, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3397))
// CS Name: ::ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext);

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult GetResult();

  // Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task_1<TResult>*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task_1<TResult>* m_task, bool m_continueOnCapturedContext) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter();

  /// @brief Field m_task, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<TResult>* m_task;

  /// @brief Field m_continueOnCapturedContext, offset: 0x8, size: 0x1, def value: None
  bool m_continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 1121 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3398))
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredTaskAwaitable_1 {
public:
  // Declarations
  using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task_1<TResult>* task, bool continueOnCapturedContext);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> GetAwaiter();

  // Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult>", modifiers: "", def_value: None
  // }]
  constexpr ConfiguredTaskAwaitable_1(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredTaskAwaitable_1();

  /// @brief Field m_configuredTaskAwaiter, offset: 0x0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<TResult> m_configuredTaskAwaiter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter, "System.Runtime.CompilerServices",
                                      "ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter");
