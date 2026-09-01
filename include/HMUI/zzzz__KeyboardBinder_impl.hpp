#pragma once
// IWYU pragma private; include "HMUI\KeyboardBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::KeyboardBinder_KeyBindingType::KeyboardBinder_KeyBindingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::KeyboardBinder_KeyBindingType::KeyboardBinder_KeyBindingType() {}
constexpr ::HMUI::KeyboardBinder_KeyBindingType HMUI::KeyboardBinder_KeyBindingType::KeyDown{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::KeyboardBinder_KeyBindingType HMUI::KeyboardBinder_KeyBindingType::KeyUp{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::KeyboardBinder_KeyBindingType HMUI::KeyboardBinder_KeyBindingType::KeyPress{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::KeyboardBinder.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5876f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)(bool)>(&::HMUI::KeyboardBinder::set_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5876f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5876f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*)>(
    &::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5876fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::HMUI::KeyboardBinder_KeyBindingType>(), ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>*)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58771ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::KeyboardBinder*>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5876fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>*)>(&::HMUI::KeyboardBinder::AddBindings)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5877254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::KeyboardBinder*>(),
            { "AddBindings",
              {},
              { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*)>(
    &::HMUI::KeyboardBinder::AddBinding)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x587707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(),
                            { "AddBinding", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::HMUI::KeyboardBinder_KeyBindingType>(), ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58773a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "ClearBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5877420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "ManualUpdate", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::KeyboardBinder::__cordl_internal_get__enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled_k__BackingField;
}
constexpr bool const& HMUI::KeyboardBinder::__cordl_internal_get__enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled_k__BackingField;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabled_k__BackingField = value;
}
constexpr bool& HMUI::KeyboardBinder::__cordl_internal_get__shouldClearBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldClearBindings;
}
constexpr bool const& HMUI::KeyboardBinder::__cordl_internal_get__shouldClearBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldClearBindings;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__shouldClearBindings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldClearBindings = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>*&
HMUI::KeyboardBinder::__cordl_internal_get__newBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBindings;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* const&
HMUI::KeyboardBinder::__cordl_internal_get__newBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newBindings;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__newBindings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newBindings = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>*&
HMUI::KeyboardBinder::__cordl_internal_get__bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* const&
HMUI::KeyboardBinder::__cordl_internal_get__bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__bindings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::UnityEngine::Events::UnityAction_1<bool>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindings = value;
}
inline bool HMUI::KeyboardBinder::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::KeyboardBinder::set_enabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::KeyboardBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::KeyboardBinder::_ctor(::UnityEngine::KeyCode keycode, ::HMUI::KeyboardBinder_KeyBindingType keyBindingType, ::System::Action_1<bool>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::HMUI::KeyboardBinder_KeyBindingType>(), ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keycode, keyBindingType, action);
}
inline void
HMUI::KeyboardBinder::_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::KeyboardBinder*>(),
          { ".ctor",
            {},
            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::KeyboardBinder::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
HMUI::KeyboardBinder::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::KeyboardBinder*>(),
          { "AddBindings",
            {},
            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::KeyboardBinder::AddBinding(::UnityEngine::KeyCode keyCode, ::HMUI::KeyboardBinder_KeyBindingType keyBindingType, ::System::Action_1<bool>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(),
                          { "AddBinding", {}, { ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::HMUI::KeyboardBinder_KeyBindingType>(), ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyCode, keyBindingType, action);
}
inline void HMUI::KeyboardBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "ClearBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::KeyboardBinder::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::KeyboardBinder*>(), { "ManualUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::KeyboardBinder*>());
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor(::UnityEngine::KeyCode keycode, ::HMUI::KeyboardBinder_KeyBindingType keyBindingType, ::System::Action_1<bool>* action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::KeyboardBinder*>(keycode, keyBindingType, action));
}
inline ::HMUI::KeyboardBinder*
HMUI::KeyboardBinder::New_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode, ::HMUI::KeyboardBinder_KeyBindingType, ::System::Action_1<bool>*>*>* bindingData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::KeyboardBinder*>(bindingData));
}
// Ctor Parameters []
constexpr ::HMUI::KeyboardBinder::KeyboardBinder() {}
