#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICommandEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ICommandEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ICommandEvent);
// Type: UnityEngine.UIElements::ICommandEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7228))
// CS Name: ::UnityEngine.UIElements::ICommandEvent*
class CORDL_TYPE ICommandEvent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICommandEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICommandEvent(ICommandEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICommandEvent(ICommandEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ICommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICommandEvent*, "UnityEngine.UIElements", "ICommandEvent");
