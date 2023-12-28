#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SyntaxTreeNode.ExpandTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SyntaxTreeNode::*)(
    ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::SyntaxTreeNode::ExpandTree)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SyntaxTreeNode.ConstructPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SyntaxTreeNode::*)(
    ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>)>(
    &::System::Xml::Schema::SyntaxTreeNode::ConstructPos)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SyntaxTreeNode.get_IsNullable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SyntaxTreeNode::*)()>(&::System::Xml::Schema::SyntaxTreeNode::get_IsNullable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SyntaxTreeNode.get_IsRangeNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SyntaxTreeNode::*)()>(&::System::Xml::Schema::SyntaxTreeNode::get_IsRangeNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28adbcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SyntaxTreeNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SyntaxTreeNode::*)()>(&::System::Xml::Schema::SyntaxTreeNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28adbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::SyntaxTreeNode::ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                            ::System::Xml::Schema::Positions* positions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), "ExpandTree", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::InteriorNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SymbolsDictionary*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::Positions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::SyntaxTreeNode::ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                                              ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), "ConstructPos", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::BitSet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstpos, lastpos, followpos);
}
inline bool System::Xml::Schema::SyntaxTreeNode::get_IsNullable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), "get_IsNullable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::SyntaxTreeNode::get_IsRangeNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), "get_IsRangeNode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::SyntaxTreeNode* System::Xml::Schema::SyntaxTreeNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SyntaxTreeNode*>());
}
inline void System::Xml::Schema::SyntaxTreeNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SyntaxTreeNode*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SyntaxTreeNode::SyntaxTreeNode() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
