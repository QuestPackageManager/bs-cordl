#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitializePotentialDragHandler)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IInitializePotentialDragHandler);
// Type: UnityEngine.EventSystems::IInitializePotentialDragHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::UnityEngine.EventSystems::IInitializePotentialDragHandler*
class CORDL_TYPE IInitializePotentialDragHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnInitializePotentialDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IInitializePotentialDragHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInitializePotentialDragHandler(IInitializePotentialDragHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInitializePotentialDragHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializePotentialDragHandler(IInitializePotentialDragHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IInitializePotentialDragHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
