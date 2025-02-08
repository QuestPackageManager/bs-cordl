#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidApp.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidApp_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidApp.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::AndroidApp::get_Context)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x484f388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(), "get_Context",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApp.get_Activity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AndroidJavaObject* (*)()>(&::UnityEngine::Android::AndroidApp::get_Activity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x484f618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(), "get_Activity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApp.AcquireContextAndActivity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Android::AndroidApp::AcquireContextAndActivity)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x484f3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(),
                                                                               "AcquireContextAndActivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Android::AndroidApp.get_UnityPlayerRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Android::AndroidApp::get_UnityPlayerRaw)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x483e2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(), "get_UnityPlayerRaw",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidApp::setStaticF_m_Context(::UnityEngine::AndroidJavaObject* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "m_Context", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get>(
      std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidApp::getStaticF_m_Context() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "m_Context", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get>();
}
inline void UnityEngine::Android::AndroidApp::setStaticF_m_Activity(::UnityEngine::AndroidJavaObject* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AndroidJavaObject*, "m_Activity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get>(
      std::forward<::UnityEngine::AndroidJavaObject*>(value));
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidApp::getStaticF_m_Activity() {
  return ::cordl_internals::getStaticField<::UnityEngine::AndroidJavaObject*, "m_Activity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get>();
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidApp::get_Context() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(), "get_Context",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* UnityEngine::Android::AndroidApp::get_Activity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(), "get_Activity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Android::AndroidApp::AcquireContextAndActivity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(),
                                                                             "AcquireContextAndActivity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Android::AndroidApp::get_UnityPlayerRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidApp*>::get(), "get_UnityPlayerRaw",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidApp::AndroidApp() {}
