#pragma once
// IWYU pragma private; include "HMUI\InputFieldViewChangeBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__InputFieldViewChangeBinder_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)()>(&::HMUI::InputFieldViewChangeBinder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58766cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)()>(&::HMUI::InputFieldViewChangeBinder::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58766d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder.AddBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>*>*)>(
    &::HMUI::InputFieldViewChangeBinder::AddBindings)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x587674c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(),
            { "AddBindings",
              {},
              { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder.AddBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)(::HMUI::InputFieldView*, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>*)>(
    &::HMUI::InputFieldViewChangeBinder::AddBinding)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5876888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(),
                                                { "AddBinding", {}, { ::i2c::type_of<::HMUI::InputFieldView*>(), ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)()>(&::HMUI::InputFieldViewChangeBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x587696c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "ClearBindings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)()>(&::HMUI::InputFieldViewChangeBinder::Disable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5876b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewChangeBinder.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewChangeBinder::*)()>(&::HMUI::InputFieldViewChangeBinder::Enable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5876d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>*&
HMUI::InputFieldViewChangeBinder::__cordl_internal_get__bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>* const&
HMUI::InputFieldViewChangeBinder::__cordl_internal_get__bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr void HMUI::InputFieldViewChangeBinder::__cordl_internal_set__bindings(
    ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::UnityEngine::Events::UnityAction_1<::UnityW<::HMUI::InputFieldView>>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindings = value;
}
constexpr bool& HMUI::InputFieldViewChangeBinder::__cordl_internal_get__enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled;
}
constexpr bool const& HMUI::InputFieldViewChangeBinder::__cordl_internal_get__enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabled;
}
constexpr void HMUI::InputFieldViewChangeBinder::__cordl_internal_set__enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabled = value;
}
inline void HMUI::InputFieldViewChangeBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewChangeBinder::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewChangeBinder::AddBindings(
    ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>*>* bindings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(),
          { "AddBindings",
            {},
            { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::HMUI::InputFieldView>, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindings);
}
inline void HMUI::InputFieldViewChangeBinder::AddBinding(::HMUI::InputFieldView* inputField, ::System::Action_1<::UnityW<::HMUI::InputFieldView>>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(),
                                              { "AddBinding", {}, { ::i2c::type_of<::HMUI::InputFieldView*>(), ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::InputFieldView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputField, action);
}
inline void HMUI::InputFieldViewChangeBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "ClearBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewChangeBinder::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewChangeBinder::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewChangeBinder*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::InputFieldViewChangeBinder* HMUI::InputFieldViewChangeBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldViewChangeBinder*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldViewChangeBinder::InputFieldViewChangeBinder() {}
