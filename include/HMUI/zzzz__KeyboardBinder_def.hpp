#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct KeyCode;
}
namespace HMUI {
struct __KeyboardBinder__KeyBindingType;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace System {
template <typename T1, typename T2, typename T3> class Tuple_3;
}
// Forward declare root types
namespace HMUI {
struct __KeyboardBinder__KeyBindingType;
}
namespace HMUI {
class KeyboardBinder;
}
// Write type traits
MARK_VAL_T(::HMUI::__KeyboardBinder__KeyBindingType);
MARK_REF_PTR_T(::HMUI::KeyboardBinder);
// Type: ::KeyBindingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13636))
// CS Name: ::KeyboardBinder::KeyBindingType
struct CORDL_TYPE __KeyboardBinder__KeyBindingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____KeyboardBinder__KeyBindingType_Unwrapped
  enum struct ____KeyboardBinder__KeyBindingType_Unwrapped : int32_t {
    __E_KeyDown = static_cast<int32_t>(0x0),
    __E_KeyUp = static_cast<int32_t>(0x1),
    __E_KeyPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____KeyboardBinder__KeyBindingType_Unwrapped() const noexcept {
    return static_cast<____KeyboardBinder__KeyBindingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __KeyboardBinder__KeyBindingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyboardBinder__KeyBindingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field KeyDown value: static_cast<int32_t>(0x0)
  static ::HMUI::__KeyboardBinder__KeyBindingType const KeyDown;

  /// @brief Field KeyUp value: static_cast<int32_t>(0x1)
  static ::HMUI::__KeyboardBinder__KeyBindingType const KeyUp;

  /// @brief Field KeyPress value: static_cast<int32_t>(0x2)
  static ::HMUI::__KeyboardBinder__KeyBindingType const KeyPress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__KeyboardBinder__KeyBindingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__KeyboardBinder__KeyBindingType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::KeyboardBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13637))
// CS Name: ::HMUI::KeyboardBinder*
class CORDL_TYPE KeyboardBinder : public ::System::Object {
public:
  // Declarations
  using KeyBindingType = ::HMUI::__KeyboardBinder__KeyBindingType;

  /// @brief Field <enabled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__enabled_k__BackingField, put = __set__enabled_k__BackingField)) bool _enabled_k__BackingField;

  /// @brief Field _bindings, offset 0x18, size 0x8
  __declspec(property(get = __get__bindings, put = __set__bindings))::System::Collections::Generic::List_1<
      ::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>* _bindings;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  constexpr bool& __get__enabled_k__BackingField();

  constexpr bool const& __get__enabled_k__BackingField() const;

  constexpr void __set__enabled_k__BackingField(bool value);

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>*&
  __get__bindings();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>*> const&
  __get__bindings() const;

  constexpr void
  __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>* value);

  /// @brief Method get_enabled addr 0x1fc39a4 size 0x8 virtual false final false
  inline bool get_enabled();

  /// @brief Method set_enabled addr 0x1fc39ac size 0xc virtual false final false
  inline void set_enabled(bool value);

  static inline ::HMUI::KeyboardBinder* New_ctor();

  /// @brief Method .ctor addr 0x1fc39b8 size 0x1c virtual false final false
  inline void _ctor();

  static inline ::HMUI::KeyboardBinder* New_ctor(::UnityEngine::KeyCode keycode, ::HMUI::__KeyboardBinder__KeyBindingType keyBindingType, ::System::Action_1<bool>* action);

  /// @brief Method .ctor addr 0x1fc3a50 size 0x4c virtual false final false
  inline void _ctor(::UnityEngine::KeyCode keycode, ::HMUI::__KeyboardBinder__KeyBindingType keyBindingType, ::System::Action_1<bool>* action);

  static inline ::HMUI::KeyboardBinder*
  New_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method .ctor addr 0x1fc3bfc size 0x34 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method Init addr 0x1fc39d4 size 0x7c virtual false final false
  inline void Init();

  /// @brief Method AddBindings addr 0x1fc3c30 size 0x174 virtual false final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method AddBinding addr 0x1fc3a9c size 0x160 virtual false final false
  inline void AddBinding(::UnityEngine::KeyCode keyCode, ::HMUI::__KeyboardBinder__KeyBindingType keyBindingType, ::System::Action_1<bool>* action);

  /// @brief Method ClearBindings addr 0x1fc3da4 size 0x6c virtual false final false
  inline void ClearBindings();

  /// @brief Method ManualUpdate addr 0x1fc3e10 size 0x12c virtual false final false
  inline void ManualUpdate();

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardBinder(KeyboardBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardBinder(KeyboardBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardBinder();

public:
  /// @brief Field <enabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____enabled_k__BackingField;

  /// @brief Field _bindings, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>*>* ____bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::KeyboardBinder, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::KeyboardBinder, ____enabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::KeyboardBinder, ____bindings) == 0x18, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__KeyboardBinder__KeyBindingType, "HMUI", "KeyboardBinder/KeyBindingType");
NEED_NO_BOX(::HMUI::KeyboardBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::KeyboardBinder*, "HMUI", "KeyboardBinder");
