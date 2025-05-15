#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContextSwitcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExecutionContextSwitcher)
namespace System::Threading {
class Thread;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
struct ExecutionContextSwitcher;
}
// Write type traits
MARK_VAL_T(::System::Threading::ExecutionContextSwitcher);
// Dependencies System.Threading.ExecutionContext::Reader
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.ExecutionContextSwitcher
struct CORDL_TYPE ExecutionContextSwitcher {
public:
  // Declarations
  /// @brief Method Undo, addr 0x3e54a20, size 0x88, virtual false, abstract: false, final false
  inline void Undo();

  /// @brief Method UndoNoThrow, addr 0x3e54998, size 0x88, virtual false, abstract: false, final false
  inline bool UndoNoThrow();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecutionContextSwitcher();

  // Ctor Parameters [CppParam { name: "outerEC", ty: "::System::Threading::ExecutionContext_Reader", modifiers: "", def_value: None }, CppParam { name: "outerECBelongsToScope", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "hecsw", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "thread", ty: "::System::Threading::Thread*", modifiers: "",
  // def_value: None }]
  constexpr ExecutionContextSwitcher(::System::Threading::ExecutionContext_Reader outerEC, bool outerECBelongsToScope, ::System::Object* hecsw, ::System::Threading::Thread* thread) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field outerEC, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::ExecutionContext_Reader outerEC;

  /// @brief Field outerECBelongsToScope, offset: 0x8, size: 0x1, def value: None
  bool outerECBelongsToScope;

  /// @brief Field hecsw, offset: 0x10, size: 0x8, def value: None
  ::System::Object* hecsw;

  /// @brief Field thread, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::Thread* thread;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ExecutionContextSwitcher, outerEC) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContextSwitcher, outerECBelongsToScope) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContextSwitcher, hecsw) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContextSwitcher, thread) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::ExecutionContextSwitcher, 0x20>, "Size mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ExecutionContextSwitcher, "System.Threading", "ExecutionContextSwitcher");
