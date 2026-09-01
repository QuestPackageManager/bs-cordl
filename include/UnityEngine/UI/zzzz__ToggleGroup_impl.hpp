#pragma once
// IWYU pragma private; include "UnityEngine\UI\ToggleGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup___c::*)()>(&::UnityEngine::UI::ToggleGroup___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e10d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup___c._AnyTogglesOn_b__13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ToggleGroup___c::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::ToggleGroup___c::_AnyTogglesOn_b__13_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e10d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup___c*>(), { "<AnyTogglesOn>b__13_0", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup___c._ActiveToggles_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ToggleGroup___c::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::ToggleGroup___c::_ActiveToggles_b__14_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e10d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup___c*>(), { "<ActiveToggles>b__14_0", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::ToggleGroup___c::setStaticF___9(::UnityEngine::UI::ToggleGroup___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::ToggleGroup___c*, "<>9", ::UnityEngine::UI::ToggleGroup___c*>(std::forward<::UnityEngine::UI::ToggleGroup___c*>(value));
}
inline ::UnityEngine::UI::ToggleGroup___c* UnityEngine::UI::ToggleGroup___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::ToggleGroup___c*, "<>9", ::UnityEngine::UI::ToggleGroup___c*>();
}
inline void UnityEngine::UI::ToggleGroup___c::setStaticF___9__13_0(::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>*, "<>9__13_0", ::UnityEngine::UI::ToggleGroup___c*>(
      std::forward<::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>* UnityEngine::UI::ToggleGroup___c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::UI::Toggle>>*, "<>9__13_0", ::UnityEngine::UI::ToggleGroup___c*>();
}
inline void UnityEngine::UI::ToggleGroup___c::setStaticF___9__14_0(::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>*, "<>9__14_0", ::UnityEngine::UI::ToggleGroup___c*>(
      std::forward<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>* UnityEngine::UI::ToggleGroup___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::Toggle>, bool>*, "<>9__14_0", ::UnityEngine::UI::ToggleGroup___c*>();
}
inline void UnityEngine::UI::ToggleGroup___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::ToggleGroup___c::_AnyTogglesOn_b__13_0(::UnityEngine::UI::Toggle* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup___c*>(), { "<AnyTogglesOn>b__13_0", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool UnityEngine::UI::ToggleGroup___c::_ActiveToggles_b__14_0(::UnityEngine::UI::Toggle* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup___c*>(), { "<ActiveToggles>b__14_0", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::UI::ToggleGroup___c* UnityEngine::UI::ToggleGroup___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ToggleGroup___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ToggleGroup___c::ToggleGroup___c() {}
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.get_allowSwitchOff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::get_allowSwitchOff)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e10844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "get_allowSwitchOff", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.set_allowSwitchOff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)(bool)>(&::UnityEngine::UI::ToggleGroup::set_allowSwitchOff)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "set_allowSwitchOff", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e10854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e108cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { ::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e108d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { ::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.ValidateToggleIsInGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e108d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "ValidateToggleIsInGroup", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.NotifyToggleOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*, bool)>(&::UnityEngine::UI::ToggleGroup::NotifyToggleOn)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e10520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "NotifyToggleOn", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.UnregisterToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::ToggleGroup::UnregisterToggle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e10398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "UnregisterToggle", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.RegisterToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)(::UnityEngine::UI::Toggle*)>(&::UnityEngine::UI::ToggleGroup::RegisterToggle)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6e1043c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "RegisterToggle", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.EnsureValidState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::EnsureValidState)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x6e0fcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "EnsureValidState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.AnyTogglesOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::AnyTogglesOn)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e10674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "AnyTogglesOn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.ActiveToggles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UI::Toggle>>* (::UnityEngine::UI::ToggleGroup::*)()>(
    &::UnityEngine::UI::ToggleGroup::ActiveToggles)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6e10a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "ActiveToggles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.GetFirstActiveToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Toggle> (::UnityEngine::UI::ToggleGroup::*)()>(&::UnityEngine::UI::ToggleGroup::GetFirstActiveToggle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e10b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "GetFirstActiveToggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ToggleGroup.SetAllTogglesOff
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::ToggleGroup::*)(bool)>(&::UnityEngine::UI::ToggleGroup::SetAllTogglesOff)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e10bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "SetAllTogglesOff", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UI::ToggleGroup::__cordl_internal_get_m_AllowSwitchOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowSwitchOff;
}
constexpr bool const& UnityEngine::UI::ToggleGroup::__cordl_internal_get_m_AllowSwitchOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowSwitchOff;
}
constexpr void UnityEngine::UI::ToggleGroup::__cordl_internal_set_m_AllowSwitchOff(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowSwitchOff = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>*& UnityEngine::UI::ToggleGroup::__cordl_internal_get_m_Toggles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>* const& UnityEngine::UI::ToggleGroup::__cordl_internal_get_m_Toggles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggles;
}
constexpr void UnityEngine::UI::ToggleGroup::__cordl_internal_set_m_Toggles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Toggles = value;
}
inline bool UnityEngine::UI::ToggleGroup::get_allowSwitchOff() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "get_allowSwitchOff", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::ToggleGroup::set_allowSwitchOff(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "set_allowSwitchOff", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::ToggleGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ToggleGroup::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ToggleGroup::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::ToggleGroup::ValidateToggleIsInGroup(::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "ValidateToggleIsInGroup", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void UnityEngine::UI::ToggleGroup::NotifyToggleOn(::UnityEngine::UI::Toggle* toggle, bool sendCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "NotifyToggleOn", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle, sendCallback);
}
inline void UnityEngine::UI::ToggleGroup::UnregisterToggle(::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "UnregisterToggle", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void UnityEngine::UI::ToggleGroup::RegisterToggle(::UnityEngine::UI::Toggle* toggle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "RegisterToggle", {}, { ::i2c::type_of<::UnityEngine::UI::Toggle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void UnityEngine::UI::ToggleGroup::EnsureValidState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "EnsureValidState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UI::ToggleGroup::AnyTogglesOn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "AnyTogglesOn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UI::Toggle>>* UnityEngine::UI::ToggleGroup::ActiveToggles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "ActiveToggles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UI::Toggle>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Toggle> UnityEngine::UI::ToggleGroup::GetFirstActiveToggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "GetFirstActiveToggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Toggle>>(this, ___internal_method);
}
inline void UnityEngine::UI::ToggleGroup::SetAllTogglesOff(bool sendCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::ToggleGroup*>(), { "SetAllTogglesOff", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendCallback);
}
inline ::UnityEngine::UI::ToggleGroup* UnityEngine::UI::ToggleGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::ToggleGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ToggleGroup::ToggleGroup() {}
