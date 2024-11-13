#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointerClickHandler)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IPointerClickHandler);
// Type: UnityEngine.EventSystems::IPointerClickHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::UnityEngine.EventSystems::IPointerClickHandler*
class CORDL_TYPE IPointerClickHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnPointerClick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerClickHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPointerClickHandler(IPointerClickHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerClickHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerClickHandler(IPointerClickHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerClickHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerClickHandler*, "UnityEngine.EventSystems", "IPointerClickHandler");
