#pragma once
// IWYU pragma private; include "HMUI/MouseBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseBinder)
namespace HMUI {
struct MouseBinder_ButtonType;
}
namespace HMUI {
struct MouseBinder_MouseEventType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine::Events {
class UnityAction;
}
// Forward declare root types
namespace HMUI {
struct MouseBinder_ButtonType;
}
namespace HMUI {
struct MouseBinder_MouseEventType;
}
namespace HMUI {
class MouseBinder;
}
// Write type traits
MARK_VAL_T(::HMUI::MouseBinder_ButtonType);
MARK_VAL_T(::HMUI::MouseBinder_MouseEventType);
MARK_REF_PTR_T(::HMUI::MouseBinder);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.MouseBinder/MouseEventType
struct CORDL_TYPE MouseBinder_MouseEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MouseBinder_MouseEventType_Unwrapped
  enum struct __MouseBinder_MouseEventType_Unwrapped : int32_t {
    __E_ButtonDown = static_cast<int32_t>(0x0),
    __E_ButtonUp = static_cast<int32_t>(0x1),
    __E_ButtonPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MouseBinder_MouseEventType_Unwrapped() const noexcept {
    return static_cast<__MouseBinder_MouseEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseBinder_MouseEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MouseBinder_MouseEventType(int32_t value__) noexcept;

  /// @brief Field ButtonDown value: I32(0)
  static ::HMUI::MouseBinder_MouseEventType const ButtonDown;

  /// @brief Field ButtonPress value: I32(2)
  static ::HMUI::MouseBinder_MouseEventType const ButtonPress;

  /// @brief Field ButtonUp value: I32(1)
  static ::HMUI::MouseBinder_MouseEventType const ButtonUp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16023 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::MouseBinder_MouseEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::MouseBinder_MouseEventType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.MouseBinder/ButtonType
struct CORDL_TYPE MouseBinder_ButtonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MouseBinder_ButtonType_Unwrapped
  enum struct __MouseBinder_ButtonType_Unwrapped : int32_t {
    __E_Primary = static_cast<int32_t>(0x0),
    __E_Secondary = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MouseBinder_ButtonType_Unwrapped() const noexcept {
    return static_cast<__MouseBinder_ButtonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseBinder_ButtonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MouseBinder_ButtonType(int32_t value__) noexcept;

  /// @brief Field Middle value: I32(2)
  static ::HMUI::MouseBinder_ButtonType const Middle;

  /// @brief Field Primary value: I32(0)
  static ::HMUI::MouseBinder_ButtonType const Primary;

  /// @brief Field Secondary value: I32(1)
  static ::HMUI::MouseBinder_ButtonType const Secondary;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16024 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::MouseBinder_ButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::MouseBinder_ButtonType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.MouseBinder
class CORDL_TYPE MouseBinder : public ::System::Object {
public:
  // Declarations
  using ButtonType = ::HMUI::MouseBinder_ButtonType;

  using MouseEventType = ::HMUI::MouseBinder_MouseEventType;

  /// @brief Field _buttonBindings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBindings, put = __cordl_internal_set__buttonBindings)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* _buttonBindings;

  /// @brief Field <enabled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled_k__BackingField, put = __cordl_internal_set__enabled_k__BackingField)) bool _enabled_k__BackingField;

  /// @brief Field _scrollBindings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollBindings,
                      put = __cordl_internal_set__scrollBindings)) ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* _scrollBindings;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  /// @brief Method AddButtonBinding, addr 0x39ee22c, size 0xf4, virtual false, abstract: false, final false
  inline void AddButtonBinding(::HMUI::MouseBinder_ButtonType buttonType, ::HMUI::MouseBinder_MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action);

  /// @brief Method AddButtonBindings, addr 0x39ee0b8, size 0x174, virtual false, abstract: false, final false
  inline void
  AddButtonBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>* bindingData);

  /// @brief Method AddScrollBinding, addr 0x39edfbc, size 0xa4, virtual false, abstract: false, final false
  inline void AddScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action);

  /// @brief Method AddScrollBindings, addr 0x39ede80, size 0x13c, virtual false, abstract: false, final false
  inline void AddScrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* bindingData);

  /// @brief Method ClearBindings, addr 0x39ee3d0, size 0xa4, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Init, addr 0x39eddbc, size 0xc4, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method ManualUpdate, addr 0x39ee474, size 0x384, virtual false, abstract: false, final false
  inline void ManualUpdate();

  static inline ::HMUI::MouseBinder* New_ctor();

  /// @brief Method RemoveButtonBinding, addr 0x39ee320, size 0xb0, virtual false, abstract: false, final false
  inline void RemoveButtonBinding(::HMUI::MouseBinder_ButtonType buttonType, ::HMUI::MouseBinder_MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action);

  /// @brief Method RemoveScrollBinding, addr 0x39ee060, size 0x58, virtual false, abstract: false, final false
  inline void RemoveScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* const&
  __cordl_internal_get__buttonBindings() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>*&
  __cordl_internal_get__buttonBindings();

  constexpr bool const& __cordl_internal_get__enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enabled_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* const& __cordl_internal_get__scrollBindings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*& __cordl_internal_get__scrollBindings();

  constexpr void __cordl_internal_set__buttonBindings(
      ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* value);

  constexpr void __cordl_internal_set__enabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__scrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* value);

  /// @brief Method .ctor, addr 0x39edda0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x39edd8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method set_enabled, addr 0x39edd94, size 0xc, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseBinder(MouseBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseBinder(MouseBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16025 };

  /// @brief Field <enabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____enabled_k__BackingField;

  /// @brief Field _scrollBindings, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* ____scrollBindings;

  /// @brief Field _buttonBindings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* ____buttonBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::MouseBinder, ____enabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::MouseBinder, ____scrollBindings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::MouseBinder, ____buttonBindings) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::MouseBinder, 0x28>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder_ButtonType, "HMUI", "MouseBinder/ButtonType");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder_MouseEventType, "HMUI", "MouseBinder/MouseEventType");
NEED_NO_BOX(::HMUI::MouseBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder*, "HMUI", "MouseBinder");
