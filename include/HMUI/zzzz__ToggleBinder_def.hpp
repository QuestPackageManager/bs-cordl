#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToggleBinder)
namespace HMUI {
class __ToggleBinder____c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace HMUI {
class ToggleBinder;
}
namespace HMUI {
class __ToggleBinder____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ToggleBinder);
MARK_REF_PTR_T(::HMUI::__ToggleBinder____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13521))
// CS Name: ::ToggleBinder::<>c__DisplayClass7_0*
class CORDL_TYPE __ToggleBinder____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __get_enabled, put = __set_enabled)) bool enabled;

  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __get_action, put = __set_action))::System::Action* action;

  constexpr bool& __get_enabled();

  constexpr bool const& __get_enabled() const;

  constexpr void __set_enabled(bool value);

  constexpr ::System::Action*& __get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_action() const;

  constexpr void __set_action(::System::Action* value);

  static inline ::HMUI::__ToggleBinder____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor, addr 0x211aa50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <AddBinding>b__0, addr 0x211b098, size 0x3c, virtual false, abstract: false, final false
  inline void _AddBinding_b__0(bool b);

  // Ctor Parameters [CppParam { name: "", ty: "__ToggleBinder____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ToggleBinder____c__DisplayClass7_0(__ToggleBinder____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ToggleBinder____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ToggleBinder____c__DisplayClass7_0(__ToggleBinder____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ToggleBinder____c__DisplayClass7_0();

public:
  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field action, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ToggleBinder____c__DisplayClass7_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::__ToggleBinder____c__DisplayClass7_0, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__ToggleBinder____c__DisplayClass7_0, ___action) == 0x18, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::ToggleBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13522))
// CS Name: ::HMUI::ToggleBinder*
class CORDL_TYPE ToggleBinder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::HMUI::__ToggleBinder____c__DisplayClass7_0;

  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(get = __get__bindings,
                      put = __set__bindings))::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>* _bindings;

  /// @brief Field _enabled, offset 0x18, size 0x1
  __declspec(property(get = __get__enabled, put = __set__enabled)) bool _enabled;

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>*& __get__bindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>*> const&
  __get__bindings() const;

  constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>* value);

  constexpr bool& __get__enabled();

  constexpr bool const& __get__enabled() const;

  constexpr void __set__enabled(bool value);

  static inline ::HMUI::ToggleBinder* New_ctor();

  /// @brief Method .ctor, addr 0x211a624, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HMUI::ToggleBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method .ctor, addr 0x211a6bc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method Init, addr 0x211a648, size 0x74, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method AddBindings, addr 0x211a6f8, size 0x164, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method AddBinding, addr 0x211a85c, size 0xd8, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Toggle* toggle, ::System::Action_1<bool>* action);

  /// @brief Method AddBinding, addr 0x211a934, size 0x11c, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Toggle* toggle, bool enabled, ::System::Action* action);

  /// @brief Method ClearBindings, addr 0x211aa58, size 0x234, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Disable, addr 0x211ac8c, size 0x204, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x211ae90, size 0x208, virtual false, abstract: false, final false
  inline void Enable();

  // Ctor Parameters [CppParam { name: "", ty: "ToggleBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleBinder(ToggleBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleBinder(ToggleBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleBinder();

public:
  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Toggle*, ::UnityEngine::Events::UnityAction_1<bool>*>*>* ____bindings;

  /// @brief Field _enabled, offset: 0x18, size: 0x1, def value: None
  bool ____enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ToggleBinder, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::ToggleBinder, ____bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ToggleBinder, ____enabled) == 0x18, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ToggleBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleBinder*, "HMUI", "ToggleBinder");
NEED_NO_BOX(::HMUI::__ToggleBinder____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ToggleBinder____c__DisplayClass7_0*, "HMUI", "ToggleBinder/<>c__DisplayClass7_0");
