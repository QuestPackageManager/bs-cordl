#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBase.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyCommandList_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeTypeHandlerBase_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchySearchQueryDescriptor_def.hpp"
#include "Unity/Hierarchy/zzzz__Hierarchy_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69035c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*>::get(), "ConvertToNative",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller::ConvertToNative(::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller*>::get(), "ConvertToNative", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_BindingsMarshaller::HierarchyNodeTypeHandlerBase_BindingsMarshaller() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.set_Ptr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Ptr)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69035dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "set_Ptr",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.set_Hierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Hierarchy::Hierarchy*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Hierarchy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6903650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "set_Hierarchy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.set_CommandList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Hierarchy::HierarchyCommandList*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_CommandList)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x69036d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "set_CommandList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyCommandList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::*)(
    ::System::IntPtr, ::Unity::Hierarchy::Hierarchy*, ::Unity::Hierarchy::HierarchyCommandList*)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6902888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyCommandList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::Dispose)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6903758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_Ptr(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "m_Ptr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_Ptr() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "m_Ptr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::Hierarchy*, "m_Hierarchy",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get>(
      std::forward<::Unity::Hierarchy::Hierarchy*>(value));
}
inline ::Unity::Hierarchy::Hierarchy* Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_Hierarchy() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::Hierarchy*, "m_Hierarchy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::setStaticF_m_CommandList(::Unity::Hierarchy::HierarchyCommandList* value) {
  ::cordl_internals::setStaticField<::Unity::Hierarchy::HierarchyCommandList*, "m_CommandList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get>(
      std::forward<::Unity::Hierarchy::HierarchyCommandList*>(value));
}
inline ::Unity::Hierarchy::HierarchyCommandList* Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::getStaticF_m_CommandList() {
  return ::cordl_internals::getStaticField<::Unity::Hierarchy::HierarchyCommandList*, "m_CommandList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Ptr(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "set_Ptr",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "set_Hierarchy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::set_CommandList(::Unity::Hierarchy::HierarchyCommandList* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "set_CommandList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyCommandList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::_ctor(::System::IntPtr nativePtr, ::Unity::Hierarchy::Hierarchy* hierarchy,
                                                                                   ::Unity::Hierarchy::HierarchyCommandList* cmdList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::Hierarchy*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyCommandList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nativePtr, hierarchy, cmdList);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase_ConstructorScope::HierarchyNodeTypeHandlerBase_ConstructorScope() {}
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6901fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(bool)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6901fec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetNodeTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6901ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetDefaultNodeFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeFlags (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(
    ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x690217c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::Unity::Hierarchy::HierarchySearchQueryDescriptor*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x690227c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6902364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x690244c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.FromIntPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* (*)(::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::FromIntPtr)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x690251c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "FromIntPtr",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.Internal_SearchBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::Unity::Hierarchy::HierarchySearchQueryDescriptor*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Internal_SearchBegin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69025c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "Internal_SearchBegin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.CreateNodeTypeHandlerFromType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::Type*, ::System::IntPtr, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::CreateNodeTypeHandlerFromType)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x69025cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "CreateNodeTypeHandlerFromType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.TryGetStaticNodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::ByRef<int32_t>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::TryGetStaticNodeType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x69029d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                                               "TryGetStaticNodeType", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeInitialize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6902b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeInitialize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeDispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6902c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeDispose",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeGetNodeTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetNodeTypeName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6902d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeGetNodeTypeName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeGetDefaultNodeFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeFlags (*)(
    ::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetDefaultNodeFlags)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6902e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeGetDefaultNodeFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeChangesPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeChangesPending)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6902f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeChangesPending",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeIntegrateChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeIntegrateChanges)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6903014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                                               "InvokeIntegrateChanges", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeSearchMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchMatch)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x690318c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeSearchMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.InvokeSearchEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchEnd)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6903274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeSearchEnd",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.ChangesPending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)()>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6903354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.IntegrateChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::*)(::Unity::Hierarchy::HierarchyCommandList*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6903424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetNodeTypeName_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6902138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "GetNodeTypeName_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.GetDefaultNodeFlags_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Hierarchy::HierarchyNodeFlags (*)(
    ::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>, ::Unity::Hierarchy::HierarchyNodeFlags)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6902228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "GetDefaultNodeFlags_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchBegin_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::Unity::Hierarchy::HierarchySearchQueryDescriptor*)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6902320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "SearchBegin_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchMatch_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::ByRef<::Unity::Hierarchy::HierarchyNode>)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6902408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "SearchMatch_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.SearchEnd_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69024e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "SearchEnd_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.ChangesPending_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69033e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "ChangesPending_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase.IntegrateChanges_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(
    &::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69034d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                                               "IntegrateChanges_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::Unity::Hierarchy::Hierarchy*& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Hierarchy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr ::Unity::Hierarchy::Hierarchy* const& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_Hierarchy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hierarchy;
}
constexpr void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_set_m_Hierarchy(::Unity::Hierarchy::Hierarchy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Hierarchy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Hierarchy::HierarchyCommandList*& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_CommandList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandList;
}
constexpr ::Unity::Hierarchy::HierarchyCommandList* const& Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_get_m_CommandList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandList;
}
constexpr void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::__cordl_internal_set_m_CommandList(::Unity::Hierarchy::HierarchyCommandList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommandList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::setStaticF_s_NodeTypes(::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*, "s_NodeTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>* Unity::Hierarchy::HierarchyNodeTypeHandlerBase::getStaticF_s_NodeTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, int32_t>*, "s_NodeTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get>();
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::StringW Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags(::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                                                                                                  ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeFlags, false>(this, ___internal_method, node, defaultFlags);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor* query) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, query);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch(::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* Unity::Hierarchy::HierarchyNodeTypeHandlerBase::FromIntPtr(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "FromIntPtr",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*, false>(nullptr, ___internal_method, handlePtr);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::Internal_SearchBegin(::Unity::Hierarchy::HierarchySearchQueryDescriptor* query) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "Internal_SearchBegin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, query);
}
inline ::System::IntPtr Unity::Hierarchy::HierarchyNodeTypeHandlerBase::CreateNodeTypeHandlerFromType(::System::IntPtr nativePtr, ::System::Type* handlerType, ::System::IntPtr hierarchyPtr,
                                                                                                      ::System::IntPtr cmdListPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "CreateNodeTypeHandlerFromType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, nativePtr, handlerType, hierarchyPtr, cmdListPtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::TryGetStaticNodeType(::System::Type* handlerType, ::ByRef<int32_t> nodeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                                             "TryGetStaticNodeType", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handlerType, nodeType);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeInitialize(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeInitialize",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handlePtr);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeDispose(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeDispose",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handlePtr);
}
inline ::StringW Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetNodeTypeName(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeGetNodeTypeName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handlePtr);
}
inline ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeGetDefaultNodeFlags(::System::IntPtr handlePtr, ::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                                                                                                        ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeGetDefaultNodeFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeFlags, false>(nullptr, ___internal_method, handlePtr, node, defaultFlags);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeChangesPending(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeChangesPending",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handlePtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeIntegrateChanges(::System::IntPtr handlePtr, ::System::IntPtr cmdListPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                                             "InvokeIntegrateChanges", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handlePtr, cmdListPtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchMatch(::System::IntPtr handlePtr, ::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeSearchMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handlePtr, node);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::InvokeSearchEnd(::System::IntPtr handlePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "InvokeSearchEnd",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handlePtr);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges(::Unity::Hierarchy::HierarchyCommandList* cmdList) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmdList);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetNodeTypeName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "GetNodeTypeName_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::Unity::Hierarchy::HierarchyNodeFlags Unity::Hierarchy::HierarchyNodeTypeHandlerBase::GetDefaultNodeFlags_Injected(::System::IntPtr _unity_self,
                                                                                                                           ::ByRef<::Unity::Hierarchy::HierarchyNode> node,
                                                                                                                           ::Unity::Hierarchy::HierarchyNodeFlags defaultFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "GetDefaultNodeFlags_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchyNodeFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Hierarchy::HierarchyNodeFlags, false>(nullptr, ___internal_method, _unity_self, node, defaultFlags);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchBegin_Injected(::System::IntPtr _unity_self, ::Unity::Hierarchy::HierarchySearchQueryDescriptor* query) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "SearchBegin_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Hierarchy::HierarchySearchQueryDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, query);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchMatch_Injected(::System::IntPtr _unity_self, ::ByRef<::Unity::Hierarchy::HierarchyNode> node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "SearchMatch_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Hierarchy::HierarchyNode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self, node);
}
inline void Unity::Hierarchy::HierarchyNodeTypeHandlerBase::SearchEnd_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "SearchEnd_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::ChangesPending_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(), "ChangesPending_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline bool Unity::Hierarchy::HierarchyNodeTypeHandlerBase::IntegrateChanges_Injected(::System::IntPtr _unity_self, ::System::IntPtr cmdList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Hierarchy::HierarchyNodeTypeHandlerBase*>::get(),
                                                                             "IntegrateChanges_Injected", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self, cmdList);
}
// Ctor Parameters []
constexpr ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase::HierarchyNodeTypeHandlerBase() {}
