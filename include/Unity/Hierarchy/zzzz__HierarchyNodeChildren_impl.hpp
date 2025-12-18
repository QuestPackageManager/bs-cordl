#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildren.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeChildren_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren::*)(::Unity::Hierarchy::Hierarchy*, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeChildren::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x696abb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator (::Unity::Hierarchy::HierarchyNodeChildren::*)()>(
    &::Unity::Hierarchy::HierarchyNodeChildren::GetEnumerator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x696ad28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren::*)()>(
    &::Unity::Hierarchy::HierarchyNodeChildren::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x696ad5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren>::get(),
                                                                               "ThrowIfVersionChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeChildren::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodeChildrenPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchy, nodeChildrenPtr);
}
inline ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator Unity::Hierarchy::HierarchyNodeChildren::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyNodeChildren::ThrowIfVersionChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren>::get(),
                                                                             "ThrowIfVersionChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Ptr", ty: "::Unity::Hierarchy::HierarchyNode*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildren::HierarchyNodeChildren(::Unity::Hierarchy::Hierarchy* m_Hierarchy, ::Unity::Hierarchy::HierarchyNode* m_Ptr, int32_t m_Version,
                                                                           int32_t m_Count) noexcept {
  this->m_Hierarchy = m_Hierarchy;
  this->m_Ptr = m_Ptr;
  this->m_Version = m_Version;
  this->m_Count = m_Count;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildren::HierarchyNodeChildren() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::*)(::ByRef<::Unity::Hierarchy::HierarchyNodeChildren>)>(
    &::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x696ad40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNodeChildren>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x696add0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x696ae50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeChildren_Enumerator::_ctor(::ByRef<::Unity::Hierarchy::HierarchyNodeChildren> enumerable) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNodeChildren>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
inline ::ByRef<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyNodeChildren_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Hierarchy::HierarchyNode>, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeChildren_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyNodeChildren", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::HierarchyNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyNodeChildren m_Enumerable, int32_t m_Index) noexcept {
  this->m_Enumerable = m_Enumerable;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator::HierarchyNodeChildren_Enumerator() {}
