#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskSchedulerException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(TaskSchedulerException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskSchedulerException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskSchedulerException);
// Dependencies System.Exception
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskSchedulerException
class CORDL_TYPE TaskSchedulerException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Threading::Tasks::TaskSchedulerException* New_ctor();

  static inline ::System::Threading::Tasks::TaskSchedulerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Threading::Tasks::TaskSchedulerException* New_ctor(::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3e5d76c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e5d85c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3e5d7dc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskSchedulerException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskSchedulerException(TaskSchedulerException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskSchedulerException(TaskSchedulerException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2761 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskSchedulerException, 0x90>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerException*, "System.Threading.Tasks", "TaskSchedulerException");
