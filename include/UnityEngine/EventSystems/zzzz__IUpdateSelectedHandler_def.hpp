#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/IUpdateSelectedHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUpdateSelectedHandler)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IUpdateSelectedHandler);
// Type: UnityEngine.EventSystems::IUpdateSelectedHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::UnityEngine.EventSystems::IUpdateSelectedHandler*
class CORDL_TYPE IUpdateSelectedHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnUpdateSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUpdateSelectedHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUpdateSelectedHandler(IUpdateSelectedHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUpdateSelectedHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUpdateSelectedHandler(IUpdateSelectedHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IUpdateSelectedHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IUpdateSelectedHandler*, "UnityEngine.EventSystems", "IUpdateSelectedHandler");
