#pragma once
// IWYU pragma private; include "HMUI/InputFieldViewChangeBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputFieldViewChangeBinder)
namespace HMUI {
class InputFieldView;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
// Forward declare root types
namespace HMUI {
class InputFieldViewChangeBinder;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InputFieldViewChangeBinder);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InputFieldViewChangeBinder
class CORDL_TYPE InputFieldViewChangeBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindings, put = __cordl_internal_set__bindings)) ::System::Collections::Generic::List_1<
      ::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>* _bindings;

  /// @brief Field _enabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled)) bool _enabled;

  /// @brief Method AddBinding, addr 0x39e9f68, size 0xdc, virtual false, abstract: false, final false
  inline void AddBinding(::HMUI::InputFieldView* inputField, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>* action);

  /// @brief Method AddBindings, addr 0x39e9e04, size 0x164, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>*>* bindings);

  /// @brief Method ClearBindings, addr 0x39ea044, size 0x234, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Disable, addr 0x39ea278, size 0x1fc, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x39ea474, size 0x200, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Init, addr 0x39e9d90, size 0x74, virtual false, abstract: false, final false
  inline void Init();

  static inline ::HMUI::InputFieldViewChangeBinder* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>* const&
  __cordl_internal_get__bindings() const;

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>*&
  __cordl_internal_get__bindings();

  constexpr bool const& __cordl_internal_get__enabled() const;

  constexpr bool& __cordl_internal_get__enabled();

  constexpr void __cordl_internal_set__bindings(
      ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>* value);

  constexpr void __cordl_internal_set__enabled(bool value);

  /// @brief Method .ctor, addr 0x39e9d6c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldViewChangeBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewChangeBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldViewChangeBinder(InputFieldViewChangeBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewChangeBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldViewChangeBinder(InputFieldViewChangeBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16026 };

  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>* ____bindings;

  /// @brief Field _enabled, offset: 0x18, size: 0x1, def value: None
  bool ____enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InputFieldViewChangeBinder, ____bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewChangeBinder, ____enabled) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldViewChangeBinder, 0x20>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InputFieldViewChangeBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldViewChangeBinder*, "HMUI", "InputFieldViewChangeBinder");
