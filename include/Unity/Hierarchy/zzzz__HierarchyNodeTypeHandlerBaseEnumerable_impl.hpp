#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBaseEnumerable.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_def.hpp"
#include "System/Buffers/zzzz__IMemoryOwner_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBaseEnumerable_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)(::Unity::Hierarchy::Hierarchy*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x696c740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x696ca3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* (
    ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x696cae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), "get_Current",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x696cc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchy);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), "get_Current",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_Handlers", ty: "::System::Buffers::IMemoryOwner_1<::System::IntPtr>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator(::System::Buffers::IMemoryOwner_1<::System::IntPtr>* m_Handlers,
                                                                                                                                   int32_t m_Count, int32_t m_Index) noexcept {
  this->m_Handlers = m_Handlers;
  this->m_Count = m_Count;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::*)(::Unity::Hierarchy::Hierarchy*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x696c710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator (
    ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::*)()>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::GetEnumerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x696c718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>::get(), "GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::_ctor(::Unity::Hierarchy::Hierarchy* hierarchy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hierarchy);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::HierarchyNodeTypeHandlerBaseEnumerable(::Unity::Hierarchy::Hierarchy* m_Hierarchy) noexcept {
  this->m_Hierarchy = m_Hierarchy;
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable::HierarchyNodeTypeHandlerBaseEnumerable() {}
