#pragma once
// IWYU pragma private; include "Priority_Queue/StablePriorityQueueNode.hpp"
#include "Priority_Queue/zzzz__FastPriorityQueueNode_impl.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueueNode_def.hpp"
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode.get_InsertionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Priority_Queue::StablePriorityQueueNode::*)()>(&::Priority_Queue::StablePriorityQueueNode::get_InsertionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330d614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueueNode*>(), { "get_InsertionIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode.set_InsertionIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Priority_Queue::StablePriorityQueueNode::*)(int64_t)>(&::Priority_Queue::StablePriorityQueueNode::set_InsertionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330d61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueueNode*>(), { "set_InsertionIndex", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Priority_Queue::StablePriorityQueueNode::*)()>(&::Priority_Queue::StablePriorityQueueNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x330d624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueueNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& Priority_Queue::StablePriorityQueueNode::__cordl_internal_get__InsertionIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InsertionIndex_k__BackingField;
}
constexpr int64_t const& Priority_Queue::StablePriorityQueueNode::__cordl_internal_get__InsertionIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InsertionIndex_k__BackingField;
}
constexpr void Priority_Queue::StablePriorityQueueNode::__cordl_internal_set__InsertionIndex_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InsertionIndex_k__BackingField = value;
}
inline int64_t Priority_Queue::StablePriorityQueueNode::get_InsertionIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueueNode*>(), { "get_InsertionIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Priority_Queue::StablePriorityQueueNode::set_InsertionIndex(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueueNode*>(), { "set_InsertionIndex", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Priority_Queue::StablePriorityQueueNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::StablePriorityQueueNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Priority_Queue::StablePriorityQueueNode* Priority_Queue::StablePriorityQueueNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::StablePriorityQueueNode*>());
}
// Ctor Parameters []
constexpr ::Priority_Queue::StablePriorityQueueNode::StablePriorityQueueNode() {}
