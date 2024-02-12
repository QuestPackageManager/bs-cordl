#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointerEnterHandler)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IPointerEnterHandler);
// Type: UnityEngine.EventSystems::IPointerEnterHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13070))
// CS Name: ::UnityEngine.EventSystems::IPointerEnterHandler*
class CORDL_TYPE IPointerEnterHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Method OnPointerEnter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "IPointerEnterHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPointerEnterHandler(IPointerEnterHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerEnterHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerEnterHandler(IPointerEnterHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerEnterHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerEnterHandler*, "UnityEngine.EventSystems", "IPointerEnterHandler");
