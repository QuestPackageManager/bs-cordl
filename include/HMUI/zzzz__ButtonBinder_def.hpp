#pragma once
// IWYU pragma private; include "HMUI/ButtonBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ButtonBinder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace HMUI {
class ButtonBinder;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonBinder);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ButtonBinder
class CORDL_TYPE ButtonBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bindings,
      put = __cordl_internal_set__bindings)) ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>* _bindings;

  /// @brief Method AddBinding, addr 0x39ea150, size 0x148, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Button* button, ::System::Action* action);

  /// @brief Method AddBindings, addr 0x39ea2cc, size 0x164, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);

  /// @brief Method ClearBindings, addr 0x39ea430, size 0x220, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Init, addr 0x39ea0a0, size 0x74, virtual false, abstract: false, final false
  inline void Init();

  static inline ::HMUI::ButtonBinder* New_ctor();

  static inline ::HMUI::ButtonBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);

  static inline ::HMUI::ButtonBinder* New_ctor(::UnityEngine::UI::Button* button, ::System::Action* action);

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>* const& __cordl_internal_get__bindings() const;

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>*& __cordl_internal_get__bindings();

  constexpr void __cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>* value);

  /// @brief Method .ctor, addr 0x39ea084, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x39ea298, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);

  /// @brief Method .ctor, addr 0x39ea114, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UI::Button* button, ::System::Action* action);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonBinder(ButtonBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonBinder(ButtonBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16013 };

  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>* ____bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ButtonBinder, ____bindings) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ButtonBinder, 0x18>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonBinder*, "HMUI", "ButtonBinder");
