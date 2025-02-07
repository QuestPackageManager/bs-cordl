#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
CORDL_MODULE_EXPORT(IInitializePotentialDragHandler)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IInitializePotentialDragHandler);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.IInitializePotentialDragHandler
class CORDL_TYPE IInitializePotentialDragHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnInitializePotentialDrag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IInitializePotentialDragHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializePotentialDragHandler(IInitializePotentialDragHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15192 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IInitializePotentialDragHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
