#pragma once
// IWYU pragma private; include "UnityEngine/ClassLibraryInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ClassLibraryInitializer_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ResolveEventArgs_def.hpp"
#include "System/zzzz__ResolveEventHandler_def.hpp"
#include "UnityEngine/zzzz__ClassLibraryInitializer_def.hpp"
//  Writing Method size for method: ::UnityEngine::__ClassLibraryInitializer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__ClassLibraryInitializer____c::*)()>(&::UnityEngine::__ClassLibraryInitializer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4845bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__ClassLibraryInitializer____c._InitAssemblyRedirections_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (
    ::UnityEngine::__ClassLibraryInitializer____c::*)(::System::Object*, ::System::ResolveEventArgs*)>(&::UnityEngine::__ClassLibraryInitializer____c::_InitAssemblyRedirections_b__2_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4845bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get(), "<InitAssemblyRedirections>b__2_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ResolveEventArgs*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__ClassLibraryInitializer____c::setStaticF___9(::UnityEngine::__ClassLibraryInitializer____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__ClassLibraryInitializer____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get>(
      std::forward<::UnityEngine::__ClassLibraryInitializer____c*>(value));
}
inline ::UnityEngine::__ClassLibraryInitializer____c* UnityEngine::__ClassLibraryInitializer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::__ClassLibraryInitializer____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get>();
}
inline void UnityEngine::__ClassLibraryInitializer____c::setStaticF___9__2_0(::System::ResolveEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ResolveEventHandler*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get>(
      std::forward<::System::ResolveEventHandler*>(value));
}
inline ::System::ResolveEventHandler* UnityEngine::__ClassLibraryInitializer____c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::ResolveEventHandler*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get>();
}
inline ::UnityEngine::__ClassLibraryInitializer____c* UnityEngine::__ClassLibraryInitializer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__ClassLibraryInitializer____c*>());
}
inline void UnityEngine::__ClassLibraryInitializer____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* UnityEngine::__ClassLibraryInitializer____c::_InitAssemblyRedirections_b__2_0(::System::Object* _, ::System::ResolveEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__ClassLibraryInitializer____c*>::get(), "<InitAssemblyRedirections>b__2_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ResolveEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, _, args);
}
// Ctor Parameters []
constexpr ::UnityEngine::__ClassLibraryInitializer____c::__ClassLibraryInitializer____c() {}
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::ClassLibraryInitializer::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x484594c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer.InitStdErrWithHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::ClassLibraryInitializer::InitStdErrWithHandle)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4845954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(), "InitStdErrWithHandle",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer.InitAssemblyRedirections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::ClassLibraryInitializer::InitAssemblyRedirections)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4845a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(),
                                                                               "InitAssemblyRedirections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ClassLibraryInitializer::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::ClassLibraryInitializer::InitStdErrWithHandle(::System::IntPtr fileHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(), "InitStdErrWithHandle",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileHandle);
}
inline void UnityEngine::ClassLibraryInitializer::InitAssemblyRedirections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer*>::get(),
                                                                             "InitAssemblyRedirections", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ClassLibraryInitializer::ClassLibraryInitializer() {}
