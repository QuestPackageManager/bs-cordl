#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace HMUI {
struct __MouseBinder__ButtonType;
}
namespace HMUI {
struct __MouseBinder__MouseEventType;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace System {
template <typename T1, typename T2, typename T3> class Tuple_3;
}
// Forward declare root types
namespace HMUI {
struct __MouseBinder__ButtonType;
}
namespace HMUI {
struct __MouseBinder__MouseEventType;
}
namespace HMUI {
class MouseBinder;
}
// Write type traits
MARK_VAL_T(::HMUI::__MouseBinder__ButtonType);
MARK_VAL_T(::HMUI::__MouseBinder__MouseEventType);
MARK_REF_PTR_T(::HMUI::MouseBinder);
// Type: ::MouseEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13638))
// CS Name: ::MouseBinder::MouseEventType
struct CORDL_TYPE __MouseBinder__MouseEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MouseBinder__MouseEventType_Unwrapped
  enum struct ____MouseBinder__MouseEventType_Unwrapped : int32_t {
    __E_ButtonDown = static_cast<int32_t>(0x0),
    __E_ButtonUp = static_cast<int32_t>(0x1),
    __E_ButtonPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MouseBinder__MouseEventType_Unwrapped() const noexcept {
    return static_cast<____MouseBinder__MouseEventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MouseBinder__MouseEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseBinder__MouseEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ButtonDown value: static_cast<int32_t>(0x0)
  static ::HMUI::__MouseBinder__MouseEventType const ButtonDown;

  /// @brief Field ButtonUp value: static_cast<int32_t>(0x1)
  static ::HMUI::__MouseBinder__MouseEventType const ButtonUp;

  /// @brief Field ButtonPress value: static_cast<int32_t>(0x2)
  static ::HMUI::__MouseBinder__MouseEventType const ButtonPress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__MouseBinder__MouseEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__MouseBinder__MouseEventType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::ButtonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13639))
// CS Name: ::MouseBinder::ButtonType
struct CORDL_TYPE __MouseBinder__ButtonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MouseBinder__ButtonType_Unwrapped
  enum struct ____MouseBinder__ButtonType_Unwrapped : int32_t {
    __E_Primary = static_cast<int32_t>(0x0),
    __E_Secondary = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MouseBinder__ButtonType_Unwrapped() const noexcept {
    return static_cast<____MouseBinder__ButtonType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MouseBinder__ButtonType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseBinder__ButtonType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Primary value: static_cast<int32_t>(0x0)
  static ::HMUI::__MouseBinder__ButtonType const Primary;

  /// @brief Field Secondary value: static_cast<int32_t>(0x1)
  static ::HMUI::__MouseBinder__ButtonType const Secondary;

  /// @brief Field Middle value: static_cast<int32_t>(0x2)
  static ::HMUI::__MouseBinder__ButtonType const Middle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__MouseBinder__ButtonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__MouseBinder__ButtonType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::MouseBinder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13640))
// CS Name: ::HMUI::MouseBinder*
class CORDL_TYPE MouseBinder : public ::System::Object {
public:
  // Declarations
  using ButtonType = ::HMUI::__MouseBinder__ButtonType;

  using MouseEventType = ::HMUI::__MouseBinder__MouseEventType;

  /// @brief Field <enabled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__enabled_k__BackingField, put = __set__enabled_k__BackingField)) bool _enabled_k__BackingField;

  /// @brief Field _scrollBindings, offset 0x18, size 0x8
  __declspec(property(get = __get__scrollBindings, put = __set__scrollBindings))::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* _scrollBindings;

  /// @brief Field _buttonBindings, offset 0x20, size 0x8
  __declspec(property(get = __get__buttonBindings, put = __set__buttonBindings))::System::Collections::Generic::List_1<
      ::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>* _buttonBindings;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  constexpr bool& __get__enabled_k__BackingField();

  constexpr bool const& __get__enabled_k__BackingField() const;

  constexpr void __set__enabled_k__BackingField(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*& __get__scrollBindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*> const& __get__scrollBindings() const;

  constexpr void __set__scrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>*&
  __get__buttonBindings();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>*> const&
  __get__buttonBindings() const;

  constexpr void __set__buttonBindings(
      ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>* value);

  /// @brief Method get_enabled addr 0x1fc3f3c size 0x8 virtual false final false
  inline bool get_enabled();

  /// @brief Method set_enabled addr 0x1fc3f44 size 0xc virtual false final false
  inline void set_enabled(bool value);

  static inline ::HMUI::MouseBinder* New_ctor();

  /// @brief Method .ctor addr 0x1fc3f50 size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method Init addr 0x1fc3f6c size 0xc0 virtual false final false
  inline void Init();

  /// @brief Method AddScrollBindings addr 0x1fc402c size 0x13c virtual false final false
  inline void AddScrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* bindingData);

  /// @brief Method AddScrollBinding addr 0x1fc4168 size 0xa8 virtual false final false
  inline void AddScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action);

  /// @brief Method RemoveScrollBinding addr 0x1fc4210 size 0x58 virtual false final false
  inline void RemoveScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action);

  /// @brief Method AddButtonBindings addr 0x1fc4268 size 0x174 virtual false final false
  inline void AddButtonBindings(
      ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>*>* bindingData);

  /// @brief Method AddButtonBinding addr 0x1fc43dc size 0xf8 virtual false final false
  inline void AddButtonBinding(::HMUI::__MouseBinder__ButtonType buttonType, ::HMUI::__MouseBinder__MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action);

  /// @brief Method RemoveButtonBinding addr 0x1fc44d4 size 0xb0 virtual false final false
  inline void RemoveButtonBinding(::HMUI::__MouseBinder__ButtonType buttonType, ::HMUI::__MouseBinder__MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action);

  /// @brief Method ClearBindings addr 0x1fc4584 size 0xa4 virtual false final false
  inline void ClearBindings();

  /// @brief Method ManualUpdate addr 0x1fc4628 size 0x384 virtual false final false
  inline void ManualUpdate();

  // Ctor Parameters [CppParam { name: "", ty: "MouseBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseBinder(MouseBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseBinder(MouseBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseBinder();

public:
  /// @brief Field <enabled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____enabled_k__BackingField;

  /// @brief Field _scrollBindings, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* ____scrollBindings;

  /// @brief Field _buttonBindings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*>>* ____buttonBindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::MouseBinder, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::MouseBinder, ____enabled_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::MouseBinder, ____scrollBindings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::MouseBinder, ____buttonBindings) == 0x20, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__MouseBinder__ButtonType, "HMUI", "MouseBinder/ButtonType");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__MouseBinder__MouseEventType, "HMUI", "MouseBinder/MouseEventType");
NEED_NO_BOX(::HMUI::MouseBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder*, "HMUI", "MouseBinder");
