#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ValidateCommandEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ValidateCommandEvent);
// Type: UnityEngine.UIElements::ValidateCommandEvent
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ValidateCommandEvent*
class CORDL_TYPE ValidateCommandEvent : public ::UnityEngine::UIElements::CommandEventBase_1<::UnityEngine::UIElements::ValidateCommandEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ValidateCommandEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2f5f9ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidateCommandEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidateCommandEvent(ValidateCommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidateCommandEvent(ValidateCommandEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ValidateCommandEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ValidateCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ValidateCommandEvent*, "UnityEngine.UIElements", "ValidateCommandEvent");
