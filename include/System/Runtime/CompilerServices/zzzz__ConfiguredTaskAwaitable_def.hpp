#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConfiguredTaskAwaitable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfiguredTaskAwaitable)
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter;
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
struct ConfiguredTaskAwaitable_ConfiguredTaskAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable);
MARK_VAL_T(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter);
// Dependencies System.Runtime.CompilerServices.ICriticalNotifyCompletion, System.Runtime.CompilerServices.INotifyCompletion
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct CORDL_TYPE ConfiguredTaskAwaitable_ConfiguredTaskAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetResult, addr 0x3d14de0, size 0x8, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x3d1392c, size 0x14, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* continuation);

  /// @brief Method UnsafeOnCompleted, addr 0x3d13aec, size 0x14, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* continuation);

  /// @brief Method .ctor, addr 0x3d14da8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);

  /// @brief Method get_IsCompleted, addr 0x3d14dc4, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredTaskAwaitable_ConfiguredTaskAwaiter();

  // Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr ConfiguredTaskAwaitable_ConfiguredTaskAwaiter(::System::Threading::Tasks::Task* m_task, bool m_continueOnCapturedContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3395 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_task, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* m_task;

  /// @brief Field m_continueOnCapturedContext, offset: 0x8, size: 0x1, def value: None
  bool m_continueOnCapturedContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter, m_task) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter, m_continueOnCapturedContext) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
// Dependencies System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct CORDL_TYPE ConfiguredTaskAwaitable {
public:
  // Declarations
  using ConfiguredTaskAwaiter = ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter;

  /// @brief Method GetAwaiter, addr 0x3d14db8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter GetAwaiter();

  /// @brief Method .ctor, addr 0x3d14d90, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfiguredTaskAwaitable();

  // Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr ConfiguredTaskAwaitable(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3396 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_configuredTaskAwaiter, offset: 0x0, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, m_configuredTaskAwaiter) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
