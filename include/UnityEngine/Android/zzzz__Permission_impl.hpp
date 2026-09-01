#pragma once
// IWYU pragma private; include "UnityEngine\Android\Permission.hpp"
#include "UnityEngine/Android/zzzz__Permission_def.hpp"
#include "UnityEngine/Android/zzzz__PermissionCallbacks_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::Permission.GetUnityPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::Permission::GetUnityPermissions)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6a34838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(), { "GetUnityPermissions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.HasUserAuthorizedPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Android::Permission::HasUserAuthorizedPermission)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6a348e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(), { "HasUserAuthorizedPermission", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Android::PermissionCallbacks*)>(&::UnityEngine::Android::Permission::RequestUserPermission)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a34a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(),
                                                             { "RequestUserPermission", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Android::PermissionCallbacks*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::Permission.RequestUserPermissions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>, ::UnityEngine::Android::PermissionCallbacks*)>(&::UnityEngine::Android::Permission::RequestUserPermissions)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6a34a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(),
                                                { "RequestUserPermissions", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Android::PermissionCallbacks*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::Permission::setStaticF_m_UnityPermissions(::UnityEngine::AndroidJavaObject* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "m_UnityPermissions", ::UnityEngine::Android::Permission>(std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::Permission::getStaticF_m_UnityPermissions() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "m_UnityPermissions", ::UnityEngine::Android::Permission>();
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::Permission::GetUnityPermissions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(), { "GetUnityPermissions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(nullptr, ___internal_method);
}
inline bool UnityEngine::Android::Permission::HasUserAuthorizedPermission(::StringW permission) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(), { "HasUserAuthorizedPermission", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, permission);
}
inline void UnityEngine::Android::Permission::RequestUserPermission(::StringW permission, ::UnityEngine::Android::PermissionCallbacks* callbacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(),
                                                           { "RequestUserPermission", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Android::PermissionCallbacks*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permission, callbacks);
}
inline void UnityEngine::Android::Permission::RequestUserPermissions(::ArrayW<::StringW> permissions, ::UnityEngine::Android::PermissionCallbacks* callbacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Android::Permission>(),
                                              { "RequestUserPermissions", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Android::PermissionCallbacks*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, permissions, callbacks);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::Permission::Permission() {}
