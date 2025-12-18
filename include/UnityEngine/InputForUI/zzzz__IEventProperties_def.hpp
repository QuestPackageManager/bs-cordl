#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/IEventProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventProperties)
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class IEventProperties;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputForUI::IEventProperties);
// Dependencies
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.IEventProperties
class CORDL_TYPE IEventProperties {
public:
  // Declarations
  __declspec(property(get = get_eventModifiers)) ::UnityEngine::InputForUI::EventModifiers eventModifiers;

  __declspec(property(get = get_eventSource)) ::UnityEngine::InputForUI::EventSource eventSource;

  /// @brief Method get_eventModifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventModifiers get_eventModifiers();

  /// @brief Method get_eventSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::InputForUI::EventSource get_eventSource();

  // Ctor Parameters [CppParam { name: "", ty: "IEventProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventProperties(IEventProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21615 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputForUI
NEED_NO_BOX(::UnityEngine::InputForUI::IEventProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputForUI::IEventProperties*, "UnityEngine.InputForUI", "IEventProperties");
