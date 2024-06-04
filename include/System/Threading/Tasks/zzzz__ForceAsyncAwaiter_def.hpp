#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ForceAsyncAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ForceAsyncAwaiter)
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Threading::Tasks {
struct ForceAsyncAwaiter;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::ForceAsyncAwaiter);
// Type: System.Threading.Tasks::ForceAsyncAwaiter
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: ::System.Threading.Tasks::ForceAsyncAwaiter
struct CORDL_TYPE ForceAsyncAwaiter {
public:
  // Declarations
  __declspec(property(get = get_IsCompleted)) bool IsCompleted;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr operator ::System::Runtime::CompilerServices::INotifyCompletion*();

  /// @brief Method GetAwaiter, addr 0x29c62a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ForceAsyncAwaiter GetAwaiter();

  /// @brief Method GetResult, addr 0x29c62b0, size 0x2c, virtual false, abstract: false, final false
  inline void GetResult();

  /// @brief Method OnCompleted, addr 0x29c62dc, size 0x58, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action* action);

  /// @brief Method UnsafeOnCompleted, addr 0x29c6334, size 0x58, virtual true, abstract: false, final true
  inline void UnsafeOnCompleted(::System::Action* action);

  /// @brief Method .ctor, addr 0x29c6298, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  /// @brief Method get_IsCompleted, addr 0x29c62a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompleted();

  /// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion();

  /// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
  constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ForceAsyncAwaiter();

  // Ctor Parameters [CppParam { name: "_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None }]
  constexpr ForceAsyncAwaiter(::System::Threading::Tasks::Task* _task) noexcept;

  /// @brief Field _task, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* _task;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::ForceAsyncAwaiter, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::ForceAsyncAwaiter, _task) == 0x0, "Offset mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ForceAsyncAwaiter, "System.Threading.Tasks", "ForceAsyncAwaiter");
