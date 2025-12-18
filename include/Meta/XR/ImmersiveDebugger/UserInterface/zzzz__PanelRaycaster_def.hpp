#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/PanelRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
CORDL_MODULE_EXPORT(PanelRaycaster)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelRaycaster;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster);
// Dependencies OVRRaycaster
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster
class CORDL_TYPE PanelRaycaster : public ::GlobalNamespace::OVRRaycaster {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method IsFocussed, addr 0x58a76b8, size 0x8, virtual true, abstract: false, final false
  inline bool IsFocussed();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* New_ctor();

  /// @brief Method OnDisable, addr 0x58a7718, size 0x58, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x58a76c0, size 0x58, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPointerEnter, addr 0x58a76b4, size 0x4, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* e);

  /// @brief Method .ctor, addr 0x58a7770, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsValid, addr 0x58a6870, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsValid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelRaycaster(PanelRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelRaycaster(PanelRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster, 0x70>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*, "Meta.XR.ImmersiveDebugger.UserInterface", "PanelRaycaster");
