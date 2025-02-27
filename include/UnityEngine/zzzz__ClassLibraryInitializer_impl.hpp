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
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ClassLibraryInitializer___c::*)()>(&::UnityEngine::ClassLibraryInitializer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48b57ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer___c._InitAssemblyRedirections_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (
    ::UnityEngine::ClassLibraryInitializer___c::*)(::System::Object*, ::System::ResolveEventArgs*)>(&::UnityEngine::ClassLibraryInitializer___c::_InitAssemblyRedirections_b__2_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x48b57f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get(), "<InitAssemblyRedirections>b__2_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ResolveEventArgs*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ClassLibraryInitializer___c::setStaticF___9(::UnityEngine::ClassLibraryInitializer___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ClassLibraryInitializer___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get>(
      std::forward<::UnityEngine::ClassLibraryInitializer___c*>(value));
}
inline ::UnityEngine::ClassLibraryInitializer___c* UnityEngine::ClassLibraryInitializer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ClassLibraryInitializer___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get>();
}
inline void UnityEngine::ClassLibraryInitializer___c::setStaticF___9__2_0(::System::ResolveEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ResolveEventHandler*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get>(
      std::forward<::System::ResolveEventHandler*>(value));
}
inline ::System::ResolveEventHandler* UnityEngine::ClassLibraryInitializer___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::ResolveEventHandler*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get>();
}
inline void UnityEngine::ClassLibraryInitializer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* UnityEngine::ClassLibraryInitializer___c::_InitAssemblyRedirections_b__2_0(::System::Object* _, ::System::ResolveEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ClassLibraryInitializer___c*>::get(), "<InitAssemblyRedirections>b__2_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ResolveEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, _, args);
}
inline ::UnityEngine::ClassLibraryInitializer___c* UnityEngine::ClassLibraryInitializer___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ClassLibraryInitializer___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ClassLibraryInitializer___c::ClassLibraryInitializer___c() {}
//  Writing Method size for method: ::UnityEngine::ClassLibraryInitializer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::ClassLibraryInitializer::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48b556c;

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
  constexpr static std::size_t addrs = 0x48b5574;

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
  constexpr static std::size_t addrs = 0x48b569c;

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
