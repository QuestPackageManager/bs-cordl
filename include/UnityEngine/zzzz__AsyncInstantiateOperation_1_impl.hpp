#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation_1.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_1_def.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
template <typename T> constexpr ::UnityEngine::AsyncInstantiateOperation*& UnityEngine::AsyncInstantiateOperation_1<T>::__cordl_internal_get_m_op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_op;
}
template <typename T> constexpr ::UnityEngine::AsyncInstantiateOperation* const& UnityEngine::AsyncInstantiateOperation_1<T>::__cordl_internal_get_m_op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_op;
}
template <typename T> constexpr void UnityEngine::AsyncInstantiateOperation_1<T>::__cordl_internal_set_m_op(::UnityEngine::AsyncInstantiateOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_op, value);
}
template <typename T> inline void UnityEngine::AsyncInstantiateOperation_1<T>::_ctor(::UnityEngine::AsyncInstantiateOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncInstantiateOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
template <typename T> inline bool UnityEngine::AsyncInstantiateOperation_1<T>::get_keepWaiting() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::AsyncInstantiateOperation_1<T>::New_ctor(::UnityEngine::AsyncInstantiateOperation* op) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AsyncInstantiateOperation_1<T>*>(op));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::AsyncInstantiateOperation_1<T>::AsyncInstantiateOperation_1() {}
