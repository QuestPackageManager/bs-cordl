#pragma once
// IWYU pragma private; include "System/Threading/ThreadHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadHelper)
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class ThreadHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ThreadHelper);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ThreadHelper
class CORDL_TYPE ThreadHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ccb, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__ccb, put = setStaticF__ccb)) ::System::Threading::ContextCallback* _ccb;

  /// @brief Field _executionContext, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__executionContext, put = __cordl_internal_set__executionContext)) ::System::Threading::ExecutionContext* _executionContext;

  /// @brief Field _start, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) ::System::Delegate* _start;

  /// @brief Field _startArg, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__startArg, put = __cordl_internal_set__startArg)) ::System::Object* _startArg;

  static inline ::System::Threading::ThreadHelper* New_ctor(::System::Delegate* start);

  /// @brief Method SetExecutionContextHelper, addr 0x3e56aac, size 0x8, virtual false, abstract: false, final false
  inline void SetExecutionContextHelper(::System::Threading::ExecutionContext* ec);

  /// @brief Method ThreadStart, addr 0x3e56cb0, size 0xf4, virtual false, abstract: false, final false
  inline void ThreadStart();

  /// @brief Method ThreadStart, addr 0x3e56bb0, size 0x100, virtual false, abstract: false, final false
  inline void ThreadStart(::System::Object* obj);

  /// @brief Method ThreadStart_Context, addr 0x3e56ab4, size 0xfc, virtual false, abstract: false, final false
  static inline void ThreadStart_Context(::System::Object* state);

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get__executionContext() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__executionContext();

  constexpr ::System::Delegate* const& __cordl_internal_get__start() const;

  constexpr ::System::Delegate*& __cordl_internal_get__start();

  constexpr ::System::Object* const& __cordl_internal_get__startArg() const;

  constexpr ::System::Object*& __cordl_internal_get__startArg();

  constexpr void __cordl_internal_set__executionContext(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set__start(::System::Delegate* value);

  constexpr void __cordl_internal_set__startArg(::System::Object* value);

  /// @brief Method .ctor, addr 0x3e56a84, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Delegate* start);

  static inline ::System::Threading::ContextCallback* getStaticF__ccb();

  static inline void setStaticF__ccb(::System::Threading::ContextCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadHelper(ThreadHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadHelper(ThreadHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2725 };

  /// @brief Field _start, offset: 0x10, size: 0x8, def value: None
  ::System::Delegate* ____start;

  /// @brief Field _startArg, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____startArg;

  /// @brief Field _executionContext, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ____executionContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ThreadHelper, ____start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadHelper, ____startArg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ThreadHelper, ____executionContext) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ThreadHelper, 0x28>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ThreadHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadHelper*, "System.Threading", "ThreadHelper");
