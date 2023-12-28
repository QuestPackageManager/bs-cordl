#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ButtonBinder)
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
// Forward declare root types
namespace HMUI {
class ButtonBinder;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonBinder);
// Type: HMUI::ButtonBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13511))
// CS Name: ::HMUI::ButtonBinder*
class CORDL_TYPE ButtonBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(get = __get__bindings,
                      put = __set__bindings))::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>* _bindings;

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*& __get__bindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*> const&
  __get__bindings() const;

  constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>* value);

  static inline ::HMUI::ButtonBinder* New_ctor();

  /// @brief Method .ctor addr 0x211838c size 0x1c virtual false final false
  inline void _ctor();

  static inline ::HMUI::ButtonBinder* New_ctor(::UnityEngine::UI::Button* button, ::System::Action* action);

  /// @brief Method .ctor addr 0x211841c size 0x3c virtual false final false
  inline void _ctor(::UnityEngine::UI::Button* button, ::System::Action* action);

  static inline ::HMUI::ButtonBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);

  /// @brief Method .ctor addr 0x211851c size 0x34 virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);

  /// @brief Method Init addr 0x21183a8 size 0x74 virtual false final false
  inline void Init();

  /// @brief Method AddBindings addr 0x2118550 size 0x164 virtual false final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);

  /// @brief Method AddBinding addr 0x2118458 size 0xc4 virtual false final false
  inline void AddBinding(::UnityEngine::UI::Button* button, ::System::Action* action);

  /// @brief Method ClearBindings addr 0x21186b4 size 0x220 virtual false final false
  inline void ClearBindings();

  // Ctor Parameters [CppParam { name: "", ty: "ButtonBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonBinder(ButtonBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonBinder(ButtonBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonBinder();

public:
  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>* ____bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonBinder, 0x18>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonBinder*, "HMUI", "ButtonBinder");
