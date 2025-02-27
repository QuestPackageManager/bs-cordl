#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceListNode.hpp"
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceListNode_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListNode::*)(::System::Xml::Schema::NamespaceList*, ::System::Object*)>(
    &::System::Xml::Schema::NamespaceListNode::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x43a94a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.GetResolvedSymbols
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (
    ::System::Xml::Schema::NamespaceListNode::*)(::System::Xml::Schema::SymbolsDictionary*)>(&::System::Xml::Schema::NamespaceListNode::GetResolvedSymbols)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x43a94d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.ExpandTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListNode::*)(
    ::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*)>(&::System::Xml::Schema::NamespaceListNode::ExpandTree)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x43a94f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.ConstructPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceListNode::*)(
    ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>)>(
    &::System::Xml::Schema::NamespaceListNode::ConstructPos)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43a996c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceListNode.get_IsNullable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceListNode::*)()>(&::System::Xml::Schema::NamespaceListNode::get_IsNullable)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43a99a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::NamespaceList*& System::Xml::Schema::NamespaceListNode::__cordl_internal_get_namespaceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceList;
}
constexpr ::System::Xml::Schema::NamespaceList* const& System::Xml::Schema::NamespaceListNode::__cordl_internal_get_namespaceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceList;
}
constexpr void System::Xml::Schema::NamespaceListNode::__cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::NamespaceListNode::__cordl_internal_get_particle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr ::System::Object* const& System::Xml::Schema::NamespaceListNode::__cordl_internal_get_particle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle;
}
constexpr void System::Xml::Schema::NamespaceListNode::__cordl_internal_set_particle(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___particle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::NamespaceListNode::_ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::NamespaceList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, namespaceList, particle);
}
inline ::System::Collections::ICollection* System::Xml::Schema::NamespaceListNode::GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary* symbols) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method, symbols);
}
inline void System::Xml::Schema::NamespaceListNode::ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                               ::System::Xml::Schema::Positions* positions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, symbols, positions);
}
inline void System::Xml::Schema::NamespaceListNode::ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                                                 ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstpos, lastpos, followpos);
}
inline bool System::Xml::Schema::NamespaceListNode::get_IsNullable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceListNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::NamespaceListNode* System::Xml::Schema::NamespaceListNode::New_ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::NamespaceListNode*>(namespaceList, particle));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::NamespaceListNode::NamespaceListNode() {}
