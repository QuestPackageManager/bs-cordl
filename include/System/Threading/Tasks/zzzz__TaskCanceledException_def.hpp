#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskCanceledException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TaskCanceledException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskCanceledException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskCanceledException);
// Type: System.Threading.Tasks::TaskCanceledException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::TaskCanceledException*
class CORDL_TYPE TaskCanceledException : public ::System::OperationCanceledException {
public:
  // Declarations
  /// @brief Field _canceledTask, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__canceledTask, put = __cordl_internal_set__canceledTask)) ::System::Threading::Tasks::Task* _canceledTask;

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor();

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::StringW message);

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::System::Threading::Tasks::Task* task);

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__canceledTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__canceledTask() const;

  constexpr void __cordl_internal_set__canceledTask(::System::Threading::Tasks::Task* value);

  /// @brief Method .ctor, addr 0x3de8f30, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3de9028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3de8f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3de8f84, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskCanceledException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskCanceledException(TaskCanceledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskCanceledException(TaskCanceledException const&) = delete;

  /// @brief Field _canceledTask, offset: 0x98, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____canceledTask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskCanceledException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskCanceledException, ____canceledTask) == 0x98, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCanceledException*, "System.Threading.Tasks", "TaskCanceledException");
