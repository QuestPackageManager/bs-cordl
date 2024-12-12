#pragma once
// IWYU pragma private; include "ModestTree/Util/ValuePair_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/Util/zzzz__ValuePair_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3> constexpr T1& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_First() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3> constexpr T1 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_First() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___First;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_set_First(T1 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___First, value);
}
template <typename T1, typename T2, typename T3> constexpr T2& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3> constexpr T2 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Second;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_set_Second(T2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Second, value);
}
template <typename T1, typename T2, typename T3> constexpr T3& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Third() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3> constexpr T3 const& ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_get_Third() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Third;
}
template <typename T1, typename T2, typename T3> constexpr void ModestTree::Util::ValuePair_3<T1, T2, T3>::__cordl_internal_set_Third(T3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Third, value);
}
template <typename T1, typename T2, typename T3> inline void ModestTree::Util::ValuePair_3<T1, T2, T3>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline void ModestTree::Util::ValuePair_3<T1, T2, T3>::_ctor(T1 first, T2 second, T3 third) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, second, third);
}
template <typename T1, typename T2, typename T3> inline bool ModestTree::Util::ValuePair_3<T1, T2, T3>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T1, typename T2, typename T3> inline bool ModestTree::Util::ValuePair_3<T1, T2, T3>::Equals(::ModestTree::Util::ValuePair_3<T1, T2, T3>* that) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, that);
}
template <typename T1, typename T2, typename T3> inline int32_t ModestTree::Util::ValuePair_3<T1, T2, T3>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair_3<T1, T2, T3>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>());
}
template <typename T1, typename T2, typename T3> inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* ModestTree::Util::ValuePair_3<T1, T2, T3>::New_ctor(T1 first, T2 second, T3 third) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ModestTree::Util::ValuePair_3<T1, T2, T3>*>(first, second, third));
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3> constexpr ::ModestTree::Util::ValuePair_3<T1, T2, T3>::ValuePair_3() {}
