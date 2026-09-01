#pragma once
// IWYU pragma private; include "HMUI\ButtonBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonBinder::*)()>(&::HMUI::ButtonBinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5875e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonBinder::*)(::UnityEngine::UI::Button*, ::System::Action*)>(&::HMUI::ButtonBinder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5875ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::HMUI::ButtonBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>*)>(&::HMUI::ButtonBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5876038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonBinder.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonBinder::*)()>(&::HMUI::ButtonBinder::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5875e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonBinder.AddBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonBinder::*)(
    ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>*)>(&::HMUI::ButtonBinder::AddBindings)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5876060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(),
                            { "AddBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonBinder.AddBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonBinder::*)(::UnityEngine::UI::Button*, ::System::Action*)>(&::HMUI::ButtonBinder::AddBinding)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5875ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { "AddBinding", {}, { ::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonBinder::*)()>(&::HMUI::ButtonBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x587619c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { "ClearBindings", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>*& HMUI::ButtonBinder::__cordl_internal_get__bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>* const&
HMUI::ButtonBinder::__cordl_internal_get__bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr void
HMUI::ButtonBinder::__cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::UnityEngine::Events::UnityAction*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindings = value;
}
inline void HMUI::ButtonBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonBinder::_ctor(::UnityEngine::UI::Button* button, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, action);
}
inline void HMUI::ButtonBinder::_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>* bindingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::ButtonBinder::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonBinder::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>* bindingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(),
                          { "AddBindings", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::ButtonBinder::AddBinding(::UnityEngine::UI::Button* button, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { "AddBinding", {}, { ::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, action);
}
inline void HMUI::ButtonBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonBinder*>(), { "ClearBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ButtonBinder* HMUI::ButtonBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ButtonBinder*>());
}
inline ::HMUI::ButtonBinder* HMUI::ButtonBinder::New_ctor(::UnityEngine::UI::Button* button, ::System::Action* action) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ButtonBinder*>(button, action));
}
inline ::HMUI::ButtonBinder* HMUI::ButtonBinder::New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::Button>, ::System::Action*>*>* bindingData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ButtonBinder*>(bindingData));
}
// Ctor Parameters []
constexpr ::HMUI::ButtonBinder::ButtonBinder() {}
