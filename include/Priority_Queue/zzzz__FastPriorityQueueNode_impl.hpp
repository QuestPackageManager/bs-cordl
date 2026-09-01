#pragma once
// IWYU pragma private; include "Priority_Queue\FastPriorityQueueNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__FastPriorityQueueNode_def.hpp"
//  Writing Method size for method: ::Priority_Queue::FastPriorityQueueNode.get_Priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Priority_Queue::FastPriorityQueueNode::*)()>(&::Priority_Queue::FastPriorityQueueNode::get_Priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330f0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "get_Priority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::FastPriorityQueueNode.set_Priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Priority_Queue::FastPriorityQueueNode::*)(float_t)>(&::Priority_Queue::FastPriorityQueueNode::set_Priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330f0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "set_Priority", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::FastPriorityQueueNode.get_QueueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Priority_Queue::FastPriorityQueueNode::*)()>(&::Priority_Queue::FastPriorityQueueNode::get_QueueIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330f0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "get_QueueIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::FastPriorityQueueNode.set_QueueIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Priority_Queue::FastPriorityQueueNode::*)(int32_t)>(&::Priority_Queue::FastPriorityQueueNode::set_QueueIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330f0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "set_QueueIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::FastPriorityQueueNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Priority_Queue::FastPriorityQueueNode::*)()>(&::Priority_Queue::FastPriorityQueueNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x330f0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& Priority_Queue::FastPriorityQueueNode::__cordl_internal_get__Priority_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Priority_k__BackingField;
}
constexpr float_t const& Priority_Queue::FastPriorityQueueNode::__cordl_internal_get__Priority_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Priority_k__BackingField;
}
constexpr void Priority_Queue::FastPriorityQueueNode::__cordl_internal_set__Priority_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Priority_k__BackingField = value;
}
constexpr int32_t& Priority_Queue::FastPriorityQueueNode::__cordl_internal_get__QueueIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueueIndex_k__BackingField;
}
constexpr int32_t const& Priority_Queue::FastPriorityQueueNode::__cordl_internal_get__QueueIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QueueIndex_k__BackingField;
}
constexpr void Priority_Queue::FastPriorityQueueNode::__cordl_internal_set__QueueIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____QueueIndex_k__BackingField = value;
}
inline float_t Priority_Queue::FastPriorityQueueNode::get_Priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "get_Priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Priority_Queue::FastPriorityQueueNode::set_Priority(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "set_Priority", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Priority_Queue::FastPriorityQueueNode::get_QueueIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "get_QueueIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Priority_Queue::FastPriorityQueueNode::set_QueueIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { "set_QueueIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Priority_Queue::FastPriorityQueueNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Priority_Queue::FastPriorityQueueNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Priority_Queue::FastPriorityQueueNode* Priority_Queue::FastPriorityQueueNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Priority_Queue::FastPriorityQueueNode*>());
}
// Ctor Parameters []
constexpr ::Priority_Queue::FastPriorityQueueNode::FastPriorityQueueNode() {}
