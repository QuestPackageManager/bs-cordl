#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFocusRing)
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IFocusRing;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IFocusRing);
// Type: UnityEngine.UIElements::IFocusRing
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6968))
// CS Name: ::UnityEngine.UIElements::IFocusRing*
class CORDL_TYPE IFocusRing {
public:
  // Declarations
  /// @brief Method GetFocusChangeDirection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e);

  /// @brief Method GetNextFocusable addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection* direction);

  // Ctor Parameters [CppParam { name: "", ty: "IFocusRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFocusRing(IFocusRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFocusRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFocusRing(IFocusRing const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IFocusRing*, "UnityEngine.UIElements", "IFocusRing");
