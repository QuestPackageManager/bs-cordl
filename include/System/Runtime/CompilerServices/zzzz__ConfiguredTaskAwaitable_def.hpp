#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter);
// Type: ::ConfiguredTaskAwaiter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: ::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
struct CORDL_TYPE __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x25cd0fc, size 0x8, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x25cbac8, size 0x14, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x25cbc88, size 0x14, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method .ctor, addr 0x25cd0c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);

  /// @brief Method get_IsCompleted, addr 0x25cd0e0, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter();

  // Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(::System::Threading::Tasks::Task* m_task, bool m_continueOnCapturedContext) noexcept;

  /// @brief Field m_task, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* m_task;

  /// @brief Field m_continueOnCapturedContext, offset: 0x8, size: 0x1, def value: None
  bool m_continueOnCapturedContext;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, m_task) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, m_continueOnCapturedContext) == 0x8, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::ConfiguredTaskAwaitable
struct CORDL_TYPE ConfiguredTaskAwaitable {
public:
  // Declarations
  using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;

  /// @brief Method GetAwaiter, addr 0x25cd0d4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter GetAwaiter();

  /// @brief Method .ctor, addr 0x25cd0ac, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredTaskAwaitable();

  // Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr ConfiguredTaskAwaitable(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter m_configuredTaskAwaiter) noexcept;

  /// @brief Field m_configuredTaskAwaiter, offset: 0x0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter m_configuredTaskAwaiter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, m_configuredTaskAwaiter) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
