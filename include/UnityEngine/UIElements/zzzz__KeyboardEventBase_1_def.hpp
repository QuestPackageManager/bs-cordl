#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
CORDL_MODULE_EXPORT(KeyboardEventBase_1)
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class IKeyboardEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class KeyboardEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::KeyboardEventBase_1);
// Type: UnityEngine.UIElements::KeyboardEventBase`1
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9986)), TypeDefinitionIndex(TypeDefinitionIndex(14819)), TypeDefinitionIndex(TypeDefinitionIndex(7266)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7266), inst: 1646 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7326)) CS Name:
// ::UnityEngine.UIElements::KeyboardEventBase`1<T>*
class CORDL_TYPE KeyboardEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <modifiers>k__BackingField, offset 0x7c, size 0x4
  __declspec(property(get = __get__modifiers_k__BackingField, put = __set__modifiers_k__BackingField))::UnityEngine::EventModifiers _modifiers_k__BackingField;

  /// @brief Field <character>k__BackingField, offset 0x80, size 0x2
  __declspec(property(get = __get__character_k__BackingField, put = __set__character_k__BackingField)) char16_t _character_k__BackingField;

  /// @brief Field <keyCode>k__BackingField, offset 0x84, size 0x4
  __declspec(property(get = __get__keyCode_k__BackingField, put = __set__keyCode_k__BackingField))::UnityEngine::KeyCode _keyCode_k__BackingField;

  __declspec(property(get = get_modifiers, put = set_modifiers))::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_character, put = set_character)) char16_t character;

  __declspec(property(get = get_keyCode, put = set_keyCode))::UnityEngine::KeyCode keyCode;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  __declspec(property(get = get_ctrlKey)) bool ctrlKey;

  __declspec(property(get = get_commandKey)) bool commandKey;

  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = get_actionKey)) bool actionKey;

  /// @brief Convert operator to "::UnityEngine::UIElements::IKeyboardEvent"
  constexpr operator ::UnityEngine::UIElements::IKeyboardEvent*() noexcept;

  constexpr ::UnityEngine::EventModifiers& __get__modifiers_k__BackingField();

  constexpr ::UnityEngine::EventModifiers const& __get__modifiers_k__BackingField() const;

  constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers value);

  constexpr char16_t& __get__character_k__BackingField();

  constexpr char16_t const& __get__character_k__BackingField() const;

  constexpr void __set__character_k__BackingField(char16_t value);

  constexpr ::UnityEngine::KeyCode& __get__keyCode_k__BackingField();

  constexpr ::UnityEngine::KeyCode const& __get__keyCode_k__BackingField() const;

  constexpr void __set__keyCode_k__BackingField(::UnityEngine::KeyCode value);

  /// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method set_modifiers addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  /// @brief Method get_character addr 0x0 size 0xffffffffffffffff virtual true final true
  inline char16_t get_character();

  /// @brief Method set_character addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_character(char16_t value);

  /// @brief Method get_keyCode addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::UnityEngine::KeyCode get_keyCode();

  /// @brief Method set_keyCode addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_keyCode(::UnityEngine::KeyCode value);

  /// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_shiftKey();

  /// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_ctrlKey();

  /// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_commandKey();

  /// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_altKey();

  /// @brief Method get_actionKey addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool get_actionKey();

  /// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Init();

  /// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void LocalInit();

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(char16_t c, ::UnityEngine::KeyCode keyCode, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetPooled(::UnityEngine::Event* systemEvent);

  static inline ::UnityEngine::UIElements::KeyboardEventBase_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardEventBase_1(KeyboardEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardEventBase_1(KeyboardEventBase_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardEventBase_1();

public:
  /// @brief Field <modifiers>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::EventModifiers ____modifiers_k__BackingField;

  /// @brief Field <character>k__BackingField, offset: 0x80, size: 0x2, def value: None
  char16_t ____character_k__BackingField;

  /// @brief Field <keyCode>k__BackingField, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::KeyCode ____keyCode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::KeyboardEventBase_1, "UnityEngine.UIElements", "KeyboardEventBase`1");
