#pragma once
// IWYU pragma private; include "HMUI/InputFieldDataBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__InputFieldDataBinder_def.hpp"
#include "GlobalNamespace/zzzz__IObservableChange_def.hpp"
#include "HMUI/zzzz__InputFieldDataBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/zzzz__Tuple_4_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
template <typename T> inline void HMUI::InputFieldDataBinder___c__3_1<T>::setStaticF___9(::HMUI::InputFieldDataBinder___c__3_1<T>* value) {
  ::cordl_internals::setStaticField<::HMUI::InputFieldDataBinder___c__3_1<T>*, "<>9", ::HMUI::InputFieldDataBinder___c__3_1<T>*>(std::forward<::HMUI::InputFieldDataBinder___c__3_1<T>*>(value));
}
template <typename T> inline ::HMUI::InputFieldDataBinder___c__3_1<T>* HMUI::InputFieldDataBinder___c__3_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::InputFieldDataBinder___c__3_1<T>*, "<>9", ::HMUI::InputFieldDataBinder___c__3_1<T>*>();
}
template <typename T> inline void HMUI::InputFieldDataBinder___c__3_1<T>::setStaticF___9__3_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__3_0", ::HMUI::InputFieldDataBinder___c__3_1<T>*>(std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
template <typename T> inline ::System::Func_2<::StringW, ::StringW>* HMUI::InputFieldDataBinder___c__3_1<T>::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__3_0", ::HMUI::InputFieldDataBinder___c__3_1<T>*>();
}
template <typename T> inline void HMUI::InputFieldDataBinder___c__3_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder___c__3_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::StringW HMUI::InputFieldDataBinder___c__3_1<T>::_AddStringBindings_b__3_0(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder___c__3_1<T>*>(), { "<AddStringBindings>b__3_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template <typename T> inline ::HMUI::InputFieldDataBinder___c__3_1<T>* HMUI::InputFieldDataBinder___c__3_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldDataBinder___c__3_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::InputFieldDataBinder___c__3_1<T>::InputFieldDataBinder___c__3_1() {}
template <typename T0, typename T1> constexpr ::System::Func_2<::StringW, T1>*& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toValueConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValueConvertor;
}
template <typename T0, typename T1> constexpr ::System::Func_2<::StringW, T1>* const& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toValueConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValueConvertor;
}
template <typename T0, typename T1> constexpr void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_toValueConvertor(::System::Func_2<::StringW, T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toValueConvertor = value;
}
template <typename T0, typename T1> constexpr T0& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_valueItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueItem;
}
template <typename T0, typename T1> constexpr T0 const& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_valueItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueItem;
}
template <typename T0, typename T1> constexpr void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_valueItem(T0 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueItem = value;
}
template <typename T0, typename T1> constexpr ::UnityW<::UnityEngine::UI::InputField>& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_inputField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputField;
}
template <typename T0, typename T1> constexpr ::UnityW<::UnityEngine::UI::InputField> const& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_inputField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputField;
}
template <typename T0, typename T1> constexpr void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_inputField(::UnityW<::UnityEngine::UI::InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputField = value;
}
template <typename T0, typename T1> constexpr ::System::Func_2<T1, ::StringW>*& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toStringConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toStringConvertor;
}
template <typename T0, typename T1> constexpr ::System::Func_2<T1, ::StringW>* const& HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toStringConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toStringConvertor;
}
template <typename T0, typename T1> constexpr void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_toStringConvertor(::System::Func_2<T1, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toStringConvertor = value;
}
template <typename T0, typename T1> inline void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1> inline void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::_AddBindings_b__0(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>*>(), { "<AddBindings>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T0, typename T1> inline void HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::_AddBindings_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>*>(), { "<AddBindings>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1> inline ::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>* HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>*>());
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>::InputFieldDataBinder___c__DisplayClass2_0_2() {}
//  Writing Method size for method: ::HMUI::InputFieldDataBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldDataBinder::*)()>(&::HMUI::InputFieldDataBinder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58785a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldDataBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldDataBinder::*)()>(&::HMUI::InputFieldDataBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5878614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder*>(), { "ClearBindings", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<
    ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>*&
HMUI::InputFieldDataBinder::__cordl_internal_get__bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr ::System::Collections::Generic::List_1<
    ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* const&
HMUI::InputFieldDataBinder::__cordl_internal_get__bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr void HMUI::InputFieldDataBinder::__cordl_internal_set__bindings(
    ::System::Collections::Generic::List_1<
        ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindings = value;
}
inline void HMUI::InputFieldDataBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T0, typename T1>
inline void HMUI::InputFieldDataBinder::AddBindings(
    ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, T0, ::System::Func_2<::StringW, T1>*, ::System::Func_2<T1, ::StringW>*>*>* bindingData) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::InputFieldDataBinder*>(),
          { "AddBindings",
            { ::i2c::class_of<T0>(), ::i2c::class_of<T1>() },
            { ::i2c::type_of<
                ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, T0, ::System::Func_2<::StringW, T1>*, ::System::Func_2<T1, ::StringW>*>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
template <typename T> inline void HMUI::InputFieldDataBinder::AddStringBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::InputField>, T>*>* bindingData) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::InputFieldDataBinder*>(),
          { "AddStringBindings", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::InputField>, T>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindingData);
}
inline void HMUI::InputFieldDataBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldDataBinder*>(), { "ClearBindings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::InputFieldDataBinder* HMUI::InputFieldDataBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldDataBinder*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldDataBinder::InputFieldDataBinder() {}
