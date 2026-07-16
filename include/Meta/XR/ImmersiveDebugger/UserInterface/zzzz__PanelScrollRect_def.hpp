#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/PanelScrollRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
CORDL_MODULE_EXPORT(PanelScrollRect)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class PanelScrollRect;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::UserInterface::PanelScrollRect*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::UserInterface::PanelScrollRect*, "Meta.XR.ImmersiveDebugger.UserInterface", "PanelScrollRect");
// Dependencies UnityEngine.UI.ScrollRect
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.PanelScrollRect
class CORDL_TYPE PanelScrollRect : public ::UnityEngine::UI::ScrollRect {
public:
  // Declarations
  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelScrollRect* New_ctor();

  /// @brief Method OnBeginDrag, addr 0x5a54e30, size 0x8c, virtual true, abstract: false, final false
  inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnDrag, addr 0x5a54f40, size 0x8c, virtual true, abstract: false, final false
  inline void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndDrag, addr 0x5a54ebc, size 0x84, virtual true, abstract: false, final false
  inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnInitializePotentialDrag, addr 0x5a54da4, size 0x8c, virtual true, abstract: false, final false
  inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScroll, addr 0x5a54d18, size 0x8c, virtual true, abstract: false, final false
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method .ctor, addr 0x5a54fcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelScrollRect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelScrollRect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelScrollRect(PanelScrollRect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelScrollRect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelScrollRect(PanelScrollRect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::ImmersiveDebugger::UserInterface::PanelScrollRect) == 0x130, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
