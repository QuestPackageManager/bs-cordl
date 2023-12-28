#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(TaskSchedulerException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskSchedulerException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskSchedulerException);
// Type: System.Threading.Tasks::TaskSchedulerException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2758))
// CS Name: ::System.Threading.Tasks::TaskSchedulerException*
class CORDL_TYPE TaskSchedulerException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::Threading::Tasks::TaskSchedulerException* New_ctor();

  /// @brief Method .ctor addr 0x2620cfc size 0x70 virtual false final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::TaskSchedulerException* New_ctor(::System::Exception* innerException);

  /// @brief Method .ctor addr 0x2620d6c size 0x80 virtual false final false
  inline void _ctor(::System::Exception* innerException);

  static inline ::System::Threading::Tasks::TaskSchedulerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2620dec size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskSchedulerException(TaskSchedulerException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskSchedulerException(TaskSchedulerException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskSchedulerException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskSchedulerException, 0x90>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerException*, "System.Threading.Tasks", "TaskSchedulerException");
