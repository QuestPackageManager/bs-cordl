#pragma once
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_impl.hpp"
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Security/Permissions/zzzz__SecurityPermission_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/Permissions/zzzz__SecurityPermissionFlag_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Permissions::SecurityPermission::*)(::System::Security::Permissions::PermissionState)>(
    &::System::Security::Permissions::SecurityPermission::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25ac1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::PermissionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Security::Permissions::SecurityPermission::*)(::System::Security::Permissions::SecurityPermissionFlag)>(&::System::Security::Permissions::SecurityPermission::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25ac224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::SecurityPermissionFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission.set_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Permissions::SecurityPermission::*)(
    ::System::Security::Permissions::SecurityPermissionFlag)>(&::System::Security::Permissions::SecurityPermission::set_Flags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x25ac250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), "set_Flags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::SecurityPermissionFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission.IsUnrestricted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Permissions::SecurityPermission::*)()>(
    &::System::Security::Permissions::SecurityPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25ac308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(),
                                                                               "IsUnrestricted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission.IsSubsetOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Permissions::SecurityPermission::*)(::System::Security::IPermission*)>(
    &::System::Security::Permissions::SecurityPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ac31c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission.ToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (::System::Security::Permissions::SecurityPermission::*)()>(
    &::System::Security::Permissions::SecurityPermission::ToXml)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x25ac428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Permissions::SecurityPermission::*)()>(
    &::System::Security::Permissions::SecurityPermission::IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25ac418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(),
                                                                               "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::SecurityPermission.Cast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Permissions::SecurityPermission* (
    ::System::Security::Permissions::SecurityPermission::*)(::System::Security::IPermission*)>(&::System::Security::Permissions::SecurityPermission::Cast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25ac374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Permissions::SecurityPermissionFlag& System::Security::Permissions::SecurityPermission::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Security::Permissions::SecurityPermissionFlag const& System::Security::Permissions::SecurityPermission::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Security::Permissions::SecurityPermission::__cordl_internal_set_flags(::System::Security::Permissions::SecurityPermissionFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
inline ::System::Security::Permissions::SecurityPermission* System::Security::Permissions::SecurityPermission::New_ctor(::System::Security::Permissions::PermissionState state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Permissions::SecurityPermission*>(state));
}
inline void System::Security::Permissions::SecurityPermission::_ctor(::System::Security::Permissions::PermissionState state) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::PermissionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::Security::Permissions::SecurityPermission* System::Security::Permissions::SecurityPermission::New_ctor(::System::Security::Permissions::SecurityPermissionFlag flag) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Permissions::SecurityPermission*>(flag));
}
inline void System::Security::Permissions::SecurityPermission::_ctor(::System::Security::Permissions::SecurityPermissionFlag flag) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::SecurityPermissionFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flag);
}
inline void System::Security::Permissions::SecurityPermission::set_Flags(::System::Security::Permissions::SecurityPermissionFlag value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), "set_Flags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::SecurityPermissionFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::Permissions::SecurityPermission::IsUnrestricted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(),
                                                                             "IsUnrestricted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Security::Permissions::SecurityPermission::IsSubsetOf(::System::Security::IPermission* target) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target);
}
inline ::System::Security::SecurityElement* System::Security::Permissions::SecurityPermission::ToXml() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(this, ___internal_method);
}
inline bool System::Security::Permissions::SecurityPermission::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(),
                                                                             "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Permissions::SecurityPermission* System::Security::Permissions::SecurityPermission::Cast(::System::Security::IPermission* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::SecurityPermission*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Permissions::SecurityPermission*, false>(this, ___internal_method, target);
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::SecurityPermission::SecurityPermission() {}
