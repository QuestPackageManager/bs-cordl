#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuleCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuleCache_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__rules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rules;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__rules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rules;
}
template <typename T> constexpr void System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_set__rules(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Object*& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__cacheLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLock;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_get__cacheLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheLock;
}
template <typename T> constexpr void System::Runtime::CompilerServices::RuleCache_1<T>::__cordl_internal_set__cacheLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Runtime::CompilerServices::RuleCache_1<T>* System::Runtime::CompilerServices::RuleCache_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::RuleCache_1<T>*>());
}
template <typename T> inline void System::Runtime::CompilerServices::RuleCache_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuleCache_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Runtime::CompilerServices::RuleCache_1<T>::GetRules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuleCache_1<T>*>::get(),
                                                                             "GetRules", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::RuleCache_1<T>::MoveRule(T rule, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuleCache_1<T>*>::get(), "MoveRule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rule, i);
}
template <typename T> inline void System::Runtime::CompilerServices::RuleCache_1<T>::AddRule(T newRule) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuleCache_1<T>*>::get(), "AddRule",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newRule);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> System::Runtime::CompilerServices::RuleCache_1<T>::AddOrInsert(::ArrayW<T, ::Array<T>*> rules, T item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuleCache_1<T>*>::get(), "AddOrInsert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, rules, item);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::RuleCache_1<T>::RuleCache_1() {}
