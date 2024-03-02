#pragma once
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_impl.hpp"
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Security/Permissions/zzzz__ReflectionPermission_def.hpp"
#include "System/Security/Permissions/zzzz__ReflectionPermissionFlag_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Permissions::ReflectionPermission::*)(
    ::System::Security::Permissions::ReflectionPermissionFlag)>(&::System::Security::Permissions::ReflectionPermission::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x254a610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::ReflectionPermissionFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission.get_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Permissions::ReflectionPermissionFlag (
    ::System::Security::Permissions::ReflectionPermission::*)()>(&::System::Security::Permissions::ReflectionPermission::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254a6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(),
                                                                               "get_Flags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission.set_Flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Permissions::ReflectionPermission::*)(
    ::System::Security::Permissions::ReflectionPermissionFlag)>(&::System::Security::Permissions::ReflectionPermission::set_Flags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x254a63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), "set_Flags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::ReflectionPermissionFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission.IsSubsetOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Permissions::ReflectionPermission::*)(::System::Security::IPermission*)>(
    &::System::Security::Permissions::ReflectionPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x254a6fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission.IsUnrestricted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Permissions::ReflectionPermission::*)()>(
    &::System::Security::Permissions::ReflectionPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x254a7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(),
                                                                               "IsUnrestricted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission.ToXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (::System::Security::Permissions::ReflectionPermission::*)()>(
    &::System::Security::Permissions::ReflectionPermission::ToXml)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x254a800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Permissions::ReflectionPermission.Cast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Permissions::ReflectionPermission* (
    ::System::Security::Permissions::ReflectionPermission::*)(::System::Security::IPermission*)>(&::System::Security::Permissions::ReflectionPermission::Cast)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x254a74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Permissions::ReflectionPermissionFlag& System::Security::Permissions::ReflectionPermission::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Security::Permissions::ReflectionPermissionFlag const& System::Security::Permissions::ReflectionPermission::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Security::Permissions::ReflectionPermission::__cordl_internal_set_flags(::System::Security::Permissions::ReflectionPermissionFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
inline ::System::Security::Permissions::ReflectionPermission* System::Security::Permissions::ReflectionPermission::New_ctor(::System::Security::Permissions::ReflectionPermissionFlag flag) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Permissions::ReflectionPermission*>(flag));
}
inline void System::Security::Permissions::ReflectionPermission::_ctor(::System::Security::Permissions::ReflectionPermissionFlag flag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::ReflectionPermissionFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flag);
}
inline ::System::Security::Permissions::ReflectionPermissionFlag System::Security::Permissions::ReflectionPermission::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(),
                                                                             "get_Flags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Permissions::ReflectionPermissionFlag, false>(this, ___internal_method);
}
inline void System::Security::Permissions::ReflectionPermission::set_Flags(::System::Security::Permissions::ReflectionPermissionFlag value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), "set_Flags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Permissions::ReflectionPermissionFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Security::Permissions::ReflectionPermission::IsSubsetOf(::System::Security::IPermission* target) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target);
}
inline bool System::Security::Permissions::ReflectionPermission::IsUnrestricted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(),
                                                                             "IsUnrestricted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Security::Permissions::ReflectionPermission::ToXml() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(this, ___internal_method);
}
inline ::System::Security::Permissions::ReflectionPermission* System::Security::Permissions::ReflectionPermission::Cast(::System::Security::IPermission* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Permissions::ReflectionPermission*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::IPermission*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Permissions::ReflectionPermission*, false>(this, ___internal_method, target);
}
// Ctor Parameters []
constexpr ::System::Security::Permissions::ReflectionPermission::ReflectionPermission() {}
