#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable_1)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename TResult> struct ConfiguredValueTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1);
MARK_GEN_VAL_T(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter);
// Type: ::ConfiguredValueTaskAwaiter
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2767)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2767), inst: 5302 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3363))
// CS Name: ::ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>
struct CORDL_TYPE __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ValueTask_1<TResult> value);

  /// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TResult GetResult();

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
  constexpr __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter();

  /// @brief Field _value, offset: 0x0, size: 0x18, def value: None
  ::System::Threading::Tasks::ValueTask_1<TResult> _value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2767)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2767), inst: 1127 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3364))
// CS Name: ::System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1<TResult>
struct CORDL_TYPE ConfiguredValueTaskAwaitable_1 {
public:
  // Declarations
  using ConfiguredValueTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ValueTask_1<TResult> value);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> GetAwaiter();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
  constexpr ConfiguredValueTaskAwaitable_1(::System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredValueTaskAwaitable_1();

  /// @brief Field _value, offset: 0x0, size: 0x18, def value: None
  ::System::Threading::Tasks::ValueTask_1<TResult> _value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices",
                                      "ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter");
