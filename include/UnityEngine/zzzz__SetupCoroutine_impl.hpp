#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SetupCoroutine_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::SetupCoroutine.InvokeMoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IEnumerator*, void*)>(&::UnityEngine::SetupCoroutine::InvokeMoveNext)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2dc3068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SetupCoroutine*>::get(), "InvokeMoveNext", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SetupCoroutine.InvokeMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::StringW, ::System::Object*)>(
    &::UnityEngine::SetupCoroutine::InvokeMember)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2dc31bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SetupCoroutine*>::get(), "InvokeMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::SetupCoroutine::InvokeMoveNext(::System::Collections::IEnumerator* enumerator, void* returnValueAddress) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SetupCoroutine*>::get(), "InvokeMoveNext", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enumerator, returnValueAddress);
}
inline ::System::Object* UnityEngine::SetupCoroutine::InvokeMember(::System::Object* behaviour, ::StringW name, ::System::Object* variable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SetupCoroutine*>::get(), "InvokeMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, behaviour, name, variable);
}
// Ctor Parameters []
constexpr ::UnityEngine::SetupCoroutine::SetupCoroutine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
