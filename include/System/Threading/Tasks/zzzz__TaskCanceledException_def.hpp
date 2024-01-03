#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TaskCanceledException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskCanceledException;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskCanceledException);
// Type: System.Threading.Tasks::TaskCanceledException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2756))
// CS Name: ::System.Threading.Tasks::TaskCanceledException*
class CORDL_TYPE TaskCanceledException : public ::System::OperationCanceledException {
public:
  // Declarations
  /// @brief Field _canceledTask, offset 0x98, size 0x8
  __declspec(property(get = __get__canceledTask, put = __set__canceledTask))::System::Threading::Tasks::Task* _canceledTask;

  constexpr ::System::Threading::Tasks::Task*& __get__canceledTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get__canceledTask() const;

  constexpr void __set__canceledTask(::System::Threading::Tasks::Task* value);

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor();

  /// @brief Method .ctor, addr 0x2620bfc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x2620c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::System::Threading::Tasks::Task* task);

  /// @brief Method .ctor, addr 0x2620c50, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task);

  static inline ::System::Threading::Tasks::TaskCanceledException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2620cf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskCanceledException(TaskCanceledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskCanceledException(TaskCanceledException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskCanceledException();

public:
  /// @brief Field _canceledTask, offset: 0x98, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____canceledTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskCanceledException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskCanceledException, ____canceledTask) == 0x98, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCanceledException*, "System.Threading.Tasks", "TaskCanceledException");
