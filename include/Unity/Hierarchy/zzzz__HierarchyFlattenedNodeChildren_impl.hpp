#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNodeChildren.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedNodeChildren::*)(
    ::Unity::Hierarchy::HierarchyFlattened*, ::ByRef<::Unity::Hierarchy::HierarchyNode>)>(&::Unity::Hierarchy::HierarchyFlattenedNodeChildren::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6901634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator (
    ::Unity::Hierarchy::HierarchyFlattenedNodeChildren::*)()>(&::Unity::Hierarchy::HierarchyFlattenedNodeChildren::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6901908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedNodeChildren::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedNodeChildren::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6901954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(),
                                                                               "ThrowIfVersionChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattenedNodeChildren::_ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattened*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchyFlattened, node);
}
inline ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator Unity::Hierarchy::HierarchyFlattenedNodeChildren::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyFlattenedNodeChildren::ThrowIfVersionChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(),
                                                                             "ThrowIfVersionChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Node", ty:
// "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren::HierarchyFlattenedNodeChildren(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyNode m_Node,
                                                                                             int32_t m_Version, int32_t m_Count) noexcept {
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_Node = m_Node;
  this->m_Version = m_Version;
  this->m_Count = m_Count;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren::HierarchyFlattenedNodeChildren() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::*)(
    ::Unity::Hierarchy::HierarchyFlattenedNodeChildren, ::Unity::Hierarchy::HierarchyNode)>(&::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x690192c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x69019c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x6901a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::_ctor(::Unity::Hierarchy::HierarchyFlattenedNodeChildren enumerable, ::Unity::Hierarchy::HierarchyNode node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyFlattenedNodeChildren>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable, node);
}
inline ::ByRef<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Hierarchy::HierarchyNode>, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyFlattenedNodeChildren", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HierarchyFlattened", ty:
// "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ChildrenIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ChildrenCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::HierarchyFlattenedNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyFlattenedNodeChildren m_Enumerable,
                                                                                                                   ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                                                                                                   ::Unity::Hierarchy::HierarchyNode m_Node, int32_t m_CurrentIndex,
                                                                                                                   int32_t m_ChildrenIndex, int32_t m_ChildrenCount) noexcept {
  this->m_Enumerable = m_Enumerable;
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_Node = m_Node;
  this->m_CurrentIndex = m_CurrentIndex;
  this->m_ChildrenIndex = m_ChildrenIndex;
  this->m_ChildrenCount = m_ChildrenCount;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator::HierarchyFlattenedNodeChildren_Enumerator() {}
