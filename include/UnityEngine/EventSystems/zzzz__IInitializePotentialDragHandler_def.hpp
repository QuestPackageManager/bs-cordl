#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitializePotentialDragHandler)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IInitializePotentialDragHandler);
// Type: UnityEngine.EventSystems::IInitializePotentialDragHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13178))
// CS Name: ::UnityEngine.EventSystems::IInitializePotentialDragHandler*
class CORDL_TYPE IInitializePotentialDragHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnInitializePotentialDrag addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "IInitializePotentialDragHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInitializePotentialDragHandler(IInitializePotentialDragHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInitializePotentialDragHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitializePotentialDragHandler(IInitializePotentialDragHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IInitializePotentialDragHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, "UnityEngine.EventSystems", "IInitializePotentialDragHandler");
