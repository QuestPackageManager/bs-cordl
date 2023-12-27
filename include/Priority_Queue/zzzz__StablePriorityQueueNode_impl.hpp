#pragma once
#include "Priority_Queue/zzzz__FastPriorityQueueNode_impl.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueueNode_def.hpp"
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode.get_InsertionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Priority_Queue::StablePriorityQueueNode::*)()>(
    &::Priority_Queue::StablePriorityQueueNode::get_InsertionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2321e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode*>::get(),
                                                                               "get_InsertionIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode.set_InsertionIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::StablePriorityQueueNode::*)(int64_t)>(
    &::Priority_Queue::StablePriorityQueueNode::set_InsertionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2321e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode*>::get(), "set_InsertionIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Priority_Queue::StablePriorityQueueNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Priority_Queue::StablePriorityQueueNode::*)()>(&::Priority_Queue::StablePriorityQueueNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2321e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int64_t& Priority_Queue::StablePriorityQueueNode::__get__InsertionIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____InsertionIndex_k__BackingField;
}
constexpr int64_t const& Priority_Queue::StablePriorityQueueNode::__get__InsertionIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____InsertionIndex_k__BackingField;
}
constexpr void Priority_Queue::StablePriorityQueueNode::__set__InsertionIndex_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____InsertionIndex_k__BackingField = value;
}
inline int64_t Priority_Queue::StablePriorityQueueNode::get_InsertionIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode*>::get(),
                                                                             "get_InsertionIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Priority_Queue::StablePriorityQueueNode::set_InsertionIndex(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode*>::get(), "set_InsertionIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Priority_Queue::StablePriorityQueueNode* Priority_Queue::StablePriorityQueueNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::StablePriorityQueueNode*>());
}
inline void Priority_Queue::StablePriorityQueueNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueueNode*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Priority_Queue::StablePriorityQueueNode::StablePriorityQueueNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
