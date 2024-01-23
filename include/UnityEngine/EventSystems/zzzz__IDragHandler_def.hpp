#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDragHandler)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IDragHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IDragHandler);
// Type: UnityEngine.EventSystems::IDragHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13179))
// CS Name: ::UnityEngine.EventSystems::IDragHandler*
class CORDL_TYPE IDragHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Method OnDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "IDragHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDragHandler(IDragHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDragHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDragHandler(IDragHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IDragHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IDragHandler*, "UnityEngine.EventSystems", "IDragHandler");
