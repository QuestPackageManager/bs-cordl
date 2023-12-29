#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t& Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t const& Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Type*& Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__set___2__current(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t& Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t const& Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*
Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>(__1__state));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline bool Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Type* Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_Generic_IEnumerator_System_Type__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>*
Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Collections::IEnumerator* Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(), "__zenCreate",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::__PlaceholderFactory_4___get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__PlaceholderFactory_4___get_ParamTypes_d__2() {}
/// @brief Convert operator to "::Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline TValue Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::Create(TParam1 param1, TParam2 param2, TParam3 param3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::get_ParamTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), "get_ParamTypes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::PlaceholderFactory_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
