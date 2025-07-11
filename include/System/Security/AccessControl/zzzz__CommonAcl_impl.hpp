#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonAcl.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
#include "System/Security/AccessControl/zzzz__AuditFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__ObjectAce_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__QualifiedAce_def.hpp"
#include "System/Security/AccessControl/zzzz__RawAcl_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T> inline bool System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::Invoke(T ace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ace);
}
template <typename T>
inline ::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>* System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>::CommonAcl_RemoveAcesCallback_1() {}
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool, bool, uint8_t, int32_t)>(
    &::System::Security::AccessControl::CommonAcl::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3cc32cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool, bool, int32_t)>(
    &::System::Security::AccessControl::CommonAcl::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3cc3460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool, bool, ::System::Security::AccessControl::RawAcl*)>(
    &::System::Security::AccessControl::CommonAcl::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3cc3448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::RawAcl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3cc35ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_IsCanonical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::get_IsCanonical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc35cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "get_IsCanonical", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_IsContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::get_IsContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc35d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "get_IsContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_IsDS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(&::System::Security::AccessControl::CommonAcl::get_IsDS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc35dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "get_IsDS",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.set_IsAefa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(bool)>(
    &::System::Security::AccessControl::CommonAcl::set_IsAefa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3cc35e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "set_IsAefa",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (::System::Security::AccessControl::CommonAcl::*)(int32_t)>(
    &::System::Security::AccessControl::CommonAcl::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3cc35f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3cc36a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.RequireCanonicity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::RequireCanonicity)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3cc36d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "RequireCanonicity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.CanonicalizeAndClearAefa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::CanonicalizeAndClearAefa)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3cc34ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "CanonicalizeAndClearAefa", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.IsAceMeaningless
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::IsAceMeaningless)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3cc3a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.TestCanonicity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::TestCanonicity)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3cc3734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "TestCanonicity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetCanonicalExplicitDenyAceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::GetCanonicalExplicitDenyAceCount)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3cc3d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "GetCanonicalExplicitDenyAceCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetCanonicalExplicitAceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::GetCanonicalExplicitAceCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3cc4020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "GetCanonicalExplicitAceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.MergeExplicitAces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::MergeExplicitAces)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3cc38fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                               "MergeExplicitAces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.MergeExplicitAcePair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (
    ::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::GenericAce*, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::MergeExplicitAcePair)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x3cc40a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "MergeExplicitAcePair", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetObjectAceTypeGuids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::AccessControl::ObjectAce*, ::ByRef<::System::Guid>, ::ByRef<::System::Guid>)>(
    &::System::Security::AccessControl::CommonAcl::GetObjectAceTypeGuids)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3cc44c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "GetObjectAceTypeGuids", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAce*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)()>(
    &::System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(int32_t, int32_t)>(
    &::System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3cc45f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "ApplyCanonicalSortToExplicitAces", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.AddAce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(
    ::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, int32_t, ::System::Security::AccessControl::InheritanceFlags,
    ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(&::System::Security::AccessControl::CommonAcl::AddAce)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3cc47b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "AddAce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AuditFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.AddAceGetQualifiedAce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::QualifiedAce* (
    ::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier, ::System::Security::Principal::SecurityIdentifier*, int32_t,
                                                     ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags,
                                                     ::System::Security::AccessControl::AuditFlags)>(&::System::Security::AccessControl::CommonAcl::AddAceGetQualifiedAce)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3cc47d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "AddAceGetQualifiedAce", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AuditFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.AddAce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::QualifiedAce*)>(
    &::System::Security::AccessControl::CommonAcl::AddAce)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3cc488c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "AddAce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::QualifiedAce*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.CopyAce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::GenericAce* (*)(::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::CommonAcl::CopyAce)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3cc3614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "CopyAce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetAceInsertPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::CommonAcl::*)(::System::Security::AccessControl::AceQualifier)>(
    &::System::Security::AccessControl::CommonAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonAcl.GetAceFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AceFlags (::System::Security::AccessControl::CommonAcl::*)(
    ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags)>(
    &::System::Security::AccessControl::CommonAcl::GetAceFlags)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3cc4904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "GetAceFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AuditFlags>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_aefa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_aefa;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_aefa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_aefa;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_aefa(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_aefa = value;
}
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_canonical() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_canonical;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_canonical() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_canonical;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_canonical(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_canonical = value;
}
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_container;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_container;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_container(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_container = value;
}
constexpr bool& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_ds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_ds;
}
constexpr bool const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_is_ds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_ds;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_is_ds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_ds = value;
}
constexpr ::System::Security::AccessControl::RawAcl*& System::Security::AccessControl::CommonAcl::__cordl_internal_get_raw_acl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raw_acl;
}
constexpr ::System::Security::AccessControl::RawAcl* const& System::Security::AccessControl::CommonAcl::__cordl_internal_get_raw_acl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raw_acl;
}
constexpr void System::Security::AccessControl::CommonAcl::__cordl_internal_set_raw_acl(::System::Security::AccessControl::RawAcl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___raw_acl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::AccessControl::CommonAcl::_ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, isDS, revision, capacity);
}
inline void System::Security::AccessControl::CommonAcl::_ctor(bool isContainer, bool isDS, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, isDS, capacity);
}
inline void System::Security::AccessControl::CommonAcl::Init(bool isContainer, bool isDS, ::System::Security::AccessControl::RawAcl* rawAcl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::RawAcl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer, isDS, rawAcl);
}
inline int32_t System::Security::AccessControl::CommonAcl::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::get_IsCanonical() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "get_IsCanonical", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::get_IsContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "get_IsContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::get_IsDS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "get_IsDS",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::set_IsAefa(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "set_IsAefa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::CommonAcl::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*, false>(this, ___internal_method, index);
}
inline void System::Security::AccessControl::CommonAcl::set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void System::Security::AccessControl::CommonAcl::RequireCanonicity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "RequireCanonicity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::CanonicalizeAndClearAefa() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "CanonicalizeAndClearAefa", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Security::AccessControl::CommonAcl::IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ace);
}
inline bool System::Security::AccessControl::CommonAcl::TestCanonicity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "TestCanonicity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::CommonAcl::GetCanonicalExplicitDenyAceCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "GetCanonicalExplicitDenyAceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::CommonAcl::GetCanonicalExplicitAceCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "GetCanonicalExplicitAceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::MergeExplicitAces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(),
                                                                             "MergeExplicitAces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::CommonAcl::MergeExplicitAcePair(::System::Security::AccessControl::GenericAce* ace1,
                                                                                                                       ::System::Security::AccessControl::GenericAce* ace2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "MergeExplicitAcePair", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*, false>(this, ___internal_method, ace1, ace2);
}
inline void System::Security::AccessControl::CommonAcl::GetObjectAceTypeGuids(::System::Security::AccessControl::ObjectAce* ace, ::ByRef<::System::Guid> type, ::ByRef<::System::Guid> inheritedType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "GetObjectAceTypeGuids", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::ObjectAce*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ace, type, inheritedType);
}
inline void System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::AccessControl::CommonAcl::ApplyCanonicalSortToExplicitAces(int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "ApplyCanonicalSortToExplicitAces", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, count);
}
template <typename T> inline void System::Security::AccessControl::CommonAcl::RemoveAces(::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>* callback) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "RemoveAces",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::CommonAcl_RemoveAcesCallback_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
inline void System::Security::AccessControl::CommonAcl::AddAce(::System::Security::AccessControl::AceQualifier aceQualifier, ::System::Security::Principal::SecurityIdentifier* sid, int32_t accessMask,
                                                               ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                               ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "AddAce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AuditFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags, auditFlags);
}
inline ::System::Security::AccessControl::QualifiedAce* System::Security::AccessControl::CommonAcl::AddAceGetQualifiedAce(::System::Security::AccessControl::AceQualifier aceQualifier,
                                                                                                                          ::System::Security::Principal::SecurityIdentifier* sid, int32_t accessMask,
                                                                                                                          ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                                          ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                                          ::System::Security::AccessControl::AuditFlags auditFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "AddAceGetQualifiedAce", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AceQualifier>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AuditFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::QualifiedAce*, false>(this, ___internal_method, aceQualifier, sid, accessMask, inheritanceFlags, propagationFlags,
                                                                                                      auditFlags);
}
inline void System::Security::AccessControl::CommonAcl::AddAce(::System::Security::AccessControl::QualifiedAce* newAce) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "AddAce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::QualifiedAce*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newAce);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::CommonAcl::CopyAce(::System::Security::AccessControl::GenericAce* ace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "CopyAce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::GenericAce*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*, false>(nullptr, ___internal_method, ace);
}
inline int32_t System::Security::AccessControl::CommonAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, aceQualifier);
}
inline ::System::Security::AccessControl::AceFlags System::Security::AccessControl::CommonAcl::GetAceFlags(::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                           ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                           ::System::Security::AccessControl::AuditFlags auditFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonAcl*>::get(), "GetAceFlags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AuditFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AceFlags, false>(this, ___internal_method, inheritanceFlags, propagationFlags, auditFlags);
}
inline ::System::Security::AccessControl::CommonAcl* System::Security::AccessControl::CommonAcl::New_ctor(bool isContainer, bool isDS, uint8_t revision, int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::CommonAcl*>(isContainer, isDS, revision, capacity));
}
inline ::System::Security::AccessControl::CommonAcl* System::Security::AccessControl::CommonAcl::New_ctor(bool isContainer, bool isDS, int32_t capacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::CommonAcl*>(isContainer, isDS, capacity));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonAcl::CommonAcl() {}
