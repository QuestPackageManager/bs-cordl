#pragma once
// IWYU pragma private; include "HMUI/MouseBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::MouseBinder_MouseEventType::MouseBinder_MouseEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder_MouseEventType::MouseBinder_MouseEventType() {}
constexpr ::HMUI::MouseBinder_MouseEventType HMUI::MouseBinder_MouseEventType::ButtonDown{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::MouseBinder_MouseEventType HMUI::MouseBinder_MouseEventType::ButtonUp{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::MouseBinder_MouseEventType HMUI::MouseBinder_MouseEventType::ButtonPress{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::MouseBinder_ButtonType::MouseBinder_ButtonType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder_ButtonType::MouseBinder_ButtonType() {}
constexpr ::HMUI::MouseBinder_ButtonType HMUI::MouseBinder_ButtonType::Primary{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::MouseBinder_ButtonType HMUI::MouseBinder_ButtonType::Secondary{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::MouseBinder_ButtonType HMUI::MouseBinder_ButtonType::Middle{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::MouseBinder.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587978c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(bool)>(&::HMUI::MouseBinder::set_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5879794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587979c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58797a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*)>(
    &::HMUI::MouseBinder::AddScrollBindings)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5879864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(),
                                                { "AddScrollBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::HMUI::MouseBinder::AddScrollBinding)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5879968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "AddScrollBinding", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveScrollBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::HMUI::MouseBinder::RemoveScrollBinding)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5879a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "RemoveScrollBinding", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>*)>(
    &::HMUI::MouseBinder::AddButtonBindings)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5879a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::MouseBinder*>(),
            { "AddButtonBindings",
              {},
              { ::i2c::type_of<
                  ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*)>(
    &::HMUI::MouseBinder::AddButtonBinding)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5879bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "AddButtonBinding",
                                                                                           {},
                                                                                           { ::i2c::type_of<::HMUI::MouseBinder_ButtonType>(), ::i2c::type_of<::HMUI::MouseBinder_MouseEventType>(),
                                                                                             ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveButtonBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)(::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*)>(
    &::HMUI::MouseBinder::RemoveButtonBinding)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5879cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "RemoveButtonBinding",
                                                                                           {},
                                                                                           { ::i2c::type_of<::HMUI::MouseBinder_ButtonType>(), ::i2c::type_of<::HMUI::MouseBinder_MouseEventType>(),
                                                                                             ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ClearBindings)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5879d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "ClearBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5879dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "ManualUpdate", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::MouseBinder::__cordl_internal_get__enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled_k__BackingField;
}
constexpr bool const& HMUI::MouseBinder::__cordl_internal_get__enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled_k__BackingField;
}
constexpr void HMUI::MouseBinder::__cordl_internal_set__enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabled_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*& HMUI::MouseBinder::__cordl_internal_get__scrollBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollBindings;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* const& HMUI::MouseBinder::__cordl_internal_get__scrollBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollBindings;
}
constexpr void HMUI::MouseBinder::__cordl_internal_set__scrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollBindings = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>*&
HMUI::MouseBinder::__cordl_internal_get__buttonBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBindings;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* const&
HMUI::MouseBinder::__cordl_internal_get__buttonBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBindings;
}
constexpr void HMUI::MouseBinder::__cordl_internal_set__buttonBindings(
    ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBindings = value;
}
inline bool HMUI::MouseBinder::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::MouseBinder::set_enabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::MouseBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::MouseBinder::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::MouseBinder::AddScrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(),
                                              { "AddScrollBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "AddScrollBinding", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void HMUI::MouseBinder::RemoveScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "RemoveScrollBinding", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
inline void HMUI::MouseBinder::AddButtonBindings(
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::MouseBinder*>(),
          { "AddButtonBindings",
            {},
            { ::i2c::type_of<
                ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder_ButtonType, ::HMUI::MouseBinder_MouseEventType, ::UnityEngine::Events::UnityAction*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddButtonBinding(::HMUI::MouseBinder_ButtonType buttonType, ::HMUI::MouseBinder_MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "AddButtonBinding",
                                                                                         {},
                                                                                         { ::i2c::type_of<::HMUI::MouseBinder_ButtonType>(), ::i2c::type_of<::HMUI::MouseBinder_MouseEventType>(),
                                                                                           ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::RemoveButtonBinding(::HMUI::MouseBinder_ButtonType buttonType, ::HMUI::MouseBinder_MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "RemoveButtonBinding",
                                                                                         {},
                                                                                         { ::i2c::type_of<::HMUI::MouseBinder_ButtonType>(), ::i2c::type_of<::HMUI::MouseBinder_MouseEventType>(),
                                                                                           ::i2c::type_of<::UnityEngine::Events::UnityAction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "ClearBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::MouseBinder::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::MouseBinder*>(), { "ManualUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::MouseBinder* HMUI::MouseBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::MouseBinder*>());
}
// Ctor Parameters []
constexpr ::HMUI::MouseBinder::MouseBinder() {}
