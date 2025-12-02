#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/PointerHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PointerHandler)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class InteractableController;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class PointerHandler;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler);
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.PointerHandler
class CORDL_TYPE PointerHandler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Controller, put = set_Controller)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController> Controller;

  /// @brief Field <Controller>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Controller_k__BackingField,
                      put = __cordl_internal_set__Controller_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController>
      _Controller_k__BackingField;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler* New_ctor();

  /// @brief Method OnPointerClick, addr 0x584ab98, size 0xc4, virtual true, abstract: false, final true
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x584ac5c, size 0xd4, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x584ad30, size 0xd0, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController> const& __cordl_internal_get__Controller_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController>& __cordl_internal_get__Controller_k__BackingField();

  constexpr void __cordl_internal_set__Controller_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController> value);

  /// @brief Method .ctor, addr 0x584ae00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Controller, addr 0x584ab88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController> get_Controller();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Method set_Controller, addr 0x584ab90, size 0x8, virtual false, abstract: false, final false
  inline void set_Controller(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerHandler(PointerHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerHandler(PointerHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18368 };

  /// @brief Field <Controller>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController> ____Controller_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler, ____Controller_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "PointerHandler");
