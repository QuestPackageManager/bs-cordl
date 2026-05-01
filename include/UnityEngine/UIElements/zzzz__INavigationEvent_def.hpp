#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INavigationEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INavigationEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class INavigationEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::INavigationEvent);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.INavigationEvent
class CORDL_TYPE INavigationEvent {
public:
  // Declarations
  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  /// @brief Method get_altKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_altKey();

  /// @brief Method get_shiftKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_shiftKey();

  // Ctor Parameters [CppParam { name: "", ty: "INavigationEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INavigationEvent(INavigationEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::INavigationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::INavigationEvent*, "UnityEngine.UIElements", "INavigationEvent");
