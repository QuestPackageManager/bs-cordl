#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3> constexpr T1& ModestTree::Util::ValuePair_3<T1, T2, T3>::__get_First() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3> constexpr T1 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__get_First() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__set_First(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___First)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> constexpr T2& ModestTree::Util::ValuePair_3<T1, T2, T3>::__get_Second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3> constexpr T2 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__get_Second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__set_Second(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> constexpr T3& ModestTree::Util::ValuePair_3<T1, T2, T3>::__get_Third() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3> constexpr T3 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__get_Third() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__set_Third(T3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Third)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair_3<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>());
}
template <typename T1, typename T2, typename T3> inline void ModestTree::Util::ValuePair_3<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair_3<T1, T2, T3>::New_ctor(T1 first, T2 second, T3 third) {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(first, second, third));
}
template <typename T1, typename T2, typename T3> inline void ModestTree::Util::ValuePair_3<T1, T2, T3>::_ctor(T1 first, T2 second, T3 third) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, second, third);
}
template <typename T1, typename T2, typename T3> inline bool ModestTree::Util::ValuePair_3<T1, T2, T3>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3> inline bool ModestTree::Util::ValuePair_3<T1, T2, T3>::Equals(::ModestTree::Util::ValuePair_3<T1, T2, T3>* that) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, that);
}
template <typename T1, typename T2, typename T3> inline int32_t ModestTree::Util::ValuePair_3<T1, T2, T3>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::ModestTree::Util::ValuePair_3<T1, T2, T3>::ValuePair_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
