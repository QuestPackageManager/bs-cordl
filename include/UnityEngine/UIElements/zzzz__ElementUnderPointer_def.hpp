#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementUnderPointer)
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ElementUnderPointer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ElementUnderPointer);
// Type: UnityEngine.UIElements::ElementUnderPointer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7156))
// CS Name: ::UnityEngine.UIElements::ElementUnderPointer*
class CORDL_TYPE ElementUnderPointer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_PendingTopElementUnderPointer, offset 0x10, size 0x8
  __declspec(
      property(get = __get_m_PendingTopElementUnderPointer,
               put = __set_m_PendingTopElementUnderPointer))::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> m_PendingTopElementUnderPointer;

  /// @brief Field m_TopElementUnderPointer, offset 0x18, size 0x8
  __declspec(property(get = __get_m_TopElementUnderPointer,
                      put = __set_m_TopElementUnderPointer))::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> m_TopElementUnderPointer;

  /// @brief Field m_TriggerPointerEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_m_TriggerPointerEvent,
                      put = __set_m_TriggerPointerEvent))::ArrayW<::UnityEngine::UIElements::IPointerEvent*, ::Array<::UnityEngine::UIElements::IPointerEvent*>*> m_TriggerPointerEvent;

  /// @brief Field m_TriggerMouseEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_m_TriggerMouseEvent,
                      put = __set_m_TriggerMouseEvent))::ArrayW<::UnityEngine::UIElements::IMouseEvent*, ::Array<::UnityEngine::UIElements::IMouseEvent*>*> m_TriggerMouseEvent;

  /// @brief Field m_PickingPointerPositions, offset 0x30, size 0x8
  __declspec(property(get = __get_m_PickingPointerPositions, put = __set_m_PickingPointerPositions))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> m_PickingPointerPositions;

  /// @brief Field m_IsPickingPointerTemporaries, offset 0x38, size 0x8
  __declspec(property(get = __get_m_IsPickingPointerTemporaries, put = __set_m_IsPickingPointerTemporaries))::ArrayW<bool, ::Array<bool>*> m_IsPickingPointerTemporaries;

  constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_m_PendingTopElementUnderPointer();

  constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_m_PendingTopElementUnderPointer() const;

  constexpr void __set_m_PendingTopElementUnderPointer(::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*>& __get_m_TopElementUnderPointer();

  constexpr ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> const& __get_m_TopElementUnderPointer() const;

  constexpr void __set_m_TopElementUnderPointer(::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::IPointerEvent*, ::Array<::UnityEngine::UIElements::IPointerEvent*>*>& __get_m_TriggerPointerEvent();

  constexpr ::ArrayW<::UnityEngine::UIElements::IPointerEvent*, ::Array<::UnityEngine::UIElements::IPointerEvent*>*> const& __get_m_TriggerPointerEvent() const;

  constexpr void __set_m_TriggerPointerEvent(::ArrayW<::UnityEngine::UIElements::IPointerEvent*, ::Array<::UnityEngine::UIElements::IPointerEvent*>*> value);

  constexpr ::ArrayW<::UnityEngine::UIElements::IMouseEvent*, ::Array<::UnityEngine::UIElements::IMouseEvent*>*>& __get_m_TriggerMouseEvent();

  constexpr ::ArrayW<::UnityEngine::UIElements::IMouseEvent*, ::Array<::UnityEngine::UIElements::IMouseEvent*>*> const& __get_m_TriggerMouseEvent() const;

  constexpr void __set_m_TriggerMouseEvent(::ArrayW<::UnityEngine::UIElements::IMouseEvent*, ::Array<::UnityEngine::UIElements::IMouseEvent*>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __get_m_PickingPointerPositions();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __get_m_PickingPointerPositions() const;

  constexpr void __set_m_PickingPointerPositions(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_m_IsPickingPointerTemporaries();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_m_IsPickingPointerTemporaries() const;

  constexpr void __set_m_IsPickingPointerTemporaries(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method GetTopElementUnderPointer addr 0x2e47f3c size 0x74 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int32_t pointerId, ByRef<::UnityEngine::Vector2> pickPosition, ByRef<bool> isTemporary);

  /// @brief Method GetTopElementUnderPointer addr 0x2e47fb0 size 0x30 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(int32_t pointerId);

  /// @brief Method SetElementUnderPointer addr 0x2e47fe0 size 0x160 virtual false final false
  inline void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId, ::UnityEngine::Vector2 pointerPos);

  /// @brief Method GetEventPointerPosition addr 0x2e48140 size 0x1b8 virtual false final false
  inline ::UnityEngine::Vector2 GetEventPointerPosition(::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method SetTemporaryElementUnderPointer addr 0x2e482f8 size 0x8 virtual false final false
  inline void SetTemporaryElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method SetElementUnderPointer addr 0x2e4854c size 0x8 virtual false final false
  inline void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent);

  /// @brief Method SetElementUnderPointer addr 0x2e48300 size 0x24c virtual false final false
  inline void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* newElementUnderPointer, int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent, bool temporary);

  /// @brief Method CommitElementUnderPointers addr 0x2e48554 size 0xc54 virtual false final false
  inline void CommitElementUnderPointers(::UnityEngine::UIElements::EventDispatcher* dispatcher, ::UnityEngine::UIElements::ContextType contextType);

  static inline ::UnityEngine::UIElements::ElementUnderPointer* New_ctor();

  /// @brief Method .ctor addr 0x2e4991c size 0x15c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ElementUnderPointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementUnderPointer(ElementUnderPointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementUnderPointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementUnderPointer(ElementUnderPointer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementUnderPointer();

public:
  /// @brief Field m_PendingTopElementUnderPointer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> ___m_PendingTopElementUnderPointer;

  /// @brief Field m_TopElementUnderPointer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::VisualElement*, ::Array<::UnityEngine::UIElements::VisualElement*>*> ___m_TopElementUnderPointer;

  /// @brief Field m_TriggerPointerEvent, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IPointerEvent*, ::Array<::UnityEngine::UIElements::IPointerEvent*>*> ___m_TriggerPointerEvent;

  /// @brief Field m_TriggerMouseEvent, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::IMouseEvent*, ::Array<::UnityEngine::UIElements::IMouseEvent*>*> ___m_TriggerMouseEvent;

  /// @brief Field m_PickingPointerPositions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___m_PickingPointerPositions;

  /// @brief Field m_IsPickingPointerTemporaries, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_IsPickingPointerTemporaries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ElementUnderPointer, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ElementUnderPointer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ElementUnderPointer*, "UnityEngine.UIElements", "ElementUnderPointer");
