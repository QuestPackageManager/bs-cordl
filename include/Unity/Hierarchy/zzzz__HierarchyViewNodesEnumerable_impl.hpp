#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewNodesEnumerable.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattened_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewModel_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyViewNodesEnumerable_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6903fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x690404c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get(), 13));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::Invoke(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node, flags);
}
inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate::HierarchyViewNodesEnumerable_Predicate() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)(
    ::Unity::Hierarchy::HierarchyViewNodesEnumerable)>(&::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6903f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewNodesEnumerable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::Unity::Hierarchy::HierarchyNode> (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6904068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x69040ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator.ThrowIfVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::ThrowIfVersionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69041c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(), "ThrowIfVersionChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::_ctor(::Unity::Hierarchy::HierarchyViewNodesEnumerable enumerable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewNodesEnumerable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
inline ::ByRef<::Unity::Hierarchy::HierarchyNode> Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Hierarchy::HierarchyNode>, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::ThrowIfVersionChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator>::get(),
                                                                             "ThrowIfVersionChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Predicate", ty:
// "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NodesCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::HierarchyViewNodesEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                                                                                               ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate,
                                                                                                               ::Unity::Hierarchy::HierarchyNodeFlags m_Flags,
                                                                                                               ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr, int32_t m_NodesCount,
                                                                                                               int32_t m_Version, int32_t m_Index) noexcept {
  this->m_HierarchyFlattened = m_HierarchyFlattened;
  this->m_Predicate = m_Predicate;
  this->m_Flags = m_Flags;
  this->m_NodesPtr = m_NodesPtr;
  this->m_NodesCount = m_NodesCount;
  this->m_Version = m_Version;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator::HierarchyViewNodesEnumerable_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyViewNodesEnumerable::*)(
    ::Unity::Hierarchy::HierarchyViewModel*, ::Unity::Hierarchy::HierarchyNodeFlags, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*)>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6903ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyViewNodesEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator (::Unity::Hierarchy::HierarchyViewNodesEnumerable::*)()>(
    &::Unity::Hierarchy::HierarchyViewNodesEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6903f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable>::get(),
                                                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyViewNodesEnumerable::_ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel, ::Unity::Hierarchy::HierarchyNodeFlags flags,
                                                                  ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewModel, flags, predicate);
}
inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator Unity::Hierarchy::HierarchyViewNodesEnumerable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyViewNodesEnumerable>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Predicate", ty:
// "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable::HierarchyViewNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel,
                                                                                         ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate,
                                                                                         ::Unity::Hierarchy::HierarchyNodeFlags m_Flags) noexcept {
  this->m_HierarchyViewModel = m_HierarchyViewModel;
  this->m_Predicate = m_Predicate;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyViewNodesEnumerable::HierarchyViewNodesEnumerable() {}
