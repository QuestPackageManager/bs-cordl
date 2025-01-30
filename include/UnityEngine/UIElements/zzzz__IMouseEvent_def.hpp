#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMouseEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMouseEvent)
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMouseEvent);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMouseEvent
class CORDL_TYPE IMouseEvent {
public:
  // Declarations
  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = get_button)) int32_t button;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  __declspec(property(get = get_commandKey)) bool commandKey;

  __declspec(property(get = get_ctrlKey)) bool ctrlKey;

  __declspec(property(get = get_localMousePosition)) ::UnityEngine::Vector2 localMousePosition;

  __declspec(property(get = get_modifiers)) ::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_mouseDelta)) ::UnityEngine::Vector2 mouseDelta;

  __declspec(property(get = get_mousePosition)) ::UnityEngine::Vector2 mousePosition;

  __declspec(property(get = get_pressedButtons)) int32_t pressedButtons;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  /// @brief Method get_altKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_altKey();

  /// @brief Method get_button, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_button();

  /// @brief Method get_clickCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_commandKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_commandKey();

  /// @brief Method get_ctrlKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ctrlKey();

  /// @brief Method get_localMousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_localMousePosition();

  /// @brief Method get_modifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_mouseDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mouseDelta();

  /// @brief Method get_mousePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_mousePosition();

  /// @brief Method get_pressedButtons, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_pressedButtons();

  /// @brief Method get_shiftKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_shiftKey();

  // Ctor Parameters [CppParam { name: "", ty: "IMouseEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMouseEvent(IMouseEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMouseEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMouseEvent*, "UnityEngine.UIElements", "IMouseEvent");
