#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEventHandler)
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IEventHandler);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IEventHandler
class CORDL_TYPE IEventHandler {
public:
  // Declarations
  /// @brief Method HandleEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method SendEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  // Ctor Parameters [CppParam { name: "", ty: "IEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEventHandler(IEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IEventHandler*, "UnityEngine.UIElements", "IEventHandler");
