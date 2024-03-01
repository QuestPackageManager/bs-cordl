#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPointerMoveHandler)
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IPointerMoveHandler);
// Type: UnityEngine.EventSystems::IPointerMoveHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::UnityEngine.EventSystems::IPointerMoveHandler*
class CORDL_TYPE IPointerMoveHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnPointerMove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerMoveHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPointerMoveHandler(IPointerMoveHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerMoveHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerMoveHandler(IPointerMoveHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerMoveHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerMoveHandler*, "UnityEngine.EventSystems", "IPointerMoveHandler");
