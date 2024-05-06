#pragma once
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
template <typename T0, typename T1> constexpr ::System::Func_2<::StringW, T1>*& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toValueConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValueConvertor;
}
template <typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, T1>*> const& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toValueConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toValueConvertor;
}
template <typename T0, typename T1> constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_toValueConvertor(::System::Func_2<::StringW, T1>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toValueConvertor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> constexpr T0& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_valueItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueItem;
}
template <typename T0, typename T1> constexpr T0 const& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_valueItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueItem;
}
template <typename T0, typename T1> constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_valueItem(T0 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> constexpr ::UnityW<::UnityEngine::UI::InputField>& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_inputField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputField;
}
template <typename T0, typename T1> constexpr ::UnityW<::UnityEngine::UI::InputField> const& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_inputField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputField;
}
template <typename T0, typename T1> constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_inputField(::UnityW<::UnityEngine::UI::InputField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> constexpr ::System::Func_2<T1, ::StringW>*& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toStringConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toStringConvertor;
}
template <typename T0, typename T1>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T1, ::StringW>*> const& HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_get_toStringConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toStringConvertor;
}
template <typename T0, typename T1> constexpr void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__cordl_internal_set_toStringConvertor(::System::Func_2<T1, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toStringConvertor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> inline ::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>* HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>*>());
}
template <typename T0, typename T1> inline void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::_AddBindings_b__0(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>*>::get(), "<AddBindings>b__0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T0, typename T1> inline void HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::_AddBindings_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>*>::get(), "<AddBindings>b__1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::HMUI::__InputFieldDataBinder____c__DisplayClass2_0_2<T0, T1>::__InputFieldDataBinder____c__DisplayClass2_0_2() {}
template <typename T> inline void HMUI::__InputFieldDataBinder____c__3_1<T>::setStaticF___9(::HMUI::__InputFieldDataBinder____c__3_1<T>* value) {
  ::cordl_internals::setStaticField<::HMUI::__InputFieldDataBinder____c__3_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>(
      std::forward<::HMUI::__InputFieldDataBinder____c__3_1<T>*>(value));
}
template <typename T> inline ::HMUI::__InputFieldDataBinder____c__3_1<T>* HMUI::__InputFieldDataBinder____c__3_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::__InputFieldDataBinder____c__3_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>();
}
template <typename T> inline void HMUI::__InputFieldDataBinder____c__3_1<T>::setStaticF___9__3_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
template <typename T> inline ::System::Func_2<::StringW, ::StringW>* HMUI::__InputFieldDataBinder____c__3_1<T>::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get>();
}
template <typename T> inline ::HMUI::__InputFieldDataBinder____c__3_1<T>* HMUI::__InputFieldDataBinder____c__3_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__InputFieldDataBinder____c__3_1<T>*>());
}
template <typename T> inline void HMUI::__InputFieldDataBinder____c__3_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::StringW HMUI::__InputFieldDataBinder____c__3_1<T>::_AddStringBindings_b__3_0(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldDataBinder____c__3_1<T>*>::get(), "<AddStringBindings>b__3_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
// Ctor Parameters []
template <typename T> constexpr ::HMUI::__InputFieldDataBinder____c__3_1<T>::__InputFieldDataBinder____c__3_1() {}
//  Writing Method size for method: ::HMUI::InputFieldDataBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldDataBinder::*)()>(&::HMUI::InputFieldDataBinder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24fb820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldDataBinder.ClearBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldDataBinder::*)()>(&::HMUI::InputFieldDataBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x24fb8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(), "ClearBindings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<
    ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>*&
HMUI::InputFieldDataBinder::__cordl_internal_get__bindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<
    ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>*> const&
HMUI::InputFieldDataBinder::__cordl_internal_get__bindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindings;
}
constexpr void HMUI::InputFieldDataBinder::__cordl_internal_set__bindings(
    ::System::Collections::Generic::List_1<
        ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::InputFieldDataBinder* HMUI::InputFieldDataBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::InputFieldDataBinder*>());
}
inline void HMUI::InputFieldDataBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1>
inline void HMUI::InputFieldDataBinder::AddBindings(
    ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, T0, ::System::Func_2<::StringW, T1>*, ::System::Func_2<T1, ::StringW>*>*>* bindingData) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(), "AddBindings",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::List_1<::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, T0, ::System::Func_2<::StringW, T1>*, ::System::Func_2<T1, ::StringW>*>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
template <typename T> inline void HMUI::InputFieldDataBinder::AddStringBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::InputField>, T>*>* bindingData) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(), "AddStringBindings",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::InputField>, T>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::InputFieldDataBinder::ClearBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldDataBinder*>::get(), "ClearBindings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldDataBinder::InputFieldDataBinder() {}
