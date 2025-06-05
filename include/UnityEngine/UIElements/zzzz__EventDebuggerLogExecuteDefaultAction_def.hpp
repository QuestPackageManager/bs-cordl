#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDebuggerLogExecuteDefaultAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EventDebuggerLogExecuteDefaultAction)
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDebuggerLogExecuteDefaultAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction);
// Dependencies System.IDisposable
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventDebuggerLogExecuteDefaultAction
#pragma pack(push, 0)
struct CORDL_TYPE EventDebuggerLogExecuteDefaultAction {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x4a28a54, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x4a28a50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDebuggerLogExecuteDefaultAction();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5823 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction, "UnityEngine.UIElements", "EventDebuggerLogExecuteDefaultAction");
