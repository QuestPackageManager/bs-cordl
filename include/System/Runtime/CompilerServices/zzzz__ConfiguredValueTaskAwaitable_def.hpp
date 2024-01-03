#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredValueTaskAwaitable)
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter);
// Type: ::ConfiguredValueTaskAwaiter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2764))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3361))
// CS Name: ::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter
struct CORDL_TYPE __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method .ctor, addr 0x24da99c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ValueTask value);

  /// @brief Method get_IsCompleted, addr 0x24da9a4, size 0x108, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Method GetResult, addr 0x24daaac, size 0x100, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x24dabac, size 0x1b0, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x24dad70, size 0x1ac, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
  constexpr __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(::System::Threading::Tasks::ValueTask _value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter();

  /// @brief Field _value, offset: 0x0, size: 0x10, def value: None
  ::System::Threading::Tasks::ValueTask _value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, _value) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2764))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3362))
// CS Name: ::System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable
struct CORDL_TYPE ConfiguredValueTaskAwaitable {
public:
  // Declarations
  using ConfiguredValueTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;

  /// @brief Method .ctor, addr 0x24da988, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::ValueTask value);

  /// @brief Method GetAwaiter, addr 0x24da990, size 0xc, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter GetAwaiter();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
  constexpr ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask _value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredValueTaskAwaitable();

  /// @brief Field _value, offset: 0x0, size: 0x10, def value: None
  ::System::Threading::Tasks::ValueTask _value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, _value) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices",
                       "ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter");
