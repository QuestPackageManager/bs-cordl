#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__BindSignalFromBinder_2_def.hpp"
template <typename TSignal> constexpr ::System::Action_1<TSignal>*& Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TSignal>*> const& Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::__set_callback(::System::Action_1<TSignal>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal> inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>* Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>*>());
}
template <typename TSignal> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSignal> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::_ToMethod_b__0(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>*>::get(), "<ToMethod>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
template <typename TSignal> inline ::System::Object* Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal> inline ::Zenject::InjectTypeInfo* Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal> constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass6_0<TSignal>::__BindSignalToBinder_1____c__DisplayClass6_0() {}
template <typename TSignal> constexpr ::System::Action*& Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::__get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::__get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
template <typename TSignal> constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::__set_callback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal> inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>* Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>*>());
}
template <typename TSignal> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSignal> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::_ToMethod_b__0(TSignal signal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>*>::get(), "<ToMethod>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSignal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
template <typename TSignal> inline ::System::Object* Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal> inline ::Zenject::InjectTypeInfo* Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal> constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass7_0<TSignal>::__BindSignalToBinder_1____c__DisplayClass7_0() {}
template <typename TSignal, typename TObject> constexpr ::System::Action_2<TObject, TSignal>*& Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::__get_handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
template <typename TSignal, typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TObject, TSignal>*> const& Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::__get_handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
template <typename TSignal, typename TObject> constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::__set_handler(::System::Action_2<TObject, TSignal>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal, typename TObject>
inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>* Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*>());
}
template <typename TSignal, typename TObject> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSignal, typename TObject> inline ::System::Action_1<TSignal>* Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::_ToMethod_b__0(TObject x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*>::get(), "<ToMethod>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<TSignal>*, false>(this, ___internal_method, x);
}
template <typename TSignal, typename TObject>
inline ::System::Object* Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal, typename TObject> inline ::Zenject::InjectTypeInfo* Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal, typename TObject> constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>::__BindSignalToBinder_1____c__DisplayClass8_0_1() {}
template <typename TSignal, typename TObject> constexpr TObject& Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
template <typename TSignal, typename TObject> constexpr TObject const& Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
template <typename TSignal, typename TObject> constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__set_x(TObject value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal, typename TObject>
constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*& Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TSignal, typename TObject>
constexpr ::cordl_internals::to_const_pointer<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>*> const&
Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TSignal, typename TObject>
constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__set_CS$__8__locals1(::Zenject::__BindSignalToBinder_1____c__DisplayClass8_0_1<TSignal, TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal, typename TObject>
inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>* Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>*>());
}
template <typename TSignal, typename TObject> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSignal, typename TObject> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::_ToMethod_b__1(TSignal s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>*>::get(), "<ToMethod>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSignal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
template <typename TSignal, typename TObject>
inline ::System::Object* Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal, typename TObject> inline ::Zenject::InjectTypeInfo* Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal, typename TObject> constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass8_1_1<TSignal, TObject>::__BindSignalToBinder_1____c__DisplayClass8_1_1() {}
template <typename TSignal, typename TObject>
constexpr ::System::Func_2<TObject, ::System::Action*>*& Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::__get_handlerGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handlerGetter;
}
template <typename TSignal, typename TObject>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObject, ::System::Action*>*> const&
Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::__get_handlerGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handlerGetter;
}
template <typename TSignal, typename TObject>
constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::__set_handlerGetter(::System::Func_2<TObject, ::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___handlerGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal, typename TObject>
inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>* Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*>());
}
template <typename TSignal, typename TObject> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSignal, typename TObject> inline ::System::Action_1<TSignal>* Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::_ToMethod_b__0(TObject x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*>::get(), "<ToMethod>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<TSignal>*, false>(this, ___internal_method, x);
}
template <typename TSignal, typename TObject>
inline ::System::Object* Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal, typename TObject> inline ::Zenject::InjectTypeInfo* Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal, typename TObject> constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>::__BindSignalToBinder_1____c__DisplayClass9_0_1() {}
template <typename TSignal, typename TObject> constexpr TObject& Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
template <typename TSignal, typename TObject> constexpr TObject const& Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
template <typename TSignal, typename TObject> constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__set_x(TObject value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal, typename TObject>
constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*& Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TSignal, typename TObject>
constexpr ::cordl_internals::to_const_pointer<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>*> const&
Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TSignal, typename TObject>
constexpr void Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__set_CS$__8__locals1(::Zenject::__BindSignalToBinder_1____c__DisplayClass9_0_1<TSignal, TObject>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal, typename TObject>
inline ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>* Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>*>());
}
template <typename TSignal, typename TObject> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSignal, typename TObject> inline void Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::_ToMethod_b__1(TSignal s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>*>::get(), "<ToMethod>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSignal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
template <typename TSignal, typename TObject>
inline ::System::Object* Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal, typename TObject> inline ::Zenject::InjectTypeInfo* Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal, typename TObject> constexpr ::Zenject::__BindSignalToBinder_1____c__DisplayClass9_1_1<TSignal, TObject>::__BindSignalToBinder_1____c__DisplayClass9_1_1() {}
template <typename TSignal> constexpr ::Zenject::DiContainer*& Zenject::BindSignalToBinder_1<TSignal>::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TSignal> constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::BindSignalToBinder_1<TSignal>::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TSignal> constexpr void Zenject::BindSignalToBinder_1<TSignal>::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal> constexpr ::Zenject::BindStatement*& Zenject::BindSignalToBinder_1<TSignal>::__get__bindStatement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindStatement;
}
template <typename TSignal> constexpr ::cordl_internals::to_const_pointer<::Zenject::BindStatement*> const& Zenject::BindSignalToBinder_1<TSignal>::__get__bindStatement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindStatement;
}
template <typename TSignal> constexpr void Zenject::BindSignalToBinder_1<TSignal>::__set__bindStatement(::Zenject::BindStatement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindStatement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal> constexpr ::Zenject::SignalBindingBindInfo*& Zenject::BindSignalToBinder_1<TSignal>::__get__signalBindInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalBindInfo;
}
template <typename TSignal> constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBindingBindInfo*> const& Zenject::BindSignalToBinder_1<TSignal>::__get__signalBindInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalBindInfo;
}
template <typename TSignal> constexpr void Zenject::BindSignalToBinder_1<TSignal>::__set__signalBindInfo(::Zenject::SignalBindingBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signalBindInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSignal>
inline ::Zenject::BindSignalToBinder_1<TSignal>* Zenject::BindSignalToBinder_1<TSignal>::New_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::BindSignalToBinder_1<TSignal>*>(container, signalBindInfo));
}
template <typename TSignal> inline void Zenject::BindSignalToBinder_1<TSignal>::_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SignalBindingBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, signalBindInfo);
}
template <typename TSignal> inline ::Zenject::SignalBindingBindInfo* Zenject::BindSignalToBinder_1<TSignal>::get_SignalBindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(),
                                                                             "get_SignalBindInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalBindingBindInfo*, false>(this, ___internal_method);
}
template <typename TSignal> inline ::Zenject::SignalCopyBinder* Zenject::BindSignalToBinder_1<TSignal>::ToMethod(::System::Action_1<TSignal>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), "ToMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<TSignal>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal_method, callback);
}
template <typename TSignal> inline ::Zenject::SignalCopyBinder* Zenject::BindSignalToBinder_1<TSignal>::ToMethod(::System::Action* callback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), "ToMethod", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*, false>(this, ___internal_method, callback);
}
template <typename TSignal>
template <typename TObject>
inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* Zenject::BindSignalToBinder_1<TSignal>::ToMethod(::System::Action_2<TObject, TSignal>* handler) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), "ToMethod",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TObject, TSignal>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindSignalFromBinder_2<TObject, TSignal>*, false>(this, ___internal_method, handler);
}
template <typename TSignal>
template <typename TObject>
inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* Zenject::BindSignalToBinder_1<TSignal>::ToMethod(::System::Func_2<TObject, ::System::Action*>* handlerGetter) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), "ToMethod",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObject, ::System::Action*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindSignalFromBinder_2<TObject, TSignal>*, false>(this, ___internal_method, handlerGetter);
}
template <typename TSignal>
template <typename TObject>
inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* Zenject::BindSignalToBinder_1<TSignal>::ToMethod(::System::Func_2<TObject, ::System::Action_1<TSignal>*>* handlerGetter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), "ToMethod",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TObject, ::System::Action_1<TSignal>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindSignalFromBinder_2<TObject, TSignal>*, false>(this, ___internal_method, handlerGetter);
}
template <typename TSignal> inline ::System::Object* Zenject::BindSignalToBinder_1<TSignal>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TSignal> inline ::Zenject::InjectTypeInfo* Zenject::BindSignalToBinder_1<TSignal>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::BindSignalToBinder_1<TSignal>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TSignal> constexpr ::Zenject::BindSignalToBinder_1<TSignal>::BindSignalToBinder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
