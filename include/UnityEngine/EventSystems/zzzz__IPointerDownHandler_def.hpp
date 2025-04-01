#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
CORDL_MODULE_EXPORT(IPointerDownHandler)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::IPointerDownHandler);
// Dependencies UnityEngine.EventSystems.IEventSystemHandler
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.IPointerDownHandler
class CORDL_TYPE IPointerDownHandler {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Method OnPointerDown, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPointerDownHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerDownHandler(IPointerDownHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::IPointerDownHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IPointerDownHandler*, "UnityEngine.EventSystems", "IPointerDownHandler");
