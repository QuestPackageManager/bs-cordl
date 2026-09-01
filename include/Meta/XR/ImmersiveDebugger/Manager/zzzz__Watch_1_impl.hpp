#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\Watch_1.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_1_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>::Invoke(T value, ::by_ref<::ArrayW<::StringW>> valuesContainer) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, valuesContainer);
}
template <typename T>
inline ::System::IAsyncResult* Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>::BeginInvoke(T value, ::by_ref<::ArrayW<::StringW>> valuesContainer,
                                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, value, valuesContainer, callback, object);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>::EndInvoke(::by_ref<::ArrayW<::StringW>> valuesContainer, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valuesContainer, result);
}
template <typename T>
inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>::New_ctor(::System::Object* object,
                                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>::Watch_1_ToDisplayStringSignature() {}
template <typename T> constexpr ::System::Reflection::MemberInfo*& Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__cordl_internal_get_memberInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberInfo;
}
template <typename T> constexpr ::System::Reflection::MemberInfo* const& Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__cordl_internal_get_memberInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberInfo;
}
template <typename T> constexpr void Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberInfo = value;
}
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*& Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* const& Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::__ctor_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>*>(), { "<.ctor>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>* Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1___c__DisplayClass20_0<T>::Watch_1___c__DisplayClass20_0() {}
template <typename T> constexpr ::System::Func_1<T>*& Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::__cordl_internal_get__getter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter;
}
template <typename T> constexpr ::System::Func_1<T>* const& Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::__cordl_internal_get__getter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter;
}
template <typename T> constexpr void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::__cordl_internal_set__getter(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getter = value;
}
template <typename T>
inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::setStaticF__ToDisplayStringsDelegate_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* value) {
  ::cordl_internals::setStaticField<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*, "<ToDisplayStringsDelegate>k__BackingField",
                                    ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(std::forward<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(value));
}
template <typename T>
inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::getStaticF__ToDisplayStringsDelegate_k__BackingField() {
  return ::cordl_internals::getStaticField<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*, "<ToDisplayStringsDelegate>k__BackingField",
                                           ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>();
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::setStaticF__NumberOfDisplayStrings_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<NumberOfDisplayStrings>k__BackingField", ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::getStaticF__NumberOfDisplayStrings_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<NumberOfDisplayStrings>k__BackingField", ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>();
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::setStaticF__buffer(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "_buffer", ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(std::forward<::ArrayW<::StringW>>(value));
}
template <typename T> inline ::ArrayW<::StringW> Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::getStaticF__buffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_buffer", ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>();
}
template <typename T> inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::get_ToDisplayStringsDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), { "get_ToDisplayStringsDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::set_ToDisplayStringsDelegate(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(),
                                              { "set_ToDisplayStringsDelegate", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline int32_t Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::get_NumberOfDisplayStrings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), { "get_NumberOfDisplayStrings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::set_NumberOfDisplayStrings(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), { "set_NumberOfDisplayStrings", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline int32_t Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::get_NumberOfValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::ResetBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), { "ResetBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::Setup(::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>* del, int32_t numberOfValues) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(),
                                              { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1_ToDisplayStringSignature<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, del, numberOfValues);
}
template <typename T> inline ::ArrayW<::StringW> Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::ToDisplayStrings(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), { "ToDisplayStrings", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, value);
}
template <typename T> inline ::ArrayW<::StringW> Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::get_Values() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
template <typename T> inline ::StringW Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T>
inline void Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                    ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                               ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo, instanceHandle, attribute);
}
template <typename T>
inline ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>* Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::New_ctor(::System::Reflection::MemberInfo* memberInfo,
                                                                                                                      ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                                      ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>*>(memberInfo, instanceHandle, attribute));
}
// Ctor Parameters []
template <typename T> constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch_1<T>::Watch_1() {}
