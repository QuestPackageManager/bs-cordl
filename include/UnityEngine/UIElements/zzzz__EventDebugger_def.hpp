#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDebugger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventDebugger)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class PropagationPaths;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDebugger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::EventDebugger);
// Type: UnityEngine.UIElements::EventDebugger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::EventDebugger*
class CORDL_TYPE EventDebugger : public ::System::Object {
public:
  // Declarations
  /// @brief Method LogPropagationPaths, addr 0x35d83ac, size 0x4, virtual false, abstract: false, final false
  static inline void LogPropagationPaths(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPaths* paths);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDebugger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventDebugger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDebugger(EventDebugger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDebugger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDebugger(EventDebugger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDebugger, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::EventDebugger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebugger*, "UnityEngine.UIElements", "EventDebugger");
