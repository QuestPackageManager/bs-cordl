#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IScrollHandler)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IScrollHandler);
// Type: UnityEngine.EventSystems::IScrollHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13187))
// CS Name: ::UnityEngine.EventSystems::IScrollHandler*
class CORDL_TYPE IScrollHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "IScrollHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IScrollHandler(IScrollHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IScrollHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScrollHandler(IScrollHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IScrollHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IScrollHandler*, "UnityEngine.EventSystems", "IScrollHandler");
