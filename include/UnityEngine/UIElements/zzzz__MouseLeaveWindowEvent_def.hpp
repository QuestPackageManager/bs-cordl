#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseLeaveWindowEvent)
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveWindowEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveWindowEvent);
// Type: UnityEngine.UIElements::MouseLeaveWindowEvent
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7215), inst: 4645 }), TypeDefinitionIndex(TypeDefinitionIndex(7215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7224))
// CS Name: ::UnityEngine.UIElements::MouseLeaveWindowEvent*
class CORDL_TYPE MouseLeaveWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveWindowEvent*> {
public:
  // Declarations
  /// @brief Method Init addr 0x2e51934 size 0x50 virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x2e51984 size 0xa4 virtual false final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseLeaveWindowEvent* New_ctor();

  /// @brief Method .ctor addr 0x2e51a28 size 0x50 virtual false final false
  inline void _ctor();

  /// @brief Method GetPooled addr 0x2e51a78 size 0xb4 virtual false final false
  static inline ::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method PostDispatch addr 0x2e51b2c size 0x15c virtual true final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveWindowEvent(MouseLeaveWindowEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveWindowEvent(MouseLeaveWindowEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveWindowEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveWindowEvent, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveWindowEvent*, "UnityEngine.UIElements", "MouseLeaveWindowEvent");
