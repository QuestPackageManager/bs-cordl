#pragma once
// IWYU pragma private; include "HMUI/ToggleBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ToggleBinder)
namespace HMUI {
class ToggleBinder___c__DisplayClass7_0;
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
class ToggleBinder___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ToggleBinder);
MARK_REF_PTR_T(::HMUI::ToggleBinder___c__DisplayClass7_0);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ToggleBinder/<>c__DisplayClass7_0
class CORDL_TYPE ToggleBinder___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Action* action;

  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  static inline ::HMUI::ToggleBinder___c__DisplayClass7_0* New_ctor();

  /// @brief Method <AddBinding>b__0, addr 0x39ec544, size 0x3c, virtual false, abstract: false, final false
  inline void _AddBinding_b__0(bool b);

  constexpr ::System::Action* const& __cordl_internal_get_action() const;

  constexpr ::System::Action*& __cordl_internal_get_action();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr void __cordl_internal_set_action(::System::Action* value);

  constexpr void __cordl_internal_set_enabled(bool value);

  /// @brief Method .ctor, addr 0x39ebf0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleBinder___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleBinder___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleBinder___c__DisplayClass7_0(ToggleBinder___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleBinder___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleBinder___c__DisplayClass7_0(ToggleBinder___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16032 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field action, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ToggleBinder___c__DisplayClass7_0, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ToggleBinder___c__DisplayClass7_0, ___action) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ToggleBinder___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ToggleBinder
class CORDL_TYPE ToggleBinder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::HMUI::ToggleBinder___c__DisplayClass7_0;

  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bindings,
      put = __cordl_internal_set__bindings)) ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* _bindings;

  /// @brief Field _enabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__enabled, put = __cordl_internal_set__enabled)) bool _enabled;

  /// @brief Method AddBinding, addr 0x39ebd18, size 0xdc, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Toggle* toggle, ::System::Action_1<bool>* action);

  /// @brief Method AddBinding, addr 0x39ebdf4, size 0x118, virtual false, abstract: false, final false
  inline void AddBinding(::UnityEngine::UI::Toggle* toggle, bool enabled, ::System::Action* action);

  /// @brief Method AddBindings, addr 0x39ebbb4, size 0x164, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::System::Action_1<bool>*>*>* bindingData);

  /// @brief Method ClearBindings, addr 0x39ebf14, size 0x234, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Disable, addr 0x39ec148, size 0x1fc, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x39ec344, size 0x200, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Init, addr 0x39ebb04, size 0x74, virtual false, abstract: false, final false
  inline void Init();

  static inline ::HMUI::ToggleBinder* New_ctor();

  static inline ::HMUI::ToggleBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::System::Action_1<bool>*>*>* bindingData);

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* const& __cordl_internal_get__bindings() const;

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>*& __cordl_internal_get__bindings();

  constexpr bool const& __cordl_internal_get__enabled() const;

  constexpr bool& __cordl_internal_get__enabled();

  constexpr void __cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* value);

  constexpr void __cordl_internal_set__enabled(bool value);

  /// @brief Method .ctor, addr 0x39ebae0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x39ebb78, size 0x3c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16033 };

  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Toggle>, ::UnityEngine::Events::UnityAction_1<bool>*>*>* ____bindings;

  /// @brief Field _enabled, offset: 0x18, size: 0x1, def value: None
  bool ____enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ToggleBinder, ____bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::ToggleBinder, ____enabled) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ToggleBinder, 0x20>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ToggleBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleBinder*, "HMUI", "ToggleBinder");
NEED_NO_BOX(::HMUI::ToggleBinder___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ToggleBinder___c__DisplayClass7_0*, "HMUI", "ToggleBinder/<>c__DisplayClass7_0");
