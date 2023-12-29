#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyboardEvent)
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IKeyboardEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IKeyboardEvent);
// Type: UnityEngine.UIElements::IKeyboardEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7325))
// CS Name: ::UnityEngine.UIElements::IKeyboardEvent*
class CORDL_TYPE IKeyboardEvent {
public:
  // Declarations
  __declspec(property(get = get_modifiers))::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_character)) char16_t character;

  __declspec(property(get = get_keyCode))::UnityEngine::KeyCode keyCode;

  /// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_character addr 0x0 size 0xffffffffffffffff virtual true final false
  inline char16_t get_character();

  /// @brief Method get_keyCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::KeyCode get_keyCode();

  // Ctor Parameters [CppParam { name: "", ty: "IKeyboardEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKeyboardEvent(IKeyboardEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKeyboardEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyboardEvent(IKeyboardEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IKeyboardEvent*, "UnityEngine.UIElements", "IKeyboardEvent");
