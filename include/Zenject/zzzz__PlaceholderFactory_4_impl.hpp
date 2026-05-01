#pragma once
// IWYU pragma private; include "Zenject/PlaceholderFactory_4.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_4_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t& Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t const& Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Type*& Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Type* const& Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_set___2__current(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____2__current, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t& Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr int32_t const& Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline bool Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Type* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_Generic_IEnumerator_System_Type__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>*
Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_Generic_IEnumerable_System_Type__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Collections::IEnumerator* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                  "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*
Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>*
Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Collections::IEnumerable* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>*
Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Type*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Collections::IEnumerator* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::IDisposable* Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::PlaceholderFactory_4__get_ParamTypes_d__2<TParam1, TParam2, TParam3, TValue>::PlaceholderFactory_4__get_ParamTypes_d__2() {}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline TValue Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::Create(TParam1 param1, TParam2 param2, TParam3 param3) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2, param3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::get_ParamTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), "get_ParamTypes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> inline void Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::System::Object* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::InjectTypeInfo* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>*>());
}
/// @brief Convert operator to "::Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*
Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IFactory_4_TParam1_TParam2_TParam3_TValue_() noexcept {
  return static_cast<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IFactory* Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::PlaceholderFactory_4<TParam1, TParam2, TParam3, TValue>::PlaceholderFactory_4() {}
