#pragma once
// IWYU pragma private; include "HMUI/ToggleBinder.hpp"
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
// CS Name: ::ToggleBinder::<>c__DisplayClass7_0*
class CORDL_TYPE __ToggleBinder____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action))::System::Action* action;

  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  static inline ::HMUI::__ToggleBinder____c__DisplayClass7_0* New_ctor();

  /// @brief Method <AddBinding>b__0, addr 0x252b168, size 0x3c, virtual false, abstract: false, final false
  inline void _AddBinding_b__0(bool b);

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_action() const;

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr void __cordl_internal_set_action(::System::Action* value);

  constexpr void __cordl_internal_set_enabled(bool value);

  /// @brief Method .ctor, addr 0x252ab20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ToggleBinder____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ToggleBinder____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ToggleBinder____c__DisplayClass7_0(__ToggleBinder____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ToggleBinder____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ToggleBinder____c__DisplayClass7_0(__ToggleBinder____c__DisplayClass7_0 const&) = delete;

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
// CS Name: ::HMUI::ToggleBinder*
class CORDL_TYPE ToggleBinder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::HMUI::__ToggleBinder____c__DisplayClass7_0;

  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bindings,
      put = __cordl_internal_set__bindings))::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* _bindings;

  /// @brief Field _enabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled)) bool _enabled;

  /// @brief Method AddBinding, addr 0x252a92c, size 0xd8, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Toggle* toggle, ::System::Action_1<bool>* action);

  /// @brief Method AddBinding, addr 0x252aa04, size 0x11c, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Toggle* toggle, bool enabled, ::System::Action* action);

  /// @brief Method AddBindings, addr 0x252a7c8, size 0x164, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method ClearBindings, addr 0x252ab28, size 0x234, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Disable, addr 0x252ad5c, size 0x204, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x252af60, size 0x208, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Init, addr 0x252a718, size 0x74, virtual false, abstract: false, final false
  inline void Init();

  static inline ::HMUI::ToggleBinder* New_ctor();

  static inline ::HMUI::ToggleBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::System::Action_1<bool>*>*>* bindingData);

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>*& __cordl_internal_get__bindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>*> const&
  __cordl_internal_get__bindings() const;

  constexpr bool const& __cordl_internal_get__enabled() const;

  constexpr bool& __cordl_internal_get__enabled();

  constexpr void __cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* value);

  constexpr void __cordl_internal_set__enabled(bool value);

  /// @brief Method .ctor, addr 0x252a6f4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x252a78c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::System::Action_1<bool>*>*>* bindingData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleBinder(ToggleBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleBinder(ToggleBinder const&) = delete;

  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* ____bindings;

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
