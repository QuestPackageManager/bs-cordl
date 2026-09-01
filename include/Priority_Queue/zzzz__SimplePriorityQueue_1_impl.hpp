#pragma once
// IWYU pragma private; include "Priority_Queue\SimplePriorityQueue_1.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_impl.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template <typename TItem> inline void Priority_Queue::SimplePriorityQueue_1<TItem>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem> inline void Priority_Queue::SimplePriorityQueue_1<TItem>::_ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TItem> inline void Priority_Queue::SimplePriorityQueue_1<TItem>::_ctor(::System::Comparison_1<float_t>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Comparison_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TItem> inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* Priority_Queue::SimplePriorityQueue_1<TItem>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_1<TItem>*>());
}
template <typename TItem>
inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* Priority_Queue::SimplePriorityQueue_1<TItem>::New_ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(comparer));
}
template <typename TItem> inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* Priority_Queue::SimplePriorityQueue_1<TItem>::New_ctor(::System::Comparison_1<float_t>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::SimplePriorityQueue_1<TItem>*>(comparer));
}
// Ctor Parameters []
template <typename TItem> constexpr ::Priority_Queue::SimplePriorityQueue_1<TItem>::SimplePriorityQueue_1() {}
