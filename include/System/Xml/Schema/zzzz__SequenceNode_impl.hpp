#pragma once
#include "System/Xml/Schema/zzzz__InteriorNode_impl.hpp"
#include "System/Xml/Schema/zzzz__SequenceNode_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SequenceNode_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext::*)(
    ::System::Xml::Schema::SequenceNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*)>(&::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2999244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SequenceNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::__SequenceNode__SequenceConstructPosContext::_ctor(::System::Xml::Schema::SequenceNode* node, ::System::Xml::Schema::BitSet* firstpos,
                                                                                    ::System::Xml::Schema::BitSet* lastpos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SequenceNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, firstpos, lastpos);
}
// Ctor Parameters [CppParam { name: "this_", ty: "::System::Xml::Schema::SequenceNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstpos", ty:
// "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "lastpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "lastposLeft", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstposRight", ty: "::System::Xml::Schema::BitSet*", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext::__SequenceNode__SequenceConstructPosContext(::System::Xml::Schema::SequenceNode* this_,
                                                                                                                          ::System::Xml::Schema::BitSet* firstpos,
                                                                                                                          ::System::Xml::Schema::BitSet* lastpos,
                                                                                                                          ::System::Xml::Schema::BitSet* lastposLeft,
                                                                                                                          ::System::Xml::Schema::BitSet* firstposRight) noexcept {
  this->this_ = this_;
  this->firstpos = firstpos;
  this->lastpos = lastpos;
  this->lastposLeft = lastposLeft;
  this->firstposRight = firstposRight;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext::__SequenceNode__SequenceConstructPosContext() {}
//  Writing Method size for method: ::System::Xml::Schema::SequenceNode.ConstructPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SequenceNode::*)(
    ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>)>(
    &::System::Xml::Schema::SequenceNode::ConstructPos)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2998efc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SequenceNode.get_IsNullable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SequenceNode::*)()>(&::System::Xml::Schema::SequenceNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2999254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SequenceNode.ExpandTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SequenceNode::*)(
    ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::SequenceNode::ExpandTree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29993b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SequenceNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SequenceNode::*)()>(&::System::Xml::Schema::SequenceNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29993b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::SequenceNode::ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                                            ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstpos, lastpos, followpos);
}
inline bool System::Xml::Schema::SequenceNode::get_IsNullable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SequenceNode::ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, symbols, positions);
}
inline ::System::Xml::Schema::SequenceNode* System::Xml::Schema::SequenceNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::SequenceNode*>());
}
inline void System::Xml::Schema::SequenceNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SequenceNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SequenceNode::SequenceNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
