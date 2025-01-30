#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IFocusRing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFocusRing)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class Focusable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IFocusRing;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IFocusRing);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IFocusRing
class CORDL_TYPE IFocusRing {
public:
  // Declarations
  /// @brief Method GetFocusChangeDirection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e);

  /// @brief Method GetNextFocusable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection* direction);

  // Ctor Parameters [CppParam { name: "", ty: "IFocusRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFocusRing(IFocusRing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IFocusRing*, "UnityEngine.UIElements", "IFocusRing");
