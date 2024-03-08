#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ToggleGroup)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class __ToggleGroup____c;
}
// Forward declare root types
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class __ToggleGroup____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ToggleGroup);
MARK_REF_PTR_T(::UnityEngine::UI::__ToggleGroup____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::ToggleGroup::<>c*
class CORDL_TYPE __ToggleGroup____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UI::__ToggleGroup____c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0))::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>* __9__13_0;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>* __9__14_0;

  static inline ::UnityEngine::UI::__ToggleGroup____c* New_ctor();

  /// @brief Method <ActiveToggles>b__14_0, addr 0x2ef3c7c, size 0x18, virtual false, abstract: false, final false
  inline bool _ActiveToggles_b__14_0(::UnityEngine::UI::Toggle* x);

  /// @brief Method <AnyTogglesOn>b__13_0, addr 0x2ef3c64, size 0x18, virtual false, abstract: false, final false
  inline bool _AnyTogglesOn_b__13_0(::UnityEngine::UI::Toggle* x);

  /// @brief Method .ctor, addr 0x2ef3c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::__ToggleGroup____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>* getStaticF___9__13_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>* getStaticF___9__14_0();

  static inline void setStaticF___9(::UnityEngine::UI::__ToggleGroup____c* value);

  static inline void setStaticF___9__13_0(::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  static inline void setStaticF___9__14_0(::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ToggleGroup____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ToggleGroup____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ToggleGroup____c(__ToggleGroup____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ToggleGroup____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ToggleGroup____c(__ToggleGroup____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__ToggleGroup____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::ToggleGroup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ToggleGroup*
class CORDL_TYPE ToggleGroup : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using __c = ::UnityEngine::UI::__ToggleGroup____c;

  __declspec(property(get = get_allowSwitchOff, put = set_allowSwitchOff)) bool allowSwitchOff;

  /// @brief Field m_AllowSwitchOff, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowSwitchOff, put = __cordl_internal_set_m_AllowSwitchOff)) bool m_AllowSwitchOff;

  /// @brief Field m_Toggles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggles, put = __cordl_internal_set_m_Toggles))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>* m_Toggles;

  /// @brief Method ActiveToggles, addr 0x2ef3984, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UI::Toggle>>* ActiveToggles();

  /// @brief Method AnyTogglesOn, addr 0x2ef359c, size 0x13c, virtual false, abstract: false, final false
  inline bool AnyTogglesOn();

  /// @brief Method EnsureValidState, addr 0x2ef2c3c, size 0x3ec, virtual false, abstract: false, final false
  inline void EnsureValidState();

  /// @brief Method GetFirstActiveToggle, addr 0x2ef3a80, size 0x88, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Toggle> GetFirstActiveToggle();

  static inline ::UnityEngine::UI::ToggleGroup* New_ctor();

  /// @brief Method NotifyToggleOn, addr 0x2ef3470, size 0x10c, virtual false, abstract: false, final false
  inline void NotifyToggleOn(::UnityEngine::UI::Toggle* toggle, bool sendCallback);

  /// @brief Method OnEnable, addr 0x2ef3810, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterToggle, addr 0x2ef339c, size 0xd4, virtual false, abstract: false, final false
  inline void RegisterToggle(::UnityEngine::UI::Toggle* toggle);

  /// @brief Method SetAllTogglesOff, addr 0x2ef3b08, size 0xf0, virtual false, abstract: false, final false
  inline void SetAllTogglesOff(bool sendCallback);

  /// @brief Method Start, addr 0x2ef37f4, size 0x1c, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterToggle, addr 0x2ef330c, size 0x90, virtual false, abstract: false, final false
  inline void UnregisterToggle(::UnityEngine::UI::Toggle* toggle);

  /// @brief Method ValidateToggleIsInGroup, addr 0x2ef382c, size 0x158, virtual false, abstract: false, final false
  inline void ValidateToggleIsInGroup(::UnityEngine::UI::Toggle* toggle);

  constexpr bool const& __cordl_internal_get_m_AllowSwitchOff() const;

  constexpr bool& __cordl_internal_get_m_AllowSwitchOff();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>*& __cordl_internal_get_m_Toggles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>*> const& __cordl_internal_get_m_Toggles() const;

  constexpr void __cordl_internal_set_m_AllowSwitchOff(bool value);

  constexpr void __cordl_internal_set_m_Toggles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method .ctor, addr 0x2ef3778, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowSwitchOff, addr 0x2ef3764, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowSwitchOff();

  /// @brief Method set_allowSwitchOff, addr 0x2ef376c, size 0xc, virtual false, abstract: false, final false
  inline void set_allowSwitchOff(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleGroup(ToggleGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleGroup(ToggleGroup const&) = delete;

  /// @brief Field m_AllowSwitchOff, offset: 0x18, size: 0x1, def value: None
  bool ___m_AllowSwitchOff;

  /// @brief Field m_Toggles, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>* ___m_Toggles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ToggleGroup, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ToggleGroup, ___m_AllowSwitchOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ToggleGroup, ___m_Toggles) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ToggleGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ToggleGroup*, "UnityEngine.UI", "ToggleGroup");
NEED_NO_BOX(::UnityEngine::UI::__ToggleGroup____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__ToggleGroup____c*, "UnityEngine.UI", "ToggleGroup/<>c");
