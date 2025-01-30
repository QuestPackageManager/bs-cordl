#pragma once
// IWYU pragma private; include "System/Xml/AsyncHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncHelper)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Xml {
class AsyncHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::AsyncHelper);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.AsyncHelper
class CORDL_TYPE AsyncHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field DoneTask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoneTask, put = setStaticF_DoneTask)) ::System::Threading::Tasks::Task* DoneTask;

  /// @brief Field DoneTaskFalse, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoneTaskFalse, put = setStaticF_DoneTaskFalse)) ::System::Threading::Tasks::Task_1<bool>* DoneTaskFalse;

  /// @brief Field DoneTaskTrue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoneTaskTrue, put = setStaticF_DoneTaskTrue)) ::System::Threading::Tasks::Task_1<bool>* DoneTaskTrue;

  /// @brief Field DoneTaskZero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoneTaskZero, put = setStaticF_DoneTaskZero)) ::System::Threading::Tasks::Task_1<int32_t>* DoneTaskZero;

  static inline ::System::Threading::Tasks::Task* getStaticF_DoneTask();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_DoneTaskFalse();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_DoneTaskTrue();

  static inline ::System::Threading::Tasks::Task_1<int32_t>* getStaticF_DoneTaskZero();

  static inline void setStaticF_DoneTask(::System::Threading::Tasks::Task* value);

  static inline void setStaticF_DoneTaskFalse(::System::Threading::Tasks::Task_1<bool>* value);

  static inline void setStaticF_DoneTaskTrue(::System::Threading::Tasks::Task_1<bool>* value);

  static inline void setStaticF_DoneTaskZero(::System::Threading::Tasks::Task_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncHelper(AsyncHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncHelper(AsyncHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::AsyncHelper, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AsyncHelper*, "System.Xml", "AsyncHelper");
