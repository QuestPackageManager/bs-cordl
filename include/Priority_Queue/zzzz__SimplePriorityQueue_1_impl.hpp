#pragma once
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_impl.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template <typename TItem> inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* Priority_Queue::SimplePriorityQueue_1<TItem>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::SimplePriorityQueue_1<TItem>*>());
}
template <typename TItem> inline void Priority_Queue::SimplePriorityQueue_1<TItem>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1<TItem>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TItem>
inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* Priority_Queue::SimplePriorityQueue_1<TItem>::New_ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(comparer));
}
template <typename TItem> inline void Priority_Queue::SimplePriorityQueue_1<TItem>::_ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1<TItem>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TItem> inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* Priority_Queue::SimplePriorityQueue_1<TItem>::New_ctor(::System::Comparison_1<float_t>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(comparer));
}
template <typename TItem> inline void Priority_Queue::SimplePriorityQueue_1<TItem>::_ctor(::System::Comparison_1<float_t>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::SimplePriorityQueue_1<TItem>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
// Ctor Parameters []
template <typename TItem> constexpr ::Priority_Queue::SimplePriorityQueue_1<TItem>::SimplePriorityQueue_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
