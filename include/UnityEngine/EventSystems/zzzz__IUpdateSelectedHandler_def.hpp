#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/IUpdateSelectedHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
CORDL_MODULE_EXPORT(IUpdateSelectedHandler)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IUpdateSelectedHandler);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.IUpdateSelectedHandler
class CORDL_TYPE IUpdateSelectedHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnUpdateSelected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUpdateSelectedHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUpdateSelectedHandler(IUpdateSelectedHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IUpdateSelectedHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IUpdateSelectedHandler*, "UnityEngine.EventSystems", "IUpdateSelectedHandler");
