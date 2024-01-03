#pragma once
#include "System/Xml/Schema/zzzz__LeafNode_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Xml/Schema/zzzz__LeafRangeNode_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::LeafRangeNode.get_Max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::Schema::LeafRangeNode::*)()>(&::System::Xml::Schema::LeafRangeNode::get_Max)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28aed00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "get_Max",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafRangeNode.get_Min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Xml::Schema::LeafRangeNode::*)()>(&::System::Xml::Schema::LeafRangeNode::get_Min)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28aed0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "get_Min",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafRangeNode.get_NextIteration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::BitSet* (::System::Xml::Schema::LeafRangeNode::*)()>(
    &::System::Xml::Schema::LeafRangeNode::get_NextIteration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28aed18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(),
                                                                               "get_NextIteration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::LeafRangeNode.set_NextIteration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::LeafRangeNode::*)(::System::Xml::Schema::BitSet*)>(
    &::System::Xml::Schema::LeafRangeNode::set_NextIteration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28aed20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "set_NextIteration", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Decimal& System::Xml::Schema::LeafRangeNode::__get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::System::Decimal const& System::Xml::Schema::LeafRangeNode::__get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void System::Xml::Schema::LeafRangeNode::__set_min(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr ::System::Decimal& System::Xml::Schema::LeafRangeNode::__get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::System::Decimal const& System::Xml::Schema::LeafRangeNode::__get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void System::Xml::Schema::LeafRangeNode::__set_max(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::LeafRangeNode::__get_nextIteration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextIteration;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& System::Xml::Schema::LeafRangeNode::__get_nextIteration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextIteration;
}
constexpr void System::Xml::Schema::LeafRangeNode::__set_nextIteration(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextIteration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Decimal System::Xml::Schema::LeafRangeNode::get_Max() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "get_Max",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::System::Decimal System::Xml::Schema::LeafRangeNode::get_Min() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "get_Min",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::BitSet* System::Xml::Schema::LeafRangeNode::get_NextIteration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "get_NextIteration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::BitSet*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::LeafRangeNode::set_NextIteration(::System::Xml::Schema::BitSet* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::LeafRangeNode*>::get(), "set_NextIteration", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::LeafRangeNode::LeafRangeNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
