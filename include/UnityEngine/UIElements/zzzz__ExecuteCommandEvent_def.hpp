#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ExecuteCommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ExecuteCommandEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ExecuteCommandEvent);
// Type: UnityEngine.UIElements::ExecuteCommandEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ExecuteCommandEvent*
class CORDL_TYPE ExecuteCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ExecuteCommandEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ExecuteCommandEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35e8140, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExecuteCommandEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExecuteCommandEvent(ExecuteCommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExecuteCommandEvent(ExecuteCommandEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ExecuteCommandEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ExecuteCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ExecuteCommandEvent*, "UnityEngine.UIElements", "ExecuteCommandEvent");
