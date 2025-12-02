#pragma once
// IWYU pragma private; include "HMUI/KeyboardBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardBinder)
namespace HMUI {
struct KeyboardBinder_KeyBindingType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3> class Tuple_3;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace HMUI {
struct KeyboardBinder_KeyBindingType;
}
namespace HMUI {
class KeyboardBinder;
}
// Write type traits
MARK_VAL_T(::HMUI::KeyboardBinder_KeyBindingType);
MARK_REF_PTR_T(::HMUI::KeyboardBinder);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.KeyboardBinder/KeyBindingType
struct CORDL_TYPE KeyboardBinder_KeyBindingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __KeyboardBinder_KeyBindingType_Unwrapped
  enum struct __KeyboardBinder_KeyBindingType_Unwrapped : int32_t {
    __E_KeyDown = static_cast<int32_t>(0x0),
    __E_KeyUp = static_cast<int32_t>(0x1),
    __E_KeyPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __KeyboardBinder_KeyBindingType_Unwrapped() const noexcept {
    return static_cast<__KeyboardBinder_KeyBindingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardBinder_KeyBindingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KeyboardBinder_KeyBindingType(int32_t value__) noexcept;

  /// @brief Field KeyDown value: I32(0)
  static ::HMUI::KeyboardBinder_KeyBindingType const KeyDown;

  /// @brief Field KeyPress value: I32(2)
  static ::HMUI::KeyboardBinder_KeyBindingType const KeyPress;

  /// @brief Field KeyUp value: I32(1)
  static ::HMUI::KeyboardBinder_KeyBindingType const KeyUp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19094 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::KeyboardBinder_KeyBindingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::KeyboardBinder_KeyBindingType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.KeyboardBinder
class CORDL_TYPE KeyboardBinder : public ::System::Object {
public:
  // Declarations
  using KeyBindingType = ::HMUI::KeyboardBinder_KeyBindingType;

  /// @brief Field _bindings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bindings, put = __cordl_internal_set__bindings)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* _bindings;

  /// @brief Field <enabled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled_k__BackingField, put = __cordl_internal_set__enabled_k__BackingField)) bool _enabled_k__BackingField;

  /// @brief Field _newBindings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__newBindings, put = __cordl_internal_set__newBindings)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* _newBindings;

  /// @brief Field _shouldClearBindings, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldClearBindings, put = __cordl_internal_set__shouldClearBindings)) bool _shouldClearBindings;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Method AddBinding, addr 0x5662380, size 0x130, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::KeyCode keyCode, ::HMUI::KeyboardBinder_KeyBindingType keyBindingType, ::System::Action_1<bool>* action);

  /// @brief Method AddBindings, addr 0x5662558, size 0x154, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method ClearBindings, addr 0x56626ac, size 0x78, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Init, addr 0x56622b4, size 0xc, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method ManualUpdate, addr 0x5662724, size 0x158, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::HMUI::KeyboardBinder* New_ctor();

  static inline ::HMUI::KeyboardBinder*
  New_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);

  static inline ::HMUI::KeyboardBinder* New_ctor(::UnityEngine::KeyCode keycode, ::HMUI::KeyboardBinder_KeyBindingType keyBindingType, ::System::Action_1<bool>* action);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* const&
  __cordl_internal_get__bindings() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>*&
  __cordl_internal_get__bindings();

  constexpr bool const& __cordl_internal_get__enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enabled_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* const&
  __cordl_internal_get__newBindings() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>*&
  __cordl_internal_get__newBindings();

  constexpr bool const& __cordl_internal_get__shouldClearBindings() const;

  constexpr bool& __cordl_internal_get__shouldClearBindings();

  constexpr void __cordl_internal_set__bindings(
      ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* value);

  constexpr void __cordl_internal_set__enabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__newBindings(
      ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* value);

  constexpr void __cordl_internal_set__shouldClearBindings(bool value);

  /// @brief Method .ctor, addr 0x5662218, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x56624b0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method .ctor, addr 0x56622c0, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::KeyCode keycode, ::HMUI::KeyboardBinder_KeyBindingType keyBindingType, ::System::Action_1<bool>* action);

  /// @brief Method get_enabled, addr 0x5662208, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method set_enabled, addr 0x5662210, size 0x8, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyboardBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardBinder(KeyboardBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardBinder(KeyboardBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19095 };

  /// @brief Field <enabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____enabled_k__BackingField;

  /// @brief Field _shouldClearBindings, offset: 0x11, size: 0x1, def value: None
  bool ____shouldClearBindings;

  /// @brief Field _newBindings, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* ____newBindings;

  /// @brief Field _bindings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* ____bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::KeyboardBinder, ____enabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::KeyboardBinder, ____shouldClearBindings) == 0x11, "Offset mismatch!");

static_assert(offsetof(::HMUI::KeyboardBinder, ____newBindings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::KeyboardBinder, ____bindings) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::KeyboardBinder, 0x28>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::KeyboardBinder_KeyBindingType, "HMUI", "KeyboardBinder/KeyBindingType");
NEED_NO_BOX(::HMUI::KeyboardBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::KeyboardBinder*, "HMUI", "KeyboardBinder");
