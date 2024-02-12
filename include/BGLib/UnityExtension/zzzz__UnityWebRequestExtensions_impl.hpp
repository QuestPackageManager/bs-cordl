#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__UnityWebRequestExtensions_def.hpp"
#include "BGLib/UnityExtension/zzzz__UnityWebRequestExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::*)()>(
    &::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe53cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0._GetAwaiter_g__SetResult_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::*)(::UnityEngine::AsyncOperation*)>(
    &::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::_GetAwaiter_g__SetResult_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xe53cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0*>::get(), "<GetAwaiter>g__SetResult|0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__cordl_internal_get_webRequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webRequestOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequestAsyncOperation*> const&
BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__cordl_internal_get_webRequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webRequestOperation;
}
constexpr void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__cordl_internal_set_webRequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webRequestOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*&
BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>*> const&
BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__cordl_internal_set_tcs(
    ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::Networking::__UnityWebRequest__Result>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0* BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0*>());
}
inline void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::_GetAwaiter_g__SetResult_0(::UnityEngine::AsyncOperation* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0*>::get(), "<GetAwaiter>g__SetResult|0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::__UnityWebRequestExtensions____c__DisplayClass0_0::__UnityWebRequestExtensions____c__DisplayClass0_0() {}
//  Writing Method size for method: ::BGLib::UnityExtension::UnityWebRequestExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> (*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::BGLib::UnityExtension::UnityWebRequestExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xe53880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::UnityWebRequestExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>
BGLib::UnityExtension::UnityWebRequestExtensions::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation* webRequestOperation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::UnityWebRequestExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>, false>(nullptr, ___internal_method,
                                                                                                                                                              webRequestOperation);
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::UnityWebRequestExtensions::UnityWebRequestExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
