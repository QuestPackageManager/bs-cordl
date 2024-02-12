#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDeselectHandler)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IDeselectHandler);
// Type: UnityEngine.EventSystems::IDeselectHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13083))
// CS Name: ::UnityEngine.EventSystems::IDeselectHandler*
class CORDL_TYPE IDeselectHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Method OnDeselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "IDeselectHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDeselectHandler(IDeselectHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDeselectHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDeselectHandler(IDeselectHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IDeselectHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IDeselectHandler*, "UnityEngine.EventSystems", "IDeselectHandler");
